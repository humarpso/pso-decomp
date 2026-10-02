#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802F1AE0_lbl_804E4AD4 { M2C_UNK value; u8 remaining[0x14]; };

extern "C" {
extern const f32 lbl_805DEC98;
void TObjBoss2Tunnel__sub_802F1A58(u8 *arg0);
s32 TObjFish__sub_8001ED9C(void *, s32);
s32 get_bml_model(void *, s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804E4AD4[];
extern u8 *lbl_805D6950;
extern const f32 lbl_805DEC98;
extern const f32 lbl_805DEC9C;
u8 *TObjBoss2Tunnel__sub_802F1AE0(u8 *arg0, u8 *arg1, s32 arg2);
}

extern "C" {

void *TObjBoss2Tunnel__sub_802F1A88(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804E4AD4[];

void TObjBoss2Tunnel__sub_802F1A58(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + lbl_805DEC98);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x24);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x28);
    if (temp_f1 <= temp_f0) {
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) (temp_f0 - temp_f1);
    }
}

void *TObjBoss2Tunnel__sub_802F1A88(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E4AD4;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjBoss2Tunnel__sub_802F1AE0(u8 *arg0, u8 *arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802F1AE0_lbl_804E4AD4 *)&lbl_804E4AD4).value;
    M2C_FIELD(arg0, s32 *, 0x1C) = get_bml_model(lbl_805D6950, arg2 + 0x11);
    M2C_FIELD(arg0, s32 *, 0x20) = TObjFish__sub_8001ED9C(lbl_805D6950, arg2);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x20), u32 *, 4) - lbl_805DEC98);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805DEC9C;
    return arg0;
}

}
