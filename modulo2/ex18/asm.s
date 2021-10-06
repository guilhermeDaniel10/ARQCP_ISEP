.section .data
	
	A:
		.int 2
	
	B:
		.int 2
    
    .global A
    .global B
    .global n
    
.section .text
 .global somatorio
 somatorio:
 
	# prologue
    pushl %ebp	# save previous stack frame pointer
    movl %esp, %ebp	# the stack frame pointer for sum function
        
    movl $0,%eax    # clean stack %eax
    movl $0,%ecx    # clean stack %ecx
    movl $0,%edx    # clean stack %edx
    
    pushl %ebx
	pushl %esi
	pushl %edi
	
	movl $0, %eax
	movl A, %eax
	imull %eax,%eax
	
	movl $0, %ecx
	movl B, %ecx
	idivl %ecx
	
	movl %eax,%esi
	movl n,%edi
	
	movl $0,%edx
	
	movl $0,%ecx
	
	loop:
	cmpl %edi, %ebx
	jge end_my_loop
	
	movl $0, %eax
	movl %edi, %eax 
	imull %eax
	
	
	imull %esi
	
	addl %eax,%ecx
	
	incl %ebx
	
	jmp loop
	
	end_my_loop:
	movl %ecx,%eax
	
	pushl %ebx
	pushl %esi
	pushl %edi
	
        # epilogue
        movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
        popl %ebp    # restore the previous stack frame pointer
        ret
