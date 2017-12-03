	.global write
write:
	push	%ebx
	mov	$4, %eax
	mov	8(%esp), %ebx
	mov	12(%esp), %ecx
	mov	16(%esp), %edx
	int	$0x80
	pop	%ebx
	ret
