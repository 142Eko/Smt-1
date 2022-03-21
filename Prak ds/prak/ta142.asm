.model SMALL
.code
    ORG 100h
tdata:   jmp proses 
     lby db 13,10,'Program Mencetak 0-9 secara vertikal $' 
     lb  db 13,10,'Enter untuk mulai :$' 
     l0  db 13,10,'0 $'
     l1  db 13,10,'1 $'
     l2  db 13,10,'2 $'
     l3  db 13,10,'3 $'  
     l4  db 13,10,'4 $'
     l5  db 13,10,'5 $'
     l6  db 13,10,'6 $'
     l7  db 13,10,'7 $'
     l8  db 13,10,'8 $'
     l9  db 13,10,'9 $'
     lc  db 13,10,'Enter untuk keluar :$' 
     
     cb  db 23,?,23 dup(?)
     cc  db 23,?,23 dup(?)

proses: 
     mov ah,09h
     lea dx,lby
     int 21h
     
     mov ah,09h
     lea dx,lb
     int 21h
     
     mov ah,0ah
     lea dx,cb
     int 21h
     
     mov ah,09h
     lea dx,l0
     int 21h
     

     mov ah,09h
     lea dx,l1
     int 21h

       
     mov ah,09h
     lea dx,l2
     int 21h 
     
     mov ah,09h
     lea dx,l3
     int 21h
            
     mov ah,09h
     lea dx,l4
     int 21h 
     
     mov ah,09h
     lea dx,l5
     int 21h  
     
     mov ah,09h
     lea dx,l6
     int 21h 
     
     mov ah,09h
     lea dx,l7
     int 21h   
     
     mov ah,09h
     lea dx,l8
     int 21h  
     
     mov ah,09h
     lea dx,l9
     int 21h
     
     mov ah,09h
     lea dx,lc
     int 21h
     
     mov ah,0ah
     lea dx,cc
     int 21h
     
     jmp exit

exit:
     int 20h
end tdata