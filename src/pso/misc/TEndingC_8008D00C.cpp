#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__8TEndingCFv(u8 *arg0);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_803DEEAC();
M2C_UNK TWindowSubComCard__sub_803DEECC(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(M2C_UNK, s32, f32);

extern M2C_UNK lbl_8048EB30[];
extern const f32 lbl_805D95C0;
extern const f32 lbl_805D95C4;
extern const f32 lbl_805D95C8;

void render__8TEndingCFv(u8 *arg0) {
    set_global_param__8TObjFishFi(lbl_8048EB30);
    TWindowSubStatusDisp__sub_803DEE6C(1);
    TWindowSubStatusDisp__sub_803DF160(1, ((s32) (lbl_805D95C0 * M2C_FIELD(arg0, f32 *, 0x28)) << 0x18) | 0xFF0000 | 0xFFFF, lbl_805D95C0);
    TWindowSubComCard__sub_803DEECC(arg0 + 0x30, lbl_805D95C4);
    TWindowSubComCard__sub_803DEECC(arg0 + 0x50, lbl_805D95C4);
    TWindowSubStatusDisp__sub_803DF160(0, ((s32) (lbl_805D95C0 * M2C_FIELD(arg0, f32 *, 0x2C)) << 0x18) | 0xFF0000 | 0xFFFF, lbl_805D95C0);
    TWindowSubComCard__sub_803DEECC(arg0 + 0x70, lbl_805D95C8);
    TWindowSubStatusDisp__sub_803DEEAC();
}

}
