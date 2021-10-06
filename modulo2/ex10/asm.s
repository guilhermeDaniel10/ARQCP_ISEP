.section .data
	
    .global op1
    .global op2
    
resl: .long 0 # resl -> result low
resh: .long 0 # resh -> result high

.section .text
 .global sum2ints
 sum2ints:
 
	# prologue
    pushl %ebp
    movl %esp, %ebp
               
    movl op1, %eax  
    cdq
    movl %eax, resl
    movl %edx, resh
    
    movl op2, %eax  
    cdq
    addl %eax, resl
    adcl %edx, resh
    
    movl resl, %eax
    movl resh, %edx
        
        # epilogue
        movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
        popl %ebp    # restore the previous stack frame pointer
        ret
