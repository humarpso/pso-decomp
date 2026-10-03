#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef s32 M2C_UNK;

extern "C" {
M2C_UNK VISetPreRetraceCallback(M2C_UNK *);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 TLobby__sub_80227A6C;
void TLobby__sub_8022776C(void);
M2C_UNK stop_audio_stream(int);
extern s32 lbl_804CB850[];
extern f32 lbl_80514CF8[];
extern s32 lbl_805D62E0;
extern s32 lbl_805D62E4;
extern s32 lbl_805D632C;
extern const f32 lbl_805DC764;
void TLobby__sub_8022743C(void);
void set_and_notify__6TLobbyFi(s32);
s32 get_music_base_gain(void);
void TLobby__sub_80227AA8(s32);
void set_field_40_and_notify__6TLobbyFPvs(s32, s32);
s32 TLobby__sub_803C9CB0(s32);
M2C_UNK stop_audio_stream(int);
extern s32 lbl_804CB850[];
extern f32 lbl_80514CF8[];
extern s32 lbl_805D62B8;
extern s32 lbl_805D62E4;
extern s32 lbl_805D62E8;
extern f32 lbl_805D6328;
extern s32 lbl_805D632C;
extern s32 lbl_805D6330;
void update_music_fade(void);
void close_option_window__6TLobbyFv(void);
void release_bgm_resource__6TLobbyFv(void);
void TLobby__sub_8022743C(void);
void update_all_zones__14TObjBgmColCtrlFi(void);
void strncpy(void *, void *, s32);
void TLobby__sub_803C94DC(s32, s32);
void start_audio_stream_file(s32, char *);
extern s32 lbl_804CB850[];
extern f32 lbl_80514CF8[];
extern char lbl_80514D00[][0x20];
extern s32 lbl_805D3714;
extern f32 lbl_805D3718;
extern s16 lbl_805D371C;
extern s32 lbl_805D62E0;
extern s32 lbl_805D62E4;
extern s32 lbl_805D62E8;
extern f32 lbl_805D6328;
extern s32 lbl_805D632C;
extern const f32 lbl_805DC764;
void play_area_music(char *name);
void TLobby__sub_8022743C(void);
extern f32 lbl_80514CF8[];
extern f32 lbl_805D3718;
extern s32 lbl_805D62E0;
extern s32 lbl_805D62E8;
extern f32 lbl_805D6328;
extern s32 lbl_805D632C;
extern const f32 lbl_805DC764;
void TWindowOptionCtrl__sub_802273B4(s32 arg0);
void safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
void dec_ref_and_shutdown__6TLobbyFv(void);
void TLobby__sub_803CA194(s32);
void xfree__FPv(u32);
extern s32 lbl_804CB850[];
extern u32 lbl_805D62DC;
extern u32 lbl_805D62EC;
void TLobby__sub_80227794(void);
}

extern "C" {

void step__9TLoadCtrlFv(void);
int stop_cue_stream(void);

void step__9TLoadCtrlFv(void) { TLobby__sub_8022743C(); stop_cue_stream(); }
typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];

void TWindowOptionCtrl__sub_802273B4(s32 arg0) {
    if (lbl_805D62E0 != 0) {
        TLobby__sub_8022743C();
        return;
    }
    lbl_805D62E8 = 1 - lbl_805D62E8;
    lbl_805D632C = arg0;
    lbl_80514CF8[1 - lbl_805D62E8] = lbl_805DC764;
    lbl_805D6328 = lbl_805D3718 / (f32)arg0;
}

void TLobby__sub_8022743C(void) {
    s32 i;
    for (i = 0; i < 2; i++) {
        stop_audio_stream(lbl_804CB850[i]);
        lbl_80514CF8[i] = lbl_805DC764;
    }
    lbl_805D632C = 0;
    lbl_805D62E0 = 0;
    lbl_805D62E4 = 0;
}

void play_area_music(char *name) {
    s32 flag;
    update_all_zones__14TObjBgmColCtrlFi();
    release_bgm_resource__6TLobbyFv();
    flag = 1;
    if (lbl_805D62E4 != 0) {
        if (lbl_805D62E0 == 0) {
            lbl_805D62E8 = 1 - lbl_805D62E8;
            lbl_80514CF8[lbl_805D62E8] = -lbl_805D3718;
            flag = 0;
            lbl_805D632C = lbl_805D3714;
            lbl_80514CF8[1 - lbl_805D62E8] = lbl_805DC764;
            lbl_805D6328 = lbl_805D3718 / (f32)lbl_805D3714;
        } else {
            TLobby__sub_8022743C();
        }
    }
    if (flag) {
        lbl_805D62E8 = 0;
    }
    lbl_805D371C = lbl_805D62E8 + 1;
    start_audio_stream_file(lbl_804CB850[lbl_805D62E8], name);
    TLobby__sub_803C94DC(lbl_804CB850[lbl_805D62E8], 0);
    close_option_window__6TLobbyFv();
    lbl_805D62E0 = 0;
    lbl_805D62E4 = 1;
    strncpy(lbl_80514D00[lbl_805D62E8], name, 0x20);
}

void update_music_fade(void) {
    s32 i;
    if (lbl_805D6330 != 0) {
        return;
    }
    if (lbl_805D62B8 != 0) {
        set_and_notify__6TLobbyFi(-999);
    }
    if (lbl_805D632C > 0) {
        lbl_80514CF8[lbl_805D62E8] += lbl_805D6328;
        lbl_80514CF8[1 - lbl_805D62E8] -= lbl_805D6328;
        for (i = 0; i < 2; i++) {
            s32 v;
            if ((s32)lbl_80514CF8[i] + get_music_base_gain() > -999) {
                v = (s32)lbl_80514CF8[i] + get_music_base_gain();
            } else {
                v = -999;
            }
            set_field_40_and_notify__6TLobbyFPvs(lbl_804CB850[i], v);
        }
        if (--lbl_805D632C <= 0) {
            s32 st;
            stop_audio_stream(lbl_804CB850[1 - lbl_805D62E8]);
            st = TLobby__sub_803C9CB0(lbl_804CB850[lbl_805D62E8]);
            if (st == 0 || st == 5) {
                lbl_805D62E4 = 0;
            }
        }
    }
    if ((u32)lbl_804CB850[2] != 0U && TLobby__sub_803C9CB0(lbl_804CB850[2]) == 3) {
        TLobby__sub_80227AA8(lbl_804CB850[2]);
    }
}

void TLobby__sub_8022776C(void) {
    VISetPreRetraceCallback((M2C_UNK *)(&TLobby__sub_80227A6C.value));
}
void TLobby__sub_80227794(void) {
    s32 i;
    for (i = 0; i < 3; i++) {
        TLobby__sub_803CA194(lbl_804CB850[i]);
    }
    if (lbl_805D62DC != 0U) {
        xfree__FPv(lbl_805D62DC);
        lbl_805D62DC = 0U;
    }
    dec_ref_and_shutdown__6TLobbyFv();
    if (lbl_805D62EC != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D62EC);
    }
}

typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

}
