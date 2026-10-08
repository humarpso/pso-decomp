#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_8023FF38 { u8 pad[0x40]; s32 f40; u8 pad2[0x5c]; };

struct Ent_8023FCC0 {
    u32 h[4];
    s32 k[4];
    s32 pad20;
};

struct Obj_8023FCC0 {
    u8 pad0[0x310];
    Ent_8023FCC0 ents[(0xC14 - 0x310) / 0x24];
    u8 padC10[4];
    void *fC14[4];
    s32 fC24[4];
};

extern "C" {
extern E_8023FF38 lbl_805162EC[];
void reset_sound_group_fade__6TLobbyFv(void);
extern E_8023FF38 lbl_805162EC[];
void start_voice_fade(void *, s32);
void fade_voice_channels__6TLobbyFi(s32 arg0);
void set_entry_params__6TLobbyFiiii(void *, int, int, u32);
void read_checked_align__6TLobbyFiii(void *, int, u32);
void *adxf_open_afs__6TLobbyFii(int, int);
void *xmalloc__FUl(u32 bytes);
void xfree__FPv(void *allocation);
extern s32 lbl_804CCFB8[];
extern u16 lbl_804CD804[][4];
s32 TLobby__sub_8023FFB8(Obj_8023FCC0 *self, int id);
}

extern "C" {

u8 is_ready__6TLobbyFPv(void *arg0);

u8 is_ready__6TLobbyFPv(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x298) == 1);
}
void reset_sound_group_fade__6TLobbyFv(void) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        lbl_805162EC[i].f40 = -0x100;
    }
}
void fade_voice_channels__6TLobbyFi(s32 arg0) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        start_voice_fade(&lbl_805162EC[i], arg0);
    }
}
s32 TLobby__sub_8023FFB8(Obj_8023FCC0 *self, int id) {
    s32 i;
    s32 ret;
    if (self->ents[id].h[3] != 0) {
        xfree__FPv((void *)self->ents[id].h[3]);
        self->ents[id].h[3] = 0;
    }
    if (self->ents[id].h[2] != 0) {
        xfree__FPv((void *)self->ents[id].h[2]);
        self->ents[id].h[2] = 0;
    }
    if (self->ents[id].h[1] != 0) {
        xfree__FPv((void *)self->ents[id].h[1]);
        self->ents[id].h[1] = 0;
    }
    if (self->ents[id].h[0] != 0) {
        xfree__FPv((void *)self->ents[id].h[0]);
        self->ents[id].h[0] = 0;
    }
    for (i = 0; i < 4; i++) {
        self->fC24[i] = lbl_804CCFB8[lbl_804CD804[id][i]];
        self->fC24[i] = (self->fC24[i] + 0x7FF) & ~0x7FF;
        self->ents[id].h[i] = (u32)xmalloc__FUl(self->fC24[i]);
        if (self->ents[id].h[i] == 0) {
            ret = 3;
            goto fail;
        }
        self->ents[id].k[i] = lbl_804CD804[id][i];
        self->fC14[i] = adxf_open_afs__6TLobbyFii(0, lbl_804CD804[id][i]);
        if (self->fC14[i] == NULL) {
            ret = 2;
            goto fail;
        }
    }
    for (i = 0; i < 4; i++) {
        read_checked_align__6TLobbyFiii(self->fC14[i], self->fC24[i] / 2048, self->ents[id].h[i]);
        set_entry_params__6TLobbyFiiii(&self->fC14[i], i, self->fC24[i] / 2048, self->ents[id].h[i]);
    }
    return 0;
fail:
    if (self->ents[id].h[3] != 0) {
        xfree__FPv((void *)self->ents[id].h[3]);
        self->ents[id].h[3] = 0;
    }
    if (self->ents[id].h[2] != 0) {
        xfree__FPv((void *)self->ents[id].h[2]);
        self->ents[id].h[2] = 0;
    }
    if (self->ents[id].h[1] != 0) {
        xfree__FPv((void *)self->ents[id].h[1]);
        self->ents[id].h[1] = 0;
    }
    if (self->ents[id].h[0] != 0) {
        xfree__FPv((void *)self->ents[id].h[0]);
        self->ents[id].h[0] = 0;
    }
    return ret;
}

}
