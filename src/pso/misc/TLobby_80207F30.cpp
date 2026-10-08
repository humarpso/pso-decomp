#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct R_80207F30 { s16 a; s16 b; u16 c; };

extern "C" {
s32 get_current_floor();
void *memset(void *, int, unsigned long);
int TLobby__sub_80207F30(R_80207F30 *arg0);
}

extern "C" {

void bswap_enemy_set_row(void *arg0);
void bswap_enemy_set_row_fields(void *arg0);
void swap_object_row_endian(void *arg0);
void bswap_object_row_fields(void *arg0);
void update_current_floor__6TLobbyFv(void);
void update_key_machine__6TLobbyFv(void);
int TLobby__sub_80207F10(void* p);
typedef void (*Fn_80207F80)();
struct E_80207F80 { u32 a; Fn_80207F80 fn; };
typedef void (*Fn_80208020)();
struct E_80208020 { Fn_80208020 fn; u32 b; };
s32 is_area_transfer_pending();
extern E_80208020 *lbl_804BB118[];
void run_floor_cleanup_callbacks__6TLobbyFi(s32 arg0);
s32 TLobby__sub_80208020(s32 arg0);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
int get_global_state__14TOKeyMachine01Fv(void);
int reset_story_select__6TLobbyFPv(void* p);
int reset_story_select__6TLobbyFv(void*);

int TLobby__sub_80207F30(R_80207F30 *arg0) {
    s32 r;
    memset(arg0, 0, 0x3C);
    arg0->a = -1;
    r = get_current_floor();
    arg0->b = r;
    arg0->c = 0xFFFF;
    return r;
}

void run_floor_cleanup_callbacks__6TLobbyFi(s32 arg0) {
    E_80207F80 *p = (E_80207F80 *)lbl_804BB118[arg0];
    s32 n;
    s32 i;
    if (p != 0) {
        n = 0;
        while (p->fn != 0) {
            p++;
            n++;
        }
        for (i = 0; i < n; i++) {
            (p--)[-1].fn();
        }
    }
}

void update_current_floor__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); ((void (*)(void))run_floor_cleanup_callbacks__6TLobbyFi)(); }
s32 TLobby__sub_80208020(s32 arg0) {
    E_80208020 *p = lbl_804BB118[arg0];
    Fn_80208020 f;
    if (p == 0) {
        return 1;
    }
    while ((f = p->fn) != 0) {
        if (is_area_transfer_pending() != 0) {
            return 0;
        }
        f();
        p++;
    }
    return 1;
}

void update_key_machine__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); ((int (*)(void))TLobby__sub_80208020)(); }
void bswap_enemy_set_row(void *arg0) {
    bswap_16__FPUs((s32)(arg0));
    bswap_enemy_set_row_fields((void *)((void *)((char *)arg0 + 4)));
}

void bswap_enemy_set_row_fields(void *arg0) {
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 2)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 4)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 12)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 8)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 10)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 16)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 20)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 24)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 28)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 32)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 36)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 40)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 44)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 48)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 52)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 56)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 60)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 62)));
}

void swap_object_row_endian(void *arg0) {
    bswap_16__FPUs((s32)(arg0));
    bswap_object_row_fields((void *)((void *)((char *)arg0 + 4)));
}

void bswap_object_row_fields(void *arg0) {
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 2)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 6)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 8)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 12)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 16)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 20)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 24)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 28)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 32)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 36)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 40)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 44)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 48)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 52)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 56)));
}

}
