#include "types.h"

extern "C" {

void *destroy_ancient_container__10TObjPlayerFPvs(void *arg0, s16 arg1);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(s32 *);
s32 __dl__7TObjectFPv(void *);
s32 destroy_container_object__10TObjPlayerFPvs(void *, s32);

extern s32 lbl_804B08BC[];

void *destroy_ancient_container__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804B08BC;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
