#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TLobby__sub_80207F30(void);
void TLobby__sub_802080C0(void *arg0);
void TLobby__sub_802080F4(void *arg0);
void TLobby__sub_802081AC(void *arg0);
void TLobby__sub_802081E0(void *arg0);
void update_current_floor__6TLobbyFv(void);
void update_key_machine__6TLobbyFv(void);
int TLobby__sub_80207F10(void* p);
int TLobby__sub_80207F80(void);
int TLobby__sub_80208020(void);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
int get_global_state__14TOKeyMachine01Fv(void);
int reset_story_select__6TLobbyFPv(void* p);
int reset_story_select__6TLobbyFv(void*);

int TLobby__sub_80207F30(void) { return 0; }

void update_current_floor__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); TLobby__sub_80207F80(); }

void update_key_machine__6TLobbyFv(void) { get_global_state__14TOKeyMachine01Fv(); TLobby__sub_80208020(); }

void TLobby__sub_802080C0(void *arg0) {
    bswap_16__FPUs((s32)(arg0));
    TLobby__sub_802080F4((void *)((void *)((char *)arg0 + 4)));
}

void TLobby__sub_802080F4(void *arg0) {
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

void TLobby__sub_802081AC(void *arg0) {
    bswap_16__FPUs((s32)(arg0));
    TLobby__sub_802081E0((void *)((void *)((char *)arg0 + 4)));
}

void TLobby__sub_802081E0(void *arg0) {
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
