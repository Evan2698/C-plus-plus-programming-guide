	.file	"main.cpp"
	.text
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"MyClass constructor"
	.section	.text._ZN7MyClassC2Ev,"axG",@progbits,_ZN7MyClassC5Ev,comdat
	.align 2
	.weak	_ZN7MyClassC2Ev
	.type	_ZN7MyClassC2Ev, @function
_ZN7MyClassC2Ev:
.LFB1785:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1785:
	.size	_ZN7MyClassC2Ev, .-_ZN7MyClassC2Ev
	.weak	_ZN7MyClassC1Ev
	.set	_ZN7MyClassC1Ev,_ZN7MyClassC2Ev
	.section	.rodata
.LC1:
	.string	"MyClass move constructor"
	.section	.text._ZN7MyClassC2EOS_,"axG",@progbits,_ZN7MyClassC5EOS_,comdat
	.align 2
	.weak	_ZN7MyClassC2EOS_
	.type	_ZN7MyClassC2EOS_, @function
_ZN7MyClassC2EOS_:
.LFB1792:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	.LC1(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1792:
	.size	_ZN7MyClassC2EOS_, .-_ZN7MyClassC2EOS_
	.weak	_ZN7MyClassC1EOS_
	.set	_ZN7MyClassC1EOS_,_ZN7MyClassC2EOS_
	.section	.rodata
.LC2:
	.string	"MyClass destructor"
	.section	.text._ZN7MyClassD2Ev,"axG",@progbits,_ZN7MyClassD5Ev,comdat
	.align 2
	.weak	_ZN7MyClassD2Ev
	.type	_ZN7MyClassD2Ev, @function
_ZN7MyClassD2Ev:
.LFB1795:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1795
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC2(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1795:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table._ZN7MyClassD2Ev,"aG",@progbits,_ZN7MyClassD5Ev,comdat
.LLSDA1795:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1795-.LLSDACSB1795
.LLSDACSB1795:
.LLSDACSE1795:
	.section	.text._ZN7MyClassD2Ev,"axG",@progbits,_ZN7MyClassD5Ev,comdat
	.size	_ZN7MyClassD2Ev, .-_ZN7MyClassD2Ev
	.weak	_ZN7MyClassD1Ev
	.set	_ZN7MyClassD1Ev,_ZN7MyClassD2Ev
	.text
	.globl	_Z6buildAv
	.type	_Z6buildAv, @function
_Z6buildAv:
.LFB1797:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1797
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	leaq	-20(%rbp), %rax
	movq	%rax, %rdi
.LEHB0:
	call	_ZN7MyClassC1Ev
.LEHE0:
	movl	$10, -20(%rbp)
	leaq	-20(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB1:
	call	_ZN7MyClassC1EOS_
.LEHE1:
	nop
	leaq	-20(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN7MyClassD1Ev
	jmp	.L8
.L7:
	movq	%rax, %rbx
	leaq	-20(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN7MyClassD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB2:
	call	_Unwind_Resume@PLT
.LEHE2:
.L8:
	movq	-40(%rbp), %rax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1797:
	.section	.gcc_except_table,"a",@progbits
.LLSDA1797:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1797-.LLSDACSB1797
.LLSDACSB1797:
	.uleb128 .LEHB0-.LFB1797
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1797
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L7-.LFB1797
	.uleb128 0
	.uleb128 .LEHB2-.LFB1797
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE1797:
	.text
	.size	_Z6buildAv, .-_Z6buildAv
	.globl	main
	.type	main, @function
main:
.LFB1798:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	leaq	-20(%rbp), %rax
	movq	%rax, %rdi
	call	_Z6buildAv
	movl	$20, -20(%rbp)
	movl	$0, %ebx
	leaq	-20(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN7MyClassD1Ev
	movl	%ebx, %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1798:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2339:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L13
	cmpl	$65535, -8(%rbp)
	jne	.L13
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rax
	movq	%rax, %rdx
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L13:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2339:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z6buildAv, @function
_GLOBAL__sub_I__Z6buildAv:
.LFB2340:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2340:
	.size	_GLOBAL__sub_I__Z6buildAv, .-_GLOBAL__sub_I__Z6buildAv
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z6buildAv
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Deepin 12.3.0-17deepin8) 12.3.0"
	.section	.note.GNU-stack,"",@progbits
