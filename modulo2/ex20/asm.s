.section .data
  .global num

.section .data
  .global check_num

check_num:

  #prologue
  pushl %ebp
  movl %esp, %ebp
  movl num, %eax

  cdq

  movl $2, %ecx

  idivl %ecx

  cmpl $0, %edx
  je is_even
  jne not_even

  is_even:
  cmpl $0, %eax
  jg even_positive
  jl even_negative

  even_positive:
  movl $3, %eax
  jmp end

  even_negative:
  movl $1, %eax
  jmp end

  not_even:
  movl num, %eax
  cmpl $0, %eax
  jg odd_positive
  jl odd_negative

  odd_positive:
  movl $4, %eax
  jmp end

  odd_negative:
  movl $2, %eax
  jmp end

  end:
  movl %ebp, %esp
	popl %ebp
	ret
