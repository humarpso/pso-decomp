#include "types.h"
#include "pso/misc/TUnk_804CCD78.h"
#include "pso/misc/TTecGiZonde.h"

struct RecoveredGlobal_8023CE54_lbl_804CCD78 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 spawn_particle_effect_with_flags(s32, s32, s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_804CCD78[];
u8 *construct_helper_effect__11TTecGiZondeFPvPvPvPvi(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4);
void *__dt__13TUnk_804CCD78Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 queue_destruction__7TObjectFv();

void TUnk_804CCD78::run_task() {
    this->m_38 = (s32) (this->m_38 + 1);
    if ((s32) this->m_38 >= 0x46) {
        queue_destruction__7TObjectFv();
    }
}

void *__dt__13TUnk_804CCD78Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CCD78;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8023CE54_lbl_804CCD78_size[sizeof(RecoveredGlobal_8023CE54_lbl_804CCD78) == 0x18 ? 1 : -1];
u8 *construct_helper_effect__11TTecGiZondeFPvPvPvPvi(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg3);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8023CE54_lbl_804CCD78 *)&lbl_804CCD78).value;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg1);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg2);
    *(s32 *)((s8 *)arg0 + 0x3C) = arg4;
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    spawn_particle_effect_with_flags((s32) (arg0 + 0x1C), *(s32 *)((s8 *)arg0 + 0x3C), 0x40);
    return arg0;
}

}
