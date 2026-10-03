#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern u8 *lbl_805D553C;
s32 TItemData__sub_8010EEC8(s32 arg0);
s32 get_text_collection(s32 arg0);
}

extern "C" {

void TItemData__sub_8010EDA8(void *arg0, s32 arg1);
void add_quantity__9TItemDataFPvi(void *arg0, s32 arg1);
void TItemData__sub_8010EDC8(void *arg0, s32 arg1);
void TItemData__sub_8010EDD8(void *arg0, s32 arg1);
void adjust_count__9TItemDataFPvi(void *arg0, s32 arg1);
void add_stat_ptr__9TItemDataFPvi(s16 *arg0, s32 arg1);
void add_bonus__9TItemDataFPvs(void *arg0, s16 arg1);
void TItemData__sub_8010EE1C(void *arg0, s16 arg1);
void TItemData__sub_8010EE30(s16 *arg0, s32 arg1);
s16 TItemData__sub_8010EE40(void *arg0);
s16 get_stat_percent__9TItemDataFPv(void *arg0);
s16 get_level__9TItemDataFPv(void *arg0);
s16 get_percent__9TItemDataFPv(void *arg0);
void update_player_field__9TItemDataFi(s32 arg0);
s32 TObjPlayer__sub_801AFDB0();
M2C_UNK TObjPlayer__sub_803373D0(s32, s32);

void TItemData__sub_8010EDA8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = (s16) (M2C_FIELD(arg0, s16 *, 8) + arg1);
}

void add_quantity__9TItemDataFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) (M2C_FIELD(arg0, s16 *, 0xA) + arg1);
}

void TItemData__sub_8010EDC8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 6) = (s16) (M2C_FIELD(arg0, s16 *, 6) + arg1);
}

void TItemData__sub_8010EDD8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) + arg1);
}

void adjust_count__9TItemDataFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + arg1);
}

void add_stat_ptr__9TItemDataFPvi(s16 *arg0, s32 arg1) {
    *arg0 += arg1;
}

void add_bonus__9TItemDataFPvs(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + arg1);
}

void TItemData__sub_8010EE1C(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - arg1);
}

void TItemData__sub_8010EE30(s16 *arg0, s32 arg1) {
    *arg0 -= arg1;
}

s16 TItemData__sub_8010EE40(void *arg0) {
    return (s16) ((s16) M2C_FIELD(arg0, s16 *, 0xA) / 100);
}

s16 get_stat_percent__9TItemDataFPv(void *arg0) {
    return (s16) ((s16) M2C_FIELD(arg0, s16 *, 4) / 100);
}

s16 get_level__9TItemDataFPv(void *arg0) {
    return (s16) ((s16) M2C_FIELD(arg0, s16 *, 8) / 100);
}

s16 get_percent__9TItemDataFPv(void *arg0) {
    return (s16) ((s16) M2C_FIELD(arg0, s16 *, 6) / 100);
}

void update_player_field__9TItemDataFi(s32 arg0) {
    TObjPlayer__sub_803373D0(arg0 + 0x374, TObjPlayer__sub_801AFDB0());
}
s32 TItemData__sub_8010EEC8(s32 arg0) {
    return M2C_FIELD(M2C_FIELD(lbl_805D553C, s32 *, 4), M2C_UNK *, (arg0 * 4));
}
s32 get_text_collection(s32 arg0) {
    return M2C_FIELD(*(*(s32 * *)&lbl_805D553C), M2C_UNK *, (arg0 * 4));
}

}
