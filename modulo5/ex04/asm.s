.section .data

	.equ FIRST_PARAMETER_OFFSET, 8
	.equ SECOND_PARAMETER_OFFSET, 12

	.equ STUDENT_AGE_OFFSET, 0 			
	.equ STUDENT_NUMBER_OFFSET, 2		
	.equ STUDENT_GRADES_OFFSET, 4		
	.equ STUDENT_NAME_OFFSET, 44		
	.equ STUDENT_ADDRESS_OFFSET, 124
	
.section .text

	.global update_address
	
update_address:
	
	# Prologue
	pushl %ebp 			# save previous stack frame pointer
	movl %esp, %ebp 	# the stack frame pointer for sum function

	# Save Registers
	pushl %ebx
	pushl %esi
	pushl %edi
	
	# Mover o pointer do student struct para %esi
	movl FIRST_PARAMETER_OFFSET(%ebp), %esi

	# Mover o pointer do new_address para %edi
	movl SECOND_PARAMETER_OFFSET(%ebp), %edi

	# Mover a string/char array/pointer para %eax
	leal STUDENT_ADDRESS_OFFSET(%esi, 1), %eax
	
start:

	# Mover o char da string para %bl
	movb (%edi), %bl

	# Check if we are at the end of the string
	cmpb $0, %bl

	# If we are, jump to the end
	je end

	# If string continues, copy the char to %eax
	movb %bl, (%eax)

	# Increment both string pointer and go back to the start (loop)
	incl %edi
	incl %eax
	jmp start

end:
	movb $0, (%eax)

	# Restore Regsiters
	popl %edi
	popl %esi
	popl %ebx

	# Epilogue
	movl %ebp, %esp 	
	popl %ebp 

	ret
