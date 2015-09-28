	.file	"t1.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, -24(%rbp)
	movsd	-24(%rbp), %xmm1
	movq	%rax, -24(%rbp)
	movsd	-24(%rbp), %xmm0
	call	pow
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.9.2-10ubuntu13) 4.9.2"
	.section	.note.GNU-stack,"",@progbits
