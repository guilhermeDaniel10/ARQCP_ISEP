.section .data
	.global ptr1
	.global ptr2
	.global ptr3

.section .text
	.global str_cat

str_cat:
	#prologue
	pushl %ebp
	movl %esp, %ebp

	movl $0, %edx
	movl $0, %ecx
	movl ptr1, %ecx
	movl ptr3, %edx

primeira_concat:
	movb (%ecx), %al
	movb %al, (%edx)
	cmp $0, %al
	je fim_primeira_concat

	incl %edx
	incl %ecx
	jmp primeira_concat

fim_primeira_concat:
	movl ptr2, %ecx

segunda_concat:
	movb (%ecx), %al
	movb %al, (%edx)
	cmp $0, %al
	je end

	incl %edx
	incl %ecx
	jmp segunda_concat

end:

	# epilogue
	movl %ebp, %esp  #  restore the previous stack pointer ("clear" the stack)
	popl %ebp        #  restore the previous stack frame pointer

	ret
