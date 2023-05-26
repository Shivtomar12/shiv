	.file	"p_1.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC1:
	.ascii "PI = %.2f\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	fldl	LC0
	fstpl	4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$10, 28(%esp)
	addl	$1, 28(%esp)
	movl	$0, %eax
	leave
	ret
	.section .rdata,"dr"
	.align 8
LC0:
	.long	1374389535
	.long	1074339512
	.ident	"GCC: (tdm-1) 10.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
