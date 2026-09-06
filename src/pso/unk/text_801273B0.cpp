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

}
