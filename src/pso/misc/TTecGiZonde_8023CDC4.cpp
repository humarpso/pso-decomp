#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8023CE54_lbl_804CCD78 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 spawn_particle_effect_with_flags(s32, s32, s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804CCD78[];
u8 *TTecGiZonde__sub_8023CE54(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4);
}

extern "C" {

void *TTecGiZonde__sub_8023CDFC(void *arg0, s16 arg1);
void tick_lifetime__11TTecGiZondeFPv(void *arg0);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv();

void tick_lifetime__11TTecGiZondeFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) >= 0x46) {
        queue_destruction__7TObjectFv();
    }
}

extern M2C_UNK lbl_804CCD78[];

void *TTecGiZonde__sub_8023CDFC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCD78;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8023CE54_lbl_804CCD78_size[sizeof(RecoveredGlobal_8023CE54_lbl_804CCD78) == 0x18 ? 1 : -1];
u8 *TTecGiZonde__sub_8023CE54(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8023CE54_lbl_804CCD78 *)&lbl_804CCD78).value;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg1);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg2);
    M2C_FIELD(arg0, s32 *, 0x3C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    spawn_particle_effect_with_flags((s32) (arg0 + 0x1C), M2C_FIELD(arg0, s32 *, 0x3C), 0x40);
    return arg0;
}

}
