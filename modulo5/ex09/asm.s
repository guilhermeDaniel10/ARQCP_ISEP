.section .data
  .global fun1
  .global fun2
  .global fun3
  .global fun4

fun1:
#prologue
  pushl %ebp
  movl %esp, %ebp

  movl $0, %ecx
  movl $0, %eax

  movl 8(%ebp), %ecx
  movw (%ecx), %ax

  jmp end

fun2:
#prologue
  pushl %ebp
  movl %esp, %ebp

  movl $0, %ecx
  movl $0, %eax

  movl 8(%ebp), %ecx
  movl 28(%ecx), %eax

  jmp end


fun3:
#prologue
  pushl %ebp
  movl %esp, %ebp

  movl $0, %ecx
  movl $0, %eax

  movl 8(%ebp), %eax
  addl $28, %eax

  jmp end


fun4:
#prologue
  pushl %ebp
  movl %esp, %ebp

  movl $0, %ecx
  movl $0, %eax

  movl 8(%ebp), %ecx
  movl 8(%ecx), %edx #a struct tem um tamanho de 8bytes
  movl (%edx), %eax

  end:
  # Epilogue
  movl %ebp, %esp
  popl %ebp
  ret
