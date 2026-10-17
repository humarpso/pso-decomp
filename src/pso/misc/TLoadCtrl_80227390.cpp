#include "types.h"
#include "pso/system/memory.h"
#include "pso/misc/TLoadCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    s32 value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 VISetPreRetraceCallback(s32 *);
s32 get_music_base_gain(void);
void TLobby__sub_80227AA8(s32);
void set_field_40_and_notify__6TLobbyFs(s32, s32);
s32 TLobby__sub_803C9CB0(s32);
void update_all_zones__14TObjBgmColCtrlFl(void);
void strncpy(void *, void *, s32);
void TLobby__sub_803C94DC(u8 *arg0, s32 arg1);
void start_audio_stream_file(s32, char *);
extern char lbl_80514D00[][0x20];
extern s32 area_music_fade_frame_count;
extern f32 music_fade_full_scale;
extern s16 lbl_805D371C;
void play_area_music(char *name);
void TWindowOptionCtrl__sub_802273B4(s32 arg0);
void TLobby__sub_803CA194(s32);
}
extern RecoveredGlobal_8000F7FC_lbl_80515F48 TLobby__sub_80227A6C;
void stop_audio_stream(u8 *arg0);
extern s32 lbl_804CB850[];
extern f32 music_fade_volumes[];
extern s32 lbl_805D62E0;
extern s32 lbl_805D62E4;
extern s32 music_fade_frames_remaining;
extern const f32 lbl_805DC764;
extern s32 lbl_805D62B8;
extern s32 music_fade_slot_index;
extern f32 music_fade_step;
extern s32 lbl_805D6330;
void update_music_fade(void);
extern u32 lbl_805D62DC;
extern u32 lbl_805D62EC;
void stop_cue_stream(void);

void TLoadCtrl::step() { TLobby::stop_audio_streams(); stop_cue_stream(); }
typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];

void TWindowOptionCtrl__sub_802273B4(s32 arg0) {
    if (lbl_805D62E0 != 0) {
        TLobby::stop_audio_streams();
        return;
    }
    music_fade_slot_index = 1 - music_fade_slot_index;
    music_fade_frames_remaining = arg0;
    music_fade_volumes[1 - music_fade_slot_index] = lbl_805DC764;
    music_fade_step = music_fade_full_scale / (f32)arg0;
}

void TLobby::stop_audio_streams() {
    s32 i;
    for (i = 0; i < 2; i++) {
        stop_audio_stream((u8 *)lbl_804CB850[i]);
        music_fade_volumes[i] = lbl_805DC764;
    }
    music_fade_frames_remaining = 0;
    lbl_805D62E0 = 0;
    lbl_805D62E4 = 0;
}

void play_area_music(char *name) {
    s32 flag;
    update_all_zones__14TObjBgmColCtrlFl();
    TLobby::release_bgm_resource();
    flag = 1;
    if (lbl_805D62E4 != 0) {
        if (lbl_805D62E0 == 0) {
            music_fade_slot_index = 1 - music_fade_slot_index;
            music_fade_volumes[music_fade_slot_index] = -music_fade_full_scale;
            flag = 0;
            music_fade_frames_remaining = area_music_fade_frame_count;
            music_fade_volumes[1 - music_fade_slot_index] = lbl_805DC764;
            music_fade_step = music_fade_full_scale / (f32)area_music_fade_frame_count;
        } else {
            TLobby::stop_audio_streams();
        }
    }
    if (flag) {
        music_fade_slot_index = 0;
    }
    lbl_805D371C = music_fade_slot_index + 1;
    start_audio_stream_file(lbl_804CB850[music_fade_slot_index], name);
    TLobby__sub_803C94DC((u8 *)lbl_804CB850[music_fade_slot_index], 0);
    TLobby::close_option_window();
    lbl_805D62E0 = 0;
    lbl_805D62E4 = 1;
    strncpy(lbl_80514D00[music_fade_slot_index], name, 0x20);
}

void update_music_fade(void) {
    s32 i;
    if (lbl_805D6330 != 0) {
        return;
    }
    if (lbl_805D62B8 != 0) {
        TLobby::set_and_notify(-999);
    }
    if (music_fade_frames_remaining > 0) {
        music_fade_volumes[music_fade_slot_index] += music_fade_step;
        music_fade_volumes[1 - music_fade_slot_index] -= music_fade_step;
        for (i = 0; i < 2; i++) {
            s32 v;
            if ((s32)music_fade_volumes[i] + get_music_base_gain() > -999) {
                v = (s32)music_fade_volumes[i] + get_music_base_gain();
            } else {
                v = -999;
            }
            set_field_40_and_notify__6TLobbyFs(lbl_804CB850[i], v);
        }
        if (--music_fade_frames_remaining <= 0) {
            s32 st;
            stop_audio_stream((u8 *)lbl_804CB850[1 - music_fade_slot_index]);
            st = TLobby__sub_803C9CB0(lbl_804CB850[music_fade_slot_index]);
            if (st == 0 || st == 5) {
                lbl_805D62E4 = 0;
            }
        }
    }
    if ((u32)lbl_804CB850[2] != 0U && TLobby__sub_803C9CB0(lbl_804CB850[2]) == 3) {
        TLobby__sub_80227AA8(lbl_804CB850[2]);
    }
}

void TLobby::set_pre_retrace_callback() {
    VISetPreRetraceCallback(&TLobby__sub_80227A6C.value);
}
void TLobby::shutdown_buffers() {
    s32 i;
    for (i = 0; i < 3; i++) {
        TLobby__sub_803CA194(lbl_804CB850[i]);
    }
    if (lbl_805D62DC != 0U) {
        xfree((void *)lbl_805D62DC);
        lbl_805D62DC = 0U;
    }
    TLobby::dec_ref_and_shutdown();
    if (lbl_805D62EC != 0U) {
        TAdSinglePlyChrSelectGC::safe_free(lbl_805D62EC);
    }
}

typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];
