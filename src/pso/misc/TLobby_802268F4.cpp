#include "types.h"
#include "pso/misc/TLobby.h"

struct RecoveredGlobal_8022727C_lbl_804CB850 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802272B4_lbl_804CB850 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80227248_lbl_804CB850 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80226CB0_lbl_804CB850 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80226C3C_lbl_80514D00 {
    s32 value;
    u8 remaining[0x254];
};

struct RecoveredGlobal_80226CF4_lbl_804CB850 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8022733C_lbl_804CB850 {
    s32 value;
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

extern "C" {
int TLobby__sub_80226308(void);
    extern int lbl_805D62B0;
    extern int lbl_805D62B4;
    extern int lbl_805D62B8;
int TLobby__sub_80226B64(void);
int set_and_notify__6TLobbyFi(void*);
int set_and_notify__6TLobbyFi(void*);
s32 stop_audio_stream(s32);
extern s32 lbl_804CB850[];
extern s32 lbl_805D6330;
extern s32 lbl_805D6300;
extern s32 music_target_id;
void set_dark_falz_music_request(s32 arg0);
extern s32 lbl_805D6300;
extern s32 music_target_id;
void start_audio_stream_file(void *, s32);
extern s32 lbl_804CB850[];
void play_cue_stream_file(s32 arg0);
s32 TLobby__sub_803C94DC(int, int);
s32 TLobby__sub_803C9CB0(int);
extern s32 lbl_804CB850[];
extern s32 lbl_805D62E4;
extern s32 music_fade_slot_index;
void TLobby__sub_802272B4(void);
s32 stop_audio_stream(s32);
extern s32 lbl_804CB850[];
void stop_cue_stream(void);
s32 set_field_40_and_notify__6TLobbyFs(int, int);
extern s32 lbl_804CB850[];
void set_cue_stream_gain(s32 arg0);
extern RecoveredGlobal_80226C3C_lbl_80514D00 lbl_80514D00;
extern u8 *lbl_805D3720;
extern s32 lbl_805D62E4;
extern s32 music_fade_slot_index;
s32 set_field_40_and_notify__6TLobbyFs(int, int);
extern s32 lbl_804CB850[];
extern s32 lbl_805D6330;
void set_music_streams_volume(s32 arg0);
s32 TLobby__sub_803C94DC(int, int);
extern s32 lbl_804CB850[];
extern s32 lbl_805D62E4;
extern s32 music_fade_slot_index;
void TLobby__sub_8022733C(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 get_player_by_client_id(void *);
s32 stop_sound_request(int);
s32 fn_802264B8(int, int);
s32 update_music_fade();
s32 TLobby__sub_8023F880(int);
extern Ent_802269B4 lbl_805145F0[];
extern f32 lbl_80514C50[];
extern u32 camera_ctrl_instance;
extern s32 local_client_id;
extern s8 lbl_805D6279;
extern int lbl_805D62B0;
extern const f32 lbl_805DC74C;
void update_sound_request_slots(void);
s32 TLobby__sub_803C5D00(void *);
void append_music_stream_segment(void *, int, int);
s32 TLobby__sub_803C97B8(void *);
extern s32 lbl_804CB850[];
extern s32 lbl_805D62E0;
extern s32 lbl_805D62E4;
extern s32 music_fade_slot_index;
extern s32 lbl_805D62F0;
extern s32 lbl_805D62F4;
extern Program_80226FA0 *lbl_805D6304;
extern s32 music_sequencer_passage_index;
extern s32 music_passage_index;
extern s32 lbl_805D6310;
extern s32 music_active_mode_index;
extern s32 music_target_id;
extern s32 music_sequencer_fade_state;
extern s32 music_sequencer_timer;
extern s16 lbl_805D6334;
void update_music_sequencer(void);
}

extern "C" {

int TLobby__sub_8022644C(void);

void TLobby::update_lobby_subsystems() { TLobby__sub_8022644C(); stop_cue_stream(); }

void update_sound_request_slots(void) {
    s32 i;
    s32 r;
    u32 p;
    Ent_802269B4 *e;
    s16 *t;
    if (lbl_805D62B0 != 0) {
        p = get_player_by_client_id((void *) (local_client_id));
        if (p != 0U) {
            VecCopy__FP3VecPC3Vec(lbl_80514C50, (void *) (p + 0x38));
        } else if (camera_ctrl_instance != 0U) {
            VecCopy__FP3VecPC3Vec(lbl_80514C50, (void *) (camera_ctrl_instance + 0x178));
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

int TLobby__sub_80226B64(void) { TLobby::update_lobby_subsystems(); TLobby::init_layout_positions(); TLobby__sub_80226308(); lbl_805D62B4 = 0; lbl_805D62B8 = 0; lbl_805D62B0 = 1; return 0; }

typedef char RecoveredGlobal_80226C3C_lbl_80514D00_size[sizeof(RecoveredGlobal_80226C3C_lbl_80514D00) == 0x258 ? 1 : -1];
u8 *TLobby::get_current_slot_entry() {
    if ((s32) lbl_805D62E4 == 1) {
        return (u8 *)&lbl_80514D00.value + (music_fade_slot_index << 5);
    }
    return lbl_805D3720;
}

int TLobby::set_and_notify_default() { return set_and_notify__6TLobbyFi((void*)(0)); }
int TLobby::send_neg30() { return set_and_notify__6TLobbyFi((void*)(-30)); }

typedef char RecoveredGlobal_80226CB0_lbl_804CB850_size[sizeof(RecoveredGlobal_80226CB0_lbl_804CB850) == 0xC ? 1 : -1];
void set_cue_stream_gain(s32 arg0) {
    s32 var_r4;
    var_r4 = arg0;
    if (var_r4 <= -0x140) {
        var_r4 = -0x3E7;
    }
    if ((u32) *(u32 *)((s8 *)(&(*(RecoveredGlobal_80226CB0_lbl_804CB850 *)&lbl_804CB850).value) + 8) != 0U) {
        set_field_40_and_notify__6TLobbyFs((int) (*(u32 *)((s8 *)(&(*(RecoveredGlobal_80226CB0_lbl_804CB850 *)&lbl_804CB850).value) + 8)), (int) (var_r4));
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
        set_field_40_and_notify__6TLobbyFs((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_80226CF4_lbl_804CB850 *)&lbl_804CB850).value) + 0)), (int) (var_r31));
    }
    set_field_40_and_notify__6TLobbyFs((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_80226CF4_lbl_804CB850 *)&lbl_804CB850).value) + 4)), (int) (var_r31));
}

void TLobby::release_bgm_resource() {
    if ((s32) lbl_805D6330 != 0) {
        stop_audio_stream(*(s32 *)((s8 *)lbl_804CB850 + 4));
        lbl_805D6330 = 0;
        TLobby::init_layout_positions();
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
    lbl_80514CE8[music_fade_slot_index]++;
    if (music_sequencer_timer > 0) {
        music_sequencer_timer--;
    } else if (music_sequencer_fade_state == 0 && music_target_id != music_active_mode_index) {
        music_sequencer_fade_state = 1;
        music_sequencer_timer = 600;
    }
    if (lbl_80514CE8[music_fade_slot_index] < lbl_805D62F4 && TLobby__sub_803C5D00((void *)((s32 *)&lbl_804CB850)[0]) != 1) {
        return;
    }
    passage = &lbl_805D6304->modes[music_active_mode_index][music_sequencer_passage_index];
    switch (music_sequencer_fade_state) {
    case 0:
        if (++music_passage_index >= passage->count) {
            music_sequencer_passage_index = passage->next;
            music_passage_index = 0;
            next = &lbl_805D6304->modes[music_active_mode_index][music_sequencer_passage_index];
            if (lbl_805D6310) {
                lbl_805D62F0 = next->repeat;
            } else {
                lbl_805D62F0 = next->first;
                lbl_805D6310 = 1;
            }
        } else {
            lbl_805D62F0 = passage->first + music_passage_index;
        }
        break;
    case 1:
        music_sequencer_passage_index = passage->next;
        music_passage_index = 0;
        music_active_mode_index = 1 - music_active_mode_index;
        music_sequencer_timer = 600;
        if (passage->transition >= 0) {
            lbl_805D62F0 = passage->transition;
            music_sequencer_fade_state = 2;
        } else {
            lbl_805D62F0 = lbl_805D6304->modes[music_target_id][music_sequencer_passage_index].first;
            lbl_805D6310 = 1;
            music_sequencer_fade_state = 0;
        }
        break;
    case 2:
        if (lbl_805D6310) {
            lbl_805D62F0 = passage->repeat;
        } else {
            lbl_805D62F0 = passage->first;
            lbl_805D6310 = 1;
        }
        music_sequencer_fade_state = 0;
        break;
    }
    lbl_80514CE0[music_fade_slot_index] = lbl_805D62F0;
    lbl_805D6334 = music_fade_slot_index;
    append_music_stream_segment((void *)((s32 *)&lbl_804CB850)[0], 190, lbl_80514CE0[music_fade_slot_index]);
    music_fade_slot_index = 1 - music_fade_slot_index;
    lbl_80514CE8[music_fade_slot_index] = 0;
    lbl_80514CF0[music_fade_slot_index] = TLobby__sub_803C97B8((void *)((s32 *)&lbl_804CB850)[music_fade_slot_index]);
}

void set_dark_falz_music_request(s32 arg0) {
    if ((s32) lbl_805D6300 == 4) {
        music_target_id = arg0;
    }
}
void TLobby::set_target_id(s32 arg0) {
    if ((s32) lbl_805D6300 != 4) {
        music_target_id = arg0;
    }
}
typedef char RecoveredGlobal_8022727C_lbl_804CB850_size[sizeof(RecoveredGlobal_8022727C_lbl_804CB850) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_80227248_lbl_804CB850_size[sizeof(RecoveredGlobal_80227248_lbl_804CB850) == 0xC ? 1 : -1];
void stop_cue_stream(void) {
    if ((u32) *(u32 *)((s8 *)(&(*(RecoveredGlobal_80227248_lbl_804CB850 *)&lbl_804CB850).value) + 8) != 0U) {
        stop_audio_stream((s32)((int) (*(u32 *)((s8 *)(&(*(RecoveredGlobal_80227248_lbl_804CB850 *)&lbl_804CB850).value) + 8))));
    }
}

void play_cue_stream_file(s32 arg0) {
    if ((void *) *(u8 **)((s8 *)(&(*(RecoveredGlobal_8022727C_lbl_804CB850 *)&lbl_804CB850).value) + 8) != NULL) {
        start_audio_stream_file(*(u8 **)((s8 *)(&(*(RecoveredGlobal_8022727C_lbl_804CB850 *)&lbl_804CB850).value) + 8), arg0);
    }
}
typedef char RecoveredGlobal_802272B4_lbl_804CB850_size[sizeof(RecoveredGlobal_802272B4_lbl_804CB850) == 0xC ? 1 : -1];
void TLobby__sub_802272B4(void) {
    s32 temp_r3;
    TLobby__sub_803C94DC((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_802272B4_lbl_804CB850 *)&lbl_804CB850).value) + (music_fade_slot_index * 4))), (int) (0));
    TLobby__sub_803C94DC((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_802272B4_lbl_804CB850 *)&lbl_804CB850).value) + 8)), (int) (0));
    temp_r3 = TLobby__sub_803C9CB0((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_802272B4_lbl_804CB850 *)&lbl_804CB850).value) + (music_fade_slot_index * 4))));
    if ((temp_r3 == 0) || (temp_r3 == 5)) {
        lbl_805D62E4 = 0;
        return;
    }
    lbl_805D62E4 = 1;
}
typedef char RecoveredGlobal_8022733C_lbl_804CB850_size[sizeof(RecoveredGlobal_8022733C_lbl_804CB850) == 0xC ? 1 : -1];
void TLobby__sub_8022733C(void) {
    TLobby__sub_803C94DC((int) (*(s32 *)((s8 *)((u8 *)(&(*(RecoveredGlobal_8022733C_lbl_804CB850 *)&lbl_804CB850).value) + (music_fade_slot_index * 4)) + 0)), (int) (1));
    TLobby__sub_803C94DC((int) (*(s32 *)((s8 *)(&(*(RecoveredGlobal_8022733C_lbl_804CB850 *)&lbl_804CB850).value) + 8)), (int) (1));
    lbl_805D62E4 = 2;
}

}
