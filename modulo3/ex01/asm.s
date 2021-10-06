.section .data
	
	.comm ptr1, 4
	.global ptr1

.section .text
  .global zero_count


zero_count:
  #prologue
  pushl %ebp
  movl %esp, %ebp
	
	movl ptr1, %edx
	movl $0, %eax
	
cnt_loop:
		movb (%edx),%cl
		cmpb $0,%cl
		jz cnt_loop_end
		cmpb $48,%cl
		jne next_Word
		incl %eax
		incl %edx
		jmp cnt_loop

next_Word:		
	incl %edx
jmp cnt_loop

cnt_loop_end:
	
  movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
  popl %ebp    # restore the previous stack frame pointer
  ret
