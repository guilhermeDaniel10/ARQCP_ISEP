.section .data

.global calc

calc:
  #prologue
  pushl %ebp
  movl %esp, %ebp
  # Save Registers
	#####################################################
	pushl %ebx
	pushl %edi
	pushl %esi
	######################################################
  
	######################################################
	# Parametros
	######################################################
	movl 8(%ebp), %esi 			# int a = 1;
	movl 12(%ebp), %edi 		# int* b = (2);
	movl 16(%ebp), %ebx 		# int c = 3;
	######################################################
	
	# a = %esi
	# *b = %edi
	# c = %ebx
	# b = %ecx
	# z = %edx

	# result = %eax
	
	# get the value pointed by *b
	movl (%edi), %ecx

	# move b to %edx
	movl %ecx, %edx

	# subtract a to z
	subl %esi, %edx

	# multiply c * z and put it in eax

	# move c o eax
	movl %ebx, %eax

	# multiply z by c (eax)
	imull %edx, %eax

	# subtract 2 to eax
	subl $2, %eax
	
end:
  # Restore Regsiters
	######################################################
	popl %esi
	popl %edi
	popl %ebx
	######################################################
  # Epilogue		
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
