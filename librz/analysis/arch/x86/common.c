// SPDX-FileCopyrightText: 2023 Dhruv Maroo <dhruvmaru007@gmail.com>
// SPDX-License-Identifier: LGPL-3.0-only

#include "common.h"
#include <rz_il/rz_il_opbuilder_begin.h>

/**
 * \brief x86 registers
 */
const char *x86_registers[X86_REG_ENDING] = {
	[X86_REG_AH] = "ah",
	[X86_REG_AL] = "al",
	[X86_REG_AX] = "ax",
	[X86_REG_BH] = "bh",
	[X86_REG_BL] = "bl",
	[X86_REG_BP] = "bp",
	[X86_REG_BPL] = "bpl",
	[X86_REG_BX] = "bx",
	[X86_REG_CH] = "ch",
	[X86_REG_CL] = "cl",
	[X86_REG_CS] = "cs",
	[X86_REG_CX] = "cx",
	[X86_REG_DH] = "dh",
	[X86_REG_DI] = "di",
	[X86_REG_DIL] = "dil",
	[X86_REG_DL] = "dl",
	[X86_REG_DS] = "ds",
	[X86_REG_DX] = "dx",
	[X86_REG_EAX] = "eax",
	[X86_REG_EBP] = "ebp",
	[X86_REG_EBX] = "ebx",
	[X86_REG_ECX] = "ecx",
	[X86_REG_EDI] = "edi",
	[X86_REG_EDX] = "edx",
	[X86_REG_EFLAGS] = "eflags",
	[X86_REG_EIP] = "eip",
	[X86_REG_EIZ] = "eiz",
	[X86_REG_ES] = "es",
	[X86_REG_ESI] = "esi",
	[X86_REG_ESP] = "esp",
	[X86_REG_FPSW] = "fpsw",
	[X86_REG_FS] = "fs",
	[X86_REG_GS] = "gs",
	[X86_REG_IP] = "ip",
	[X86_REG_RAX] = "rax",
	[X86_REG_RBP] = "rbp",
	[X86_REG_RBX] = "rbx",
	[X86_REG_RCX] = "rcx",
	[X86_REG_RDI] = "rdi",
	[X86_REG_RDX] = "rdx",
	[X86_REG_RIP] = "rip",
	[X86_REG_RIZ] = "riz",
	[X86_REG_RSI] = "rsi",
	[X86_REG_RSP] = "rsp",
	[X86_REG_SI] = "si",
	[X86_REG_SIL] = "sil",
	[X86_REG_SP] = "sp",
	[X86_REG_SPL] = "spl",
	[X86_REG_SS] = "ss",
	[X86_REG_CR0] = "cr0",
	[X86_REG_CR1] = "cr1",
	[X86_REG_CR2] = "cr2",
	[X86_REG_CR3] = "cr3",
	[X86_REG_CR4] = "cr4",
	[X86_REG_CR5] = "cr5",
	[X86_REG_CR6] = "cr6",
	[X86_REG_CR7] = "cr7",
	[X86_REG_CR8] = "cr8",
	[X86_REG_CR9] = "cr9",
	[X86_REG_CR10] = "cr10",
	[X86_REG_CR11] = "cr11",
	[X86_REG_CR12] = "cr12",
	[X86_REG_CR13] = "cr13",
	[X86_REG_CR14] = "cr14",
	[X86_REG_CR15] = "cr15",
	[X86_REG_DR0] = "dr0",
	[X86_REG_DR1] = "dr1",
	[X86_REG_DR2] = "dr2",
	[X86_REG_DR3] = "dr3",
	[X86_REG_DR4] = "dr4",
	[X86_REG_DR5] = "dr5",
	[X86_REG_DR6] = "dr6",
	[X86_REG_DR7] = "dr7",
#if CS_API_MAJOR >= 4
	[X86_REG_DR8] = "dr8",
	[X86_REG_DR9] = "dr9",
	[X86_REG_DR10] = "dr10",
	[X86_REG_DR11] = "dr11",
	[X86_REG_DR12] = "dr12",
	[X86_REG_DR13] = "dr13",
	[X86_REG_DR14] = "dr14",
	[X86_REG_DR15] = "dr15",
#endif
	[X86_REG_FP0] = "fp0",
	[X86_REG_FP1] = "fp1",
	[X86_REG_FP2] = "fp2",
	[X86_REG_FP3] = "fp3",
	[X86_REG_FP4] = "fp4",
	[X86_REG_FP5] = "fp5",
	[X86_REG_FP6] = "fp6",
	[X86_REG_FP7] = "fp7",
	[X86_REG_K0] = "k0",
	[X86_REG_K1] = "k1",
	[X86_REG_K2] = "k2",
	[X86_REG_K3] = "k3",
	[X86_REG_K4] = "k4",
	[X86_REG_K5] = "k5",
	[X86_REG_K6] = "k6",
	[X86_REG_K7] = "k7",
	[X86_REG_MM0] = "mm0",
	[X86_REG_MM1] = "mm1",
	[X86_REG_MM2] = "mm2",
	[X86_REG_MM3] = "mm3",
	[X86_REG_MM4] = "mm4",
	[X86_REG_MM5] = "mm5",
	[X86_REG_MM6] = "mm6",
	[X86_REG_MM7] = "mm7",
	[X86_REG_R8] = "r8",
	[X86_REG_R9] = "r9",
	[X86_REG_R10] = "r10",
	[X86_REG_R11] = "r11",
	[X86_REG_R12] = "r12",
	[X86_REG_R13] = "r13",
	[X86_REG_R14] = "r14",
	[X86_REG_R15] = "r15",
	[X86_REG_ST0] = "st0",
	[X86_REG_ST1] = "st1",
	[X86_REG_ST2] = "st2",
	[X86_REG_ST3] = "st3",
	[X86_REG_ST4] = "st4",
	[X86_REG_ST5] = "st5",
	[X86_REG_ST6] = "st6",
	[X86_REG_ST7] = "st7",
	[X86_REG_XMM0] = "xmm0",
	[X86_REG_XMM1] = "xmm1",
	[X86_REG_XMM2] = "xmm2",
	[X86_REG_XMM3] = "xmm3",
	[X86_REG_XMM4] = "xmm4",
	[X86_REG_XMM5] = "xmm5",
	[X86_REG_XMM6] = "xmm6",
	[X86_REG_XMM7] = "xmm7",
	[X86_REG_XMM8] = "xmm8",
	[X86_REG_XMM9] = "xmm9",
	[X86_REG_XMM10] = "xmm10",
	[X86_REG_XMM11] = "xmm11",
	[X86_REG_XMM12] = "xmm12",
	[X86_REG_XMM13] = "xmm13",
	[X86_REG_XMM14] = "xmm14",
	[X86_REG_XMM15] = "xmm15",
	[X86_REG_XMM16] = "xmm16",
	[X86_REG_XMM17] = "xmm17",
	[X86_REG_XMM18] = "xmm18",
	[X86_REG_XMM19] = "xmm19",
	[X86_REG_XMM20] = "xmm20",
	[X86_REG_XMM21] = "xmm21",
	[X86_REG_XMM22] = "xmm22",
	[X86_REG_XMM23] = "xmm23",
	[X86_REG_XMM24] = "xmm24",
	[X86_REG_XMM25] = "xmm25",
	[X86_REG_XMM26] = "xmm26",
	[X86_REG_XMM27] = "xmm27",
	[X86_REG_XMM28] = "xmm28",
	[X86_REG_XMM29] = "xmm29",
	[X86_REG_XMM30] = "xmm30",
	[X86_REG_XMM31] = "xmm31",
	[X86_REG_YMM0] = "ymm0",
	[X86_REG_YMM1] = "ymm1",
	[X86_REG_YMM2] = "ymm2",
	[X86_REG_YMM3] = "ymm3",
	[X86_REG_YMM4] = "ymm4",
	[X86_REG_YMM5] = "ymm5",
	[X86_REG_YMM6] = "ymm6",
	[X86_REG_YMM7] = "ymm7",
	[X86_REG_YMM8] = "ymm8",
	[X86_REG_YMM9] = "ymm9",
	[X86_REG_YMM10] = "ymm10",
	[X86_REG_YMM11] = "ymm11",
	[X86_REG_YMM12] = "ymm12",
	[X86_REG_YMM13] = "ymm13",
	[X86_REG_YMM14] = "ymm14",
	[X86_REG_YMM15] = "ymm15",
	[X86_REG_YMM16] = "ymm16",
	[X86_REG_YMM17] = "ymm17",
	[X86_REG_YMM18] = "ymm18",
	[X86_REG_YMM19] = "ymm19",
	[X86_REG_YMM20] = "ymm20",
	[X86_REG_YMM21] = "ymm21",
	[X86_REG_YMM22] = "ymm22",
	[X86_REG_YMM23] = "ymm23",
	[X86_REG_YMM24] = "ymm24",
	[X86_REG_YMM25] = "ymm25",
	[X86_REG_YMM26] = "ymm26",
	[X86_REG_YMM27] = "ymm27",
	[X86_REG_YMM28] = "ymm28",
	[X86_REG_YMM29] = "ymm29",
	[X86_REG_YMM30] = "ymm30",
	[X86_REG_YMM31] = "ymm31",
	[X86_REG_ZMM0] = "zmm0",
	[X86_REG_ZMM1] = "zmm1",
	[X86_REG_ZMM2] = "zmm2",
	[X86_REG_ZMM3] = "zmm3",
	[X86_REG_ZMM4] = "zmm4",
	[X86_REG_ZMM5] = "zmm5",
	[X86_REG_ZMM6] = "zmm6",
	[X86_REG_ZMM7] = "zmm7",
	[X86_REG_ZMM8] = "zmm8",
	[X86_REG_ZMM9] = "zmm9",
	[X86_REG_ZMM10] = "zmm10",
	[X86_REG_ZMM11] = "zmm11",
	[X86_REG_ZMM12] = "zmm12",
	[X86_REG_ZMM13] = "zmm13",
	[X86_REG_ZMM14] = "zmm14",
	[X86_REG_ZMM15] = "zmm15",
	[X86_REG_ZMM16] = "zmm16",
	[X86_REG_ZMM17] = "zmm17",
	[X86_REG_ZMM18] = "zmm18",
	[X86_REG_ZMM19] = "zmm19",
	[X86_REG_ZMM20] = "zmm20",
	[X86_REG_ZMM21] = "zmm21",
	[X86_REG_ZMM22] = "zmm22",
	[X86_REG_ZMM23] = "zmm23",
	[X86_REG_ZMM24] = "zmm24",
	[X86_REG_ZMM25] = "zmm25",
	[X86_REG_ZMM26] = "zmm26",
	[X86_REG_ZMM27] = "zmm27",
	[X86_REG_ZMM28] = "zmm28",
	[X86_REG_ZMM29] = "zmm29",
	[X86_REG_ZMM30] = "zmm30",
	[X86_REG_ZMM31] = "zmm31",
	[X86_REG_R8B] = "r8b",
	[X86_REG_R9B] = "r9b",
	[X86_REG_R10B] = "r10b",
	[X86_REG_R11B] = "r11b",
	[X86_REG_R12B] = "r12b",
	[X86_REG_R13B] = "r13b",
	[X86_REG_R14B] = "r14b",
	[X86_REG_R15B] = "r15b",
	[X86_REG_R8D] = "r8d",
	[X86_REG_R9D] = "r9d",
	[X86_REG_R10D] = "r10d",
	[X86_REG_R11D] = "r11d",
	[X86_REG_R12D] = "r12d",
	[X86_REG_R13D] = "r13d",
	[X86_REG_R14D] = "r14d",
	[X86_REG_R15D] = "r15d",
	[X86_REG_R8W] = "r8w",
	[X86_REG_R9W] = "r9w",
	[X86_REG_R10W] = "r10w",
	[X86_REG_R11W] = "r11w",
	[X86_REG_R12W] = "r12w",
	[X86_REG_R13W] = "r13w",
	[X86_REG_R14W] = "r14w",
	[X86_REG_R15W] = "r15w"
};

const char *x86_eflags_registers[X86_EFLAGS_ENDING] = {
	[X86_EFLAGS_CF] = "cf",
	[X86_EFLAGS_PF] = "pf",
	[X86_EFLAGS_AF] = "af",
	[X86_EFLAGS_ZF] = "zf",
	[X86_EFLAGS_SF] = "sf",
	[X86_EFLAGS_TF] = "tf",
	[X86_EFLAGS_IF] = "if",
	[X86_EFLAGS_DF] = "df",
	[X86_EFLAGS_OF] = "of",
	[X86_EFLAGS_NT] = "nt",
	[X86_EFLAGS_RF] = "rf",
	[X86_EFLAGS_VM] = "vm",
	[X86_EFLAGS_AC] = "ac"
};

const X86Reg gpr_hregs[] = {
	X86_REG_AH, // rax
	X86_REG_BH, // rbx
	X86_REG_CH, // rcx
	X86_REG_DH, // rdx
	X86_REG_INVALID, // rbp
	X86_REG_INVALID, // rdi
	X86_REG_INVALID, // rip
	X86_REG_INVALID, // riz
	X86_REG_INVALID, // rsi
	X86_REG_INVALID // rsp
};

const X86Reg gpr_lregs[] = {
	X86_REG_AL, // rax
	X86_REG_BL, // rbx
	X86_REG_CL, // rcx
	X86_REG_DL, // rdx
	X86_REG_BPL, // rbp
	X86_REG_DIL, // rdi
	X86_REG_INVALID, // rip
	X86_REG_INVALID, // riz
	X86_REG_SIL, // rsi
	X86_REG_SPL, // rsp
};

const X86Reg gpr_xregs[] = {
	X86_REG_AX, // rax
	X86_REG_BX, // rbx
	X86_REG_CX, // rcx
	X86_REG_DX, // rdx
	X86_REG_BP, // rbp
	X86_REG_DI, // rdi
	X86_REG_IP, // rip
	X86_REG_INVALID, // riz
	X86_REG_SI, // rsi
	X86_REG_SP, // rsp
};

const X86Reg gpr_eregs[] = {
	X86_REG_EAX, // rax
	X86_REG_EBX, // rbx
	X86_REG_ECX, // rcx
	X86_REG_EDX, // rdx
	X86_REG_EBP, // rbp
	X86_REG_EDI, // rdi
	X86_REG_EIP, // rip
	X86_REG_EIZ, // riz
	X86_REG_ESI, // rsi
	X86_REG_ESP, // rsp
};

const X86Reg gpr_rregs[] = {
	X86_REG_RAX,
	X86_REG_RBX,
	X86_REG_RCX,
	X86_REG_RDX,
	X86_REG_RBP,
	X86_REG_RDI,
	X86_REG_RIP,
	X86_REG_RIZ,
	X86_REG_RSI,
	X86_REG_RSP
};

/**
 * \brief Check if \p reg is a general purpose register (this term is quite loosely used here)
 *
 * \param reg
 */
bool x86_il_is_gpr(X86Reg reg) {
	for (unsigned int i = 0; i < GPR_FAMILY_COUNT; i++) {
		if (reg == gpr_hregs[i] || reg == gpr_lregs[i] || reg == gpr_xregs[i] || reg == gpr_eregs[i] || reg == gpr_rregs[i]) {
			return true;
		}
	}

	return false;
}

/**
 * \brief Get size of \p reg
 *
 * \param reg
 */
ut8 x86_il_get_reg_size(X86Reg reg) {
	for (unsigned int i = 0; i < GPR_FAMILY_COUNT; i++) {
		if (reg == gpr_hregs[i] || reg == gpr_lregs[i]) {
			return 8;
		} else if (reg == gpr_xregs[i]) {
			return 16;
		} else if (reg == gpr_eregs[i]) {
			return 32;
		} else if (reg == gpr_rregs[i]) {
			return 64;
		}
	}

	return 0;
}

/**
 * \brief  Get the higher 8 bits (8-16) of register \p reg
 *
 * \param reg
 * \param bits bitness
 */
RzILOpPure *x86_il_get_gprh(X86Reg reg, int bits) {
	return UNSIGNED(8, SHIFTR0(VARG(x86_registers[reg]), U8(8)));
}
/**
 * \brief Get the lower 8 bits (0-8) of register \p reg
 *
 * \param reg
 * \param bits bitness
 */
RzILOpPure *x86_il_get_gprl(X86Reg reg, int bits) {
	return UNSIGNED(8, VARG(x86_registers[reg]));
}
/**
 * \brief Get the lower 16 bits (0-16) of register \p reg
 *
 * \param reg
 * \param bits bitness
 */
RzILOpPure *x86_il_get_gpr16(X86Reg reg, int bits) {
	if (bits == 16) {
		// Don't perform unnecessary casting
		return VARG(x86_registers[reg]);
	}
	return UNSIGNED(16, VARG(x86_registers[reg]));
}
/**
 * \brief Get the lower 32 bits (0-32) of register \p reg
 *
 * \param reg
 * \param bits bitness
 */
RzILOpPure *x86_il_get_gpr32(X86Reg reg, int bits) {
	if (bits == 32) {
		return VARG(x86_registers[reg]);
	}
	return UNSIGNED(32, VARG(x86_registers[reg]));
}
/**
 * \brief Get 64 bits (0-64) of register \p reg
 *
 * \param reg
 * \param bits bitness
 */
RzILOpPure *x86_il_get_gpr64(X86Reg reg, int bits) {
	return VARG(x86_registers[reg]);
}

/**
 * \brief  Set the higher 8 bits (8-16) of register \p reg to \p val
 *
 * \param reg
 * \param val
 * \param bits bitness
 */
RzILOpEffect *x86_il_set_gprh(X86Reg reg, RZ_OWN RzILOpPure *val, int bits) {
	RzILOpPure *mask = LOGNOT(UN(bits, 0xff00));
	RzILOpPure *masked_reg = LOGAND(VARG(x86_registers[reg]), mask);
	RzILOpPure *final_reg = LOGOR(masked_reg, SHIFTL0(UNSIGNED(bits, val), U8(8)));
	return SETG(x86_registers[reg], final_reg);
}
/**
 * \brief  Set the lower 8 bits (0-8) of register \p reg to \p val
 *
 * \param reg
 * \param val
 * \param bits bitness
 */
RzILOpEffect *x86_il_set_gprl(X86Reg reg, RZ_OWN RzILOpPure *val, int bits) {
	RzILOpPure *mask = LOGNOT(UN(bits, 0xff));
	RzILOpPure *masked_reg = LOGAND(VARG(x86_registers[reg]), mask);
	RzILOpPure *final_reg = LOGOR(masked_reg, UNSIGNED(bits, val));
	return SETG(x86_registers[reg], final_reg);
}
/**
 * \brief  Set the lower 16 bits (0-16) of register \p reg to \p val
 *
 * \param reg
 * \param val
 * \param bits bitness
 */
RzILOpEffect *x86_il_set_gpr16(X86Reg reg, RZ_OWN RzILOpPure *val, int bits) {
	if (bits == 16) {
		// Don't perform unnecessary casting
		return SETG(x86_registers[reg], val);
	}
	RzILOpPure *mask = LOGNOT(UN(bits, 0xffff));
	RzILOpPure *masked_reg = LOGAND(VARG(x86_registers[reg]), mask);
	RzILOpPure *final_reg = LOGOR(masked_reg, UNSIGNED(bits, val));
	return SETG(x86_registers[reg], final_reg);
}
/**
 * \brief  Set the lower 32 bits (0-32) of register \p reg to \p val, and zero out the rest
 * This is a very specific behavior of x86-64, see https://stackoverflow.com/questions/11177137/why-do-x86-64-instructions-on-32-bit-registers-zero-the-upper-part-of-the-full-6 for details
 *
 * \param reg
 * \param val
 * \param bits bitness
 */
RzILOpEffect *x86_il_set_gpr32(X86Reg reg, RZ_OWN RzILOpPure *val, int bits) {
	if (bits == 32) {
		return SETG(x86_registers[reg], val);
	}

	return SETG(x86_registers[reg], UNSIGNED(64, val));
}
/**
 * \brief  Set 64 bits (0-64) of register \p reg to \p val
 *
 * \param reg
 * \param val
 * \param bits bitness
 */
RzILOpEffect *x86_il_set_gpr64(X86Reg reg, RzILOpPure *val, int bits) {
	return SETG(x86_registers[reg], val);
}

/**
 * \brief Get the widest register corresponding to index \p index and bitness \p bits
 *
 * \param index
 * \param bits
 */
X86Reg get_bitness_reg(unsigned int index, int bits) {
	if (index >= GPR_FAMILY_COUNT) {
		return X86_REG_INVALID;
	}
	if (bits == 16) {
		return gpr_xregs[index];
	} else if (bits == 32) {
		return gpr_eregs[index];
	} else {
		return gpr_rregs[index];
	}
}

struct gpr_lookup_helper_t {
	unsigned int index; ///< register index
	RzILOpPure *(*get_handler)(X86Reg, int); ///< getter
	RzILOpEffect *(*set_handler)(X86Reg, RzILOpPure *, int); ///< setter
};

const struct gpr_lookup_helper_t gpr_lookup_table[] = {
	[X86_REG_AH] = { 0, x86_il_get_gprh, x86_il_set_gprh },
	[X86_REG_AL] = { 0, x86_il_get_gprl, x86_il_set_gprl },
	[X86_REG_AX] = { 0, x86_il_get_gpr16, x86_il_set_gpr16 },
	[X86_REG_EAX] = { 0, x86_il_get_gpr32, x86_il_set_gpr32 },
	[X86_REG_RAX] = { 0, x86_il_get_gpr64, x86_il_set_gpr64 },
	[X86_REG_BH] = { 1, x86_il_get_gprh, x86_il_set_gprh },
	[X86_REG_BL] = { 1, x86_il_get_gprl, x86_il_set_gprl },
	[X86_REG_BX] = { 1, x86_il_get_gpr16, x86_il_set_gpr16 },
	[X86_REG_EBX] = { 1, x86_il_get_gpr32, x86_il_set_gpr32 },
	[X86_REG_RBX] = { 1, x86_il_get_gpr64, x86_il_set_gpr64 },
	[X86_REG_CH] = { 2, x86_il_get_gprh, x86_il_set_gprh },
	[X86_REG_CL] = { 2, x86_il_get_gprl, x86_il_set_gprl },
	[X86_REG_CX] = { 2, x86_il_get_gpr16, x86_il_set_gpr16 },
	[X86_REG_ECX] = { 2, x86_il_get_gpr32, x86_il_set_gpr32 },
	[X86_REG_RCX] = { 2, x86_il_get_gpr64, x86_il_set_gpr64 },
	[X86_REG_DH] = { 3, x86_il_get_gprh, x86_il_set_gprh },
	[X86_REG_DL] = { 3, x86_il_get_gprl, x86_il_set_gprl },
	[X86_REG_DX] = { 3, x86_il_get_gpr16, x86_il_set_gpr16 },
	[X86_REG_EDX] = { 3, x86_il_get_gpr32, x86_il_set_gpr32 },
	[X86_REG_RDX] = { 3, x86_il_get_gpr64, x86_il_set_gpr64 },
	[X86_REG_BPL] = { 4, x86_il_get_gprl, x86_il_set_gprl },
	[X86_REG_BP] = { 4, x86_il_get_gpr16, x86_il_set_gpr16 },
	[X86_REG_EBP] = { 4, x86_il_get_gpr32, x86_il_set_gpr32 },
	[X86_REG_RBP] = { 4, x86_il_get_gpr64, x86_il_set_gpr64 },
	[X86_REG_DIL] = { 5, x86_il_get_gprl, x86_il_set_gprl },
	[X86_REG_DI] = { 5, x86_il_get_gpr16, x86_il_set_gpr16 },
	[X86_REG_EDI] = { 5, x86_il_get_gpr32, x86_il_set_gpr32 },
	[X86_REG_RDI] = { 5, x86_il_get_gpr64, x86_il_set_gpr64 },
	[X86_REG_EIZ] = { 7, x86_il_get_gpr32, x86_il_set_gpr32 },
	[X86_REG_RIZ] = { 7, x86_il_get_gpr64, x86_il_set_gpr64 },
	[X86_REG_SIL] = { 8, x86_il_get_gprl, x86_il_set_gprl },
	[X86_REG_SI] = { 8, x86_il_get_gpr16, x86_il_set_gpr16 },
	[X86_REG_ESI] = { 8, x86_il_get_gpr32, x86_il_set_gpr32 },
	[X86_REG_RSI] = { 8, x86_il_get_gpr64, x86_il_set_gpr64 },
	[X86_REG_SPL] = { 9, x86_il_get_gprl, x86_il_set_gprl },
	[X86_REG_SP] = { 9, x86_il_get_gpr16, x86_il_set_gpr16 },
	[X86_REG_ESP] = { 9, x86_il_get_gpr32, x86_il_set_gpr32 },
	[X86_REG_RSP] = { 9, x86_il_get_gpr64, x86_il_set_gpr64 }
};

/**
 * \brief Check if the register \p reg is an instruction pointer register
 *
 * \param reg
 */
bool is_pc_reg(X86Reg reg) {
	return (reg == X86_REG_IP || reg == X86_REG_EIP || reg == X86_REG_RIP);
}

struct extreg_lookup_helper_t {
	X86Reg curr_reg; ///< register being used
	X86Reg base_reg; ///< base register for `curr_reg`
	RzILOpPure *(*get_handler)(X86Reg, int); ///< getter
	RzILOpEffect *(*set_handler)(X86Reg, RzILOpPure *, int); ///< setter
};

const struct extreg_lookup_helper_t extreg_lookup_table[] = {
	// 64-bit wide
	extreg_lookup(, x86_il_get_gpr64, x86_il_set_gpr64)

	// 8-bit wide (byte)
	extreg_lookup(B, x86_il_get_gprl, x86_il_set_gpr64)

	// 16-bit wide (word)
	extreg_lookup(W, x86_il_get_gpr16, x86_il_set_gpr64)

	// 32-bit wide (dword)
	extreg_lookup(D, x86_il_get_gpr32, x86_il_set_gpr64)
};

/**
 * \brief Get the index for external register \p reg
 *
 * \param reg
 */
int get_extreg_ind(X86Reg reg) {
	for (unsigned int i = 0; i < 8 * 4 /* size of extreg_lookup_table */; i++) {
		if (extreg_lookup_table[i].curr_reg == reg) {
			return i;
		}
	}

	return -1;
}

/**
 * \brief Get the value of a register \p reg, in a "smart" way
 * Just use the `x86_il_get_reg` macro whenever you need to get the
 * value of a register. This function will take care of all the casting
 * and extracting of (smaller) registers.
 *
 * \param reg
 * \param bits bitness
 * \param pc Program counter
 */
RzILOpPure *x86_il_get_reg_bits(X86Reg reg, int bits, uint64_t pc) {
	if (is_pc_reg(reg)) {
		return UN(bits, pc);
	}

	int ind = -1;

	if (x86_il_is_gpr(reg)) {
		struct gpr_lookup_helper_t entry = gpr_lookup_table[reg];
		/* Need to use `get_bitness_reg` because not all registers
		are available in the IL in any particular bitness
		(For example, "rax" is not a valid IL variable in 32-bit mode)
		So, we need to use the max width register available */
		return entry.get_handler(get_bitness_reg(entry.index, bits), bits);
	} else if ((ind = get_extreg_ind(reg)) != -1 && bits == 64) {
		struct extreg_lookup_helper_t entry = extreg_lookup_table[ind];
		return entry.get_handler(entry.base_reg, bits);
	}

	return VARG(x86_registers[reg]);
}

/**
 * \brief Set the value of a register \p reg, in a "smart" way
 * Just use the `x86_il_set_reg` macro whenever you need to set the
 * value of a register. This function will take care of all the casting
 * and storing and compositing values in case of (smaller) registers.
 *
 * \param reg
 * \param val Value to be stored
 * \param bits bitness
 */
RzILOpEffect *x86_il_set_reg_bits(X86Reg reg, RzILOpPure *val, int bits) {
	int ind = -1;

	if (x86_il_is_gpr(reg)) {
		struct gpr_lookup_helper_t entry = gpr_lookup_table[reg];
		return entry.set_handler(get_bitness_reg(entry.index, bits), val, bits);
	} else if ((ind = get_extreg_ind(reg)) != -1 && bits == 64) {
		struct extreg_lookup_helper_t entry = extreg_lookup_table[ind];
		return entry.set_handler(entry.base_reg, UNSIGNED(64, val), bits);
	}

	return SETG(x86_registers[reg], val);
}

/**
 * \brief Get the memory address as an `RzILOpPure` from X86Mem \p mem
 * You can also optionally provide a custom segment register as \p segment
 * This function takes care of all casting and conversion
 * This has partial segmentation support as of now
 *
 * You probably wouldn't need to use it directly, consider using the wrappers
 * `x86_il_get_memaddr` and `x86_il_set_memaddr`
 *
 * \param mem
 * \param segment
 * \param bits bitness
 */
RzILOpPure *x86_il_get_memaddr_segment_bits(X86Mem mem, X86Reg segment, int bits, ut64 pc) {
	RzILOpPure *offset = NULL;
	if (mem.base != X86_REG_INVALID) {
		offset = x86_il_get_reg_bits(mem.base, bits, pc);
		if (x86_il_get_reg_size(mem.base) != bits) {
			offset = UNSIGNED(bits, offset);
		}
	}
	if (mem.index != X86_REG_INVALID) {
		RzILOpPure *reg = x86_il_get_reg_bits(mem.index, bits, pc);
		if (x86_il_get_reg_size(mem.index) != bits) {
			reg = UNSIGNED(bits, reg);
		}
		if (!offset) {
			offset = MUL(reg, UN(bits, mem.scale));
		} else {
			offset = ADD(offset, MUL(reg, UN(bits, mem.scale)));
		}
	}
	if (!offset) {
		offset = UN(bits, mem.disp);
	} else {
		offset = ADD(offset, UN(bits, mem.disp));
	}

	/* Segmentation not present in x86-64 */
	if (bits != 64 && segment != X86_REG_INVALID) {
		// TODO: Implement segmentation
		/* Currently the segmentation is only implemented for real mode
		 Address = Segment * 0x10 + Offset */

		/* Assuming real mode */
		offset = ADD(offset, SHIFTL0(UNSIGNED(bits, x86_il_get_reg_bits(segment, bits, pc)), U8(4)));
	}

	return offset;
}

RzILOpPure *x86_il_get_memaddr_bits(X86Mem mem, int bits, ut64 pc) {
	return x86_il_get_memaddr_segment_bits(mem, mem.segment, bits, pc);
}

RzILOpEffect *x86_il_set_mem_bits(X86Mem mem, RzILOpPure *val, int bits, ut64 pc) {
	return STOREW(x86_il_get_memaddr_bits(mem, bits, pc), val);
}

/**
 * \brief Get the value of the operand \p op
 * This function takes care of everything, like choosing
 * the correct type and returning the correct value
 * Use the wrapper `x86_il_get_op`
 *
 * \param op
 * \param analysis_bits bitness
 */
RzILOpPure *x86_il_get_operand_bits(X86Op op, int analysis_bits, ut64 pc, int implicit_size) {
	switch (op.type) {
	case X86_OP_INVALID:
		if (implicit_size) {
			return SN(implicit_size * BITS_PER_BYTE, 1);
		}
		RZ_LOG_ERROR("x86: RzIL: Invalid param type encountered\n");
		return NULL;
	case X86_OP_REG:
		return x86_il_get_reg_bits(op.reg, analysis_bits, pc);
	case X86_OP_IMM:
		/* Immediate values are always sign extended */
		return SN(op.size * BITS_PER_BYTE, op.imm);
	case X86_OP_MEM:
		return LOADW(BITS_PER_BYTE * op.size, x86_il_get_memaddr_bits(op.mem, analysis_bits, pc));
#if CS_API_MAJOR <= 3
	case X86_OP_FP:
		RZ_LOG_WARN("RzIL: x86: Floating point instructions not implemented yet\n");
		return NULL;
#endif
	default:
		return NULL;
	}
}

/**
 * \brief Get the value of the operand \p op
 * This function takes care of everything, like choosing
 * the correct type and setting the correct value
 * Use the wrapper `x86_il_set_op`
 *
 * \param op
 * \param analysis_bits bitness
 */
RzILOpEffect *x86_il_set_operand_bits(X86Op op, RzILOpPure *val, int bits, ut64 pc) {
	RzILOpEffect *ret = NULL;
	switch (op.type) {
	case X86_OP_REG:
		ret = x86_il_set_reg_bits(op.reg, val, bits);
		break;
	case X86_OP_MEM:
		ret = x86_il_set_mem_bits(op.mem, val, bits, pc);
		break;
	case X86_OP_IMM:
		RZ_LOG_ERROR("x86: RzIL: Cannot set an immediate operand\n");
		break;
	default:
		RZ_LOG_ERROR("x86: RzIL: Invalid param type encountered\n");
		break;
	}
	return ret;
}

/**
 * \brief Return the carry bit when \p x and \p y are added, with result \p res
 *
 * \param res
 * \param x
 * \param y
 */
RzILOpBool *x86_il_is_add_carry(RZ_OWN RzILOpPure *res, RZ_OWN RzILOpPure *x, RZ_OWN RzILOpPure *y) {
	// res = x + y
	RzILOpBool *xmsb = MSB(x);
	RzILOpBool *ymsb = MSB(y);
	RzILOpBool *resmsb = MSB(res);

	// x & y
	RzILOpBool *xy = AND(xmsb, ymsb);
	RzILOpBool *nres = INV(resmsb);

	// !res & y
	RzILOpBool *ry = AND(nres, DUP(ymsb));
	// x & !res
	RzILOpBool *xr = AND(DUP(xmsb), DUP(nres));

	// bit = xy | ry | xr
	RzILOpBool * or = OR(xy, ry);
	or = OR(or, xr);

	return or ;
}

/**
 * \brief Return the borrow bit when \p y is subtracted from \p x, with result \p res
 *
 * \param res
 * \param x
 * \param y
 */
RzILOpBool *x86_il_is_sub_borrow(RZ_OWN RzILOpPure *res, RZ_OWN RzILOpPure *x, RZ_OWN RzILOpPure *y) {
	// res = x - y
	RzILOpBool *xmsb = MSB(x);
	RzILOpBool *ymsb = MSB(y);
	RzILOpBool *resmsb = MSB(res);

	// !x & y
	RzILOpBool *nx = INV(xmsb);
	RzILOpBool *nxy = AND(nx, ymsb);

	// y & res
	RzILOpBool *rny = AND(DUP(ymsb), resmsb);
	// res & !x
	RzILOpBool *rnx = AND(DUP(resmsb), DUP(nx));

	// bit = nxy | rny | rnx
	RzILOpBool * or = OR(nxy, rny);
	or = OR(or, rnx);

	return or ;
}

/**
 * \brief Return the overflow bit when \p x and \p y are added, with result \p res
 *
 * \param res
 * \param x
 * \param y
 */
RzILOpBool *x86_il_is_add_overflow(RZ_OWN RzILOpPure *res, RZ_OWN RzILOpPure *x, RZ_OWN RzILOpPure *y) {
	// res = x + y
	RzILOpBool *xmsb = MSB(x);
	RzILOpBool *ymsb = MSB(y);
	RzILOpBool *resmsb = MSB(res);

	// !res & x & y
	RzILOpBool *nrxy = AND(AND(INV(resmsb), xmsb), ymsb);
	// res & !x & !y
	RzILOpBool *rnxny = AND(AND(DUP(resmsb), INV(DUP(xmsb))), INV(DUP(ymsb)));
	// or = nrxy | rnxny
	RzILOpBool * or = OR(nrxy, rnxny);

	return or ;
}

/**
 * \brief Return the underflow bit when \p y is subtracted from \p x, with result \p res
 *
 * \param res
 * \param x
 * \param y
 */
RzILOpBool *x86_il_is_sub_underflow(RZ_OWN RzILOpPure *res, RZ_OWN RzILOpPure *x, RZ_OWN RzILOpPure *y) {
	// res = x - y
	RzILOpBool *xmsb = MSB(x);
	RzILOpBool *ymsb = MSB(y);
	RzILOpBool *resmsb = MSB(res);

	// !res & x & !y
	RzILOpBool *nrxny = AND(AND(INV(resmsb), xmsb), INV(ymsb));
	// res & !x & y
	RzILOpBool *rnxy = AND(AND(DUP(resmsb), INV(DUP(xmsb))), DUP(ymsb));
	// or = nrxny | rnxy
	RzILOpBool * or = OR(nrxny, rnxy);

	return or ;
}

/**
 * \brief Convert a bool \p b to a bitvector of length \p bits
 *
 * \param b
 * \param bits
 */
RzILOpBitVector *x86_bool_to_bv(RzILOpBool *b, unsigned int bits) {
	return ITE(b, UN(bits, 1), UN(bits, 0));
}

struct x86_parity_helper_t {
	RzILOpBool *val; ///< value of parity
	RzILOpEffect *eff; ///< RzILOpEffect used to find the parity
};

/**
 * \brief Find the parity of lower 8 bits of \p val
 *
 * \param val
 */
struct x86_parity_helper_t x86_il_get_parity(RZ_OWN RzILOpPure *val) {
	// assumed that val is an 8-bit wide value
	RzILOpEffect *setvar = SETL("_popcnt", U8(0));
	setvar = SEQ2(setvar, SETL("_val", val));

	/* We can stop shifting the "_val" once it is zero,
	since the value of "_popcnt" wouldn't change any further */
	RzILOpBool *condition = NON_ZERO(VARL("_val"));

	RzILOpEffect *popcnt = SETL("_popcnt", ADD(VARL("_popcnt"), x86_bool_to_bv(LSB(VARL("_val")), 8)));
	popcnt = SEQ2(popcnt, SETL("_val", SHIFTR0(VARL("_val"), U8(1))));

	RzILOpEffect *repeat_eff = REPEAT(condition, popcnt);

	struct x86_parity_helper_t ret = {
		.val = IS_ZERO(MOD(VARL("_popcnt"), U8(2))),
		.eff = SEQ2(setvar, repeat_eff)
	};

	return ret;
}

/**
 * \brief Sets the value of PF, ZF, SF according to the \p result
 */
RzILOpEffect *x86_il_set_result_flags_bits(RZ_OWN RzILOpPure *result, int bits) {
	RzILOpEffect *set = SETL("_result", result);
	struct x86_parity_helper_t pf = x86_il_get_parity(UNSIGNED(8, VARL("_result")));
	RzILOpBool *zf = IS_ZERO(VARL("_result"));
	RzILOpBool *sf = MSB(VARL("_result"));

	return SEQ5(set, pf.eff,
		SETG(EFLAGS(PF), pf.val),
		SETG(EFLAGS(ZF), zf),
		SETG(EFLAGS(SF), sf));
}

/**
 * \brief Sets the value of CF, OF, AF according to the \p res
 */
RzILOpEffect *x86_il_set_arithmetic_flags_bits(RZ_OWN RzILOpPure *res, RZ_OWN RzILOpPure *x, RZ_OWN RzILOpPure *y, bool addition, int bits) {
	RzILOpBool *cf = NULL;
	RzILOpBool *of = NULL;
	RzILOpBool *af = NULL;

	RzILOpEffect *result_set = SETL("_result", res);
	RzILOpEffect *x_set = SETL("_x", x);
	RzILOpEffect *y_set = SETL("_y", y);

	if (addition) {
		cf = x86_il_is_add_carry(VARL("_result"), VARL("_x"), VARL("_y"));
		of = x86_il_is_add_overflow(VARL("_result"), VARL("_x"), VARL("_y"));
		af = x86_il_is_add_carry(UNSIGNED(4, VARL("_result")), UNSIGNED(4, VARL("_x")), UNSIGNED(4, VARL("_y")));
	} else {
		cf = x86_il_is_sub_borrow(VARL("_result"), VARL("_x"), VARL("_y"));
		of = x86_il_is_sub_underflow(VARL("_result"), VARL("_x"), VARL("_y"));
		af = x86_il_is_sub_borrow(UNSIGNED(4, VARL("_result")), UNSIGNED(4, VARL("_x")), UNSIGNED(4, VARL("_y")));
	}

	return SEQ6(result_set, x_set, y_set,
		SETG(EFLAGS(CF), cf),
		SETG(EFLAGS(OF), of),
		SETG(EFLAGS(AF), af));
}

/**
 * \brief Set OF and AF according to \p res
 */
RzILOpEffect *x86_il_set_arithmetic_flags_except_cf_bits(RZ_OWN RzILOpPure *res, RZ_OWN RzILOpPure *x, RZ_OWN RzILOpPure *y, bool addition, int bits) {
	RzILOpBool *of = NULL;
	RzILOpBool *af = NULL;

	RzILOpEffect *result_set = SETL("_result", res);
	RzILOpEffect *x_set = SETL("_x", x);
	RzILOpEffect *y_set = SETL("_y", y);

	if (addition) {
		of = x86_il_is_add_overflow(VARL("_result"), VARL("_x"), VARL("_y"));
		af = x86_il_is_add_carry(UNSIGNED(4, VARL("_result")), UNSIGNED(4, VARL("_x")), UNSIGNED(4, VARL("_y")));
	} else {
		of = x86_il_is_sub_underflow(VARL("_result"), VARL("_x"), VARL("_y"));
		af = x86_il_is_sub_borrow(UNSIGNED(4, VARL("_result")), UNSIGNED(4, VARL("_x")), UNSIGNED(4, VARL("_y")));
	}

	return SEQ5(result_set, x_set, y_set,
		SETG(EFLAGS(OF), of),
		SETG(EFLAGS(AF), af));
}

/**
 * \brief Get value of FLAGS register
 *
 * \param size size of flags needed
 */
RzILOpPure *x86_il_get_flags(unsigned int size) {
	/* We really don't care about bits higher than 16 for now */
	RzILOpPure *val;
	if (size == 8) {
		goto lower_half;
	}

	/* Bit 15: Reserved,
	always 1 on 8086 and 186,
	always 0 on later models
	Assuming 0 */
	val = x86_bool_to_bv(IL_FALSE, size);
	val = LOGOR(SHIFTL0(val, UN(size, 1)), x86_bool_to_bv(VARG(EFLAGS(NT)), size));

	/** Bit 12-13: IOPL,
	I/O privilege level (286+ only),
	always 1 on 8086 and 186
	Assuming all 1 */
	val = LOGOR(SHIFTL0(val, UN(size, 2)), UN(size, 0x3));
	val = LOGOR(SHIFTL0(val, UN(size, 1)), x86_bool_to_bv(VARG(EFLAGS(OF)), size));
	val = LOGOR(SHIFTL0(val, UN(size, 1)), x86_bool_to_bv(VARG(EFLAGS(DF)), size));
	val = LOGOR(SHIFTL0(val, UN(size, 1)), x86_bool_to_bv(VARG(EFLAGS(IF)), size));
	val = LOGOR(SHIFTL0(val, UN(size, 1)), x86_bool_to_bv(VARG(EFLAGS(TF)), size));

lower_half:
	if (size == 8) {
		val = x86_bool_to_bv(VARG(EFLAGS(SF)), size);
	} else {
		val = LOGOR(SHIFTL0(val, UN(size, 1)), x86_bool_to_bv(VARG(EFLAGS(ZF)), size));
	}
	val = LOGOR(SHIFTL0(val, UN(size, 1)), x86_bool_to_bv(VARG(EFLAGS(ZF)), size));
	val = LOGOR(SHIFTL0(val, UN(size, 2)), x86_bool_to_bv(VARG(EFLAGS(AF)), size));
	val = LOGOR(SHIFTL0(val, UN(size, 2)), x86_bool_to_bv(VARG(EFLAGS(PF)), size));
	val = LOGOR(SHIFTL0(val, UN(size, 1)), UN(size, 1));
	val = LOGOR(SHIFTL0(val, UN(size, 1)), x86_bool_to_bv(VARG(EFLAGS(CF)), size));

	return val;
}

/**
 * \brief Set the value of flags register
 *
 * \param val value to set the FLAGS register to
 * \param size size of \p val
 */
RzILOpEffect *x86_il_set_flags(RZ_OWN RzILOpPure *val, unsigned int size) {
	RzILOpEffect *set_val = SETL("_flags", val);

	RzILOpEffect *eff = SETG(EFLAGS(CF), LSB(VARL("_flags")));

	eff = SEQ2(eff, SETL("_flags", SHIFTR0(VARL("_flags"), U8(2))));
	eff = SEQ2(eff, SETG(EFLAGS(PF), LSB(VARL("_flags"))));
	eff = SEQ2(eff, SETL("_flags", SHIFTR0(VARL("_flags"), U8(2))));
	eff = SEQ2(eff, SETG(EFLAGS(AF), LSB(VARL("_flags"))));
	eff = SEQ2(eff, SETL("_flags", SHIFTR0(VARL("_flags"), U8(2))));
	eff = SEQ2(eff, SETG(EFLAGS(ZF), LSB(VARL("_flags"))));
	eff = SEQ2(eff, SETL("_flags", SHIFTR0(VARL("_flags"), U8(1))));
	eff = SEQ2(eff, SETG(EFLAGS(SF), LSB(VARL("_flags"))));

	if (size == 8) {
		return SEQ2(set_val, eff);
	}

	eff = SEQ2(eff, SETL("_flags", SHIFTR0(VARL("_flags"), U8(1))));
	eff = SEQ2(eff, SETG(EFLAGS(TF), LSB(VARL("_flags"))));
	eff = SEQ2(eff, SETL("_flags", SHIFTR0(VARL("_flags"), U8(1))));
	eff = SEQ2(eff, SETG(EFLAGS(IF), LSB(VARL("_flags"))));
	eff = SEQ2(eff, SETL("_flags", SHIFTR0(VARL("_flags"), U8(1))));
	eff = SEQ2(eff, SETG(EFLAGS(DF), LSB(VARL("_flags"))));
	eff = SEQ2(eff, SETL("_flags", SHIFTR0(VARL("_flags"), U8(1))));
	eff = SEQ2(eff, SETG(EFLAGS(OF), LSB(VARL("_flags"))));
	eff = SEQ2(eff, SETL("_flags", SHIFTR0(VARL("_flags"), U8(3))));
	eff = SEQ2(eff, SETG(EFLAGS(NT), LSB(VARL("_flags"))));

	/* Again, we will be ignoring bits over 16 and also ignore IOPL */

	return SEQ2(set_val, eff);
}

#include <rz_il/rz_il_opbuilder_end.h>
