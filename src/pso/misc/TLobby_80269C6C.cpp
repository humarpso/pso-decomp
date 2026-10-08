#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80269CA4_lbl_804D071C {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80269CB4_lbl_804D071C {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80269C90_lbl_804D071C {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct V2_80269DA4 { f32 x; f32 y; };
struct G_80269DA4 { s32 a; s32 b; };

extern "C" {
M2C_UNK TLobby__sub_80269DA4(V2_80269DA4 size, void *arg1);
extern G_80269DA4 lbl_804D06F8[];
u8 * TWindowMessage__ct(void *, s32, u32, s16);
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *create_message_window__6TLobbyFiiUis(s32 arg0, s32 arg1, u32 arg2, s16 arg3);
extern RecoveredGlobal_80269CA4_lbl_804D071C lbl_804D071C;
void TLobby__sub_80269CA4(s32 arg0);
extern RecoveredGlobal_80269CA4_lbl_804D071C lbl_804D071C;
M2C_UNK *TLobby__sub_80269CB4(void);
extern RecoveredGlobal_80269CA4_lbl_804D071C lbl_804D071C;
void TLobby__sub_80269C90(void);
}

extern "C" {

int send_and_handle__6TLobbyFPvii(void* p, int a1, int a2);
void set_window_mode_4__6TLobbyFPvii(void *arg0, M2C_UNK arg1, M2C_UNK arg2);
void update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
f32 round_away_from_zero__20TWindowSubStatusDispFf(f32);
int append_message_window_line(void*, int, int, int);

int send_and_handle__6TLobbyFPvii(void* p, int a1, int a2) { return append_message_window_line(p, a1, a2, -1); }

typedef char RecoveredGlobal_80269CA4_lbl_804D071C_size[sizeof(RecoveredGlobal_80269CA4_lbl_804D071C) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_80269C90_lbl_804D071C_size[sizeof(RecoveredGlobal_80269C90_lbl_804D071C) == 0x14 ? 1 : -1];
void TLobby__sub_80269C90(void) {
    M2C_FIELD(&(*(RecoveredGlobal_80269C90_lbl_804D071C *)&lbl_804D071C).value, s32 *, 0x10) = 3;
}

void TLobby__sub_80269CA4(s32 arg0) {
    M2C_FIELD(&lbl_804D071C.value, s32 *, 0x10) = arg0;
}

typedef char RecoveredGlobal_80269CB4_lbl_804D071C_size[sizeof(RecoveredGlobal_80269CB4_lbl_804D071C) == 0x14 ? 1 : -1];
M2C_UNK *TLobby__sub_80269CB4(void) {
    return &(*(RecoveredGlobal_80269CB4_lbl_804D071C *)&lbl_804D071C).value;
}

u8 *create_message_window__6TLobbyFiiUis(s32 arg0, s32 arg1, u32 arg2, s16 arg3) {
    u8 *temp_r3;
    u8 *var_r0;
    ((M2C_UNK (*)(void *, void *))TLobby__sub_80269DA4)((void *) (arg1), (void *) (arg2));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x90));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TWindowMessage__ct(temp_r3, arg0, arg2, arg3));
    }
    return var_r0;
}

void set_window_mode_4__6TLobbyFPvii(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    create_message_window__6TLobbyFiiUis((s32)(arg0), (s32)(arg1), (u32)(arg2), (s16)(4));
}

extern const f32 lbl_805DD238;

void update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1) {
    set_window_mode_4__6TLobbyFPvii((void *)((void *)(arg0)), (M2C_UNK)((M2C_UNK)(arg1)), (M2C_UNK)((M2C_UNK)((s32) round_away_from_zero__20TWindowSubStatusDispFf((M2C_FIELD(arg1, f32 *, 4) - lbl_805DD238) / lbl_805DD238) + 2)));
}

M2C_UNK TLobby__sub_80269DA4(V2_80269DA4 size, void *arg1) {
    V2_80269DA4 *dst = (V2_80269DA4 *)&lbl_804D071C;
    dst->x = size.x;
    dst->y = size.y;
    lbl_804D06F8[0].b = (s32)arg1;
}

}
