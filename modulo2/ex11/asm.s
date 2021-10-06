.section .data

    .global op1
    .global op2
    
.section .text
 .global test_flags
 test_flags:
 
	# prologue
    pushl %ebp
    movl %esp, %ebp
        
    movl op1, %eax  
	movl op2,%ecx
	addl %ecx,%eax 
    
    jc jump_if_carry
    jo jump_if_overflow
    
    movl $0,%eax
    jmp fim
    
    jump_if_carry:
    movl $1,%eax
    jmp fim
    
    jump_if_overflow:
    movl $1,%eax
    jmp fim
    
    fim: 
        # epilogue
        movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
        popl %ebp    # restore the previous stack frame pointer
        ret
