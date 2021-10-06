.section .text
  .global calculate
  .global print_result

calculate:
  # prologue
  pushl %ebp
  movl %esp, %ebp

  pushl %esi
  pushl %edi

  movl $0, %eax
  movl $0, %ebx
  movl $0, %ecx
  movl $0, %edx

  movl 8(%ebp), %esi
  movl 12(%ebp), %edi


  movl %esi, %ecx
  addl %edi, %ecx
  movl %ecx, -4(%ebp)


  movl %esi, %edx
  imull %edi, %edx
  movl %edx, -8(%ebp)

  pushl %eax
  pushl %ecx
  pushl %edx

  pushl -4(%ebp)
  pushl %edi
  pushl %esi
  pushl $43

  call print_result

  addl $4, %esp
  addl $4, %esp
  addl $4, %esp
  addl $4, %esp

  popl %eax
  popl %ecx
  popl %edx


  pushl %eax
  pushl %ecx
  pushl %edx

  pushl -8(%ebp)
  pushl %edi
  pushl %esi
  pushl $42

  call print_result

  addl $4, %esp
  addl $4, %esp
  addl $4, %esp
  addl $4, %esp

  popl %eax
  popl %ecx
  popl %edx


  movl -4(%ebp), %eax
  subl -8(%ebp), %eax


  end:
    popl %esi
    popl %edi
    # epilogue
    movl %ebp, %esp
    popl %ebp
    ret
