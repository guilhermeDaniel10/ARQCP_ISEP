.section .data
	.global current #short
	.global desired #short


.section .text
	.global needed_time

needed_time:

	#prologue
	pushl %ebp
	movl %esp, %ebp

	pushl %ebx
	pushl %esi

	movl $0, %ebx
	movw current, %bx
	movl $0, %ecx
	movw desired, %cx
	movl $0, %eax
	movl $0, %esi

	cmpw %bx, %cx
	jg increase
	jl decrease
	je noChange

	increase:
	subw %bx, %cx
	movl %ecx, %eax
	movl $2, %esi
	mull %esi
  movl $0, %ecx
  movl $60, %ecx
  mull %ecx
	jmp end

	decrease:
	subw %cx, %bx
	movl %ebx, %eax
	movl $3, %esi
	mull %esi
  movl $0, %ecx
  movl $60, %ecx
  mull %ecx
	jmp end

	noChange:
	movl $0, %eax
	jmp end


	end:

	popl %esi
	popl %ebx

	# epilogue
	movl %ebp, %esp
	popl %ebp
	ret
