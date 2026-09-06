#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 TBoss8Dragon__sub_803D64C0(void *);
f32 TBoss8Dragon__sub_803D64DC(void *);
extern const f32 lbl_805DF924;
void TBoss8Dragon__sub_803369C8(M2C_UNK arg0, u8 *arg1, u8 *arg2, s32 arg3, f32 farg0);
}

extern "C" {

void TLobby__sub_80336D98(void *arg0);
void *TLobby__sub_80336DA8(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_803369C8(M2C_UNK arg0, u8 *arg1, u8 *arg2, s32 arg3, f32 farg0) {
    f32 temp_f31;
    f32 temp_f5;
    temp_f31 = farg0 * TBoss8Dragon__sub_803D64C0((void *) (arg3));
    temp_f5 = farg0 * TBoss8Dragon__sub_803D64DC((void *) (arg3));
    M2C_FIELD(arg1, f32 *, 0) = (f32) ((lbl_805DF924 * (temp_f31 - temp_f5)) + M2C_FIELD(arg2, f32 *, 0));
    M2C_FIELD(arg1, f32 *, 4) = (f32) -((lbl_805DF924 * (temp_f31 + temp_f5)) - M2C_FIELD(arg2, f32 *, 4));
    M2C_FIELD(arg1, f32 *, 0xC) = temp_f5;
    M2C_FIELD(arg1, f32 *, 0x10) = temp_f31;
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) -temp_f31;
    M2C_FIELD(arg1, f32 *, 0x18) = temp_f5;
}
#pragma pop

void TLobby__sub_80336D98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
}

extern M2C_UNK lbl_804EEF80[];

void *TLobby__sub_80336DA8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EEF80;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
