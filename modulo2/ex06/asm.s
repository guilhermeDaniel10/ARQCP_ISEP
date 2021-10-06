.section .data

    .global byte1
    .global byte2
    
    s: 
		.short 0
		
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

    .global concatBytes # short concatBytes()
    
    concatBytes:
        # prologue
        pushl %ebp    # save previous stack frame pointer
        movl %esp, %ebp 
        
        movb byte1, %al  # place byte1 in al
        movb byte2, %ah # place byte2 in ah
        
        # epilogue
        movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
        popl %ebp    # restore the previous stack frame pointer
        ret
