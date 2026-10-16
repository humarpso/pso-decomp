#include "types.h"
#include "pso/player/TUnk_804B08BC.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 free_collision_body_parts(void *);
s32 unregister_object_by_id__13TUnk_804AF8A0Fv(s32 *);
s32 __dl__7TObjectFPv(void *);

extern s32 lbl_804B08BC[];

void *TUnk_804B08BC::destroy_ancient_container(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804B08BC;
        unregister_object_by_id__13TUnk_804AF8A0Fv((s32 *)this);
        free_collision_body_parts(this);
        destroy_container_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
