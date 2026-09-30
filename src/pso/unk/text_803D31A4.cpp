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

typedef s32 M2C_UNK;

struct P_803D33D4 { s32 a; s32 b; };
struct P_803D33E4 { s32 a; s32 b; };

struct P_803D346C { void (*fn)(s32); s32 arg; };

struct P_803D3860 { void (*fn)(s32, u8 *); s32 arg; };

extern "C" {
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_803D31A4_lbl_8058B6B8 lbl_8058B6B8;
extern RecoveredGlobal_803D31A4_lbl_8058B6D4 lbl_8058B6D4;
extern s32 lbl_805D7658;
extern P_803D33D4 lbl_805D7664;
extern P_803D33E4 lbl_805D766C;
void TLobby__sub_803D31A4(void);
extern M2C_UNK lbl_805D765C;
extern P_803D33D4 lbl_805D7664;
extern P_803D33E4 lbl_805D766C;
void TLobby__sub_803D33F4(s32 arg0, s32 arg1);
void TLobby__sub_803D33D4(s32 arg0, s32 arg1);
void TLobby__sub_803D33E4(s32 arg0, s32 arg1);
extern P_803D346C lbl_8058B5A0[];
void TLobby__sub_803D346C(s32 arg0);
char *strncpy(char *, const char *, unsigned long);
extern u8 lbl_8058B4A0[];
extern M2C_UNK lbl_805D765C;
void TLobby__sub_803D3860(char *arg0);
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
void TLobby__sub_803D33D4(s32 arg0, s32 arg1) {
    lbl_805D7664.a = arg0;
    lbl_805D7664.b = arg1;
}

void TLobby__sub_803D33E4(s32 arg0, s32 arg1) {
    lbl_805D766C.a = arg0;
    lbl_805D766C.b = arg1;
}
void TLobby__sub_803D33F4(s32 arg0, s32 arg1) {
    if (((M2C_UNK (*)(s32)) M2C_FIELD(&lbl_805D766C, M2C_UNK (**)(s32), 0)) != NULL) {
        M2C_FIELD(&lbl_805D766C, M2C_UNK (**)(s32), 0)(M2C_FIELD(&lbl_805D766C, s32 *, 4));
    }
    M2C_FIELD(&lbl_805D765C, s32 *, 0) = arg0;
    M2C_FIELD(&lbl_805D765C, s32 *, 4) = arg1;
    if (((M2C_UNK (*)(s32)) M2C_FIELD(&lbl_805D7664, M2C_UNK (**)(s32), 0)) != NULL) {
        M2C_FIELD(&lbl_805D7664, M2C_UNK (**)(s32), 0)(M2C_FIELD(&lbl_805D7664, s32 *, 4));
    }
}
void TLobby__sub_803D346C(s32 arg0) {
    if (lbl_8058B5A0[arg0].fn != 0) {
        lbl_8058B5A0[arg0].fn(lbl_8058B5A0[arg0].arg);
    }
}
void TLobby__sub_803D3860(char *arg0) {
    strncpy((char *)lbl_8058B4A0, arg0, 0xFF);
    if ((*(P_803D3860 *)&lbl_805D765C).fn != 0) {
        (*(P_803D3860 *)&lbl_805D765C).fn((*(P_803D3860 *)&lbl_805D765C).arg, lbl_8058B4A0);
    }
}

}
