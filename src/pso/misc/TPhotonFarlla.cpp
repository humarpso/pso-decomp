#include "types.h"
#include "pso/misc/PhotonBlastSummon.h"
#include "pso/misc/TUnk_804C3248.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TPhotonFarlla.h"

extern "C" {

s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);

extern s32 lbl_804C3564[];

void *destroy__13TPhotonFarllaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804C3564;
        ((TPhotonFarlla *)arg0)->update_if_active();
        ((TUnk_804C3248 *)arg0)->free_photon();
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        destroy_photon_motion_object(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
