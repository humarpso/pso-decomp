#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__11TMainCursorFPv(u8 *arg0);
M2C_UNK update_photon_chair__11TMainCursorFi(void *);
M2C_UNK update_chair__11TMainCursorFPv(void *);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, M2C_UNK);
M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();
M2C_UNK fn_8023601C(void *, M2C_UNK *, f32);
M2C_UNK fn_803D8C7C(M2C_UNK, M2C_UNK *);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();

extern u8 *lbl_805D4DF0;
extern const f32 TMainCursor__data_805DB0C0;

void render__11TMainCursorFPv(u8 *arg0) {
    M2C_UNK sp8;
    f32 temp_f31;

    fn_801E2EFC();
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x30);
    fn_803D9B2C();
    fn_8023601C(arg0 + 0x40, &sp8, M2C_FIELD(arg0, f32 *, 0x2C));
    fn_803D8C7C(0, &sp8);
    fn_803D9214(0, M2C_FIELD(lbl_805D4DF0, s32 *, 0x194));
    fn_803D9B2C();
    TObjBoss2Tunnel__sub_803D929C(0, 0x2AAA);
    fn_803D9624(0, TMainCursor__data_805DB0C0, temp_f31, TMainCursor__data_805DB0C0);
    update_photon_chair__11TMainCursorFi(arg0);
    update_chair__11TMainCursorFPv(arg0);
    fn_803D9B78();
    fn_803D9B2C();
    TObjBoss2Tunnel__sub_803D929C(0, 0x7FFF);
    fn_803D9624(0, TMainCursor__data_805DB0C0, temp_f31, TMainCursor__data_805DB0C0);
    update_photon_chair__11TMainCursorFi(arg0);
    update_chair__11TMainCursorFPv(arg0);
    fn_803D9B78();
    fn_803D9B2C();
    TObjBoss2Tunnel__sub_803D929C(0, 0xD554);
    fn_803D9624(0, TMainCursor__data_805DB0C0, temp_f31, TMainCursor__data_805DB0C0);
    update_photon_chair__11TMainCursorFi(arg0);
    update_chair__11TMainCursorFPv(arg0);
    fn_803D9B78();
    fn_803D9B78();
    fn_801E2F20();
}

}
