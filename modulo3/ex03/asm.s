.section .data

	.global ptr1
	.global ptr2

.section .text
  .global str_copy_porto2


str_copy_porto2:
  #prologue
  pushl %ebp
  movl %esp, %ebp
  push %ebx
   	
	movl ptr1, %edx
	movl ptr2, %ebx
	
move_To:
		movb (%edx),%cl
		
		cmpb $0,%cl
		jz end
		
		cmpb $118,%cl
		je is_v
		
		cmpb $86,%cl
		je is_V
		
		movb %cl,(%ebx)
		incl %edx
		incl %ebx
		jmp move_To
		
	is_v:
		movb $98,(%ebx)
		incl %edx
		incl %ebx
	jmp move_To
	
	is_V:
		movb $66,(%ebx)
		incl %edx
		incl %ebx
	jmp move_To

		
end:
	movb $0,(%ebx)

  # Epilogue
  pop %ebx			
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
