.section .text
  .global greater_date

greater_date:
  # prologue
  pushl %ebp
  movl %esp, %ebp


  movl $0, %eax
  movl 8(%ebp), %ecx
  movl 12(%ebp), %edx


  andl $0b00000000111111111111111100000000, %ecx
  andl $0b00000000111111111111111100000000, %edx

  greater_year:
    cmpl %ecx, %edx
    jg bigger_second
    jl bigger_first
    je greater_month

  greater_month:
    movl 8(%ebp), %ecx
    movl 12(%ebp), %edx

    andl $0b11111111000000000000000000000000, %ecx
    andl $0b11111111000000000000000000000000, %edx

    cmpl %ecx, %edx
    jg bigger_second
    jl bigger_first
    je greater_day

  greater_day:
    movl 8(%ebp), %ecx
    movl 12(%ebp), %edx

    andl $0b00000000000000000000000011111111,%ecx
    andl $0b00000000000000000000000011111111,%edx

    cmpl %ecx, %edx
    jg bigger_second
    jle bigger_first

  bigger_first:
    movl 8(%ebp), %eax
    jmp end

  bigger_second:
    movl 12(%ebp), %eax
    jmp end

  end:


    # epilogue
    movl %ebp, %esp
    popl %ebp
    ret
