#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Slot_802405B0 { void *buf[4]; u8 pad[0x24 - 0x10]; };

struct Mgr_802405B0 {
    u8 pad0[0x288];
    s32 state;
    u8 pad28c[0x2B8 - 0x28C];
    s32 depth;
    s32 stack[(0x310 - 0x2BC) / 4];
    Slot_802405B0 slots[8];
};

typedef s32 M2C_UNK;
struct Voice_802401D0 {
    u8 pad0[4];
    s32 state;
    u8 pad8[0x14 - 0x8];
    s32 kind;
    u8 pad18[0xA0 - 0x18];
};

struct Lobby_802401D0 {
    u8 pad0[0x284];
    s32 age;
    u8 pad288[0x300 - 0x288];
    s32 tick;
    u32 elapsed;
    u32 ms;
};

extern "C" {
s32 TLobby__sub_80240310(u8 *arg0);
M2C_UNK TLobby__sub_8023FF38();
M2C_UNK TLobby__sub_8023FF64(int);
M2C_UNK TLobby__sub_803B5258();
void xfree__FPv(void *);
s32 TLobby__sub_802405B0(void *p, s32 arg1);
s32 OSGetTick();
M2C_UNK advance_rng__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_8023FCC0(void *);
M2C_UNK tick_sound_voice(void *);
extern Voice_802401D0 lbl_805162EC[];
s32 update_sound_frame(Lobby_802401D0 *self);
}

extern "C" {

int TLobby__sub_802401C8(void);

int TLobby__sub_802401C8(void) { return 0; }

s32 update_sound_frame(Lobby_802401D0 *self) {
    s32 t;
    s32 i;
    s32 j;
    s32 n;
    t = OSGetTick();
    self->elapsed = t - self->tick;
    self->tick = t;
    self->ms = self->elapsed / ((*(u32 *)0x800000F8 >> 2) / 1000);
    TLobby__sub_8023FCC0(self);
    advance_rng__6TLobbyFPv(self);
    for (i = 0; i < 40; i++) {
        tick_sound_voice(&lbl_805162EC[i]);
    }
    n = 0;
    for (i = 0; i < 40; i++) {
        if (lbl_805162EC[i].state != 3 && lbl_805162EC[i].kind == 6 && lbl_805162EC[i].kind == 0x19) {
            n++;
        }
    }
    for (i = 0; i < 40; i++) {
        if (lbl_805162EC[i].state != 3 && !(lbl_805162EC[i].kind == 6 && lbl_805162EC[i].kind == 0x19)) {
            for (j = 0; j < n; j++) {
            }
        }
    }
    self->age++;
    return 0;
}

s32 TLobby__sub_80240310(u8 *arg0) {
    TLobby__sub_802405B0((void *)(arg0), (s32)(1));
    M2C_FIELD(arg0, s32 *, 0x298) = 4;
    return 0;
}
#define M ((Mgr_802405B0 *)p)
s32 TLobby__sub_802405B0(void *p, s32 arg1) {
    s32 idx;
    s32 n;
    TLobby__sub_8023FF64(0);
    TLobby__sub_8023FF38();
    if (M->state == -1) {
        return 8;
    }
    if (arg1 == 0) {
        while ((n = M->depth) > 0) {
            idx = M->stack[n];
            if (idx < 4) {
                break;
            }
            TLobby__sub_803B5258();
            if (M->slots[idx].buf[3] != NULL) {
                xfree__FPv(M->slots[idx].buf[3]);
                M->slots[idx].buf[3] = NULL;
            }
            if (M->slots[idx].buf[2] != NULL) {
                xfree__FPv(M->slots[idx].buf[2]);
                M->slots[idx].buf[2] = NULL;
            }
            if (M->slots[idx].buf[1] != NULL) {
                xfree__FPv(M->slots[idx].buf[1]);
                M->slots[idx].buf[1] = NULL;
            }
            if (M->slots[idx].buf[0] != NULL) {
                xfree__FPv(M->slots[idx].buf[0]);
                M->slots[idx].buf[0] = NULL;
            }
            M->depth--;
        }
        M->state = 0;
    } else {
        while ((n = M->depth) > 0) {
            idx = M->stack[n];
            TLobby__sub_803B5258();
            if (M->slots[idx].buf[3] != NULL) {
                xfree__FPv(M->slots[idx].buf[3]);
                M->slots[idx].buf[3] = NULL;
            }
            if (M->slots[idx].buf[2] != NULL) {
                xfree__FPv(M->slots[idx].buf[2]);
                M->slots[idx].buf[2] = NULL;
            }
            if (M->slots[idx].buf[1] != NULL) {
                xfree__FPv(M->slots[idx].buf[1]);
                M->slots[idx].buf[1] = NULL;
            }
            if (M->slots[idx].buf[0] != NULL) {
                xfree__FPv(M->slots[idx].buf[0]);
                M->slots[idx].buf[0] = NULL;
            }
            M->depth--;
        }
        M->state = -1;
    }
    return 0;
}
#undef M

}
