.model SMALL
.code
	ORG 100h
tdata:   jmp proses
	 lusername	db 13,10,'Nama  : $'
	 lpassword	db 13,10,'NIM   : $'
	 lkelas     db 13,10,'Kelas : $'
	 luad       db 13,10,'Selamat datang di UAD$'
 
 	 vusername	db 23,?,23 dup(?)
	 vpassword	db 23,?,23 dup(?) 
	 vkelas     db 23,?,23 dup(?)

proses:
	 mov ah,09h
	 lea dx,lusername
	 int 21h
	 
	 mov ah,0ah
	 lea dx,vusername
	 int 21h

	 mov ah,09h
	 lea dx,lpassword
	 int 21h

	 mov ah,0ah
	 lea dx,vpassword
	 int 21h
	   
	 mov ah,09h
	 lea dx,lkelas
	 int 21h 
	 
	 mov ah,0ah
	 lea dx,vkelas
	 int 21h   
	 
	 mov ah,09h
	 lea dx,luad
	 int 21h
	 jmp exit

exit:
	 int 20h
end tdata