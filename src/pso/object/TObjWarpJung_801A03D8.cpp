#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void free_children__12TObjDoorJungFPvPv(void *, u16);
extern void *lbl_8050DDC8[];
extern s32 lbl_805D5CBC;
extern s32 lbl_805D5CC0;
s32 TObjWarpJung__sub_801A0404(s32 arg0);
}

extern "C" {

void render_warp__12TObjWarpJungFPv(void* a0);
s32 update_warp_display__12TObjWarpJungFv(void);
M2C_UNK scroll_ginja_mesh_uvs(s32, M2C_UNK, M2C_UNK, u16, M2C_UNK);
int draw_ginja_object(void);
int get_bml_model(void*, void*);

    extern int lbl_805D5CA8;
void render_warp__12TObjWarpJungFPv(void* a0) { get_bml_model((void*)(lbl_805D5CA8), a0); draw_ginja_object(); }

extern s32 lbl_805D53A4;
extern s32 lbl_805D5CB4;
extern s32 lbl_805D5CB8;
extern s32 lbl_805D5CC4;

s32 TObjWarpJung__sub_801A0404(s32 arg0) {
    s32 i;
    switch (arg0) {
    case 0:
        if (lbl_805D5CBC >= 0) {
            for (i = 0; i < 6; i++) {
                free_children__12TObjDoorJungFPvPv(lbl_8050DDC8[i], lbl_805D5CBC);
            }
        }
        break;
    case 1:
        if (lbl_805D5CC0 >= 0) {
            for (i = 0; i < 6; i++) {
                free_children__12TObjDoorJungFPvPv(lbl_8050DDC8[i], lbl_805D5CC0);
            }
        }
        break;
    }
    return 1;
}

s32 update_warp_display__12TObjWarpJungFv(void) {
    if ((s32) lbl_805D53A4 != (s32) lbl_805D5CB4) {
        lbl_805D5CB4 = lbl_805D53A4;
        if ((s32) lbl_805D5CC4 >= 0) {
            scroll_ginja_mesh_uvs(lbl_805D5CB8, 0, 5, (u16) lbl_805D5CC4, 1);
            return 1;
        }
    }
    return 0;
}

}
