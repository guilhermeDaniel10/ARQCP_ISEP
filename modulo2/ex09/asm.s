.section .data

    .global A
    .global B
    .global C
    .global D
    
resl: .long 0 # resl -> result low
resh: .long 0 # resh -> result high
    
.section .text
 .global sum_and_subtract
 sum_and_subtract:
 
	# prologue
    pushl %ebp
    movl %esp, %ebp
        
    movl C, %eax  #/ edx:eax = C
    cdq
    movl %eax, resl
    movl %edx, resh
    movl D,%eax
    cdq
    subl %eax,resl #/ subtract D
    sbbl %edx, resh #/ propagate carry
    
    movsxb A, %eax
    cdq
    addl %eax, resl #/ add A
    adcl %edx, resh #/ propagate carry
    
    movsxb B, %eax
    cdq
    addl %eax, resl #/ add B
    adcl %edx, resh #/ propagate carry
        
    movl resl, %eax
    movl resh, %edx
        
        # epilogue
        movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
        popl %ebp    # restore the previous stack frame pointer
        ret
