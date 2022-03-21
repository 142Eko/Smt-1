DATAS SEGMENT
    bin dw 10 dup(?)    ;Store binary results
    buf db 5 dup(?)      ;Store the decimal number. The value of each digit, such as 100, is stored as 1,0,0
    msg1 db 'please input a hex number',13,10,'$'
    msg2 db 'the dec number:',13,10,'$'
    crlf db 13,10,'$'    ;Carriage return
DATAS ENDS

CODES SEGMENT
    ASSUME CS:CODES,DS:DATAS
START:
    MOV AX,DATAS
    MOV DS,AX
    
       mov bx,0        ;Initialize bx
       
       LEA dx,msg1        ;Output prompt string
       mov ah,9
       int 21h
       
 input:
       mov ah,1        ;Enter a character
       int 21h
       
       sub al,30h        ;Convert the ascii code in al into a value
       jl init
   
       cmp al,10        ;The entered number jumps between 0-9
       jl toBin
       
       sub al,27h        ;Then converted to a-f
       cmp al,0ah        ;The input character is smaller than a
       jl init            ;End input
       cmp al,10h        ;The input character is larger than f
       jge init        ;End input
       
  toBin:            ;Convert to binary, combine the input into a meaningful value
       mov cl,4        
       shl bx,cl        ;bx shift left 4 bits
       mov ah,0        
       add bx,ax        ;Add the entered value and converted from ascii code to bx
       mov bin,bx        ;Converted into a binary number and stored in the memory bin
       jmp input        ;Keep typing
       
  init:                ;Initialize, prepare for conversion
      mov ax,bin        
      mov bx,10        
      mov si,4        ;Circulate four times, up to ten thousand positions
      
  toDec:            ;Converted to the numerical value of each digit, such as 100 converted to 1,0,0 hundreds of 1...
      mov dx,0        
      div bx            ;Divide by 10 to get the value of each bit
      mov [buf+si],dl    ;The remainder is the value of the digit, the first cycle is the ones digit, the second time is the tens digit...; stored in the memory
      dec si            
      cmp ax,0        ;Whether the quotient is 0, the algorithm ends for 0
      ja toDec
  

      lea dx,crlf            ;Show hint
      mov ah,9
      int 21h
      lea dx,msg2
      mov ah,9
      int 21h
      
  output:                ;Output the value of each digit stored in the memory
      inc si
      mov dl,[buf+si]
      add dl,30h            ;Convert to ascii
      mov ah,2
      int 21h
      cmp si,4
      jb output
      
   
    mov ah,1
    int 21h
    MOV AH,4CH
    INT 21H
CODES ENDS
    END START