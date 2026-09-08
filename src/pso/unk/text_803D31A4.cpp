#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803D31A4_lbl_8058B6B8 {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_803D31A4_lbl_8058B6D4 {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803D31A4_lbl_8058B6B8 lbl_8058B6B8;
extern RecoveredGlobal_803D31A4_lbl_8058B6D4 lbl_8058B6D4;
extern s32 lbl_805D7658;
extern M2C_UNK lbl_805D7664;
extern M2C_UNK lbl_805D766C;
void TLobby__sub_803D31A4(void);
}

extern "C" {

typedef char RecoveredGlobal_803D31A4_lbl_8058B6B8_size[sizeof(RecoveredGlobal_803D31A4_lbl_8058B6B8) == 0x1C ? 1 : -1];
typedef char RecoveredGlobal_803D31A4_lbl_8058B6D4_size[sizeof(RecoveredGlobal_803D31A4_lbl_8058B6D4) == 0x1C ? 1 : -1];
void TLobby__sub_803D31A4(void) {
    if ((s32) lbl_805D7658 == 0) {
        memset((void *) (&lbl_8058B6B8.value), (int) (0), (int) (0x1C));
        memset((void *) (&lbl_805D766C), (int) (0), (int) (8));
        memset((void *) (&lbl_805D7664), (int) (0), (int) (8));
        M2C_FIELD(&lbl_8058B6D4.value, s32 *, 0) = 0;
        M2C_FIELD(&lbl_8058B6D4.value, s32 *, 4) = 0;
        M2C_FIELD(&lbl_8058B6D4.value, s32 *, 8) = 0;
        M2C_FIELD(&lbl_8058B6D4.value, s32 *, 0xC) = 0;
    }
    lbl_805D7658 += 1;
}

}
