#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/TParticleCtrl.h"

extern "C" {

s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);

extern s32 lbl_804B9870[];

void *TParticleCtrl::destroy_particle(void *arg0, s16 arg1) {
    void *obj = arg0;
    u16 temp_r0;

    if (obj != NULL) {
        *(s32 **)((s8 *)obj + 0x18) = lbl_804B9870;
        if ((u32) *(u32 *)((s8 *)obj + 0x80) != 0U) {
            temp_r0 = ((TUnk_804B9870 *)obj)->m_1c;
            if ((temp_r0 >= 0x4000U) && (temp_r0 < 0xFFFFU)) {
                ((TUnk_804B9870 *)obj)->mask_object_set_row_flags(-3);
                *(u32 *)((s8 *)obj + 0x80) = 0U;
            }
        }
        __dt__7TObjectFv(obj, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(obj);
        }
    }
    return obj;
}

}
