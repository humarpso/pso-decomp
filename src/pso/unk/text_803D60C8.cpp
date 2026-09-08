#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef M2C_UNK (*RecoveredCallback_1d0cc8904da3)(s32, M2C_UNK *);
struct RecoveredGlobal_803D6140_lbl_8058C960 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

extern "C" {
M2C_UNK strncpy(void *, void *, int);
extern RecoveredGlobal_803D6140_lbl_8058C960 lbl_8058C960;
extern RecoveredCallback_1d0cc8904da3 lbl_805D76A0;
extern s32 lbl_805D76A4;
void TLobby__sub_803D6140(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_803D6140_lbl_8058C960_size[sizeof(RecoveredGlobal_803D6140_lbl_8058C960) == 0x100 ? 1 : -1];
void TLobby__sub_803D6140(s32 arg0) {
    strncpy((void *) (&lbl_8058C960.value), (void *) (arg0), (int) (0xFF));
    if (((M2C_UNK (*)(s32, M2C_UNK *)) lbl_805D76A0) != NULL) {
        lbl_805D76A0(lbl_805D76A4, &lbl_8058C960.value);
    }
}

}
