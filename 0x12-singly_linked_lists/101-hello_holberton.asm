	global	main
	extern	printf
main:
	mov edi, print
	xor eax, eax
	call printf
	mov 	exa, 0
	ret
print:	db 'Hello, Holberton', 0
