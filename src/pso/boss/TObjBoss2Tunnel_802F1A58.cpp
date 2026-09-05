#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern const f32 lbl_805DEC98;
void TObjBoss2Tunnel__sub_802F1A58(u8 *arg0);
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

}
