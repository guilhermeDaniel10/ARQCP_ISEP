.section .data

	.global num
 
.section .text
  .global vec_avg


vec_avg:
  #prologue
  pushl %ebp
  movl %esp, %ebp


	call vec_sum
   	
   	movl $0, %edx
	movl num, %ecx
	cmpl $0, %ecx
	je divisor_zero
	
	cdq
	idivl %ecx
	jmp  end
	
	divisor_zero:
	movl $0, %eax
	
	end: 	
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
