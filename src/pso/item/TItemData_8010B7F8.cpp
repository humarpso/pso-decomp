#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TItemData__sub_8010B848(u8 *arg0, s32 arg1);
s32 TItemData__sub_8010B8B0(u8 *arg0);
}

extern "C" {

void TItemData__sub_8010B7F8(s16 *arg0, s32 arg1);
s32 TItemData__sub_8010B808(void* p);
s32 TItemData__sub_8010B810(void* p);
void TItemData__sub_8010B818(void *arg0, s32 arg1);
void TItemData__sub_8010C638(void *arg0, u16 arg1);
void add_s16__9TItemDataFPvi(s16 *arg0, s32 arg1);
void add_stat__9TItemDataFPvi(void *arg0, s32 arg1);
u16 get_packed_value__9TItemDataFPv(void *arg0);
int check_flag_32__14TItemEquipBaseFPv(void* p);
int clear_flag_c_bit5__14TItemEquipBaseFPv(void* p);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
s32 is_usable__9TItemDataFPv();
int set_flags__10TObjPlayerFPvUi(void*, int);

void TItemData__sub_8010B7F8(s16 *arg0, s32 arg1) {
    *arg0 -= arg1;
}
s32 TItemData__sub_8010B808(void* p) { return *(s32*)((char*)p + 0x31c); }
s32 TItemData__sub_8010B810(void* p) { return *(s32*)((char*)p + 0x318); }

void TItemData__sub_8010B818(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) + arg1);
}
void add_stat__9TItemDataFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + arg1);
}
void add_s16__9TItemDataFPvi(s16 *arg0, s32 arg1) {
    *arg0 += arg1;
}

void TItemData__sub_8010B848(u8 *arg0, s32 arg1) {
    u8 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u8 *, 0);
    switch ((s32) temp_r0) {
    case 0:
        M2C_FIELD(arg0, u8 *, 5) = (u8) (M2C_FIELD(arg0, u8 *, 5) | (arg1 & 0xF));
        return;
    case 1:
        M2C_FIELD(arg0, u8 *, 4) = (u8) (M2C_FIELD(arg0, u8 *, 4) | (arg1 & 0xF));
        return;
    case 3:
        M2C_FIELD(arg0, u8 *, 3) = (u8) (M2C_FIELD(arg0, u8 *, 3) | (arg1 & 0xF));
        return;
    case 2:
        return;
    }
}

s32 TItemData__sub_8010B8B0(u8 *arg0) {
    u8 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u8 *, 0);
    switch ((s32) temp_r0) {
    case 0:
        return M2C_FIELD(arg0, u8 *, 5) & 0xF;
    case 1:
        return M2C_FIELD(arg0, u8 *, 4) & 0xF;
    case 3:
        return M2C_FIELD(arg0, u8 *, 3) & 0xF;
    default:
    case 2:
        return 0;
    }
}

void TItemData__sub_8010C638(void *arg0, u16 arg1) {
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) (arg1 >> 8U);
    M2C_FIELD(arg0, u8 *, 0xB) = arg1;
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) (M2C_FIELD(arg0, u8 *, 0xA) | 0x80);
}

u16 get_packed_value__9TItemDataFPv(void *arg0) {
    if (is_usable__9TItemDataFPv() != 0) {
        return (u16) (((M2C_FIELD(arg0, u8 *, 0xA) << 8) & 0x7F00) | M2C_FIELD(arg0, u8 *, 0xB));
    }
    return 0U;
}

}
