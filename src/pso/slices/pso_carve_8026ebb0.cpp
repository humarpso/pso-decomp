#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjCityMainWarp__sub_80186AE4();
void *fn_802664A8(s32, s32, s32);
s32 TWindowOptionCtrl__sub_8026C610(void *);
void render__20TWindowShortListCtrlFv(void);

int TWindowShortListCtrl__sub_8026EBB0(void* a0 = 0, void* a1 = 0, void* a2 = 0) { return 0; }
void *TWindowShortListCtrl__sub_8026EC50(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r31;

    temp_r31 = fn_802664A8(arg1, 0x13, M2C_FIELD(arg0, s32 *, 0x24));
    TObjCityMainWarp__sub_80186AE4();
    M2C_FIELD(temp_r31, s32 *, 0x5C) = 0x01000000;
    TWindowOptionCtrl__sub_8026C610(temp_r31);
    TWindowShortListCtrl__sub_8026EBB0((void*)(arg0), (void*)(temp_r31), (void*)(arg2));
    return temp_r31;
}
void render__20TWindowShortListCtrlFv(void) {  }

}
