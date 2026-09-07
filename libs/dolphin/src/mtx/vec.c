#include <dolphin.h>
#include <dolphin/mtx.h>

#define qr0 0

asm void PSVECAdd(register Vec* a, register Vec* b, register Vec* c) {
#include "orig_asm/mtx/vec/PSVECAdd.inc"
}

asm void PSVECSubtract(register Vec* a, register Vec* b, register Vec* c) {
#include "orig_asm/mtx/vec/PSVECSubtract.inc"
}

asm void PSVECScale(register Vec* src, register Vec* dst, register f32 mult) {
#include "orig_asm/mtx/vec/PSVECScale.inc"
}

void PSVECNormalize(const register Vec* vec1, register Vec* dst)
{
	register float c_half  = 0.5f;
	register float c_three = 3.0f;
	register float v1_xy;
	register float v1_z;
	register float xx_zz;
	register float xx_yy;
	register float sqsum;
	register float rsqrt;
	register float nwork0;
	register float nwork1;

	asm {
}
}

asm float PSVECMag(register Vec* v) {
#include "orig_asm/mtx/vec/PSVECMag.inc"
}

asm f32 PSVECDotProduct(register Vec* vec1, register Vec* vec2) {
#include "orig_asm/mtx/vec/PSVECDotProduct.inc"
}

asm void PSVECCrossProduct(register Vec* vec1, register Vec* vec2,
                           register Vec* dst) {
#include "orig_asm/mtx/vec/PSVECCrossProduct.inc"
}

asm f32 PSVECSquareDistance(register Vec* vec1, register Vec* vec2) {
#include "orig_asm/mtx/vec/PSVECSquareDistance.inc"
}

asm f32 PSVECDistance(register Vec* vec1, register Vec* vec2) {
#include "orig_asm/mtx/vec/PSVECDistance.inc"
}
