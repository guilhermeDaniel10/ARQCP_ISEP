.section .data

    .global s
    
.section .text

    .global swapBytes # short swapBytes()
    
    swapBytes:
        # prologue
        pushl %ebp    # save previous stack frame pointer
        movl %esp, %ebp # the stack frame pointer for sum function
        
        movw s, %ax  # place op1 in eax
        movb %ah, %cl
        movb %al, %ch
        movw %cx, %ax
            
        # epilogue
        movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
        popl %ebp    # restore the previous stack frame pointer
        ret
