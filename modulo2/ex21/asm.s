.section .data
	
	.global code
	.global currentSalary


.section .text
 .global new_salary
 new_salary:
 
	# prologue
    pushl %ebp	# save previous stack frame pointer
    movl %esp, %ebp	# the stack frame pointer for sum function
    
    movl $0, %eax
    movl $0, %edx
    movl $0, %ecx
    
    movl code, %edx
    movl currentSalary, %ecx
	
	cmp $10, %edx
	je jmp_Manager
	
	cmp $11, %edx
	je jmp_Engineer
	
	cmp $12, %edx
	je jmp_Technician
	
	addl $100, %ecx
	movl %ecx, %eax
	jmp end
	
	jmp_Manager:
	addl $300, %ecx
	movl %ecx, %eax
	jmp end
	
	jmp_Engineer:
	addl $250, %ecx
	movl %ecx, %eax
	jmp end
	
	jmp_Technician:
	addl $150, %ecx
	movl %ecx, %eax
	
	end:
        # epilogue
        movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
        popl %ebp    # restore the previous stack frame pointer
        ret
