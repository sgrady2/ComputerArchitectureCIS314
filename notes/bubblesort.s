	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp2:
	.cfi_def_cfa_offset 16
Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp4:
	.cfi_def_cfa_register %rbp
	subq	$464, %rsp              ## imm = 0x1D0
	leaq	L_.str(%rip), %rdi
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -420(%rbp)
	movb	$0, %al
	callq	_printf
	leaq	L_.str1(%rip), %rdi
	leaq	-424(%rbp), %rsi
	movl	%eax, -440(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str2(%rip), %rdi
	movl	-424(%rbp), %esi
	movl	%eax, -444(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movl	$0, -428(%rbp)
	movl	%eax, -448(%rbp)        ## 4-byte Spill
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movl	-428(%rbp), %eax
	cmpl	-424(%rbp), %eax
	jge	LBB0_4
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str1(%rip), %rdi
	leaq	-416(%rbp), %rax
	movslq	-428(%rbp), %rcx
	shlq	$2, %rcx
	addq	%rcx, %rax
	movq	%rax, %rsi
	movb	$0, %al
	callq	_scanf
	movl	%eax, -452(%rbp)        ## 4-byte Spill
## BB#3:                                ##   in Loop: Header=BB0_1 Depth=1
	movl	-428(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -428(%rbp)
	jmp	LBB0_1
LBB0_4:
	movl	$0, -428(%rbp)
LBB0_5:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_7 Depth 2
	movl	-428(%rbp), %eax
	movl	-424(%rbp), %ecx
	subl	$1, %ecx
	cmpl	%ecx, %eax
	jge	LBB0_14
## BB#6:                                ##   in Loop: Header=BB0_5 Depth=1
	movl	$0, -432(%rbp)
LBB0_7:                                 ##   Parent Loop BB0_5 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movl	-432(%rbp), %eax
	movl	-424(%rbp), %ecx
	subl	-428(%rbp), %ecx
	subl	$1, %ecx
	cmpl	%ecx, %eax
	jge	LBB0_12
## BB#8:                                ##   in Loop: Header=BB0_7 Depth=2
	movslq	-432(%rbp), %rax
	movl	-416(%rbp,%rax,4), %ecx
	movl	-432(%rbp), %edx
	addl	$1, %edx
	movslq	%edx, %rax
	cmpl	-416(%rbp,%rax,4), %ecx
	jle	LBB0_10
## BB#9:                                ##   in Loop: Header=BB0_7 Depth=2
	movslq	-432(%rbp), %rax
	movl	-416(%rbp,%rax,4), %ecx
	movl	%ecx, -436(%rbp)
	movl	-432(%rbp), %ecx
	addl	$1, %ecx
	movslq	%ecx, %rax
	movl	-416(%rbp,%rax,4), %ecx
	movslq	-432(%rbp), %rax
	movl	%ecx, -416(%rbp,%rax,4)
	movl	-436(%rbp), %ecx
	movl	-432(%rbp), %edx
	addl	$1, %edx
	movslq	%edx, %rax
	movl	%ecx, -416(%rbp,%rax,4)
LBB0_10:                                ##   in Loop: Header=BB0_7 Depth=2
	jmp	LBB0_11
LBB0_11:                                ##   in Loop: Header=BB0_7 Depth=2
	movl	-432(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -432(%rbp)
	jmp	LBB0_7
LBB0_12:                                ##   in Loop: Header=BB0_5 Depth=1
	jmp	LBB0_13
LBB0_13:                                ##   in Loop: Header=BB0_5 Depth=1
	movl	-428(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -428(%rbp)
	jmp	LBB0_5
LBB0_14:
	leaq	L_.str3(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$0, -428(%rbp)
	movl	%eax, -456(%rbp)        ## 4-byte Spill
LBB0_15:                                ## =>This Inner Loop Header: Depth=1
	movl	-428(%rbp), %eax
	cmpl	-424(%rbp), %eax
	jge	LBB0_18
## BB#16:                               ##   in Loop: Header=BB0_15 Depth=1
	leaq	L_.str4(%rip), %rdi
	movslq	-428(%rbp), %rax
	movl	-416(%rbp,%rax,4), %esi
	movb	$0, %al
	callq	_printf
	movl	%eax, -460(%rbp)        ## 4-byte Spill
## BB#17:                               ##   in Loop: Header=BB0_15 Depth=1
	movl	-428(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -428(%rbp)
	jmp	LBB0_15
LBB0_18:
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	cmpq	-8(%rbp), %rax
	jne	LBB0_20
## BB#19:                               ## %SP_return
	movl	$0, %eax
	addq	$464, %rsp              ## imm = 0x1D0
	popq	%rbp
	retq
LBB0_20:                                ## %CallStackCheckFailBlk
	callq	___stack_chk_fail
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Enter number of elements\n"

L_.str1:                                ## @.str1
	.asciz	"%d"

L_.str2:                                ## @.str2
	.asciz	"Enter %d integers\n"

L_.str3:                                ## @.str3
	.asciz	"Sorted list in ascending order:\n"

L_.str4:                                ## @.str4
	.asciz	"%d\n"


.subsections_via_symbols
