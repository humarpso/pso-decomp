#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_status_window__15TAdMcSelectMcGCFPv(u8 *arg0);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TWindowSubComCard__sub_803DEECC(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(int);
M2C_UNK TWindowSubStatusDisp__sub_803DEEAC();
M2C_UNK TWindowSubStatusDisp__sub_803DF160(int, int);

extern s32 TAdMcSelectMcGC__data_805D6C98;
extern const f32 lbl_805DF748;

void draw_status_window__15TAdMcSelectMcGCFPv(u8 *arg0) {
    TWindowSubStatusDisp__sub_803DEE6C((int) (1));
    set_global_param__8TObjFishFi((void *) (TAdMcSelectMcGC__data_805D6C98));
    TWindowSubStatusDisp__sub_803DF160((int) (0), (int) ((M2C_FIELD(arg0, s32 *, 0x120) << 0x18) | 0xFF0000 | 0xFFFF));
    TWindowSubComCard__sub_803DEECC((void *) (arg0 + 0x20), (f32) (lbl_805DF748));
    TWindowSubStatusDisp__sub_803DEEAC();
}

}
