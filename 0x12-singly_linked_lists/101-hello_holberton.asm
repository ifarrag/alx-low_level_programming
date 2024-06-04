SECTION .data

msg:	db "Hello, Holberton", 0
ftm:	db "%s", 10, 0

SECTION .text

extern printf
global main

main:
	push	 rbp

	mov	rdi,ftm
	mov	rsi,msg
	mov	rax,0
	call printf

	pop rbp

	mov	rax,0
	ret
