#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801E14E8_TAdPlayerLoadGC__data_80511ED0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 TAdPlayerLoadGC__sub_801E1518(void *arg0, s32 arg1, u32 arg2);
extern s32 TAdPlayerLoadGC__data_805D5E40;
M2C_UNK TAdPlayerLoadGC__sub_801E101C(s32);
s32 CARDGetResultCode(void *);
s32 CARDProbeEx(s32, M2C_UNK *, s32 *);
extern s32 TAdPlayerLoadGC__data_805D5E40;
extern s32 TAdPlayerLoadGC__data_805D5E30;
s32 TAdPlayerLoadGC__sub_801E1E38(s32 arg0);
M2C_UNK TAdPlayerLoadGC__sub_801E101C(s32);
s32 TAdPlayerLoadGC__sub_801E1E38(s32 arg0);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 CARDCheck(s32);
extern s32 TAdPlayerLoadGC__data_805D5E40;
extern s32 TAdPlayerLoadGC__data_805D5E30;
s32 CARDFreeBlocks(s32, s32 *, M2C_UNK *);
s32 check_memcard_status__15TAdPlayerLoadGCFi(s32 arg0);
extern s32 TAdPlayerLoadGC__data_805D5E40;
s32 query_memcard_capacity__15TAdPlayerLoadGCFi(s32 arg0);
s32 TAdPlayerLoadGC__sub_80386DC4();
extern s32 TAdPlayerLoadGC__data_805D5E40;
s32 poll_load_status__15TAdPlayerLoadGCFi(s32 arg0);
M2C_UNK TAdPlayerLoadGC__sub_801E101C(s32);
s32 get_load_result__15TAdPlayerLoadGCFv(void *);
s32 CARDGetResultCode(void *);
s32 CARDCheckAsync(void *, int);
s32 CARDProbeEx(s32, M2C_UNK *, s32 *);
extern s32 TAdPlayerLoadGC__data_805D5E30;
extern s32 TAdPlayerLoadGC__data_805D5E40;
s32 TAdPlayerLoadGC__sub_801E0D8C(s32 arg0);
extern RecoveredGlobal_801E14E8_TAdPlayerLoadGC__data_80511ED0 TAdPlayerLoadGC__data_80511ED0;
extern s32 TAdPlayerLoadGC__data_805D5E38;
void TAdPlayerLoadGC__sub_801E14E8(u8 *arg0, s32 arg1);
void xfree__FPv(void *);
extern RecoveredGlobal_801E14E8_TAdPlayerLoadGC__data_80511ED0 TAdPlayerLoadGC__data_80511ED0;
extern s32 TAdPlayerLoadGC__data_805D5E38;
void TAdPlayerLoadGC__sub_801E1350(void);
}

extern "C" {

void TAdPlayerLoadGC__sub_801E14E4(void);
int TAdPlayerLoadGC__sub_801E1510(void);
void poll_card_load__15TAdPlayerLoadGCFi(s32 arg0);
void reset_load_state__15TAdPlayerLoadGCFPvPv(void *arg0, void *arg1);
M2C_UNK TAdPlayerLoadGC__sub_801E101C(s32);
s32 CARDProbeEx(s32, M2C_UNK *, s32 *);
M2C_UNK CARDGetSerialNo();

void reset_load_state__15TAdPlayerLoadGCFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg1, s32 *, 0) = 0;
    CARDGetSerialNo();
}

extern s32 TAdPlayerLoadGC__data_805D5E30;
extern s32 TAdPlayerLoadGC__data_805D5E40;

void poll_card_load__15TAdPlayerLoadGCFi(s32 arg0) {
    M2C_UNK spC;
    s32 sp8;
    s32 temp_r3;

    TAdPlayerLoadGC__data_805D5E30 &= ~(0x400 << arg0);
    do {
        temp_r3 = CARDProbeEx(arg0, &spC, &sp8);
    } while (temp_r3 == -1);
    if (sp8 == 0x2000) {
        if ((temp_r3 == -3) || (temp_r3 == -2)) {
            TAdPlayerLoadGC__data_805D5E40 = -0x7D;
            return;
        }
        TAdPlayerLoadGC__sub_801E101C(arg0);
    }
}

#pragma push
#pragma fp_contract on
s32 TAdPlayerLoadGC__sub_801E0D8C(s32 arg0) {
    M2C_UNK spC;
    s32 sp8;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 var_r0;
    if ((TAdPlayerLoadGC__data_805D5E30 & (0x400 << arg0)) && ((temp_r3 = CARDGetResultCode((void *) (arg0)), ((temp_r3 == -5) != 0)) || (temp_r3 == -2))) {
        var_r0 = -0x7F;
        if (temp_r3 == -2) {
            var_r0 = -0x7D;
        }
        TAdPlayerLoadGC__data_805D5E40 = var_r0;
        return 0;
    }
    do {
        temp_r3_2 = CARDProbeEx(arg0, &spC, &sp8);
    } while (temp_r3_2 == -1);
    if (temp_r3_2 == -2) {
        TAdPlayerLoadGC__data_805D5E40 = -0x7D;
        return 0;
    }
    if (sp8 == 0x2000) {
        if (!(TAdPlayerLoadGC__data_805D5E30 & (4 << arg0))) {
            TAdPlayerLoadGC__sub_801E101C(arg0);
            if ((u32) get_load_result__15TAdPlayerLoadGCFv((void *)((void *) (arg0))) == -0x7FU) {
                TAdPlayerLoadGC__data_805D5E40 = -0x7F;
                return 0;
            }
        }
        temp_r3_3 = CARDCheckAsync((void *) (arg0), (int) (0));
        if (temp_r3_3 == 0) {
            for (;;) {
                temp_r3_4 = CARDGetResultCode((void *) (arg0));
                if (temp_r3_4 == -1) {
                    continue;
                }
                switch (temp_r3_4) {
                case -3:
                    TAdPlayerLoadGC__data_805D5E40 = -0xFF;
                    return 0;
                case -5:
                case -128:
                    TAdPlayerLoadGC__data_805D5E40 = -0x7F;
                    return 0;
                case 0:
                    return 1;
                case -13:
                case -6:
                    TAdPlayerLoadGC__data_805D5E40 = -0xFD;
                    return 1;
                }
            }
        } else {
            switch (temp_r3_3) {
            case -5:
            case -128:
                TAdPlayerLoadGC__data_805D5E40 = -0x7D;
                return 0;
            case -3:
                TAdPlayerLoadGC__data_805D5E40 = -0xFF;
                return 0;
            case 0:
                return 1;
            case -13:
            case -6:
                TAdPlayerLoadGC__data_805D5E40 = -0xFD;
                return 1;
            }
        }
    }
    TAdPlayerLoadGC__data_805D5E40 = -0xDF;
    return 0;
}
#pragma pop

void TAdPlayerLoadGC__sub_801E1350(void) {
    s32 i;
    if ((*(void * *)&TAdPlayerLoadGC__data_805D5E38) != NULL) {
        xfree__FPv((*(void * *)&TAdPlayerLoadGC__data_805D5E38));
        (*(void * *)&TAdPlayerLoadGC__data_805D5E38) = NULL;
    }
    for (i = 0; i < 6; i++) {
        if (((void * *)&TAdPlayerLoadGC__data_80511ED0)[i] != NULL) {
            xfree__FPv(((void * *)&TAdPlayerLoadGC__data_80511ED0)[i]);
            ((void * *)&TAdPlayerLoadGC__data_80511ED0)[i] = NULL;
        }
    }
}

void TAdPlayerLoadGC__sub_801E14E4(void) {  }

    extern int lbl_805D5E44;

typedef char RecoveredGlobal_801E14E8_TAdPlayerLoadGC__data_80511ED0_size[sizeof(RecoveredGlobal_801E14E8_TAdPlayerLoadGC__data_80511ED0) == 0x18 ? 1 : -1];
void TAdPlayerLoadGC__sub_801E14E8(u8 *arg0, s32 arg1) {
    if (arg1 < 6) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) TAdPlayerLoadGC__data_805D5E38;
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(((u8 *)(&TAdPlayerLoadGC__data_80511ED0.value) + (arg1 * 4)), s32 *, 0);
    }
}

int TAdPlayerLoadGC__sub_801E1510(void) {  return lbl_805D5E44; }
s32 TAdPlayerLoadGC__sub_801E1518(void *arg0, s32 arg1, u32 arg2) {
    return (s32) (((arg2 >> 0xDU) + 3) << 0xD) / 8192;
}
s32 get_load_result__15TAdPlayerLoadGCFv(void * _w0) {
    return TAdPlayerLoadGC__data_805D5E40;
}
s32 TAdPlayerLoadGC__sub_801E1E38(s32 arg0) {
    M2C_UNK spC;
    s32 sp8;
    s32 temp_r3;
    if (arg0 >= 2) {
        return 0;
    }
    if ((TAdPlayerLoadGC__data_805D5E30 & (0x400 << arg0)) && (CARDGetResultCode((void *)(arg0)) == -5)) {
        TAdPlayerLoadGC__data_805D5E40 = -0x7D;
        return 1;
    }
    do {
        temp_r3 = CARDProbeEx(arg0, &spC, &sp8);
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
    if ((TAdPlayerLoadGC__sub_801E1E38((s32)(arg0)) == 0) || (TAdPlayerLoadGC__sub_801E1B50(arg0) != 0) || (TAdPlayerLoadGC__sub_801E0D8C((s32)(arg0)) == 0)) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    }
    if (!(TAdPlayerLoadGC__data_805D5E30 & (4 << arg0)) && (((s32)TAdPlayerLoadGC__sub_801E101C(arg0)) != 0)) {
        TAdPlayerLoadGC__data_805D5E40 = -0xFF;
        return -0xFF;
    }
    temp_r3 = CARDCheck(arg0);
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
    temp_r3 = CARDFreeBlocks(arg0, &spC, &sp8);
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
