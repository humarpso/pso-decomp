#include "types.h"
#include "pso/unk/TPhotonFarlla.h"

extern "C" {

void *destroy__13TPhotonFarllaFPvs(void *arg0, s16 arg1);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(void *);
s32 __dl__7TObjectFPv(void *);
s32 destroy_photon_motion_object(void *, s32);
s32 free_photon__13TUnk_804C3248Fv(void *);

extern s32 lbl_804C3564[];

void *destroy__13TPhotonFarllaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804C3564;
        ((TPhotonFarlla *)arg0)->update_if_active();
        free_photon__13TUnk_804C3248Fv(arg0);
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_photon_motion_object(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
