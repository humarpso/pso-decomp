#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u32 get_global_state__14TOKeyMachine01Fv();
void play_persistent_sound(int, void *, void *, int, int);
void play_ambient_loop_sound__17TOBarrierEnergy01Fi(s32 arg0);
}

extern "C" {

void TOBarrierEnergy01__vt18(void);
void* init__17TOBarrierEnergy01FPv(void* p);
int TLobby__send_and_handle_60(void*);
int TLobby__sub_80156BA8(void*);
void TOAttackableCol__sub_80157C20(void* p, s32 v);
s32 TOAttackableCol__sub_80157C28(void* p);
void TOAttackableCol__vt23(void);
int bswap_16__FPUs(void*);
int bswap_header__6TLobbyFi(void*);

void* init__17TOBarrierEnergy01FPv(void* p) { TLobby__sub_80156BA8(p); return p; }

void TOBarrierEnergy01__vt18(void) {  }
void play_ambient_loop_sound__17TOBarrierEnergy01Fi(s32 arg0) {
    u32 temp_r3;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 1:
    case 2:
        play_persistent_sound((int) (0x4CB09), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 3:
    case 4:
    case 5:
        play_persistent_sound((int) (0x44B08), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 6:
    case 7:
        play_persistent_sound((int) (0x4004CB02), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 8:
    case 9:
    case 10:
        play_persistent_sound((int) (0x4004CB09), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 0:
        return;
    case 11:
        return;
    case 12:
        return;
    case 13:
        return;
    case 14:
        return;
    case 15:
        return;
    }
}

}
