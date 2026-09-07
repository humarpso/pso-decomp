#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8036AE2C_lbl_804F3628 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
u8 * TBoss8Dragon__sub_8036AEF8(void *, s16);
M2C_UNK __dl__FPv(void *);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_8036AE2C_lbl_804F3628 lbl_804F3628;
u8 *__dt__15PSOV3EncryptionFv(u8 *arg0, s16 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8036AE2C_lbl_804F3628_size[sizeof(RecoveredGlobal_8036AE2C_lbl_804F3628) == 0x18 ? 1 : -1];
u8 *__dt__15PSOV3EncryptionFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_804F3628.value;
        memset((void *) (arg0 + 4), (int) (0), (int) (0x828));
        M2C_FIELD(arg0, s32 *, 0x82C) = 0;
        M2C_FIELD(arg0, s32 *, 0x830) = 0;
        TBoss8Dragon__sub_8036AEF8(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv((void *) (arg0));
        }
    }
    return arg0;
}

}
