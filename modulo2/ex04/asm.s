.section .data

    .equ CONST, 15

    .global op1
    .global op2
    
    op3:
            .int 0
    
    op4:
            .int 0
    
    .global op3
    .global op4
    
.section .text

    .global sum_v2 # int sum_v2()
    
    sum_v2:
        # prologue
        pushl %ebp    # save previous stack frame pointer
        movl %esp, %ebp # the stack frame pointer for sum function
        
        movl op1, %eax  # place op1 in eax
        movl op2, %ecx # place op2 in ecx
        movl $CONST, %edx
        
        subl %eax, %edx
        movl $CONST, %eax
        subl %ecx, %eax
        subl  %eax, %edx
        movl %edx, %eax
        
        # epilogue
        movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
        popl %ebp    # restore the previous stack frame pointer
        ret

    .global sum_v3 # int sum_v3()
    
    sum_v3:
    
        # prologue
        pushl %ebp    # save previous stack frame pointer
        movl %esp, %ebp # the stack frame pointer for sum function
        
        movl op3, %edx
        movl op4, %eax
        
        addl %edx, %eax
        
        movl op2, %ecx
        
        subl %ecx, %eax
        
        movl op1, %ecx
        
        addl %ecx, %eax
        
        # epilogue
        movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
        popl %ebp    # restore the previous stack frame pointer
        ret
