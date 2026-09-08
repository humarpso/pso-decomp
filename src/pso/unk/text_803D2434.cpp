#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803D259C_lbl_80587400 {
    M2C_UNK value;
    u8 remaining[0x47C];
};

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803D259C_lbl_80587400 lbl_80587400;
extern s32 lbl_805D7640;
void TLobby__sub_803D259C(void);
M2C_UNK memset(void *, int, int);
void TLobby__sub_803D2434(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_803D259C_lbl_80587400_size[sizeof(RecoveredGlobal_803D259C_lbl_80587400) == 0x480 ? 1 : -1];

void TLobby__sub_803D2434(u8 *arg0) {
    if (arg0 != NULL) {
        memset((void *)(arg0), (int) (0), (int) (0x24));
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}

void TLobby__sub_803D259C(void) {
    s32 temp_r0;
    temp_r0 = lbl_805D7640 - 1;
    lbl_805D7640 = temp_r0;
    if (temp_r0 == 0) {
        memset((void *) (&lbl_80587400.value), (int) (0), (int) (0x480));
    }
}

}
