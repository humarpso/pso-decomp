#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_warp_effect__12TObjWarpJungFii(s32 arg0, s32 arg1);
void set_global_render_param__12TObjWarpJungFv(void);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
s32 TObjFish__sub_8001EDC4(s32, s32);
int set_global_param__8TObjFishFi(void*);

    extern int lbl_805D5CB0;
void set_global_render_param__12TObjWarpJungFv(void) { set_global_param__8TObjFishFi((void*)(lbl_805D5CB0)); }

extern s32 lbl_805D5CA8;
extern s32 lbl_805D5CAC;

void render_warp_effect__12TObjWarpJungFii(s32 arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = TObjFish__sub_8001EDC4(lbl_805D5CA8, arg0);
    TObjDoor__sub_803DC894(temp_r3, lbl_805D5CAC, (f32) arg1);
}

}
