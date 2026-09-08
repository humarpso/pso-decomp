#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803D2E04_lbl_80587880 {
    M2C_UNK value;
    u8 remaining[0x2FFC];
};

struct RecoveredGlobal_803D2E94_lbl_8058A880 {
    M2C_UNK value;
    u8 remaining[0xBFC];
};

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803D2E04_lbl_80587880 lbl_80587880;
extern s32 lbl_805D7648;
void TLobby__sub_803D2E04(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803D2E94_lbl_8058A880 lbl_8058A880;
extern s32 lbl_805D7650;
void TLobby__sub_803D2E94(void);
}

extern "C" {

typedef char RecoveredGlobal_803D2E04_lbl_80587880_size[sizeof(RecoveredGlobal_803D2E04_lbl_80587880) == 0x3000 ? 1 : -1];
void TLobby__sub_803D2E04(void) {
    s32 temp_r0;
    temp_r0 = lbl_805D7648 - 1;
    lbl_805D7648 = temp_r0;
    if (temp_r0 == 0) {
        memset((void *) (&lbl_80587880.value), (int) (0), (int) (0x3000));
    }
}
typedef char RecoveredGlobal_803D2E94_lbl_8058A880_size[sizeof(RecoveredGlobal_803D2E94_lbl_8058A880) == 0xC00 ? 1 : -1];
void TLobby__sub_803D2E94(void) {
    s32 temp_r0;
    temp_r0 = lbl_805D7650 - 1;
    lbl_805D7650 = temp_r0;
    if (temp_r0 == 0) {
        memset((void *) (&lbl_8058A880.value), (int) (0), (int) (0xC00));
    }
}

}
