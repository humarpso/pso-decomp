#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800F81A8_lbl_80499970 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 __dt__7TObjectFv(void *, int);
s32 __dl__7TObjectFPv(void *);
extern RecoveredGlobal_800F81A8_lbl_80499970 lbl_80499970;
extern void *lbl_805D5330;
u8 *TLobby__sub_800F81A8(u8 *arg0, s16 arg1);
}

extern "C" {

void dispatch_state__6TLobbyFPv(void *arg0);
s32 get_quest_thread_state__6TLobbyFv(void);
void init_fadeout_state__6TLobbyFi(s32 arg0);
void set_fade_params__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__sub_800F7FB8();
M2C_UNK TLobby__sub_800F8024();
M2C_UNK TLobby__sub_800F80D8();

void dispatch_state__6TLobbyFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {
    case 1:
        TLobby__sub_800F80D8();
        return;
    case 2:
        TLobby__sub_800F8024();
        return;
    case 3:
        TLobby__sub_800F7FB8();
    case 0:
        return;
    }
}

extern void *lbl_805D5330;
extern const f32 lbl_805DA8E8;

void init_fadeout_state__6TLobbyFi(s32 arg0) {
    if ((void *) lbl_805D5330 != NULL) {
        M2C_FIELD(lbl_805D5330, s32 *, 0x28) = arg0;
        M2C_FIELD(lbl_805D5330, f32 *, 0x1C) = (f32) lbl_805DA8E8;
        M2C_FIELD(lbl_805D5330, s8 *, 0x20) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x21) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x22) = 0;
        M2C_FIELD(lbl_805D5330, s32 *, 0x24) = 2;
    }
}

extern void *lbl_805D5330;
extern const f32 lbl_805DA904;

void set_fade_params__6TLobbyFi(s32 arg0) {
    if ((void *) lbl_805D5330 != NULL) {
        M2C_FIELD(lbl_805D5330, s32 *, 0x28) = arg0;
        M2C_FIELD(lbl_805D5330, f32 *, 0x1C) = (f32) lbl_805DA904;
        M2C_FIELD(lbl_805D5330, s8 *, 0x20) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x21) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x22) = 0;
        M2C_FIELD(lbl_805D5330, s32 *, 0x24) = 1;
    }
}

extern void *lbl_805D5330;

s32 get_quest_thread_state__6TLobbyFv(void) {
    if ((void *) lbl_805D5330 != NULL) {
        return M2C_FIELD(lbl_805D5330, s32 *, 0x24);
    }
    return 0;
}
typedef char RecoveredGlobal_800F81A8_lbl_80499970_size[sizeof(RecoveredGlobal_800F81A8_lbl_80499970) == 0x18 ? 1 : -1];
u8 *TLobby__sub_800F81A8(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_80499970.value;
        (*(s32 *)&lbl_805D5330) = 0;
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
