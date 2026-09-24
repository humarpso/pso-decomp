#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8043395C_lbl_805D2200 {
    M2C_UNK value;
    u8 remaining[0x3FC];
};

struct RecoveredGlobal_80432688_lbl_805D2200 {
    M2C_UNK value;
    u8 remaining[0x3FC];
};

struct RecoveredGlobal_80433890_lbl_805D2200 {
    M2C_UNK value;
    u8 remaining[0x3FC];
};

typedef s32 M2C_UNK;
struct RecoveredGlobal_80433C94_lbl_805D2200 {
    M2C_UNK value;
    u8 remaining[0x3FC];
};

struct Ent_80433C94 { u8 pad[0x30]; u64 v; u8 pad2[0xC8]; };

extern "C" {
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
void TLobby__sub_8043395C(s32 arg0);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
void TLobby__sub_80432688(s32 arg0);
extern s32 lbl_805D7CF8;
s32 TLobby__sub_80432848(void);
M2C_UNK memcpy(int, void *, int);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
void TLobby__sub_80433890(s32 arg0);
extern RecoveredGlobal_8043395C_lbl_805D2200 lbl_805D2200;
u64 TLobby__sub_80433C94(s32 i, u64 v);
}

extern "C" {

typedef char RecoveredGlobal_8043395C_lbl_805D2200_size[sizeof(RecoveredGlobal_8043395C_lbl_805D2200) == 0x400 ? 1 : -1];

typedef char RecoveredGlobal_80432688_lbl_805D2200_size[sizeof(RecoveredGlobal_80432688_lbl_805D2200) == 0x400 ? 1 : -1];
void TLobby__sub_80432688(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)&(*(RecoveredGlobal_80432688_lbl_805D2200 *)&lbl_805D2200).value + (arg0 << 8);
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x20) == 0) {
        if (((u8) M2C_FIELD(temp_r3, u8 *, 5) != 0) || ((u8) M2C_FIELD(temp_r3, u8 *, 6) != 4)) {
            M2C_FIELD(temp_r3, s32 *, 0x20) = 1;
            return;
        }
        *M2C_FIELD(temp_r3, s8 **, 0x14) = M2C_FIELD(temp_r3, u8 *, 7) & 0x3A;
    }
}

s32 TLobby__sub_80432848(void) {
    lbl_805D7CF8 = 1;
    return 1;
}

typedef char RecoveredGlobal_80433890_lbl_805D2200_size[sizeof(RecoveredGlobal_80433890_lbl_805D2200) == 0x400 ? 1 : -1];
void TLobby__sub_80433890(s32 arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)&(*(RecoveredGlobal_80433890_lbl_805D2200 *)&lbl_805D2200).value + (arg0 << 8);
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x20) == 0) {
        memcpy((int) (M2C_FIELD(temp_r31, s32 *, 0x18)), (void *) (temp_r31 + 5), (int) (4));
        *M2C_FIELD(temp_r31, s8 **, 0x14) = M2C_FIELD(temp_r31, u8 *, 9) & 0x3A;
    }
}

void TLobby__sub_8043395C(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)&lbl_805D2200.value + (arg0 << 8);
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x20) == 0) {
        *M2C_FIELD(temp_r3, s8 **, 0x14) = M2C_FIELD(temp_r3, u8 *, 5) & 0x3A;
    }
}
u64 TLobby__sub_80433C94(s32 i, u64 v) {
    Ent_80433C94 *e = &((Ent_80433C94 *)&lbl_805D2200)[i];
    u64 old = e->v;
    e->v = v;
    return old;
}

}
