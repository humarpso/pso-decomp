#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_80226294 { u32 flags; u8 pad4[4]; s32 f8; u8 padC[0xC]; s16 f18; u8 pad1a[0xE]; };

extern "C" {
void set_music_streams_volume(s32);
extern s32 lbl_805D627C;
extern int lbl_805D6280;
extern int lbl_805D6284;
extern s32 music_stream_base_gain;
extern s32 lbl_805D628C;
extern const f32 lbl_805DC744;
void update_music_stream_gain(s32 user);
}

extern "C" {
void reset_global__6TLobbyFv(void);
void set_and_notify__6TLobbyFi(int a0);
void close_option_window__6TLobbyFv(void);
void init_layout_positions__6TLobbyFv(void);
void TLobby__sub_8022614C(s32 arg0);
int init_sound_mode__6TLobbyFPv(void *);
extern int lbl_805D6280;
extern int lbl_805D6284;
extern int lbl_805D6294;
extern int lbl_805D6298;
extern s32 lbl_805D627C;
extern s32 lbl_805D6290;
extern s32 lbl_805D62A4;

void set_and_notify__6TLobbyFi(int a0) { lbl_805D6284 = a0; update_music_stream_gain((s32)((void*)(lbl_805D6280))); }

void reset_global__6TLobbyFv(void) { lbl_805D6298 = 0; TLobby__sub_8022614C(lbl_805D6294); }

void close_option_window__6TLobbyFv(void) { lbl_805D6284 = 0; update_music_stream_gain((s32)((void*)(lbl_805D6280))); }

void init_layout_positions__6TLobbyFv(void) {
    lbl_805D627C = -0x50;
    lbl_805D62A4 = -0x5A;
    if (((int (*)(void))init_sound_mode__6TLobbyFPv)() == 1) {
        lbl_805D627C -= 0x32;
    }
    lbl_805D6290 = -0xA;
    close_option_window__6TLobbyFv();
    reset_global__6TLobbyFv();
}
}

extern "C" {
u8 *get_global_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK set_mode__6TLobbyFi(int);
M2C_UNK OSSetSoundMode(int);
void set_sound_output_mode__6TLobbyFi(s32 arg0);
extern Ent_80226294 lbl_805145F0[];
extern u32 lbl_805DC748;
extern s32 lbl_805D62B0;
void release_sound_with_fade(s32 idx);
void stop_sound_request(s32 idx);
u8 *get_global_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK set_mode__6TLobbyFi(int);
u32 OSGetSoundMode();
extern s8 lbl_805D3708;
M2C_UNK TLobby__sub_80227D38();
extern Ent_80226294 lbl_805145F0[];
extern s32 lbl_805D62B0;
extern u32 lbl_805DC748;
void TLobby__sub_8022644C(void);
void set_cue_stream_gain(s32, s32);
void set_menu_index_main__6TLobbyFPv(void);
extern s32 lbl_805D629C;
extern s32 lbl_805D62A0;
extern s32 lbl_805D62A8;
extern s32 lbl_805D62AC;
extern const f32 lbl_805DC740;
}

extern "C" {

int TLobby__sub_80226308(void* p);
void TTecRaFoie__sub_80226254(void);
int get_lobby_data__6TLobbyFv(void);
void update_technique_slot__10TTecRaFoieFi(s32 arg0);
M2C_UNK set_sound_slot_pitch();

int get_lobby_data__6TLobbyFv(void) {  return lbl_805D6280; }

void TLobby__sub_8022614C(s32 arg0) {
    set_menu_index_main__6TLobbyFPv();
    lbl_805D6294 = arg0;
    lbl_805D629C = lbl_805D6290 + lbl_805D6294 + lbl_805D6298;
    lbl_805D62A0 = lbl_805D6290 + lbl_805D6298;
    lbl_805D62A8 = (s32)(lbl_805DC740 * (f32)arg0);
    lbl_805D62AC = lbl_805D62A4 + lbl_805D62A8;
    set_cue_stream_gain(lbl_805D62AC, lbl_805D62A8);
}

void update_music_stream_gain(s32 user) {
  unsigned int new_var;
  s32 total;
  new_var = lbl_805D627C;
  total = user + (*(s32 *)&lbl_805D6284);
  if (lbl_805D627C && lbl_805D627C)
  {
  }
  total = new_var + total;
  lbl_805D6280 = user;
  music_stream_base_gain = total;
  lbl_805D628C = (s32) (lbl_805DC744 * ((f32) total));
  set_music_streams_volume(total);
}

void TTecRaFoie__sub_80226254(void) {  }

extern s32 lbl_805D62B0;

void update_technique_slot__10TTecRaFoieFi(s32 arg0) {
    if (((s32) lbl_805D62B0 != 0) && (arg0 >= 0) && (arg0 < 0x28)) {
        set_sound_slot_pitch();
    }
}

void stop_sound_request(s32 idx) {
    if (lbl_805D62B0 != 0 && idx >= 0 && idx < 0x28) {
        release_sound_with_fade(idx);
        lbl_805145F0[idx].flags &= lbl_805DC748;
        lbl_805145F0[idx].f18 = 0;
        lbl_805145F0[idx].f8 = 0;
    }
}

int TLobby__sub_80226308(void* p) { return init_sound_mode__6TLobbyFPv((void *)(p)); }

int init_sound_mode__6TLobbyFPv(void *) {
    u8 *p;
    if (OSGetSoundMode() == 0U) {
        lbl_805D3708 = 1;
        set_mode__6TLobbyFi(0);
    } else {
        set_mode__6TLobbyFi(1);
        lbl_805D3708 = 0;
        p = get_global_state__23TAdSinglePlyChrSelectGCFv();
        if (p != NULL && p != NULL && M2C_FIELD(p, s16 *, 0xE) != 0) {
            lbl_805D3708 = 2;
            set_mode__6TLobbyFi(2);
        }
    }
    return lbl_805D3708;
}

void set_sound_output_mode__6TLobbyFi(s32 arg0) {
    M2C_UNK var_r30;
    u8 *temp_r3;
    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0xE) = 0;
    }
    switch (arg0) {
    case 0:
        var_r30 = 1;
        OSSetSoundMode((int) (1));
        break;
    case 2:
        OSSetSoundMode((int) (1));
        if (temp_r3 != NULL) {
            M2C_FIELD(temp_r3, s16 *, 0xE) = 1;
        }
        var_r30 = 2;
        break;
    case 1:
        OSSetSoundMode((int) (0));
        var_r30 = 0;
        break;
    }
    set_mode__6TLobbyFi((int) (var_r30));
}
void TLobby__sub_8022644C(void) {
    s32 i;
    if (lbl_805D62B0 != 0) {
        TLobby__sub_80227D38();
    }
    for (i = 0; i < 0x28; i++) {
        lbl_805145F0[i].flags &= lbl_805DC748;
        lbl_805145F0[i].f18 = 0;
        lbl_805145F0[i].f8 = 0;
    }
}

}
