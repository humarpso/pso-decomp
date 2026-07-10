#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void parse_action_packet__11TBoss6Type2FPvPv(void *arg0, void *arg1);
M2C_UNK TBoss6Type2__sub_802BD6D0(void *, s32, s32);
M2C_UNK fn_8032E710(s32, u16);

void parse_action_packet__11TBoss6Type2FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x478) = (u8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, s32 *, 0x47C) = (s32) (s8) M2C_FIELD(arg1, u8 *, 9);
    TBoss6Type2__sub_802BD6D0(arg0, M2C_FIELD(arg1, s8 *, 0xA), M2C_FIELD(arg1, s8 *, 0xB));
    M2C_FIELD(arg0, u16 *, 0x464) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0x466) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xD);
    M2C_FIELD(arg0, u16 *, 0x468) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xE);
    M2C_FIELD(arg0, u16 *, 0x46A) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xF);
    if ((u16) M2C_FIELD(arg0, u16 *, 0x464) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x466) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x466) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x468) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x468) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x46A) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x46A) = 0xFFFFU;
    }
    fn_8032E710(M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, u16 *, 0x468));
    fn_8032E710(M2C_FIELD(arg0, s32 *, 0x414), M2C_FIELD(arg0, u16 *, 0x46A));
}

}
