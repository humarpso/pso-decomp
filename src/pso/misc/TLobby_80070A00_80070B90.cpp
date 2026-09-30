#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80070BE8_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct G_80070C50 { u8 pad[0xC]; s32 fc; u8 padc[0x10]; s32 f20; s32 f24; s32 f28; u8 pad2c[4]; s32 f30; u8 pad34[4]; s32 a38[4]; u8 pad48[0x680 - 0x48]; s32 a680[4]; u8 rest[0x100]; };

struct H_80070C50 { u8 pad[0x20]; s32 f20; s32 f24; s32 f28; };

extern "C" {
s32 is_flag_set__6TLobbyFv();
extern M2C_UNK lbl_8048C9D8[];
void TLobby__sub_80070BE8(s32 arg0);
void TLobby__sub_8026A328(void *);
extern M2C_UNK lbl_8048C9D8[];
extern H_80070C50 *lbl_805D4E28;
void TLobby__sub_80070C50(void);
}

extern "C" {

s32 get_state__6TLobbyFv(void);
s32 is_flag_set__6TLobbyFv();

extern M2C_UNK lbl_8048C9D8[];

s32 get_state__6TLobbyFv(void) {
    if (is_flag_set__6TLobbyFv() == 0) {
        return 0;
    }
    if (((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C) != 1) && ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C) != 0)) {
        M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C) = 0;
    }
    return M2C_FIELD(lbl_8048C9D8, s32 *, 0x2C);
}
typedef char RecoveredGlobal_80070BE8_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070BE8_lbl_8048C9D8) == 0x748 ? 1 : -1];
void TLobby__sub_80070BE8(s32 arg0) {
    s32 var_r31;
    var_r31 = arg0;
    if (is_flag_set__6TLobbyFv() == 0) {
        M2C_FIELD(&(*(RecoveredGlobal_80070BE8_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0x2C) = 0;
        return;
    }
    if ((var_r31 != 1) && (var_r31 != 0)) {
        var_r31 = 0;
    }
    M2C_FIELD(&(*(RecoveredGlobal_80070BE8_lbl_8048C9D8 *)&lbl_8048C9D8).value, s32 *, 0x2C) = var_r31;
}
void TLobby__sub_80070C50(void) {
    s32 i;
    H_80070C50 *q;
    H_80070C50 *p = lbl_805D4E28;
    if (p != NULL) {
        (*(G_80070C50 *)&lbl_8048C9D8).fc = 0;
        (*(G_80070C50 *)&lbl_8048C9D8).f20 = 0;
        (*(G_80070C50 *)&lbl_8048C9D8).f24 = -1;
        (*(G_80070C50 *)&lbl_8048C9D8).f28 = 0;
        (*(G_80070C50 *)&lbl_8048C9D8).f30 = 0;
        for (i = 0; i < 4; i++) {
            (*(G_80070C50 *)&lbl_8048C9D8).a38[i] = 0;
            (*(G_80070C50 *)&lbl_8048C9D8).a680[i] = 0;
        }
        p->f20 = 0;
        lbl_805D4E28->f24 = 0;
        q = lbl_805D4E28;
        q->f28 = 1;
        TLobby__sub_8026A328(q);
    }
}

}
