#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8022727C_lbl_804CB850 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802272B4_lbl_804CB850 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80227248_lbl_804CB850 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80226CB0_lbl_804CB850 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80226C3C_lbl_80514D00 {
    M2C_UNK value;
    u8 remaining[0x254];
};

struct RecoveredGlobal_80226CF4_lbl_804CB850 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8022733C_lbl_804CB850 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Ent_802269B4 {
    s32 flags;
    s32 f4;
    u32 f8;
    u8 pad[0x18 - 0xC];
    s16 timer;
    u8 pad2[0x28 - 0x1A];
};

struct Passage_80226FA0 { s16 first, repeat, count, transition, next; };

struct Program_80226FA0 { char archive[32]; s32 count, ntsc, pal; Passage_80226FA0 *modes[2]; };

struct Buffers_80226FA0 { u8 unknown[0x80]; s32 segments[2]; s32 ticks[2]; s32 positions[2]; };

extern "C" {
int TLobby__sub_80226308(void);
void update_lobby_subsystems__6TLobbyFv(void);
int init_layout_positions__6TLobbyFv(void);
    extern int lbl_805D62B0;
    extern int lbl_805D62B4;
    extern int lbl_805D62B8;
int TLobby__sub_80226B64(void);
int set_and_notify__6TLobbyFi(void*);
int set_and_notify_default__6TLobbyFv(void);
int set_and_notify__6TLobbyFi(void*);
int send_neg30__6TLobbyFv(void);
M2C_UNK stop_audio_stream(s32);
int init_layout_positions__6TLobbyFv(void);
extern M2C_UNK lbl_804CB850[];
extern s32 lbl_805D6330;
void release_bgm_resource__6TLobbyFv(void);
extern s32 lbl_805D6300;
extern s32 lbl_805D631C;
void set_dark_falz_music_request(s32 arg0);
extern s32 lbl_805D6300;
extern s32 lbl_805D631C;
void set_target_id__6TLobbyFi(s32 arg0);
void start_audio_stream_file(void *, s32);
extern M2C_UNK lbl_804CB850[];
void play_cue_stream_file(s32 arg0);
s32 TLobby__sub_803C94DC(int, int);
s32 TLobby__sub_803C9CB0(int);
extern M2C_UNK lbl_804CB850[];
extern s32 lbl_805D62E4;
extern s32 lbl_805D62E8;
void TLobby__sub_802272B4(void);
M2C_UNK stop_audio_stream(s32);
extern M2C_UNK lbl_804CB850[];
void stop_cue_stream(void);
s32 set_field_40_and_notify__6TLobbyFPvs(int, int);
extern M2C_UNK lbl_804CB850[];
void set_cue_stream_gain(s32 arg0);
extern RecoveredGlobal_80226C3C_lbl_80514D00 lbl_80514D00;
extern u8 *lbl_805D3720;
extern s32 lbl_805D62E4;
extern s32 lbl_805D62E8;
u8 *get_current_slot_entry__6TLobbyFv(void);
s32 set_field_40_and_notify__6TLobbyFPvs(int, int);
extern M2C_UNK lbl_804CB850[];
extern s32 lbl_805D6330;
void set_music_streams_volume(s32 arg0);
s32 TLobby__sub_803C94DC(int, int);
extern M2C_UNK lbl_804CB850[];
extern s32 lbl_805D62E4;
extern s32 lbl_805D62E8;
void TLobby__sub_8022733C(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u32 get_player_by_client_id(void *);
M2C_UNK stop_sound_request(int);
s32 fn_802264B8(int, int);
M2C_UNK update_music_fade();
s32 TLobby__sub_8023F880(int);
extern Ent_802269B4 lbl_805145F0[];
extern f32 lbl_80514C50[];
extern u32 lbl_805D4DF0;
extern s32 lbl_805D53A0;
extern s8 lbl_805D6279;
extern int lbl_805D62B0;
extern const f32 lbl_805DC74C;
void update_sound_request_slots(void);
s32 TLobby__sub_803C5D00(void *);
void append_music_stream_segment(void *, int, int);
s32 TLobby__sub_803C97B8(void *);
extern M2C_UNK lbl_804CB850[];
extern s32 lbl_805D62E0;
extern s32 lbl_805D62E4;
extern s32 lbl_805D62E8;
extern s32 lbl_805D62F0;
extern s32 lbl_805D62F4;
extern Program_80226FA0 *lbl_805D6304;
extern s32 lbl_805D6308;
extern s32 lbl_805D630C;
extern s32 lbl_805D6310;
extern s32 lbl_805D6318;
extern s32 lbl_805D631C;
extern s32 lbl_805D6320;
extern s32 lbl_805D6324;
extern s16 lbl_805D6334;
void update_music_sequencer(void);
}

extern "C" {

void update_lobby_subsystems__6TLobbyFv(void);
int TLobby__sub_8022644C(void);

void update_lobby_subsystems__6TLobbyFv(void) { TLobby__sub_8022644C(); stop_cue_stream(); }

void update_sound_request_slots(void) {
    s32 i;
    s32 r;
    u32 p;
    Ent_802269B4 *e;
    s16 *t;
    if (lbl_805D62B0 != 0) {
        p = get_player_by_client_id((void *) (lbl_805D53A0));
        if (p != 0U) {
            VecCopy__FP3VecPC3Vec(lbl_80514C50, (void *) (p + 0x38));
        } else if (lbl_805D4DF0 != 0U) {
            VecCopy__FP3VecPC3Vec(lbl_80514C50, (void *) (lbl_805D4DF0 + 0x178));
        } else {
            lbl_80514C50[2] = lbl_805DC74C;
            lbl_80514C50[1] = lbl_805DC74C;
            lbl_80514C50[0] = lbl_805DC74C;
        }
        if (lbl_805D6279 == 0) {
            for (i = 0; i < 0x28; i++) {
                r = TLobby__sub_8023F880(i);
                if (r == -1 || r == 1) {
                    e = &lbl_805145F0[i];
                    t = &e->timer;
                    e->flags &= ~0x200;
                    if (*t > 0) {
                        (*t)--;
                        if ((e->flags & 0x1000) && e->f8 != 0U && fn_802264B8(i, 1) == 0) {
                            *t = 0;
                            stop_sound_request(i);
                            e->flags &= ~0x400;
                        }
                    } else {
                        stop_sound_request(i);
                        e->flags &= ~0x400;
                    }
                } else {
                    e = &lbl_805145F0[i];
                    if (!(e->flags & 0x200)) {
                        e->flags &= ~0x400;
                    } else {
                        e->timer--;
                        if (e->timer <= 0) {
                            e->flags &= ~0x600;
                            stop_sound_request(i);
                        }
                    }
                }
            }
        }
        update_music_fade();
    }
}

int TLobby__sub_80226B64(void) { update_lobby_subsystems__6TLobbyFv(); init_layout_positions__6TLobbyFv(); TLobby__sub_80226308(); lbl_805D62B4 = 0; lbl_805D62B8 = 0; lbl_805D62B0 = 1; return 0; }

typedef char RecoveredGlobal_80226C3C_lbl_80514D00_size[sizeof(RecoveredGlobal_80226C3C_lbl_80514D00) == 0x258 ? 1 : -1];
u8 *get_current_slot_entry__6TLobbyFv(void) {
    if ((s32) lbl_805D62E4 == 1) {
        return (u8 *)&lbl_80514D00.value + (lbl_805D62E8 << 5);
    }
    return lbl_805D3720;
}

int set_and_notify_default__6TLobbyFv(void) { return set_and_notify__6TLobbyFi((void*)(0)); }
int send_neg30__6TLobbyFv(void) { return set_and_notify__6TLobbyFi((void*)(-30)); }

typedef char RecoveredGlobal_80226CB0_lbl_804CB850_size[sizeof(RecoveredGlobal_80226CB0_lbl_804CB850) == 0xC ? 1 : -1];
void set_cue_stream_gain(s32 arg0) {
    s32 var_r4;
    var_r4 = arg0;
    if (var_r4 <= -0x140) {
        var_r4 = -0x3E7;
    }
    if ((u32) M2C_FIELD(&(*(RecoveredGlobal_80226CB0_lbl_804CB850 *)&lbl_804CB850).value, u32 *, 8) != 0U) {
        set_field_40_and_notify__6TLobbyFPvs((int) (M2C_FIELD(&(*(RecoveredGlobal_80226CB0_lbl_804CB850 *)&lbl_804CB850).value, u32 *, 8)), (int) (var_r4));
    }
}

typedef char RecoveredGlobal_80226CF4_lbl_804CB850_size[sizeof(RecoveredGlobal_80226CF4_lbl_804CB850) == 0xC ? 1 : -1];
void set_music_streams_volume(s32 arg0) {
    s32 var_r31;
    var_r31 = arg0;
    if (var_r31 <= -0x140) {
        var_r31 = -0x3E7;
    }
    if ((s32) lbl_805D6330 == 0) {
        set_field_40_and_notify__6TLobbyFPvs((int) (M2C_FIELD(&(*(RecoveredGlobal_80226CF4_lbl_804CB850 *)&lbl_804CB850).value, s32 *, 0)), (int) (var_r31));
    }
    set_field_40_and_notify__6TLobbyFPvs((int) (M2C_FIELD(&(*(RecoveredGlobal_80226CF4_lbl_804CB850 *)&lbl_804CB850).value, s32 *, 4)), (int) (var_r31));
}

void release_bgm_resource__6TLobbyFv(void) {
    if ((s32) lbl_805D6330 != 0) {
        stop_audio_stream(M2C_FIELD(lbl_804CB850, s32 *, 4));
        lbl_805D6330 = 0;
        init_layout_positions__6TLobbyFv();
    }
}

u8 lbl_80514C60[0x80];
__declspec(section ".data") s32 lbl_80514CE0[2];
__declspec(section ".data") s32 lbl_80514CE8[2];
__declspec(section ".data") s32 lbl_80514CF0[2];
void update_music_sequencer(void) {
    Passage_80226FA0 *passage;
    Passage_80226FA0 *next;
    if (lbl_805D62E0 != 1) {
        return;
    }
    if (lbl_805D62E4 != 1) {
        return;
    }
    lbl_80514CE8[lbl_805D62E8]++;
    if (lbl_805D6324 > 0) {
        lbl_805D6324--;
    } else if (lbl_805D6320 == 0 && lbl_805D631C != lbl_805D6318) {
        lbl_805D6320 = 1;
        lbl_805D6324 = 600;
    }
    if (lbl_80514CE8[lbl_805D62E8] < lbl_805D62F4 && TLobby__sub_803C5D00((void *)((s32 *)&lbl_804CB850)[0]) != 1) {
        return;
    }
    passage = &lbl_805D6304->modes[lbl_805D6318][lbl_805D6308];
    switch (lbl_805D6320) {
    case 0:
        if (++lbl_805D630C >= passage->count) {
            lbl_805D6308 = passage->next;
            lbl_805D630C = 0;
            next = &lbl_805D6304->modes[lbl_805D6318][lbl_805D6308];
            if (lbl_805D6310) {
                lbl_805D62F0 = next->repeat;
            } else {
                lbl_805D62F0 = next->first;
                lbl_805D6310 = 1;
            }
        } else {
            lbl_805D62F0 = passage->first + lbl_805D630C;
        }
        break;
    case 1:
        lbl_805D6308 = passage->next;
        lbl_805D630C = 0;
        lbl_805D6318 = 1 - lbl_805D6318;
        lbl_805D6324 = 600;
        if (passage->transition >= 0) {
            lbl_805D62F0 = passage->transition;
            lbl_805D6320 = 2;
        } else {
            lbl_805D62F0 = lbl_805D6304->modes[lbl_805D631C][lbl_805D6308].first;
            lbl_805D6310 = 1;
            lbl_805D6320 = 0;
        }
        break;
    case 2:
        if (lbl_805D6310) {
            lbl_805D62F0 = passage->repeat;
        } else {
            lbl_805D62F0 = passage->first;
            lbl_805D6310 = 1;
        }
        lbl_805D6320 = 0;
        break;
    }
    lbl_80514CE0[lbl_805D62E8] = lbl_805D62F0;
    lbl_805D6334 = lbl_805D62E8;
    append_music_stream_segment((void *)((s32 *)&lbl_804CB850)[0], 190, lbl_80514CE0[lbl_805D62E8]);
    lbl_805D62E8 = 1 - lbl_805D62E8;
    lbl_80514CE8[lbl_805D62E8] = 0;
    lbl_80514CF0[lbl_805D62E8] = TLobby__sub_803C97B8((void *)((s32 *)&lbl_804CB850)[lbl_805D62E8]);
}

void set_dark_falz_music_request(s32 arg0) {
    if ((s32) lbl_805D6300 == 4) {
        lbl_805D631C = arg0;
    }
}
void set_target_id__6TLobbyFi(s32 arg0) {
    if ((s32) lbl_805D6300 != 4) {
        lbl_805D631C = arg0;
    }
}
typedef char RecoveredGlobal_8022727C_lbl_804CB850_size[sizeof(RecoveredGlobal_8022727C_lbl_804CB850) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_80227248_lbl_804CB850_size[sizeof(RecoveredGlobal_80227248_lbl_804CB850) == 0xC ? 1 : -1];
void stop_cue_stream(void) {
    if ((u32) M2C_FIELD(&(*(RecoveredGlobal_80227248_lbl_804CB850 *)&lbl_804CB850).value, u32 *, 8) != 0U) {
        stop_audio_stream((s32)((int) (M2C_FIELD(&(*(RecoveredGlobal_80227248_lbl_804CB850 *)&lbl_804CB850).value, u32 *, 8))));
    }
}

void play_cue_stream_file(s32 arg0) {
    if ((void *) M2C_FIELD(&(*(RecoveredGlobal_8022727C_lbl_804CB850 *)&lbl_804CB850).value, u8 **, 8) != NULL) {
        start_audio_stream_file(M2C_FIELD(&(*(RecoveredGlobal_8022727C_lbl_804CB850 *)&lbl_804CB850).value, u8 **, 8), arg0);
    }
}
typedef char RecoveredGlobal_802272B4_lbl_804CB850_size[sizeof(RecoveredGlobal_802272B4_lbl_804CB850) == 0xC ? 1 : -1];
void TLobby__sub_802272B4(void) {
    s32 temp_r3;
    TLobby__sub_803C94DC((int) (M2C_FIELD(&(*(RecoveredGlobal_802272B4_lbl_804CB850 *)&lbl_804CB850).value, M2C_UNK *, (lbl_805D62E8 * 4))), (int) (0));
    TLobby__sub_803C94DC((int) (M2C_FIELD(&(*(RecoveredGlobal_802272B4_lbl_804CB850 *)&lbl_804CB850).value, s32 *, 8)), (int) (0));
    temp_r3 = TLobby__sub_803C9CB0((int) (M2C_FIELD(&(*(RecoveredGlobal_802272B4_lbl_804CB850 *)&lbl_804CB850).value, M2C_UNK *, (lbl_805D62E8 * 4))));
    if ((temp_r3 == 0) || (temp_r3 == 5)) {
        lbl_805D62E4 = 0;
        return;
    }
    lbl_805D62E4 = 1;
}
typedef char RecoveredGlobal_8022733C_lbl_804CB850_size[sizeof(RecoveredGlobal_8022733C_lbl_804CB850) == 0xC ? 1 : -1];
void TLobby__sub_8022733C(void) {
    TLobby__sub_803C94DC((int) (M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_8022733C_lbl_804CB850 *)&lbl_804CB850).value) + (lbl_805D62E8 * 4)), s32 *, 0)), (int) (1));
    TLobby__sub_803C94DC((int) (M2C_FIELD(&(*(RecoveredGlobal_8022733C_lbl_804CB850 *)&lbl_804CB850).value, s32 *, 8)), (int) (1));
    lbl_805D62E4 = 2;
}

}
