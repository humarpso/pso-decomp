#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TAdPlayerLoadGC__sub_801E1518(void *arg0, s32 arg1, u32 arg2);
extern s32 TAdPlayerLoadGC__data_805D5E40;
s32 get_load_result__15TAdPlayerLoadGCFv(void);
M2C_UNK TAdPlayerLoadGC__sub_801E101C(s32);
s32 TAdPlayerLoadGC__sub_80381C68(void *);
s32 TAdPlayerLoadGC__sub_80384B30(s32, M2C_UNK *, s32 *);
extern s32 TAdPlayerLoadGC__data_805D5E40;
extern s32 TAdPlayerLoadGC__data_805D5E30;
s32 TAdPlayerLoadGC__sub_801E1E38(s32 arg0);
M2C_UNK TAdPlayerLoadGC__sub_801E101C(s32);
s32 TAdPlayerLoadGC__sub_801E1E38(s32 arg0);
s32 TAdPlayerLoadGC__sub_801E0D8C(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 fn_803849D8(s32);
extern s32 TAdPlayerLoadGC__data_805D5E40;
extern s32 TAdPlayerLoadGC__data_805D5E30;
s32 PADInit(s32, s32 *, M2C_UNK *);
s32 check_memcard_status__15TAdPlayerLoadGCFi(s32 arg0);
extern s32 TAdPlayerLoadGC__data_805D5E40;
s32 query_memcard_capacity__15TAdPlayerLoadGCFi(s32 arg0);
s32 TAdPlayerLoadGC__sub_80386DC4();
extern s32 TAdPlayerLoadGC__data_805D5E40;
s32 poll_load_status__15TAdPlayerLoadGCFi(s32 arg0);
}

extern "C" {

void TAdPlayerLoadGC__sub_801E14E4(void);
int TAdPlayerLoadGC__sub_801E1510(void);
void poll_card_load__15TAdPlayerLoadGCFi(s32 arg0);
void reset_load_state__15TAdPlayerLoadGCFPvPv(void *arg0, void *arg1);
M2C_UNK TAdPlayerLoadGC__sub_801E101C(s32);
s32 TAdPlayerLoadGC__sub_80384B30(s32, M2C_UNK *, s32 *);
M2C_UNK TAdPlayerLoadGC__sub_803877F8();

void reset_load_state__15TAdPlayerLoadGCFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg1, s32 *, 0) = 0;
    TAdPlayerLoadGC__sub_803877F8();
}

extern s32 TAdPlayerLoadGC__data_805D5E30;
extern s32 TAdPlayerLoadGC__data_805D5E40;

void poll_card_load__15TAdPlayerLoadGCFi(s32 arg0) {
    M2C_UNK spC;
    s32 sp8;
    s32 temp_r3;

    TAdPlayerLoadGC__data_805D5E30 &= ~(0x400 << arg0);
    do {
        temp_r3 = TAdPlayerLoadGC__sub_80384B30(arg0, &spC, &sp8);
    } while (temp_r3 == -1);
    if (sp8 == 0x2000) {
        if ((temp_r3 == -3) || (temp_r3 == -2)) {
            TAdPlayerLoadGC__data_805D5E40 = -0x7D;
            return;
        }
        TAdPlayerLoadGC__sub_801E101C(arg0);
    }
}

void TAdPlayerLoadGC__sub_801E14E4(void) {  }

    extern int lbl_805D5E44;
int TAdPlayerLoadGC__sub_801E1510(void) {  return lbl_805D5E44; }
s32 TAdPlayerLoadGC__sub_801E1518(void *arg0, s32 arg1, u32 arg2) {
    return (s32) (((arg2 >> 0xDU) + 3) << 0xD) / 8192;
}
s32 get_load_result__15TAdPlayerLoadGCFv(void) {
    return TAdPlayerLoadGC__data_805D5E40;
}
s32 TAdPlayerLoadGC__sub_801E1E38(s32 arg0) {
    M2C_UNK spC;
    s32 sp8;
    s32 temp_r3;
    if (arg0 >= 2) {
        return 0;
    }
    if ((TAdPlayerLoadGC__data_805D5E30 & (0x400 << arg0)) && (TAdPlayerLoadGC__sub_80381C68((void *)(arg0)) == -5)) {
        TAdPlayerLoadGC__data_805D5E40 = -0x7D;
        return 1;
    }
    do {
        temp_r3 = TAdPlayerLoadGC__sub_80384B30(arg0, &spC, &sp8);
    } while (temp_r3 == -1);
    if (temp_r3 == -3) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return 0;
    }
    if (sp8 == 0x2000) {
        switch (temp_r3) {
        case 0:
            if (!(TAdPlayerLoadGC__data_805D5E30 & (4 << arg0))) {
                if (((s32)TAdPlayerLoadGC__sub_801E101C(arg0)) == 0) {
                    TAdPlayerLoadGC__data_805D5E40 = 0;
                    return 1;
                }
                return 1;
            }
            TAdPlayerLoadGC__data_805D5E40 = 0;
            return 1;
        }
        goto block_17;
    }
    TAdPlayerLoadGC__data_805D5E40 = -0xDF;
block_17:
    return 1;
}
s32 check_memcard_status__15TAdPlayerLoadGCFi(s32 arg0) {
    s32 temp_r3;
    if (arg0 >= 2) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    }
    if ((TAdPlayerLoadGC__sub_801E1E38((s32)(arg0)) == 0) || (TAdPlayerLoadGC__sub_801E1B50(arg0) != 0) || (TAdPlayerLoadGC__sub_801E0D8C(arg0) == 0)) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    }
    if (!(TAdPlayerLoadGC__data_805D5E30 & (4 << arg0)) && (((s32)TAdPlayerLoadGC__sub_801E101C(arg0)) != 0)) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    }
    temp_r3 = fn_803849D8(arg0);
    switch (temp_r3) {
    case -6:
    case -13:
        TAdPlayerLoadGC__data_805D5E40 = -0xFD;
        return -0xFD;
    case 0:
        TAdPlayerLoadGC__data_805D5E40 = 0;
        return 0;
    default:
        TAdPlayerLoadGC__data_805D5E40 = 0;
        return 0;
    }
}
s32 query_memcard_capacity__15TAdPlayerLoadGCFi(s32 arg0) {
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r3;
    if (arg0 >= 2) {
        return -0xFF;
    }
    if (check_memcard_status__15TAdPlayerLoadGCFi((s32)(arg0)) != 0) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFD;
        return -0xFD;
    }
    temp_r3 = PADInit(arg0, &spC, &sp8);
    switch (temp_r3) {
    case -3:
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    case -1:
        TAdPlayerLoadGC__data_805D5E40 = -1;
        return -1;
    case 0:
        TAdPlayerLoadGC__data_805D5E40 = 0;
        return spC / 8192;
    case -6:
    case -128:
        TAdPlayerLoadGC__data_805D5E40 = -0xFD;
        return -0xFD;
    default:
        TAdPlayerLoadGC__data_805D5E40 = -0xFD;
        return -0xFD;
    }
}
s32 poll_load_status__15TAdPlayerLoadGCFi(s32 arg0) {
    s32 temp_r3;
    if (arg0 >= 2) {
        TAdPlayerLoadGC__data_805D5E40 = -1;
        return -1;
    }
    temp_r3 = TAdPlayerLoadGC__sub_80386DC4();
    switch (temp_r3) {
    case -1:
        TAdPlayerLoadGC__data_805D5E40 = -1;
        return -1;
    case 0:
        TAdPlayerLoadGC__data_805D5E40 = 0;
        return 0;
    case -4:
        TAdPlayerLoadGC__data_805D5E40 = 0;
        return 0;
    default:
        TAdPlayerLoadGC__data_805D5E40 = -1;
        return -1;
    }
}

}
