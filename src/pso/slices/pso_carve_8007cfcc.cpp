#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_80076BBC();
s32 TAdPlayerLoadGC__sub_801E0D8C(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E0FA4(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1530(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
s32 check_memcard_status__15TAdPlayerLoadGCFi(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E2048(M2C_UNK, M2C_UNK *);
s32 query_memcard_capacity__15TAdPlayerLoadGCFi(M2C_UNK, M2C_UNK);
extern M2C_UNK TObjBoss2Tunnel__data_80438A08[];

s32 memcard_check_snapshot(s32 arg0, s32 *arg1) {
    s32 temp_r3;

    if (TAdPlayerLoadGC__sub_80076BBC() != 0) {
        return 0;
    }
    if (TAdPlayerLoadGC__sub_801E1E38(1) == 0) {
        if (arg1 != NULL) {
            *arg1 = -4;
        }
        return 0;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(1) == 0) {
        if (arg1 != NULL) {
            if ((u32)(TAdPlayerLoadGC__sub_801E1530(1) + 0x10000) == 0xff83U) {
                if (arg1 != NULL) {
                    *arg1 = -6;
                }
            } else if ((u32)(TAdPlayerLoadGC__sub_801E1530(1) + 0x10000) == 0xff21U) {
                if (arg1 != NULL) {
                    *arg1 = -8;
                }
            } else if (arg1 != NULL) {
                *arg1 = -2;
            }
        }
        return 0;
    }
    if (check_memcard_status__15TAdPlayerLoadGCFi(1) != 0) {
        if (arg1 != NULL) {
            *arg1 = -3;
        }
        return 0;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(1) != 0) {
        if (arg1 != NULL) {
            *arg1 = -2;
        }
        return 0;
    }
    temp_r3 = TAdPlayerLoadGC__sub_801E2048(1, TObjBoss2Tunnel__data_80438A08);
    if (temp_r3 == 0) {
        if (arg1 != NULL) {
            *arg1 = 1;
        }
        return 1;
    }
    if ((u32) (temp_r3 + 0x10000) == 0xff41U) {
        if (arg1 != NULL) {
            *arg1 = -9;
        }
        return 0;
    }
    if (arg0 != 1) {
        return 0;
    }
    if (TAdPlayerLoadGC__sub_801E0FA4(1) < 1) {
        if (arg1 != NULL) {
            *arg1 = -7;
        }
        return 0;
    }
    if (query_memcard_capacity__15TAdPlayerLoadGCFi(1, 0) < 0xF) {
        if (arg1 != NULL) {
            *arg1 = -1;
        }
        return 0;
    }
    if (arg1 != NULL) {
        *arg1 = 0;
    }
    return 1;
}

}
