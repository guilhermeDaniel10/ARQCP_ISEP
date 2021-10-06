 .global count_bits_zero
 .global vec_count_bits_zero
 
vec_count_bits_zero:
  #prologue
  pushl %ebp
  movl %esp, %ebp
  # Save Registers
	#####################################################
	pushl %ebx
	push %esi
	######################################################
  
	######################################################
	# Parametros
	######################################################
	movl 8(%ebp), %ebx
	movl 12(%ebp), %ecx
	movl $0, %eax
	cmpl $0, %ecx
	je end

loop:
		movl (%ebx), %edx
		
		pushl %ebx
		pushl %ecx
		pushl %edx
		pushl %eax
		
		pushl %edx
		
		call count_bits_zero
		movl %eax, %esi
		addl $4, %esp
		
		popl %eax
		popl %edx
		popl %ecx
		popl %ebx
		
		addl %esi, %eax

		addl $4, %ebx
	loopnz loop
		
		
end:
  # Restore Regsiters
	######################################################
	popl %esi
	popl %ebx
	######################################################
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
