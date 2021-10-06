.section .data

    .global s1
    .global s2
    
.section .text

	.global crossSumBytes # short crossSumBytes()
    
    crossSumBytes:
        # prologue
        pushl %ebp    # save previous stack frame pointer
        movl %esp, %ebp # the stack frame pointer for sum function
        
        movw s1, %ax  # places s1 in ex
        movw s2, %dx  # places s2 in dx
        
        addb %dh, %al # places s1 most significant byte on cl
        addb %dl, %ah # places s2 least significant byte on bl
        
        # epilogue
        movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
        popl %ebp    # restore the previous stack frame pointer
        ret
