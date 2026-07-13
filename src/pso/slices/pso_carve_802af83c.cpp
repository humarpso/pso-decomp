#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK fn_80141A30();
f32 TObjPlayer__sub_80141CF8(void *, void *);
M2C_UNK TObjPlayer__sub_80141F1C();
M2C_UNK TObjFish__sub_803DA798(void *);
M2C_UNK TParticleCtrl__sub_803DA7A8(int);
M2C_UNK fn_803E29B0(void *, int, int);
extern s32 lbl_805D4DF0;
extern s32 lbl_805D5660;
extern s32 lbl_805D6710;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DE1F8;

void render__16TPlayerFootStampFv(u8 *arg0) {
    if (TObjPlayer__sub_80141CF8((void *) (arg0 + 0x7C), (void *) (lbl_805D4DF0 + 0x178)) < lbl_805DE1F8) {
        lbl_805D5660 = some_id_805c6f74;
        TObjPlayer__sub_80141F1C();
        TObjFish__sub_803DA798((void *) (lbl_805D6710));
        TParticleCtrl__sub_803DA7A8((int) (M2C_FIELD(arg0, s16 *, 0xBE)));
        set_depth_buffer_settings_1__Fv();
        fn_803E29B0((void *) (arg0 + 0x1C), (int) (4), (int) (1));
        fn_80141A30();
        some_id_805c6f74 = lbl_805D5660;
    }
}

}
