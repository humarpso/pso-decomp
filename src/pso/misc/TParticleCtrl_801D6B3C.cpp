#include "types.h"

extern "C" {

u32 validate_ctrl__13TParticleCtrlFPv(void *arg0);
s32 check_value_equals__13TQuestColCtrlFPvi(s32, s32);

extern s32 TParticleCtrl__class_name_descriptor;

u32 validate_ctrl__13TParticleCtrlFPv(void *arg0) {
    if (((u32) *(u32 *)((s8 *)arg0 + 4) != 0U) && (check_value_equals__13TQuestColCtrlFPvi(*(s32 *)((s8 *)arg0 + 4), TParticleCtrl__class_name_descriptor) == 0)) {
        *(u32 *)((s8 *)arg0 + 4) = 0U;
    }
    return *(u32 *)((s8 *)arg0 + 4);
}

}
