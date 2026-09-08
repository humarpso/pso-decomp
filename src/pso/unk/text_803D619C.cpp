#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_803C5850_lbl_80572020 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_803C588C_lbl_80572020 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C5850_lbl_80572020 lbl_8058C960;
extern s32 lbl_805D76A0;
extern s32 lbl_805D76A4;
M2C_UNK memset(void *, int, int);
void TLobby__sub_803D619C(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803C5850_lbl_80572020 lbl_8058C960;
extern s32 lbl_805D76A0;
extern s32 lbl_805D76A4;
void TLobby__sub_803D61D8(void);
}

extern "C" {

typedef char RecoveredGlobal_803C5850_lbl_80572020_size[sizeof(RecoveredGlobal_803C5850_lbl_80572020) == 0x100 ? 1 : -1];
void TLobby__sub_803D619C(void) {
    memset((void *) (&lbl_8058C960.value), (int) (0), (int) (0x100));
    lbl_805D76A0 = 0;
    lbl_805D76A4 = 0;
}
void TLobby__sub_803D61D8(void) {
    memset((void *) (&lbl_8058C960.value), (int) (0), (int) (0x100));
    lbl_805D76A0 = 0;
    lbl_805D76A4 = 0;
}

typedef char RecoveredGlobal_803C588C_lbl_80572020_size[sizeof(RecoveredGlobal_803C588C_lbl_80572020) == 0x100 ? 1 : -1];

}
