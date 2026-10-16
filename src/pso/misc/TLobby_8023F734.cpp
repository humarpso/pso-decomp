#include "pso/audio/SoundBankTables.h"
struct SoundRequestVoice;
struct Voice_80241FD8;
#pragma push

#include "types.h"

struct RecoveredGlobal_8023F880_lbl_805162EC
{
  s32 value;
  u8 remaining[0x1B54];
};

typedef struct Range_8023FBBC {
    s32 start;
    s32 end;
} Range_8023FBBC;

typedef struct Owner_8023FBBC {
    u8 pad[0x288];
    s32 kind;
} Owner_8023FBBC;

typedef struct Entry_8024220C
{
  s32 id;
  s32 f4;
  char name[0x11];
  char s19[0x11];
  char s2A[0x11];
  char s3B[0x11];
  u8 f4C[0xC];
  u8 ext[0x64];
} Entry_8024220C;

typedef struct Src_8024220C
{
  s32 id;
  char name[0x30];
  char list[0x30];
  u8 f64[0xC];
  u8 ext[0x64];
} Src_8024220C;

extern "C" {
extern RecoveredGlobal_8023F880_lbl_805162EC lbl_805162EC;
s32 TLobby__sub_8023F880(s32 arg0);
extern RecoveredGlobal_8023F880_lbl_805162EC lbl_805162EC;
void clamp_field9c__6TLobbyFPvf(void *voice, f32 scale);
void set_sound_slot_special_scale(s32 slot, f32 scale);
extern RecoveredGlobal_8023F880_lbl_805162EC lbl_805162EC;
s32 start_voice_fade(struct Voice_80241FD8 *v, s32 step);
void fade_out_sound_slot(s32 slot, s32 step);
extern RecoveredGlobal_8023F880_lbl_805162EC lbl_805162EC;
s32 set_voice_pitch_slide(u8 *arg0, s32 arg1, s32 arg2);
void set_sound_slot_pitch(s32 slot, s32 pitch, s32 duration);

s32 resolve_sound_effect_bank(Owner_8023FBBC *owner, s32 kind, s32 bank, s32 index);
s32 __as__21TPlyMeetUserExtensionFRC21TPlyMeetUserExtension(void *, void *);
void TLobby__sub_802422EC(void *arg0, void *arg1);
char *parse_csv_token__6TLobbyFPvPv(char *src, char *dst);
char *build_text_from_comma_list__6TLobbyFPv(char *list);
s32 strncpy(void *, void *, int);
s32 memset(void *, int, int);
extern u8 selected_guild_card_record[];
void load_selected_guild_card_record(Src_8024220C *arg0);
u16 update_crc16_ccitt__6TLobbyFUsUc(u16 crc, u8 c);
u16 calculate_crc16_ccitt(const u8* bytes, s32 count);
}

extern "C" {

s32 advance_rng__6TLobbyFPv(void *arg0);
s32 get_field_0x280__6TLobbyFPv(void* p);
f32 get_field_2a4__6TLobbyFPv(void* p);
void set_clamped_field27c__6TLobbyFPvf(void *arg0, f32 farg0);
void set_menu_index__6TLobbyFPvi(void* p, s32 v);
void set_mode__6TLobbyFPvi(void *arg0, s32 arg1);
s32 sndOutputMode(s32);

s32 advance_rng__6TLobbyFPv(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x2AC) = (s32) ((*(s32 *)((s8 *)arg0 + 0x2AC) * 0x10DCD) + 1);
    return *(s32 *)((s8 *)arg0 + 0x2AC);
}

struct Slot_8023F754 { u8 pad[0x88]; s32 f88; u8 pad2[0x14]; };
void TLobby__sub_8023F754(s32 arg0, s32 arg1);
void TLobby__sub_8023F754(s32 arg0, s32 arg1) {
    if (arg0 < 0 || arg0 >= 0x20) {
        return;
    }
    s32 *p = (s32 *)&lbl_805162EC;
    p[arg0 * 40 + 34] = arg1;
}

void set_sound_slot_special_scale(s32 slot, f32 scale) {
    if (slot < 0 || slot >= 32) return;
    clamp_field9c__6TLobbyFPvf((u8 *)&lbl_805162EC.value + slot * 0xA0, scale);
}

f32 get_field_2a4__6TLobbyFPv(void* p) { return *(f32*)((char*)p + 0x2a4); }
s32 get_field_0x280__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x280); }
void set_menu_index__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x280) = v; }
void set_mode__6TLobbyFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        sndOutputMode(0);
        *(s32 *)((s8 *)arg0 + 0x2A0) = arg1;
        return;
    case 1:
        sndOutputMode(1);
        *(s32 *)((s8 *)arg0 + 0x2A0) = arg1;
        return;
    case 2:
        sndOutputMode(2);
        *(s32 *)((s8 *)arg0 + 0x2A0) = arg1;
        return;
    }
}

extern f32 lbl_805DC9C0;
extern f32 lbl_805DC9C4;

void set_clamped_field27c__6TLobbyFPvf(void *arg0, f32 farg0) {
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < lbl_805DC9C0) {
        var_f1 = lbl_805DC9C0;
    }
    if (var_f1 > lbl_805DC9C4) {
        var_f1 = lbl_805DC9C4;
    }
    *(f32 *)((s8 *)arg0 + 0x27C) = var_f1;
}
typedef struct RecoveredGlobal_8023F880_lbl_805162EC RecoveredGlobal_8023F880_lbl_805162EC;
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
typedef char RecoveredGlobal_8023F880_lbl_805162EC_size[((sizeof(RecoveredGlobal_8023F880_lbl_805162EC)) == 0x1B58) ? (1) : (-1)];
s32 TLobby__sub_8023F880(s32 arg0) {
  u8 *new_var;
  s8 *new_var2;
  if ((arg0 >= 0) && (arg0 < 0x28))
  {
    new_var = (u8 *) (&lbl_805162EC.value);
    new_var2 = (s8 *) (new_var + (arg0 * 0xA0));
    return *((s32 *) (new_var2 + 4));
  }
  return -9;
}
void fade_out_sound_slot(s32 slot, s32 step) {
    if (slot < 0 || slot >= 32) return;
    ((void (*)(void*, s32))start_voice_fade)((u8 *)&lbl_805162EC.value + slot * 0xA0, step);
}
void set_sound_slot_pitch(s32 slot, s32 pitch, s32 duration) {
    if (slot < 0 || slot >= 0x20) {
        return;
    }
    set_voice_pitch_slide((u8 *)&lbl_805162EC.value + slot * 0xA0, (s32)((u32)pitch << 13) / 3072, duration);
}
#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
s32 resolve_sound_effect_bank(Owner_8023FBBC *owner, s32 kind, s32 bank, s32 index) {
    u8 *t = (u8 *)&sound_bank_file_sizes;
    s32 result = -1;
    Range_8023FBBC *r = NULL;
    switch (kind) {
    case 0:
        switch (bank) {
        case 0:
        case 1:
        case 2:
        case 5:
            { s32 off = bank * 4; u8 *a = t + 0x728; r = *(Range_8023FBBC **)(a + off); }
            break;
        case 3:
            if (owner->kind >= 0 && owner->kind < 22) {
                { s32 off = owner->kind * 4; u8 *a = t + 0x744; r = *(Range_8023FBBC **)(a + off); }
            }
            break;
        case 4:
            if (owner->kind >= 0 && owner->kind < 22) {
                { s32 off = owner->kind * 4; u8 *a = t + 0x79C; r = *(Range_8023FBBC **)(a + off); }
            }
            break;
        case 6:
            if (owner->kind >= 0 && owner->kind < 22) {
                { s32 off = owner->kind * 4; u8 *a = t + 0x7F4; r = *(Range_8023FBBC **)(a + off); }
            }
            break;
        }
        break;
    }
    if (r != NULL && index >= 0 && index <= r->end - r->start) {
        result = index + r->start;
    }
    return result;
}
#pragma pop

}

#pragma pop

#include "types.h"

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
#define lbl_805162EC ((E_8023FF38 *)&lbl_805162EC)
void reset_sound_group_fade__6TLobbyFv(void);
#define lbl_805162EC ((E_8023FF38 *)&lbl_805162EC)
void fade_voice_channels__6TLobbyFi(s32 arg0);
void set_entry_params__6TLobbyFiiii(void *, int, int, u32);
void read_checked_align__6TLobbyFlll(void *, int, u32);
void *adxf_open_afs__6TLobbyFii(int, int);
void *xmalloc__FUl(u32 bytes);
void xfree__FPv(void *allocation);

s32 TLobby__sub_8023FFB8(Obj_8023FCC0 *self, int id);
}

extern "C" {

u8 is_ready__6TLobbyFPv(void *arg0);

u8 is_ready__6TLobbyFPv(void *arg0) {
    return (u8) (*(s32 *)((s8 *)arg0 + 0x298) == 1);
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
        ((void (*)(void*, s32))start_voice_fade)(&lbl_805162EC[i], arg0);
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
        self->fC24[i] = sound_bank_file_sizes[sound_bank_file_indices[id][i]];
        self->fC24[i] = (self->fC24[i] + 0x7FF) & ~0x7FF;
        self->ents[id].h[i] = (u32)xmalloc__FUl(self->fC24[i]);
        if (self->ents[id].h[i] == 0) {
            ret = 3;
            goto fail;
        }
        self->ents[id].k[i] = sound_bank_file_indices[id][i];
        self->fC14[i] = adxf_open_afs__6TLobbyFii(0, sound_bank_file_indices[id][i]);
        if (self->fC14[i] == NULL) {
            ret = 2;
            goto fail;
        }
    }
    for (i = 0; i < 4; i++) {
        read_checked_align__6TLobbyFlll(self->fC14[i], self->fC24[i] / 2048, self->ents[id].h[i]);
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

#undef lbl_805162EC

#include "types.h"

struct Slot_802405B0 { void *buf[4]; u8 pad[0x24 - 0x10]; };

struct Mgr_802405B0 {
    u8 pad0[0x288];
    s32 state;
    u8 pad28c[0x2B8 - 0x28C];
    s32 depth;
    s32 stack[(0x310 - 0x2BC) / 4];
    Slot_802405B0 slots[8];
};

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
s32 reset_sound_state__6TLobbyFPv(u8 *arg0);
s32 sndPopGroup();
s32 pop_sound_groups__6TLobbyFPvi(void *p, s32 arg1);
s32 OSGetTick();
s32 TLobby__sub_8023FCC0(void *);
s32 tick_sound_voice(SoundRequestVoice *v);
#define lbl_805162EC ((Voice_802401D0 *)&lbl_805162EC)
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
        ((s32 (*)(void*))tick_sound_voice)(&lbl_805162EC[i]);
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

s32 reset_sound_state__6TLobbyFPv(u8 *arg0) {
    pop_sound_groups__6TLobbyFPvi((void *)(arg0), (s32)(1));
    *(s32 *)((s8 *)arg0 + 0x298) = 4;
    return 0;
}
#define M ((Mgr_802405B0 *)p)
s32 pop_sound_groups__6TLobbyFPvi(void *p, s32 arg1) {
    s32 idx;
    s32 n;
    ((s32 (*)(int))fade_voice_channels__6TLobbyFi)(0);
    ((s32 (*)(void))reset_sound_group_fade__6TLobbyFv)();
    if (M->state == -1) {
        return 8;
    }
    if (arg1 == 0) {
        while ((n = M->depth) > 0) {
            idx = M->stack[n];
            if (idx < 4) {
                break;
            }
            sndPopGroup();
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
            sndPopGroup();
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

#undef lbl_805162EC
#pragma push

#include "types.h"
#pragma fp_contract on

extern "C" {

s32 validate_and_set_selection__6TLobbyFPvi(void *arg0, s32 arg1);
s32 sndVolume(s32, s32, s32);

s32 validate_and_set_selection__6TLobbyFPvi(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= 0x16)) {
        return 4;
    }
    if ((arg1 != 0) && ((s32) *(s32 *)((s8 *)arg0 + 0x288) == -1)) {
        return 8;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x288) > 0) {
        pop_sound_groups__6TLobbyFPvi(arg0, 0);
    }
    sndVolume(0x7F, 0, 0xFF);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x298) != 1) {
        return 9;
    }
    *(s32 *)((s8 *)arg0 + 0x2B0) = -1;
    *(s32 *)((s8 *)arg0 + 0x2B4) = (s32) sound_bank_load_routes[arg1];
    *(s32 *)((s8 *)arg0 + 0x29C) = arg1;
    return 0;
}

}

#pragma pop

#include "types.h"

extern "C" {
extern const f32 lbl_805DC9D8;
void reset_sound_owner_state(u8 *arg0);
void __destroy_arr(void *arr, void *dtor, u32 size, u32 n);
void *TLobby__sub_80242148(void *arg0, s16 arg1);
#define lbl_805162EC ((char *)&lbl_805162EC)
void TLobby__sub_80240974(void);
u16 update_crc16_ccitt__6TLobbyFUsUc(u16 crc, u8 c);
void *__construct_array(void *, void *, void *, u32, u32);
s32 __register_global_object(s32, void *, void *);
void TLobby__sub_80240974(void);
void TLobby__sub_8024218C(void* p);
extern char lbl_805162E0[];
#define lbl_805162EC ((char *)&lbl_805162EC)
void construct_global_array_a0__6TLobbyFv(void);
}

extern "C" {

void *TLobby__sub_80240808(void *arg0, s16 arg1);
void TLobby__sub_802409E4(void* p);
int TLobby__sub_802409F0(void);
void set_field0__6TLobbyFPvi(void* p, s32 v);
void update__6TLobbyFPv(void *arg0);
s32 __dl__FPv(void *);
s32 get_field_308__6TLobbyFPv(void* p);

void *TLobby__sub_80240808(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 *)((s8 *)arg0 + 0x294) = 0;
        *(s32 *)((s8 *)arg0 + 0x290) = 0;
        *(s32 *)((s8 *)arg0 + 0x288) = -1;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void reset_sound_owner_state(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x2BC) = 0;
    *(s32 *)((s8 *)arg0 + 0x2B8) = 0;
    *(s32 *)((s8 *)arg0 + 0x294) = 0;
    *(s32 *)((s8 *)arg0 + 0x290) = 0;
    *(s32 *)((s8 *)arg0 + 0x284) = 0;
    *(s32 *)((s8 *)arg0 + 0x288) = -1;
    *(s32 *)((s8 *)arg0 + 0x298) = 0;
    *(s32 *)((s8 *)arg0 + 0x2B0) = -1;
    *(s32 *)((s8 *)arg0 + 0x2B4) = 0;
    *(s32 *)((s8 *)arg0 + 0x2A8) = 0;
    *(f32 *)((s8 *)arg0 + 0x2A4) = (f32) lbl_805DC9D8;
    *(s32 *)((s8 *)arg0 + 0x2AC) = 0x1E240;
}

u16 calculate_crc16_ccitt(const u8* bytes, s32 count) {
    u16 crc = 0;
    while (count-- > 0) {
        crc = update_crc16_ccitt__6TLobbyFUsUc(crc, *bytes);
        ++bytes;
    }
    return crc;
}

u16 update_crc16_ccitt__6TLobbyFUsUc(u16 crc, u8 c) {
    s32 i;
    u32 r = crc;
    r ^= c << 8;
    for (i = 0; i < 8; i++) {
        r <<= 1;
        if (r & 0x10000) {
            r ^= 0x1021;
        }
    }
    return r;
}

void construct_global_array_a0__6TLobbyFv(void) {
    __construct_array(lbl_805162EC, (void *)TLobby__sub_8024218C, (void *)TLobby__sub_80242148, 0xA0, 0x28);
    __register_global_object(0, (void *)TLobby__sub_80240974, lbl_805162E0);
}

void TLobby__sub_80240974(void) {
    __destroy_arr(lbl_805162EC, (void *)TLobby__sub_80242148, 0xa0, 0x28);
}

void set_field0__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

extern const f32 TLobby__data_805DC9E0;
extern const f32 lbl_805DC9E4;
extern f32 lbl_805DC9E8;

void clamp_field9c__6TLobbyFPvf(void *arg0, f32 farg0) {
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < TLobby__data_805DC9E0) {
        *(f32 *)((s8 *)arg0 + 0x9C) = (f32) lbl_805DC9E4;
        return;
    }
    if (var_f1 > lbl_805DC9E8) {
        var_f1 = lbl_805DC9E8;
    }
    *(f32 *)((s8 *)arg0 + 0x9C) = var_f1;
}

void TLobby__sub_802409E4(void* p) { *(s16*)((char*)p + 0x92) = 5; }

int TLobby__sub_802409F0(void) { return 0; }

void update__6TLobbyFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    if ((u32) (*(s32 *)((s8 *)arg0 + 0x80) + 0x77780000) == 0x8888U) {
        *(s32 *)((s8 *)arg0 + 0x84) = 0;
        *(s32 *)((s8 *)arg0 + 0x80) = 0;
        *(s32 *)((s8 *)arg0 + 0x78) = (s32) *(s32 *)((s8 *)arg0 + 0x7C);
    }
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x80);
    if (temp_r4 > 0) {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x84);
        if (temp_r0 <= 0) {
            *(s32 *)((s8 *)arg0 + 0x84) = 0;
            *(s32 *)((s8 *)arg0 + 0x80) = 0;
            *(s32 *)((s8 *)arg0 + 0x78) = (s32) *(s32 *)((s8 *)arg0 + 0x7C);
        } else {
            *(s32 *)((s8 *)arg0 + 0x78) = (s32) ((s32) (*(s32 *)((s8 *)arg0 + 0x7C) * (temp_r4 - temp_r0)) / temp_r4);
            *(s32 *)((s8 *)arg0 + 0x84) = (s32) (*(s32 *)((s8 *)arg0 + 0x84) - ((s32 (*)(s32))get_field_308__6TLobbyFPv)(*(s32 *)((s8 *)arg0 + 0)));
        }
    }
    *(s32 *)((s8 *)arg0 + 0x64) = (s32) (*(s32 *)((s8 *)arg0 + 0x6C) + *(s32 *)((s8 *)arg0 + 0x70) + *(s32 *)((s8 *)arg0 + 0x78));
    *(s32 *)((s8 *)arg0 + 0x64) = (s32) (*(s32 *)((s8 *)arg0 + 0x64) + 0x2000);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x64) < 0) {
        *(s32 *)((s8 *)arg0 + 0x64) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x64) > 0x3FFF) {
        *(s32 *)((s8 *)arg0 + 0x64) = 0x3FFF;
    }
}

}

#undef lbl_805162EC
#pragma push

#include "types.h"
#include "pso/audio/SoundRequestVoice.h"

struct Voice_80241FD8 {
    u32 pad0; s32 state; u32 pad1; s32 kind; u8 pad2[0x20 - 0x10]; s32 token;
    u8 pad3[0x48 - 0x24]; s32 fade; s32 fadeStep;
};

struct Ctl_80240B64 {
    u8 type;
    s16 value;
};

struct Params_80240B64 {
    u8 count;
    Ctl_80240B64 *ctl;
};

struct Owner_80241798 { u8 pad[0x288]; u32 field_288; };

struct Sound_80241798 {
    Owner_80241798 *owner;
    u8 pad4[0x4];
    s32 flags;
    u8 padC[0x4];
    s32 group;
    s32 id;
    u8 pad18[0x58];
    s32 pitch;
    s32 velocity;
    u8 pad78[0x14];
    s16 field_8C;
};

extern "C" {
s32 sndFXCtrl(int, int, int);
void send_voice_controller_updates(u8 *arg0);
s32 init_sound_voice__6TLobbyFPviiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 sndFXKeyOff(int);
s32 start_voice_fade(struct Voice_80241FD8 *v, s32 step);
s32 OSDisableInterrupts(void);
s32 OSRestoreInterrupts(s32);
void TLobby__sub_80240F38(void);
void TLobby__sub_80240F3C(SoundRequestVoice *);
void TLobby__sub_80241A0C(void);
void send_voice_controller_updates(u8 *arg0);
void clamp_params__6TLobbyFPv(void *arg0);
void calc_sound_spatial_params(SoundRequestVoice *);
s32 sndFXKeyOff(int);
u32 sndFXStartParaInfo(u16, u8, u8, u8, Params_80240B64 *);
u32 sndFXCheck(u32);
extern s8 TLobby__data_805434A8[];
extern s32 TLobby__lobby_state_flags;
s32 tick_sound_voice(SoundRequestVoice *v);
void TLobby__sub_80241798(Sound_80241798 *arg0);
void update_random_flip_flag__6TLobbyFPv(u8 *arg0);
}

extern "C" {

void TLobby__sub_80240F38(void);
void TLobby__sub_80241A0C(void);
void clamp_params__6TLobbyFPv(void *arg0);

s32 set_voice_pitch_slide(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_r5;
    var_r5 = arg2;
    if (var_r5 <= 0) {
        var_r5 = 0x88888888;
    }
    *(s32 *)((s8 *)arg0 + 0x7C) = arg1;
    *(s32 *)((s8 *)arg0 + 0x80) = var_r5;
    *(s32 *)((s8 *)arg0 + 0x84) = var_r5;
    return 0;
}

s32 tick_sound_voice(SoundRequestVoice *v) {
    Params_80240B64 params;
    Ctl_80240B64 ctl[6];
    s32 level;
    s32 fade;
    s32 step;
    switch (v->kind) {
    case 0:
    switch (v->state) {
    case -1:
        v->age++;
        v->effect = ((s32 (*)(SoundRequestOwner*, s32, s32, s32))resolve_sound_effect_bank)(v->owner, v->kind, v->bank, v->index);
        if (v->effect < 0) {
            v->state = 0;
            return 0;
        }
        if (v->delay != 0) {
            v->delay--;
            break;
        }
        ((void (*)(SoundRequestVoice *))TLobby__sub_80241A0C)(v);
        TLobby__sub_80241798((Sound_80241798 *)(v));
    start:
        ((void (*)(SoundRequestVoice *))TLobby__sub_80240F38)(v);
        TLobby__sub_80240F3C(v);
        calc_sound_spatial_params(v);
        clamp_params__6TLobbyFPv(v);
        update__6TLobbyFPv(v);
        params.count = 1;
        params.ctl = ctl;
        ctl[0].type = 0x80;
        ctl[0].value = v->pitch;
        if (!(TLobby__lobby_state_flags & 2) && TLobby__data_805434A8[7] == 0) {
            level = OSDisableInterrupts();
        }
        v->token = sndFXStartParaInfo(v->effect, 0x7F, v->pan, v->studio, &params);
        send_voice_controller_updates((u8 *)v);
        if (!(TLobby__lobby_state_flags & 2) && TLobby__data_805434A8[7] == 0) {
            OSRestoreInterrupts(level);
        }
        send_sound_request_reverb((SoundRequestVoice *)(v));
        v->state = 1;
        break;
    case 0:
        break;
    case 1:
        if (v->flags & 0x80) {
            v->pitchMoving += v->pitchVelocity;
            if (v->pitchVelocity > 0) {
                if (v->pitchMoving > v->pitchLimit) {
                    v->pitchVelocity = -v->pitchVelocity;
                }
            } else if (v->pitchMoving < -v->pitchLimit) {
                v->pitchVelocity = -v->pitchVelocity;
            }
        }
        v->age++;
        fade = v->fade;
        if (fade <= -0x7F) {
            sndFXKeyOff(v->token);
            v->state = 0;
            break;
        }
        step = v->fadeStep;
        if (step != 0) {
            v->fade = fade - step;
        }
        if (v->flags & 1) {
            if (v->refresh >= 5) {
                calc_sound_spatial_params(v);
            }
        } else {
            calc_sound_spatial_params(v);
        }
        v->refresh--;
        send_sound_request_reverb((SoundRequestVoice *)(v));
        clamp_params__6TLobbyFPv(v);
        update__6TLobbyFPv(v);
        if (sndFXCheck(v->token) == 0xFFFFFFFF) {
            if ((v->flags & 1) && v->refresh >= 0) {
                sndFXKeyOff(v->token);
                v->previousPan = v->previousSurround = v->previousVolume = 0x88888888;
                goto start;
            }
            v->state = 0;
        } else {
            send_voice_controller_updates((u8 *)v);
            ((void (*)(SoundRequestVoice*))TLobby__sub_802409F0)(v);
            if ((v->flags & 1) && v->refresh < 0) {
                sndFXKeyOff(v->token);
                v->state = 0;
            }
        }
        break;
    }
        break;
    }
    return 0;
}

void update_random_flip_flag__6TLobbyFPv(u8 *arg0) {
    switch (*(s32 *)((s8 *)arg0 + 0x10)) {
    case 0:
        switch (*(s32 *)((s8 *)arg0 + 0x14)) {
        case 0: case 1: case 2: case 3: case 4:
        case 7: case 8: case 9:
        case 21:
        case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31:
            *(s32 *)((s8 *)arg0 + 8) |= 0x100;
            break;
        }
        break;
    }
    if (*(s32 *)((s8 *)arg0 + 8) & 0x100) {
        *(s16 *)((s8 *)arg0 + 0x90) = (s16)(((u32 (*)(void*))advance_rng__6TLobbyFPv)(*(void **)((s8 *)arg0 + 0)) & 1);
    }
}

void TLobby__sub_80240F38(void) {  }

void TLobby__sub_80241798(Sound_80241798 *arg0) {
    s32 num = 1;
    s32 den = 1;
    s32 mask = 0;
    s32 min = 0;
    switch (arg0->owner->field_288) {
    case 16:
        switch (arg0->group) {
        case 4:
            switch (arg0->id) {
            case 5: case 6: case 7: case 8: case 9:
                mask = 0x3F;
                min = 0x40;
                arg0->flags |= 0x80;
                break;
            }
            break;
        }
        break;
    case 2:
        switch (arg0->group) {
        case 4:
            switch (arg0->id) {
            case 6:
                mask = 0x3F;
                min = 0x20;
                arg0->flags |= 0x80;
                break;
            }
            break;
        }
        break;
    case 9:
        switch (arg0->group) {
        case 3:
            switch (arg0->id) {
            case 0: case 1:
                mask = 0x3F;
                min = 0x80;
                arg0->flags |= 0x80;
                break;
            }
            break;
        }
        break;
    case 12:
        switch (arg0->group) {
        case 4:
            switch (arg0->id) {
            case 11:
                mask = 0x3F;
                min = 0x20;
                arg0->flags |= 0x80;
                break;
            case 12: case 13:
                mask = 0x3F;
                min = 0x60;
                arg0->flags |= 0x80;
                break;
            }
            break;
        case 3:
            switch (arg0->id) {
            case 20:
                den = 6;
                mask = 0x3F;
                min = 0x20;
                arg0->flags |= 0x80;
                arg0->field_8C = 0x1000;
                break;
            }
            break;
        }
        break;
    case 13:
        switch (arg0->group) {
        case 3:
            switch (arg0->id) {
            case 5:
                num = 2;
                mask = 0x3F;
                min = 0xC0;
                arg0->flags |= 0x80;
                break;
            case 21: case 22:
                mask = 0x3F;
                min = 0x40;
                arg0->flags |= 0x80;
                break;
            }
            break;
        }
        break;
    }
    if (arg0->flags & 0x80) {
        arg0->pitch = num * ((s32)((((u32 (*)(void*))advance_rng__6TLobbyFPv)(arg0->owner) >> 16) & 0x3FFF) - 0x2000) / den;
        arg0->velocity = min + (mask & ((u32 (*)(void*))advance_rng__6TLobbyFPv)(arg0->owner));
        if ((s32)(((u32 (*)(void*))advance_rng__6TLobbyFPv)(arg0->owner) & 0x3F) < 0x20) {
            arg0->velocity = -arg0->velocity;
        }
    }
}

void TLobby__sub_80241A0C(void) {  }

extern const f32 lbl_805DC9EC;

void send_sound_request_reverb(SoundRequestVoice *voice) {
    f32 request = voice->reverb;
    s32 amount;
    if (request < TLobby__data_805DC9E0) {
        if (voice->bank == 5 || (voice->flags & 0x10)) amount = 0;
        else amount = s32(lbl_805DC9EC * voice->owner->reverb);
    } else amount = s32(lbl_805DC9EC * request);
    if (voice->bank == 6) {
        switch (voice->index) {
        case 12:
        case 25:
            return;
        default:
            break;
        }
    }
    if (voice->previousReverb != u8(amount))
        sndFXCtrl(voice->token, 91, amount);
}

void send_voice_controller_updates(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    switch ((s32) *(s32 *)((s8 *)arg0 + 0xC)) {
    case 0:
    temp_r3 = *(s32 *)((s8 *)arg0 + 0x24);
    if (temp_r3 != (s32) *(s32 *)((s8 *)arg0 + 0x28)) {
        *(s32 *)((s8 *)arg0 + 0x24) = *(s32 *)((s8 *)arg0 + 0x28);
        sndFXCtrl((int) (*(s32 *)((s8 *)arg0 + 0x20)), (int) (7), (int) ((u8) *(s32 *)((s8 *)arg0 + 0x28)));
    }
    temp_r3_2 = *(s32 *)((s8 *)arg0 + 0x2C);
    if (temp_r3_2 != (s32) *(s32 *)((s8 *)arg0 + 0x30)) {
        *(s32 *)((s8 *)arg0 + 0x2C) = *(s32 *)((s8 *)arg0 + 0x30);
        sndFXCtrl((int) (*(s32 *)((s8 *)arg0 + 0x20)), (int) (0xA), (int) ((u8) *(s32 *)((s8 *)arg0 + 0x30)));
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x10) == 5) {
        sndFXCtrl((int) (*(s32 *)((s8 *)arg0 + 0x20)), (int) (0x83), (int) (0U));
        return;
    }
    temp_r3_3 = *(s32 *)((s8 *)arg0 + 0x34);
    if (temp_r3_3 != (s32) *(s32 *)((s8 *)arg0 + 0x38)) {
        *(s32 *)((s8 *)arg0 + 0x34) = *(s32 *)((s8 *)arg0 + 0x38);
        sndFXCtrl((int) (*(s32 *)((s8 *)arg0 + 0x20)), (int) (0x83), (int) ((u8) *(s32 *)((s8 *)arg0 + 0x38)));
    }
        break;
    }
}

void clamp_params__6TLobbyFPv(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x28) = (((*(s32 *)((s8 *)arg0 + 0x48) + *(s32 *)((s8 *)arg0 + 0x40)) + *(s32 *)((s8 *)arg0 + 0x3C)) + *(s32 *)((s8 *)arg0 + 0x44)) + 0x7F;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (0x40 - (*(s32 *)((s8 *)arg0 + 0x50) + *(s32 *)((s8 *)arg0 + 0x54)));
    *(s32 *)((s8 *)arg0 + 0x38) = (s32) ((*(s32 *)((s8 *)arg0 + 0x58) + *(s32 *)((s8 *)arg0 + 0x60)) + 0x40);
    *(s32 *)((s8 *)arg0 + 0x28) = (s32) (*(s32 *)((s8 *)arg0 + 0x28) + *(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0)) + 0x280));
    if ((s32) *(s32 *)((s8 *)arg0 + 0x28) < 0) {
        *(s32 *)((s8 *)arg0 + 0x28) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x28) > 0x7F) {
        *(s32 *)((s8 *)arg0 + 0x28) = 0x7F;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x30) < 0) {
        *(s32 *)((s8 *)arg0 + 0x30) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x30) > 0x7F) {
        *(s32 *)((s8 *)arg0 + 0x30) = 0x7F;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x38) < 0) {
        *(s32 *)((s8 *)arg0 + 0x38) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x38) > 0x7F) {
        *(s32 *)((s8 *)arg0 + 0x38) = 0x7F;
    }
}

s32 start_voice_fade(struct Voice_80241FD8 *v, s32 step) {
    switch (v->kind) {
    case 0:
        if (v->fadeStep == 0) {
            if (step != 0) {
                v->fadeStep = step;
                v->fade = -step;
            } else {
                if (step == 0 && v->state == 1) {
                    sndFXKeyOff(v->token);
                }
                v->state = 0;
            }
        }
        break;
    }
    return 0;
}

#pragma push
#pragma fp_contract on
s32 init_sound_voice__6TLobbyFPviiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    *(s32 *)((s8 *)arg0 + 4) = 0;
    *(s32 *)((s8 *)arg0 + 8) = arg4;
    *(s32 *)((s8 *)arg0 + 0xC) = arg1;
    *(s32 *)((s8 *)arg0 + 0x10) = arg2;
    *(s32 *)((s8 *)arg0 + 0x14) = arg3;
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    *(s32 *)((s8 *)arg0 + 0x28) = 0x7F;
    *(s32 *)((s8 *)arg0 + 0x24) = 0x88888888;
    *(s32 *)((s8 *)arg0 + 0x30) = 0x40;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0x88888888;
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0x88888888;
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    *(s32 *)((s8 *)arg0 + 0x40) = 0;
    *(s32 *)((s8 *)arg0 + 0x44) = 0;
    *(s32 *)((s8 *)arg0 + 0x48) = 0;
    *(s32 *)((s8 *)arg0 + 0x4C) = 0;
    *(s32 *)((s8 *)arg0 + 0x50) = 0;
    *(s32 *)((s8 *)arg0 + 0x54) = 0;
    *(s32 *)((s8 *)arg0 + 0x58) = 0;
    *(s32 *)((s8 *)arg0 + 0x60) = 0;
    *(s32 *)((s8 *)arg0 + 0x64) = 0;
    *(s32 *)((s8 *)arg0 + 0x68) = 0x88888888;
    *(s32 *)((s8 *)arg0 + 0x6C) = 0;
    *(s32 *)((s8 *)arg0 + 0x70) = 0;
    *(s32 *)((s8 *)arg0 + 0x74) = 0;
    *(s32 *)((s8 *)arg0 + 0x78) = 0;
    *(s32 *)((s8 *)arg0 + 0x7C) = 0;
    *(s32 *)((s8 *)arg0 + 0x80) = 0;
    *(s32 *)((s8 *)arg0 + 0x84) = 0;
    *(s16 *)((s8 *)arg0 + 0x8C) = 0x3F00;
    *(s32 *)((s8 *)arg0 + 0x98) = 0;
    *(s16 *)((s8 *)arg0 + 0x90) = 0;
    *(s16 *)((s8 *)arg0 + 0x92) = 0;
    *(s32 *)((s8 *)arg0 + 0x94) = 0;
    *(f32 *)((s8 *)arg0 + 0x9C) = (f32) lbl_805DC9E4;
    *(s32 *)((s8 *)arg0 + 0x88) = 0;
    switch (*(s32 *)((s8 *)arg0 + 0xC)) {
    case 0:
        *(s32 *)((s8 *)arg0 + 4) = -1;
        update_random_flip_flag__6TLobbyFPv((u8 *)(arg0));
        break;
    }
    return 0;
}
#pragma pop

}

#pragma pop

#pragma push

#include "types.h"

struct RecoveredGlobal_8024259C_TLobby__data_8050AAAC {
    s32 value;
    u8 remaining[0x24];
};

typedef struct Tag_802421C4 { s32 a; s32 b; } Tag_802421C4;

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_80242380 {
    u8 c[8];
};

struct Ext_80242380 {
    u8 bytes[0x64];
};

typedef struct Entry_80242380 {
    s32 id;
    s32 f4;
    char name[0x11];
    char s19[0x11];
    char s2A[0x11];
    char s3B[0x11];
    Pair_80242380 f4C;
    s32 f54;
    Ext_80242380 ext;
} Entry_80242380;

extern "C" {
s32 seq_jump__9TProtocolFPUcR21TPlyMeetUserExtension(int, void *, void *);
s32 strncpy(void *, void *, int);
s32 memset(void *, int, int);
extern RecoveredGlobal_8024259C_TLobby__data_8050AAAC TLobby__data_8050AAAC;
extern u32 TLobby__protocol_instance;
void TLobby__sub_8024259C(s32 arg0);
char *skip_to_comma_field__6TLobbyFPvii(char *s, s32 a, s32 b);
char *get_shared_text_buffer();
void append_comma__20TWindowSubStatusDispFv();
void text_builder_append(char *);
void text_builder_reset();
char *skip_to_comma_field__6TLobbyFPvii(char *s, s32 a, s32 b);
char *build_text_from_comma_list__6TLobbyFPv(char *list);
s32 send_find_user__9TProtocolFR16TPlyGuildCardTagUl(void *, Tag_802421C4 *, s32);
extern u32 TLobby__protocol_instance;
void send_find_user_self_tag__6TLobbyFi(s32 arg0);
void* get_com_card_entry__6TLobbyFi(int a0);
s32 TLobby__sub_802428F8(void* p);
int get_com_card_data__6TLobbyFv(void);
extern u8 selected_guild_card_record[];
extern unsigned char lbl_80517F9C[];
void find_and_load_com_card__6TLobbyFUi(u32 arg0);
void __copy(void *, void *, int);
Entry_80242380 *copy_com_card_entry__6TLobbyFPvPv(Entry_80242380 *dst, Entry_80242380 *src);
char *parse_csv_token__6TLobbyFPvPv(char *src, char *dst);
}

extern "C" {

void *TLobby__sub_80242148(void *arg0, s16 arg1);
void TLobby__sub_8024218C(void* p);
void TLobby__sub_802422EC(void *arg0, void *arg1);
int forward_8024273C__6TLobbyFPv(void* p);
void* get_com_card_entry__6TLobbyFi(int a0);
s32 get_field_308__6TLobbyFPv(void* p);
int TLobby__sub_8024273C(void*);

void *TLobby__sub_80242148(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 *)((s8 *)arg0 + 4) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
void TLobby__sub_8024218C(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 get_field_308__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x308); }
int forward_8024273C__6TLobbyFPv(void* p) { return TLobby__sub_8024273C(p); }

void send_find_user_self_tag__6TLobbyFi(s32 arg0) {
    if ((u32) TLobby__protocol_instance != 0U) {
        Tag_802421C4 tag = *(Tag_802421C4 *)((u8 *)TLobby__protocol_instance + 0x1900);
        send_find_user__9TProtocolFR16TPlyGuildCardTagUl((void *)TLobby__protocol_instance, &tag, arg0);
    }
}

typedef struct Entry_8024220C Entry_8024220C;
typedef struct Src_8024220C Src_8024220C;
void load_selected_guild_card_record(Src_8024220C *arg0) {
  char *new_var;
  void *p;
  (*(Entry_8024220C *)&selected_guild_card_record).id = arg0->id;
  (*(Entry_8024220C *)&selected_guild_card_record).f4 = 0;
  memset((*(Entry_8024220C *)&selected_guild_card_record).name, 0, 0x11);
  strncpy((*(Entry_8024220C *)&selected_guild_card_record).name, arg0->name, 0x10);
  (*(Entry_8024220C *)&selected_guild_card_record).name[0x10] = 0;
  new_var = arg0->list;
  new_var = build_text_from_comma_list__6TLobbyFPv(new_var);
  p = new_var;
  p = ((void *)parse_csv_token__6TLobbyFPvPv((char *)(p), (char *)((*(Entry_8024220C *)&selected_guild_card_record).s19)));
  p = ((void *)parse_csv_token__6TLobbyFPvPv((char *)(p), (char *)((*(Entry_8024220C *)&selected_guild_card_record).s2A)));
  p = ((void *)parse_csv_token__6TLobbyFPvPv((char *)(p), (char *)((*(Entry_8024220C *)&selected_guild_card_record).s2A)));
  parse_csv_token__6TLobbyFPvPv((char *)(p), (char *)((*(Entry_8024220C *)&selected_guild_card_record).s3B));
  TLobby__sub_802422EC((*(Entry_8024220C *)&selected_guild_card_record).f4C, arg0->f64);
  __as__21TPlyMeetUserExtensionFRC21TPlyMeetUserExtension((*(Entry_8024220C *)&selected_guild_card_record).ext, arg0->ext);
}

void TLobby__sub_802422EC(void *arg0, void *arg1) {
    *(s32 *)((s8 *)arg0 + 0) = (s32) *(s32 *)((s8 *)arg1 + 0);
    *(s32 *)((s8 *)arg0 + 4) = (s32) *(s32 *)((s8 *)arg1 + 4);
    *(s16 *)((s8 *)arg0 + 8) = (s16) *(s16 *)((s8 *)arg1 + 8);
}

    extern unsigned char lbl_80517F9C[];

void find_and_load_com_card__6TLobbyFUi(u32 arg0) {
    s32 n;
    s32 i;
    n = ((s32 (*)(void))get_com_card_data__6TLobbyFv)();
    for (i = 0; i < n; i++) {
        get_com_card_entry__6TLobbyFi(i);
        if (arg0 == ((u32 (*)(void))TLobby__sub_802428F8)()) break;
    }
    if (i < n) {
        copy_com_card_entry__6TLobbyFPvPv((Entry_80242380 *)(selected_guild_card_record), (Entry_80242380 *)(get_com_card_entry__6TLobbyFi(i)));
    }
}

Entry_80242380 *copy_com_card_entry__6TLobbyFPvPv(Entry_80242380 *dst, Entry_80242380 *src) {
    dst->id = src->id;
    dst->f4 = src->f4;
    __copy(dst->name, src->name, 0x11);
    __copy(dst->s19, src->s19, 0x11);
    __copy(dst->s2A, src->s2A, 0x11);
    __copy(dst->s3B, src->s3B, 0x11);
    *(Pair_80242380 *)&dst->f4C = *(const Pair_80242380 *)&src->f4C;
    dst->f54 = src->f54;
    *(Ext_80242380 *)&dst->ext = *(const Ext_80242380 *)&src->ext;
    return dst;
}

void* get_com_card_entry__6TLobbyFi(int a0) {  return (char*)lbl_80517F9C + a0 * 188; }
typedef char RecoveredGlobal_8024259C_TLobby__data_8050AAAC_size[sizeof(RecoveredGlobal_8024259C_TLobby__data_8050AAAC) == 0x28 ? 1 : -1];

char *parse_csv_token__6TLobbyFPvPv(char *src, char *dst) {
    s32 i;
    for (i = 0x10; i != 0; i--) {
        char c = *src;
        if (c == 0) break;
        src++;
        if (c == ',') break;
        *dst = c;
        dst++;
    }
    if (*src == ',') {
        src++;
    }
    *dst = 0;
    return src;
}

char *skip_to_comma_field__6TLobbyFPvii(char *s, s32 a, s32 b) {
    s32 i;
    for (i = a + 1; i < b;) {
        if (*s == '\0') return s;
        if (*s++ == ',') i++;
    }
    return s;
}

char *build_text_from_comma_list__6TLobbyFPv(char *list) {
    char buf[0x11];
    char *s;
    char *d;
    s32 i;
    s32 count;
    text_builder_reset();
    s = list;
    count = 1;
    while (*s != '\0') {
        if (*s++ == ',') {
            count++;
        }
    }
    for (i = 0; i < count; i++) {
        append_comma__20TWindowSubStatusDispFv();
        s = skip_to_comma_field__6TLobbyFPvii(list, i, count);
        d = buf;
        while (*s != '\0' && *s != ',') {
            *d++ = *s++;
        }
        *d = '\0';
        text_builder_append(buf);
    }
    return get_shared_text_buffer();
}

void TLobby__sub_8024259C(s32 arg0) {
    if ((u32) TLobby__protocol_instance != 0U) {
        memset((void *) (&TLobby__data_8050AAAC.value), (int) (0), (int) (0x11));
        strncpy((void *) (&TLobby__data_8050AAAC.value), (void *) (arg0 + 0x19), (int) (0x10));
        *(s8 *)((s8 *)(&TLobby__data_8050AAAC.value) + 0x10) = 0;
        seq_jump__9TProtocolFPUcR21TPlyMeetUserExtension((int) (TLobby__protocol_instance), (void *) (arg0 + 0x4C), (void *) (arg0 + 0x58));
    }
}

}

#pragma pop

#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct RecoveredGlobal_802426E8_lbl_80517F9C {
    s32 value;
    u8 remaining[0x5E0];
};

struct RecoveredGlobal_8024287C_lbl_80517EE0 {
    s32 value;
    u8 remaining[0xB8];
};

struct RecoveredGlobal_8024287C_lbl_80517F9C {
    s32 value;
    u8 remaining[0x5E0];
};

extern "C" {
#define lbl_80517F9C (*(RecoveredGlobal_802426E8_lbl_80517F9C *)lbl_80517F9C)
extern int com_card_entry_count;
void remove_com_card_entry__6TLobbyFi(s32 arg0);
void* TLobby__sub_802428C4(void* p);
#define selected_guild_card_record (*(RecoveredGlobal_8024287C_lbl_80517EE0 *)selected_guild_card_record)
#define lbl_80517F9C (*(RecoveredGlobal_802426E8_lbl_80517F9C *)lbl_80517F9C)
void construct_entry_arrays__6TLobbyFv(void);
void remove_com_card_entry__6TLobbyFi(s32 arg0);
int get_com_card_data__6TLobbyFv(void);
s32 remove_com_card_by_id__6TLobbyFUi(u32 arg0);
}

extern "C" {

void TLobby__sub_8024285C(void* p);
void* TLobby__sub_802428C4(void* p);
s32 TLobby__sub_802428F8(void* p);
int get_com_card_data__6TLobbyFv(void);
void init_player_entry__6TLobbyFPvPv(u8 *arg0, u8 *arg1);
void reset_state_805D63DC__6TLobbyFv(void*);
void reset_state__6TLobbyFPv(void* p);
s32 __as__21TPlyMeetUserExtensionFRC21TPlyMeetUserExtension(void *, void *);
u32 find_card_by_id__17TWindowSubComCardFUi();
int fn_80077AA4(void*);
s32 get_com_card_list__6TLobbyFPv();

extern s32 lbl_805D63D8;

void init_player_entry__6TLobbyFPvPv(u8 *arg0, u8 *arg1) {
    s32 temp_r5;
    void *p;

    *(s32 *)((s8 *)arg0 + 0) = (s32) *(s32 *)((s8 *)arg1 + 0xC);
    temp_r5 = lbl_805D63D8;
    lbl_805D63D8 = temp_r5 + 1;
    *(s32 *)((s8 *)arg0 + 4) = temp_r5;
    ((s32 (*)(void*, void*, int))TLobby__sub_802422EC)((void *) (arg0 + 0x4C), (void *) (arg1 + 0x10), (int) (temp_r5));
    __as__21TPlyMeetUserExtensionFRC21TPlyMeetUserExtension((void *) (arg0 + 0x58), (void *) (arg1 + 0x60));
    ((TLobby *)arg0)->get_id();
    if (find_card_by_id__17TWindowSubComCardFUi() == 0U) {
        strncpy((void *) (arg0 + 8), (void *) (((TWindowSubStatusDisp *)arg0)->get_sub_disp_ptr()), (int) (0x10));
    } else {
        strncpy((void *) (arg0 + 8), (void *) (get_com_card_list__6TLobbyFPv()), (int) (0x10));
    }
    *(s8 *)((s8 *)arg0 + 0x18) = 0;
    p = ((void* (*)(void*))build_text_from_comma_list__6TLobbyFPv)((void *) (arg1 + 0x1C));
    p = ((void* (*)(void*, void*))parse_csv_token__6TLobbyFPvPv)(p, (void *) (arg0 + 0x19));
    p = ((void* (*)(void*, void*))parse_csv_token__6TLobbyFPvPv)(p, (void *) (arg0 + 0x2A));
    p = ((void* (*)(void*, void*))parse_csv_token__6TLobbyFPvPv)(p, (void *) (arg0 + 0x2A));
    ((void* (*)(void*, void*))parse_csv_token__6TLobbyFPvPv)(p, (void *) (arg0 + 0x3B));
}

    extern int com_card_entry_count;

typedef char RecoveredGlobal_802426E8_lbl_80517F9C_size[sizeof(RecoveredGlobal_802426E8_lbl_80517F9C) == 0x5E4 ? 1 : -1];
void remove_com_card_entry__6TLobbyFi(s32 arg0) {
    u8 *temp_r3;
    if (arg0 < 7) {
        temp_r3 = (u8 *)&lbl_80517F9C.value + (arg0 * 0xBC);
        ((TLobby *)temp_r3)->move_words((u32 *)(temp_r3 + 0xBC), (s32)((void *) ((u32) ((7 - arg0) * 0xBC) >> 2U)));
    }
    (*(s32 *)&com_card_entry_count) -= 1;
}

s32 remove_com_card_by_id__6TLobbyFUi(u32 arg0) {
    s32 i;
    s32 n;
    n = ((s32)get_com_card_data__6TLobbyFv());
    for (i = 0; i < n; i++) {
        if (arg0 == ((u32)((TLobby *)(((void* (*)(s32))get_com_card_entry__6TLobbyFi)(i)))->get_id())) {
            remove_com_card_entry__6TLobbyFi(i);
            n -= 1;
        }
    }
    if (n < 8) {
        return n;
    }
    remove_com_card_entry__6TLobbyFi(0);
    return 7;
}

void reset_state_805D63DC__6TLobbyFv(void*) { com_card_entry_count = 0; TLobby::clear_flag_bit2(); }

void reset_state__6TLobbyFPv(void* p) { reset_state_805D63DC__6TLobbyFv((void*)((void*)(p))); }
void TLobby__sub_8024285C(void* p) { reset_state_805D63DC__6TLobbyFv((void*)((void*)(p))); }

typedef char RecoveredGlobal_8024287C_lbl_80517EE0_size[sizeof(RecoveredGlobal_8024287C_lbl_80517EE0) == 0xBC ? 1 : -1];
typedef char RecoveredGlobal_8024287C_lbl_80517F9C_size[sizeof(RecoveredGlobal_8024287C_lbl_80517F9C) == 0x5E4 ? 1 : -1];
void construct_entry_arrays__6TLobbyFv(void) {
    TLobby__sub_802428C4((void*)((void *) &selected_guild_card_record.value));
    ((s32 (*)(s32 *, void *(*)(void *), s32, s32, s32))__construct_array)(&(*(RecoveredGlobal_8024287C_lbl_80517F9C *)&lbl_80517F9C).value, TLobby__sub_802428C4, 0, 0xBC, 8);
}

void* TLobby__sub_802428C4(void* p) { fn_80077AA4((char*)p + 0x58); return p; }
s32 TLobby__sub_802428F8(void* p) { return *(s32*)((char*)p + 0x4); }

    extern int com_card_entry_count;
int get_com_card_data__6TLobbyFv(void) {  return com_card_entry_count; }

}
#undef lbl_80517F9C
#undef selected_guild_card_record
