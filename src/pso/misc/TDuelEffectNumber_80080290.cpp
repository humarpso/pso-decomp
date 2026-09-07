#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80080438_lbl_80438DD4 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void TDuelEffectNumber__sub_800802F8(void *, void *, f32);
extern RecoveredGlobal_80080438_lbl_80438DD4 lbl_80438DD4;
void TDuelEffectNumber__sub_80080438(u8 *arg0, f32 farg0);
}

extern "C" {

void *__ct__17TDuelEffectNumberFv(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__17TDuelEffectNumber[];
extern void *lbl_805D28E0;

void *__ct__17TDuelEffectNumberFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TDuelEffectNumber;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D28E0;
    M2C_FIELD(arg0, f32 *, 0x1C) = M2C_FIELD(arg2, f32 *, 0x0);
    M2C_FIELD(arg0, f32 *, 0x20) = M2C_FIELD(arg2, f32 *, 0x4);
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    return arg0;
}
typedef char RecoveredGlobal_80080438_lbl_80438DD4_size[sizeof(RecoveredGlobal_80080438_lbl_80438DD4) == 0x18 ? 1 : -1];
void TDuelEffectNumber__sub_80080438(u8 *arg0, f32 farg0) {
    TDuelEffectNumber__sub_800802F8(arg0, &lbl_80438DD4.value, farg0);
}

}
