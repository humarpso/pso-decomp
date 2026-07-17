#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__10TEndingPicFv(s32 arg0);
M2C_UNK draw_current_pic__10TEndingPicFPv(s32);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 TEndingPic__data_805D6EE0;
extern s32 lbl_805D6EE4;

void render__10TEndingPicFv(s32 arg0) {
    if ((s32) TEndingPic__data_805D6EE0 != 0) {
        set_global_param__8TObjFishFi(lbl_805D6EE4);
        draw_current_pic__10TEndingPicFPv(arg0);
    }
}

}
