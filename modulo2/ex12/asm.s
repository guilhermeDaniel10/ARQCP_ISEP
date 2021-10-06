.section .data

    .global A
    .global B
    
.section .text
 .global isMultiple
 isMultiple:
 
	# prologue
    pushl %ebp
    movl %esp, %ebp
        
    movl $0, %eax
	movl $0, %ecx
	movl $0, %edx
        
    movl A, %eax  
	movl B,%ecx
	
	cmp $0,%ecx
	je jmp_if_zero
	
	divl %ecx
    
    cmp $0, %edx
    je jmp_if_equal
    movl $0,%eax
    jmp end
    
    jmp_if_equal:
    movl $1,%eax
    jmp end
    
    jmp_if_zero:
    movl $0, %eax
    
    end:
        # epilogue
        movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
        popl %ebp    # restore the previous stack frame pointer
        ret
