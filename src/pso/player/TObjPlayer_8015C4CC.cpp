#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(s32 *);
s32 __dl__7TObjectFPv(void *);
s32 destroy_container_object__10TObjPlayerFs(void *, s32);

extern s32 lbl_804B08BC[];

void *TObjPlayer::destroy_ancient_container(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804B08BC;
        unregister_object_by_id((s32 *)this);
        free_collision_body_parts(this);
        destroy_container_object__10TObjPlayerFs(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
