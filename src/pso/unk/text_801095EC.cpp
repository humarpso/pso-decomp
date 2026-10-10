#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801095EC___vt__15TItemEffLandHit {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void disallow_rendering__7TObjectFv(void *);
s32 get_field_d8__10TObjPlayerFPv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_801095EC___vt__15TItemEffLandHit __vt__15TItemEffLandHit;
extern s32 TItemEffLandHit__class_name;
u8 *TItemEffLandHit__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4);
}

extern "C" {

typedef char RecoveredGlobal_801095EC___vt__15TItemEffLandHit_size[sizeof(RecoveredGlobal_801095EC___vt__15TItemEffLandHit) == 0x18 ? 1 : -1];
u8 *TItemEffLandHit__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__15TItemEffLandHit.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TItemEffLandHit__class_name;
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg4);
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg3);
    M2C_FIELD(arg0, s32 *, 0x34) = get_field_d8__10TObjPlayerFPv(arg2);
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
