	.file	"ex1.c"
	.text
	.globl	binsearch
	.type	binsearch, @function
binsearch:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -24(%rbp)
	movl	$0, -12(%rbp)
	movl	-24(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -8(%rbp)
	jmp	.L2
.L6:
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	-20(%rbp), %eax
	jle	.L3
	movl	-4(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -8(%rbp)
	jmp	.L2
.L3:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	-20(%rbp), %eax
	jge	.L4
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -12(%rbp)
	jmp	.L2
.L4:
	movl	-4(%rbp), %eax
	jmp	.L5
.L2:
	movl	-12(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L6
	movl	$-1, %eax
.L5:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	binsearch, .-binsearch
	.globl	binsearch_
	.type	binsearch_, @function
binsearch_:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -36(%rbp)
	movq	%rsi, -48(%rbp)
	movl	%edx, -40(%rbp)
	movl	$0, %eax
	movq	%rax, -8(%rbp)
	movl	$0, -20(%rbp)
	movl	-40(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -16(%rbp)
	jmp	.L8
.L11:
	movl	-20(%rbp), %edx
	movl	-16(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	-36(%rbp), %eax
	jle	.L9
	movl	-12(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -16(%rbp)
	jmp	.L8
.L9:
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -20(%rbp)
.L8:
	movl	-20(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jg	.L10
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	-36(%rbp), %eax
	jne	.L11
.L10:
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	-36(%rbp), %eax
	jne	.L12
	movl	-12(%rbp), %eax
	jmp	.L13
.L12:
	movl	$-1, %eax
.L13:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	binsearch_, .-binsearch_
	.section	.rodata
	.align 8
.LC2:
	.string	"Function1's answer is ' %d ' in %f seconds\n"
	.align 8
.LC3:
	.string	"Function2's answer is ' %d ' in %f seconds\n\n"
	.align 8
.LC4:
	.string	"Total time by f1 '%f' f2 '%f'\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$104, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rbx
	movl	$32767, -80(%rbp)
	movl	-80(%rbp), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -56(%rbp)
	movslq	%eax, %rdx
	movq	%rdx, %r8
	movl	$0, %r9d
	movslq	%eax, %rdx
	movq	%rdx, %rsi
	movl	$0, %edi
	cltq
	salq	$2, %rax
	leaq	3(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %edi
	movl	$0, %edx
	divq	%rdi
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -48(%rbp)
	movl	$0, %eax
	movq	%rax, -72(%rbp)
	movl	$0, %eax
	movq	%rax, -64(%rbp)
	movl	$0, -84(%rbp)
	jmp	.L15
.L16:
	movq	-48(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	-84(%rbp), %ecx
	movl	%ecx, (%rax,%rdx,4)
	addl	$1, -84(%rbp)
.L15:
	movl	-84(%rbp), %eax
	cmpl	-80(%rbp), %eax
	jl	.L16
	movl	$0, -88(%rbp)
	jmp	.L17
.L18:
	call	clock
	movq	%rax, -40(%rbp)
	movq	-48(%rbp), %rcx
	movl	-80(%rbp), %edx
	movl	-88(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	binsearch
	movl	%eax, -76(%rbp)
	call	clock
	subq	-40(%rbp), %rax
	movq	%rax, -40(%rbp)
	pxor	%xmm0, %xmm0
	cvtsi2sdq	-40(%rbp), %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, -32(%rbp)
	movsd	-72(%rbp), %xmm0
	addsd	-32(%rbp), %xmm0
	movq	%xmm0, %rax
	movq	%rax, -72(%rbp)
	movq	-32(%rbp), %rdx
	movl	-76(%rbp), %eax
	movq	%rdx, -104(%rbp)
	movsd	-104(%rbp), %xmm0
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$1, %eax
	call	printf
	call	clock
	movq	%rax, -40(%rbp)
	movq	-48(%rbp), %rcx
	movl	-80(%rbp), %edx
	movl	-88(%rbp), %eax
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	binsearch_
	movl	%eax, -76(%rbp)
	call	clock
	subq	-40(%rbp), %rax
	movq	%rax, -40(%rbp)
	pxor	%xmm0, %xmm0
	cvtsi2sdq	-40(%rbp), %xmm0
	movsd	.LC1(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movq	%xmm0, %rax
	movq	%rax, -32(%rbp)
	movsd	-64(%rbp), %xmm0
	addsd	-32(%rbp), %xmm0
	movq	%xmm0, %rax
	movq	%rax, -64(%rbp)
	movq	-32(%rbp), %rdx
	movl	-76(%rbp), %eax
	movq	%rdx, -104(%rbp)
	movsd	-104(%rbp), %xmm0
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$1, %eax
	call	printf
	addl	$1, -88(%rbp)
.L17:
	movl	-88(%rbp), %eax
	cmpl	-80(%rbp), %eax
	jl	.L18
	movq	-64(%rbp), %rdx
	movq	-72(%rbp), %rax
	movq	%rdx, -104(%rbp)
	movsd	-104(%rbp), %xmm1
	movq	%rax, -104(%rbp)
	movsd	-104(%rbp), %xmm0
	movl	$.LC4, %edi
	movl	$2, %eax
	call	printf
	movq	%rbx, %rsp
	movq	-24(%rbp), %rbx
	xorq	%fs:40, %rbx
	je	.L19
	call	__stack_chk_fail
.L19:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC1:
	.long	0
	.long	1093567616
	.ident	"GCC: (Ubuntu 4.9.2-10ubuntu13) 4.9.2"
	.section	.note.GNU-stack,"",@progbits
