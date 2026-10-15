#include "types.h"

extern "C" {

void *TItemLoad__sub_8010F3D8(void *arg0, s16 arg1);
s32 reset_ring_state__9TItemLoadFv(s32);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
s32 free_texture_if_valid(void *, void *);

extern s32 lbl_8049F3F4[];
extern s32 item_texture_archive_loader;
extern s32 item_model_chunk_loader;

void *TItemLoad__sub_8010F3D8(void *arg0, s16 arg1) {
    s32 temp_r0;
    void **temp_r3;

    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8049F3F4;
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x20);
        switch (temp_r0) {
        case 2:
            reset_ring_state__9TItemLoadFv(item_model_chunk_loader);
            break;
        case 3:
            reset_ring_state__9TItemLoadFv(item_texture_archive_loader);
            break;
        }
        temp_r3 = *(void ***)((s8 *)arg0 + 0x3C);
        if ((temp_r3 != NULL) && ((u32) *(u32 *)((s8 *)(*temp_r3) + 8) != 0U)) {
            free_texture_if_valid(temp_r3, *temp_r3);
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
