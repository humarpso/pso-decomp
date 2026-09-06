#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80332594 {
    M2C_UNK sp8;
    f32 spC;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u8 * csnVectorUnder(s32, void *, s32);
void set_active__12TObjEneReconFv(void);
extern s32 lbl_805D53A4;
extern const f32 TObjEneMorfos__data_805DF870;
void TObjEneMorfos__sub_80332594(u8 *arg0);
}

extern "C" {

void* TObjEneMorfosArm__sub_803326B4(void* p);
s32 TObjEneMorfosArm__sub_803326BC(void* p);
int TObjEneMorfos__sub_8033263C(void);
void TObjEneMorfos__vt103(void* p);
void TWindowSubTradeMain__sub_803323A8(void* p);
void TWindowSubTradeMain__sub_803323B8(void* p);
void TWindowSubTradeMain__sub_803323C8(void* p);
int TObjEneMorfos__sub_8033471C(void*);
int get_target_info__9TObjEneDDFPv(void*);

void TWindowSubTradeMain__sub_803323A8(void* p) { *(u16*)((char*)p + 0x60) |= 0x40; }
void TWindowSubTradeMain__sub_803323B8(void* p) { *(u16*)((char*)p + 0x60) &= 0xffffffbf; }
void TWindowSubTradeMain__sub_803323C8(void* p) { *(u16*)((char*)p + 0x70) &= 0xfffffffb; }

void TObjEneMorfos__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneMorfos__sub_8033471C(p); } }

void TObjEneMorfos__sub_80332594(u8 *arg0) {
    Stack_80332594 stack;
    u8 *temp_r3;
    if ((lbl_805D53A4 % 5) == 0) {
        VecCopy__FP3VecPC3Vec(&stack.sp8, arg0 + 0x38);
        stack.spC += TObjEneMorfos__data_805DF870;
        temp_r3 = (u8 *)(csnVectorUnder((s32) &stack.sp8, arg0 + 0x120, 0x4000));
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) M2C_FIELD(temp_r3, s32 *, 0);
            VecCopy__FP3VecPC3Vec(arg0 + 0x3C8, M2C_FIELD(temp_r3, u8 **, 4));
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x3C8, arg0 + 0x38);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x4000) {
        set_active__12TObjEneReconFv();
    }
}

int TObjEneMorfos__sub_8033263C(void) { return 0; }

void* TObjEneMorfosArm__sub_803326B4(void* p) { return (char*)p + 0x4a4; }
s32 TObjEneMorfosArm__sub_803326BC(void* p) { return *(s32*)((char*)p + 0x60); }

}
