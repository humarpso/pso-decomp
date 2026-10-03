#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_800F7A8C { u32 a; void (*fn)(); };
struct Ent_800F7B08 { void (*fn)(); u32 b; };
struct RecoveredGlobal_800F7A6C_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_800F7A7C_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

extern "C" {
void TLobby__sub_800F79C4(u8 *arg0);
extern RecoveredGlobal_800F7A6C_lbl_804DB1F0 lbl_804DB1F0;
f32 TLobby__sub_800F7A6C(void);
extern RecoveredGlobal_800F7A7C_lbl_8048C9D8 lbl_8048C9D8;
f32 TLobby__sub_800F7A7C(void);
}

extern "C" {

void TLobby__sub_800F7A1C(void* p);
void TLobby__sub_800F7A50(void* p);
int get_attack_credit_slot_count(void);
void broadcast_state__6TLobbyFPv(void* p);
void bswap_enemy_state__6TLobbyFPv(void* p);
void bswap_field__6TLobbyFPv(void* p);
void reset_keyboard_control__6TLobbyFv(void);
int TLobby__send_and_handle_60(void*);
void TLobby__sub_800F7A8C(s32 arg0);
s32 TLobby__sub_800F7B08(s32 arg0);
extern Ent_800F7A8C *lbl_804998C8[];
s32 is_area_transfer_pending();
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int get_global_state__14TOKeyMachine01Fv(void);
void handle_disconnect_cleanup(void);
int read_be16_field2__10TObjPlayerFPv(void*);

void bswap_field__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); }
void broadcast_state__6TLobbyFPv(void* p) { bswap_field__6TLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void TLobby__sub_800F79C4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u8 *, 0) = 0x9C;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

void bswap_enemy_state__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void TLobby__sub_800F7A1C(void* p) { bswap_enemy_state__6TLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TLobby__sub_800F7A50(void* p) { *(u8*)((char*)p + 0x0) = 10; *(u8*)((char*)p + 0x1) = 3; }
int get_attack_credit_slot_count(void) { return 4; }

typedef char RecoveredGlobal_800F7A6C_lbl_804DB1F0_size[sizeof(RecoveredGlobal_800F7A6C_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
f32 TLobby__sub_800F7A6C(void) {
    return M2C_FIELD(&lbl_804DB1F0.value, f32 *, 4);
}

typedef char RecoveredGlobal_800F7A7C_lbl_8048C9D8_size[sizeof(RecoveredGlobal_800F7A7C_lbl_8048C9D8) == 0x748 ? 1 : -1];
f32 TLobby__sub_800F7A7C(void) {
    return M2C_FIELD(&lbl_8048C9D8.value, f32 *, 4);
}

void TLobby__sub_800F7A8C(s32 arg0) {
    Ent_800F7A8C *p = lbl_804998C8[arg0];
    s32 n;
    s32 i;
    if (p != 0) {
        n = 0;
        while (p->fn != 0) { p++; n++; }
        for (i = 0; i < n; i++) {
            void (*fn)() = p[-1].fn;
            p--;
            fn();
        }
    }
}
s32 TLobby__sub_800F7B08(s32 arg0) {
    Ent_800F7B08 *p = (Ent_800F7B08 *)lbl_804998C8[arg0];
    void (*fn)();
    if (p == 0) {
        return 1;
    }
    while ((fn = p->fn) != 0) {
        if (is_area_transfer_pending() != 0) {
            return 0;
        }
        fn();
        p++;
    }
    return 1;
}
void reset_keyboard_control__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); ((void (*)(void))TLobby__sub_800F7A8C)(); }

}
