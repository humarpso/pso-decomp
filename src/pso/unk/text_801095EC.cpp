#include "types.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_801095EC___vt__15TItemEffLandHit {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void disallow_rendering__7TObjectFv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_801095EC___vt__15TItemEffLandHit __vt__15TItemEffLandHit;
extern s32 TItemEffLandHit__class_name;
u8 *TItemEffLandHit__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4);
}

extern "C" {

typedef char RecoveredGlobal_801095EC___vt__15TItemEffLandHit_size[sizeof(RecoveredGlobal_801095EC___vt__15TItemEffLandHit) == 0x18 ? 1 : -1];
u8 *TItemEffLandHit__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, u8 *arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__15TItemEffLandHit.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TItemEffLandHit__class_name;
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg4);
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg3);
    *(s32 *)((s8 *)arg0 + 0x34) = ((TObjPlayer *)arg2)->get_field_d8();
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
