#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemLoad__sub_8010F3D8(void *arg0, s16 arg1);
M2C_UNK reset_ring_state__9TItemLoadFPv(s32);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK free_texture_if_valid(void *, void *);

extern M2C_UNK lbl_8049F3F4[];
extern s32 item_texture_archive_loader;
extern s32 item_model_chunk_loader;

void *TItemLoad__sub_8010F3D8(void *arg0, s16 arg1) {
    s32 temp_r0;
    void **temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F3F4;
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
        switch (temp_r0) {
        case 2:
            reset_ring_state__9TItemLoadFPv(item_model_chunk_loader);
            break;
        case 3:
            reset_ring_state__9TItemLoadFPv(item_texture_archive_loader);
            break;
        }
        temp_r3 = M2C_FIELD(arg0, void ***, 0x3C);
        if ((temp_r3 != NULL) && ((u32) M2C_FIELD(*temp_r3, u32 *, 8) != 0U)) {
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
