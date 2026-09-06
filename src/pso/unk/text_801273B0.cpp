#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void draw_status_icons__10TObjPlayerFPvPvPv(void *, void *, void *);
void TObjPlayer__sub_801274F8(u8 *arg0);
extern const f32 lbl_805DADD0;
extern const f32 lbl_805DADD4;
void TObjPlayer__sub_80127460(void *arg0);
u8 * TObjPlayer__sub_80127520(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_801275E4(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80127460(void *arg0) {
    s32 temp_r4;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x218) != -1) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x21C);
        if (lbl_805DADD0 < (f32) temp_r4) {
            M2C_FIELD(arg0, s32 *, 0x21C) = (s32) ((f32) temp_r4 - lbl_805DADD4);
            if ((f32) M2C_FIELD(arg0, s32 *, 0x21C) < lbl_805DADD0) {
                M2C_FIELD(arg0, s32 *, 0x21C) = 0;
            }
        }
    }
}

void TObjPlayer__sub_801274F8(u8 *arg0) {
    draw_status_icons__10TObjPlayerFPvPvPv(arg0, arg0 + 0x1F8, arg0 + 0x204);
}
u8 *TObjPlayer__sub_801275E4(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x220));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_80127520(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

}
