#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 free_singleton__19TWindowKeyBoardSoftFUis(u32 arg0, s16 arg1);
void init_layout__19TWindowKeyBoardSoftFPv(void* a0);
M2C_UNK __dl__FPv(u32);

extern u32 lbl_805D6420;

u32 free_singleton__19TWindowKeyBoardSoftFUis(u32 arg0, s16 arg1) {
    if (arg0 != 0U) {
        if ((u32) lbl_805D6420 == arg0) {
            lbl_805D6420 = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

    extern const float lbl_805DCC78;
    extern const float lbl_805DCC94;
void init_layout__19TWindowKeyBoardSoftFPv(void* a0) { *(float*)((char*)a0 + 0x0) = lbl_805DCC94; *(float*)((char*)a0 + 0x4) = lbl_805DCC94; *(float*)((char*)a0 + 0x8) = lbl_805DCC94; *(float*)((char*)a0 + 0xc) = lbl_805DCC94; *(float*)((char*)a0 + 0x10) = lbl_805DCC94; *(float*)((char*)a0 + 0x14) = lbl_805DCC94; *(float*)((char*)a0 + 0x18) = lbl_805DCC94; *(float*)((char*)a0 + 0x1c) = lbl_805DCC94; *(float*)((char*)a0 + 0x3c) = lbl_805DCC94; *(float*)((char*)a0 + 0x40) = lbl_805DCC94; *(float*)((char*)a0 + 0x44) = lbl_805DCC94; *(float*)((char*)a0 + 0x48) = lbl_805DCC94; *(float*)((char*)a0 + 0x20) = lbl_805DCC94; *(float*)((char*)a0 + 0x24) = lbl_805DCC94; *(float*)((char*)a0 + 0x28) = lbl_805DCC78; *(float*)((char*)a0 + 0x2c) = lbl_805DCC78; *(int*)((char*)a0 + 0x30) = 0; *(int*)((char*)a0 + 0x34) = -1; *(float*)((char*)a0 + 0x38) = lbl_805DCC94; }

}
