#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80291DC0_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_80070ACC_lbl_8048D208 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8039994C_lbl_804F5800 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_80399904_lbl_804F5A00 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_80399928_lbl_804F5900 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct G_80070B34 { u8 pad[0x10]; s32 x10; };

extern "C" {
extern RecoveredGlobal_80291DC0_lbl_804DB1F0 lbl_804DB1F0;
void TLobby__sub_80291DC0(void* _w0);
extern RecoveredGlobal_80291DC0_lbl_804DB1F0 lbl_804DB1F0;
int TLobby__sub_80293080(void*);
s32 mix_seed_checked__6TLobbyFi(s32);
void TLobby__sub_80291DF8(s32 v);
}

extern "C" {

void update_screen__6TLobbyFPv(void* p);
int is_multi_ready__6TLobbyFv(void);

void update_screen__6TLobbyFPv(void* p) { if (TLobby__sub_80293080((void*)(p)) != 0) { is_multi_ready__6TLobbyFv(); } }
typedef char RecoveredGlobal_80291DC0_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80291DC0_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
void TLobby__sub_80291DC0(void* _w0) {
    if (((s32)TLobby__sub_80293080((void*)(_w0))) != 0) {
        M2C_FIELD(&lbl_804DB1F0.value, s32 *, 0x34) = 1;
    }
}
typedef char RecoveredGlobal_80070ACC_lbl_8048D208_size[sizeof(RecoveredGlobal_80070ACC_lbl_8048D208) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8039994C_lbl_804F5800_size[sizeof(RecoveredGlobal_8039994C_lbl_804F5800) == 0x100 ? 1 : -1];
typedef char RecoveredGlobal_80399904_lbl_804F5A00_size[sizeof(RecoveredGlobal_80399904_lbl_804F5A00) == 0x100 ? 1 : -1];
void TLobby__sub_80291DF8(s32 v) {
    if (((s32 (*)(void))TLobby__sub_80293080)() != 0) {
        if (v < 0x3c || v > 0xe10) {
            return;
        }
        (*(G_80070B34 *)&lbl_804DB1F0).x10 = mix_seed_checked__6TLobbyFi(v);
    }
}
typedef char RecoveredGlobal_80399928_lbl_804F5900_size[sizeof(RecoveredGlobal_80399928_lbl_804F5900) == 0x100 ? 1 : -1];

}
