#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_20 { u8 bytes[0x20]; };

struct RecoveredGlobal_80339F98_lbl_80477CBC {
    M2C_UNK value;
    u8 remaining[0x20];
};

extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32, s32);
M2C_UNK TSaveChCr__sub_8033A010(void *, int);
extern RecoveredGlobal_80339F98_lbl_80477CBC lbl_80477CBC;
void TSaveChCr__sub_80339F98(s32 arg0, s32 arg1);
}

extern "C" {

s32 TSaveChCr__sub_80339F30(void);
void close_and_advance__9TSaveChCrFPvPv(void* p, void* a1);
s32 poll_memcard_status(void *arg0);
s32 TAdPlayerLoadGC__sub_801E0D8C(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_80339DBC(void *);
s32 TObjCMProportion__sub_8029916C(M2C_UNK);
s32 check_memcard_status__15TAdPlayerLoadGCFi(M2C_UNK);
int close_window__9TSaveChCrFPv(void*);
s32 poll_memcard_status__23TAdSinglePlyChrSelectGCFPv();

s32 poll_memcard_status(void *arg0) {
    s32 var_r31;

    if (TAdPlayerLoadGC__sub_801E1E38(0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return 1;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return 4;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return 2;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    if (check_memcard_status__15TAdPlayerLoadGCFi(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return 4;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x2C);
    }
    var_r31 = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
    if (poll_memcard_status__23TAdSinglePlyChrSelectGCFPv() == 0) {
        var_r31 |= 4;
    }
    if (TAdSinglePlyChrSelectGC__sub_80339DBC(arg0) == 0) {
        var_r31 |= 4;
    }
    return var_r31;
}

s32 TSaveChCr__sub_80339F30(void) {
    return TObjCMProportion__sub_8029916C(4) ? 1 : 0;
}

void close_and_advance__9TSaveChCrFPvPv(void* p, void* a1) { close_window__9TSaveChCrFPv(p); TSaveChCr__sub_80339F98((s32)(p), (s32)(a1)); }
typedef char RecoveredGlobal_80339F98_lbl_80477CBC_size[sizeof(RecoveredGlobal_80339F98_lbl_80477CBC) == 0x24 ? 1 : -1];
void TSaveChCr__sub_80339F98(s32 arg0, s32 arg1) {
    M2CCopy_20 sp8;
    u8 *temp_r4;
    sp8 = *(const M2CCopy_20 *)((s32) ((u8 *)(&lbl_80477CBC.value) + -4) + 4);
    temp_r4 = (u8 *)(&sp8) + (arg1 * 8);
    TSaveChCr__sub_8033A010((void *) (arg0), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_FIELD(temp_r4, s32 *, 0), M2C_FIELD(temp_r4, s32 *, 4))));
}

}
