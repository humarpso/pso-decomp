#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__9TDeadSpotFv(u8 *arg0);
s32 fn_8001A430();
M2C_UNK fn_801418C4(M2C_UNK);
M2C_UNK fn_80141A30();
f32 fn_80141CF8(void *, s32);
M2C_UNK fn_80141F1C();
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803DA7A8(s32);
M2C_UNK fn_803E29B0(void *, M2C_UNK, M2C_UNK);

extern s32 lbl_805D4DF0;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DA38C;
extern const f32 lbl_805DA39C;

void render__9TDeadSpotFv(u8 *arg0) {
    if ((fn_8001A430() != 1) && (M2C_FIELD(arg0, f32 *, 0xC4) > lbl_805DA38C) && (fn_80141CF8(arg0 + 0x7C, lbl_805D4DF0 + 0x178) < lbl_805DA39C)) {
        lbl_805D5660 = some_id_805c6f74;
        fn_80141F1C();
        fn_801418C4(0x8F);
        fn_803DA798(M2C_FIELD(arg0, s32 *, 0xB8));
        fn_803DA7A8(M2C_FIELD(arg0, s32 *, 0xBC));
        fn_803E29B0(arg0 + 0x1C, 4, 1);
        fn_80141A30();
        some_id_805c6f74 = lbl_805D5660;
    }
}

}
