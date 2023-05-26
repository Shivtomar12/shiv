	.file	"array.c"
	.text
	.section .rdata,"dr"
LC0:
	.ascii "\12 0. Exit \0"
LC1:
	.ascii "\12 1. Accept array elements \0"
LC2:
	.ascii "\12 2. Display array elements \0"
LC3:
	.ascii "%d\0"
	.text
	.globl	_menu_choice
	.def	_menu_choice;	.scl	2;	.type	32;	.endef
_menu_choice:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$40, %esp
	movl	$LC0, (%esp)
	call	_puts
	movl	$LC1, (%esp)
	call	_puts
	movl	$LC2, (%esp)
	call	_puts
	leal	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	movl	-12(%ebp), %eax
	leave
	ret
	.section .rdata,"dr"
LC4:
	.ascii "\12 Specify Array Elements \0"
	.text
	.globl	_accept_array_elements
	.def	_accept_array_elements;	.scl	2;	.type	32;	.endef
_accept_array_elements:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$40, %esp
	movl	$LC4, (%esp)
	call	_puts
	movl	$0, -12(%ebp)
	jmp	L4
L5:
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	addl	$1, -12(%ebp)
L4:
	cmpl	$9, -12(%ebp)
	jle	L5
	nop
	nop
	leave
	ret
	.section .rdata,"dr"
LC5:
	.ascii "\12 Array Elements are \0"
LC6:
	.ascii "%4d\0"
	.text
	.globl	_display_array_elements
	.def	_display_array_elements;	.scl	2;	.type	32;	.endef
_display_array_elements:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$40, %esp
	movl	$LC5, (%esp)
	call	_puts
	movl	$0, -12(%ebp)
	jmp	L7
L8:
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	addl	$1, -12(%ebp)
L7:
	cmpl	$9, -12(%ebp)
	jle	L8
	nop
	nop
	leave
	ret
	.def	___main;	.scl	2;	.type	32;	.endef
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$64, %esp
	call	___main
	jmp	L10
L13:
	cmpl	$1, 60(%esp)
	je	L11
	cmpl	$2, 60(%esp)
	je	L12
	jmp	L10
L11:
	leal	20(%esp), %eax
	movl	%eax, (%esp)
	call	_accept_array_elements
	jmp	L10
L12:
	leal	20(%esp), %eax
	movl	%eax, (%esp)
	call	_display_array_elements
	nop
L10:
	call	_menu_choice
	movl	%eax, 60(%esp)
	cmpl	$0, 60(%esp)
	jne	L13
	movl	$0, %eax
	leave
	ret
	.ident	"GCC: (tdm-1) 10.3.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
