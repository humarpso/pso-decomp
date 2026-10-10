#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80227AA8_lbl_80514F64 {
    M2C_UNK value;
    u8 remaining[0xC38];
};

extern "C" {
void get_menu_field_280__6TLobbyFv(void);
M2C_UNK fn_8023F660(void *, void *, void *, int, int, int);
extern unsigned char sound_control_state[];
void TLobby__sub_80227AA8(s32 arg0);
}

extern "C" {

int free__6TLobbyFPv(void* p);
int TLobby__sub_80227A4C(void* p);
void TLobby__sub_80227A6C(void);
int TLobby__sub_80227A70(void* p);
void TLobby__sub_80227A90(void);
void TLobby__sub_80227A94(void);
int get_music_base_gain(void);
void TLobby__sub_8022804C(void);
int xfree__FPv(void*);
int xmalloc__FUl(void*);

int free__6TLobbyFPv(void* p) { return xfree__FPv(p); }
int TLobby__sub_80227A4C(void* p) { return xmalloc__FUl(p); }
void TLobby__sub_80227A6C(void) {  }
int TLobby__sub_80227A70(void* p) { return ((int (*)(void*))TLobby__sub_8022804C)(p); }
void TLobby__sub_80227A90(void) {  }

    extern int lbl_805D3710;
    extern int lbl_805D6314;
void TLobby__sub_80227A94(void) { lbl_805D6314 = lbl_805D3710; }

    extern int music_stream_base_gain;
int get_music_base_gain(void) {  return music_stream_base_gain; }
typedef char RecoveredGlobal_80227AA8_lbl_80514F64_size[sizeof(RecoveredGlobal_80227AA8_lbl_80514F64) == 0xC3C ? 1 : -1];
void TLobby__sub_80227AA8(s32 arg0) {
    fn_8023F660((void *) (&(*(RecoveredGlobal_80227AA8_lbl_80514F64 *)sound_control_state).value), (void *) (arg0), (void *) (((s32 (*)())get_menu_field_280__6TLobbyFv)() + 0x55), (int) (0x40), (int) (0x40), (int) (0));
}

}

__declspec(section ".ctors") static void *const __sinit_TLobby_80227A2C_80227A2C_cpp_ref = (void *)TLobby__sub_80227A94;

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

#include <stddef.h>
struct RecoveredGlobal_80069094_camera_controller_registry { M2C_UNK value; u8 remaining[0x64]; };

struct RecoveredGlobal_80069024_TCameraCtrl__data_804FF634 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_80069024_lbl_804FF67C {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800691C8_TCameraCtrl__data_804FF6D0 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_800691C8_TCameraCtrl__data_804FF700 {
    M2C_UNK value;
    u8 remaining[0xBC];
};

struct RecoveredGlobal_800691C8_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80069148_TCameraCtrl__data_804FF6D0 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80069148_TCameraCtrl__data_804FF700 {
    M2C_UNK value;
    u8 remaining[0xBC];
};

struct RecoveredGlobal_80069C94_camera_controller_registry {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_80069C94_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80069D04_camera_controller_registry {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_80069D04_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80069304_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006961C_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_8006961C_lbl_8058CA60 {
    M2C_UNK value;
    u8 remaining[0x54];
};

struct RecoveredGlobal_80069258_TCameraCtrl__data_804FF6D0 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80069258_TCameraCtrl__data_804FF700 {
    M2C_UNK value;
    u8 remaining[0xBC];
};

struct RecoveredGlobal_80069258_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_80069A6C_camera_controller_registry {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_80069A6C_TCameraCtrl__data_804FF628 {
    u8 value;
    u8 remaining[0xB];
};

struct Stack_80069318 {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    f32 sp14;
    u8 pad_18[0x8];
    f32 sp20;
    u8 pad_24[0xC];
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
};

struct RecoveredGlobal_80069318_lbl_804FF5E8 { M2C_UNK value; u8 remaining[0x24]; };

struct Stack_800693F4 {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    f32 sp14;
    u8 pad_18[0x8];
    f32 sp20;
    u8 pad_24[0xC];
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
};

struct RecoveredGlobal_800693F4_TCameraCtrl__data_804FF634 { M2C_UNK value; u8 remaining[0x44]; };

extern "C" {
M2C_UNK set_clamped_field27c__6TLobbyFPvf(M2C_UNK *);
void apply_clamped_field_27c__6TLobbyFv(void);
M2C_UNK get_field_0x280__6TLobbyFPv(M2C_UNK *);
void get_menu_field_280__6TLobbyFv(void);
M2C_UNK set_menu_index__6TLobbyFPvi(void *, int);
void set_menu_index_main__6TLobbyFPv(u8 *arg0);
M2C_UNK is_ready__6TLobbyFPv(M2C_UNK *);
void is_sound_enabled(void);
s32 is_special_sound_id(u32 x);
s32 is_special_sound_id(u32 x);
void is_sound_enabled(void);
M2C_UNK set_sound_slot_special_scale(s32, f32);
s32 alloc_looping_sound_slot(s32, s32, s32, s32, s32);
extern const f32 lbl_805DC768;
s32 normalize_sound_request(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 is_special_sound_id(u32 x);
void is_sound_enabled(void);
M2C_UNK set_sound_slot_special_scale(s32, f32);
s32 alloc_one_shot_sound_slot(s32, s32, s32, s32);
extern const f32 lbl_805DC768;
s32 play_packed_sound_once(u32 arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

int TLobby__sub_80227AF8(void* p);
int release_sound_with_fade(void* p);
int TLobby__sub_80227D38(void);
void handle_6xB2_play_sound_from_player(void *arg0);
s32 is_camera_state_active__6TLobbyFv(void);
void set_mode__6TLobbyFi(s32 arg0);
M2C_UNK play_sound_effect(s32, s32, M2C_UNK, M2C_UNK);
u16 TCameraCtrl__sub_8006A5DC();
int TLobby__sub_8023F754(void*);
int fade_out_sound_slot(void*, int);
int fade_voice_channels__6TLobbyFi(void*);
s32 get_player_by_client_id(s32);
M2C_UNK bswap_6xB2_play_sound();
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK on_set_mode__6TLobbyFv(M2C_UNK);
M2C_UNK set_mode__6TLobbyFPvi(M2C_UNK *, s32);

int TLobby__sub_80227AF8(void* p) { return TLobby__sub_8023F754(p); }

extern s32 local_client_id;

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];

s32 is_special_sound_id(u32 x) {
    s32 lo = x & 0xffff;
    s32 hi = x >> 16;
    if (hi == 2 && (lo == 0x27 || lo == 0x2f)) {
        return 1;
    }
    return 0;
}

void apply_clamped_field_27c__6TLobbyFv(void) {
    set_clamped_field27c__6TLobbyFPvf((M2C_UNK *)(&(*(RecoveredGlobal_8000F7FC_lbl_80515F48 *)&sound_control_state).value));
}
typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

void handle_6xB2_play_sound_from_player(void *arg0) {
    s32 temp_r3;

    bswap_6xB2_play_sound();
    if ((s8) M2C_FIELD(arg0, u8 *, 4) == get_global_state__14TOKeyMachine01Fv()) {
        if (M2C_FIELD(arg0, s16 *, 6) == 0xFFFF) {
            play_sound_effect(M2C_FIELD(arg0, s32 *, 8), 0, 0, 0);
            return;
        }
        temp_r3 = get_player_by_client_id(local_client_id);
        if (temp_r3 != 0) {
            play_sound_effect(M2C_FIELD(arg0, s32 *, 8), temp_r3 + 0x38, 0, 0);
        }
    }
}

s32 is_camera_state_active__6TLobbyFv(void) {
    if ((TCameraCtrl__sub_8006A5DC() == 5) || (TCameraCtrl__sub_8006A5DC() == 9)) {
        return 1;
    }
    return 0;
}

void set_mode__6TLobbyFi(s32 arg0) {
    switch (arg0) {
    case 0:
        on_set_mode__6TLobbyFv(1);
        break;
    case 1:
        on_set_mode__6TLobbyFv(0);
        break;
    case 2:
        on_set_mode__6TLobbyFv(0);
        break;
    }
    set_mode__6TLobbyFPvi((M2C_UNK *)sound_control_state, arg0);
}

void get_menu_field_280__6TLobbyFv(void) {
    get_field_0x280__6TLobbyFPv((M2C_UNK *)(&(*(RecoveredGlobal_8000F7FC_lbl_80515F48 *)&sound_control_state).value));
}

typedef char RecoveredGlobal_80069094_camera_controller_registry_size[sizeof(RecoveredGlobal_80069094_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4_size[sizeof(RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4_size[sizeof(RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4) == 0xC ? 1 : -1];
void set_menu_index_main__6TLobbyFPv(u8 *arg0) {
    set_menu_index__6TLobbyFPvi((void *)(&(*(RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4 *)&sound_control_state).value), (int)(arg0));
}
typedef char RecoveredGlobal_80069024_TCameraCtrl__data_804FF634_size[sizeof(RecoveredGlobal_80069024_TCameraCtrl__data_804FF634) == 0x48 ? 1 : -1];
typedef char RecoveredGlobal_80069024_lbl_804FF67C_size[sizeof(RecoveredGlobal_80069024_lbl_804FF67C) == 0x48 ? 1 : -1];
typedef char RecoveredGlobal_800691C8_TCameraCtrl__data_804FF6D0_size[sizeof(RecoveredGlobal_800691C8_TCameraCtrl__data_804FF6D0) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_800691C8_TCameraCtrl__data_804FF700_size[sizeof(RecoveredGlobal_800691C8_TCameraCtrl__data_804FF700) == 0xC0 ? 1 : -1];
typedef char RecoveredGlobal_800691C8_main_task_size[sizeof(RecoveredGlobal_800691C8_main_task) == 0x34 ? 1 : -1];
typedef char RecoveredGlobal_80069148_TCameraCtrl__data_804FF6D0_size[sizeof(RecoveredGlobal_80069148_TCameraCtrl__data_804FF6D0) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_80069148_TCameraCtrl__data_804FF700_size[sizeof(RecoveredGlobal_80069148_TCameraCtrl__data_804FF700) == 0xC0 ? 1 : -1];
typedef char RecoveredGlobal_80069258_TCameraCtrl__data_804FF6D0_size[sizeof(RecoveredGlobal_80069258_TCameraCtrl__data_804FF6D0) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_80069258_TCameraCtrl__data_804FF700_size[sizeof(RecoveredGlobal_80069258_TCameraCtrl__data_804FF700) == 0xC0 ? 1 : -1];
typedef char RecoveredGlobal_80069258_main_task_size[sizeof(RecoveredGlobal_80069258_main_task) == 0x34 ? 1 : -1];
typedef char RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_800695E8_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80069304_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069304_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006961C_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634_size[sizeof(RecoveredGlobal_8006961C_TCameraCtrl__data_804FF634) == 0x48 ? 1 : -1];
typedef char RecoveredGlobal_8006961C_lbl_8058CA60_size[sizeof(RecoveredGlobal_8006961C_lbl_8058CA60) == 0x58 ? 1 : -1];
typedef char RecoveredGlobal_80069A6C_camera_controller_registry_size[sizeof(RecoveredGlobal_80069A6C_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_80069A6C_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069A6C_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80069C94_camera_controller_registry_size[sizeof(RecoveredGlobal_80069C94_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_80069C94_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069C94_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80069D04_camera_controller_registry_size[sizeof(RecoveredGlobal_80069D04_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_80069D04_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_80069D04_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];

int release_sound_with_fade(void* p) { return fade_out_sound_slot(p, 64); }
int TLobby__sub_80227D38(void) { return fade_voice_channels__6TLobbyFi((void*)(0)); }

s32 normalize_sound_request(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 r;
    s32 m;
    s32 flags;
    s32 v;
    s32 h;
    flags = 0;
    if (arg2 == 0) {
        flags |= 0xE;
    }
    if (arg4 & 1) {
        flags |= 0xC;
    }
    if (arg4 & 2) {
        v = -(s32)((arg0 >> 8U) & 0x7F);
        if (arg3 >= 0) {
            arg3 = 0;
        }
        v += arg3;
    } else {
        v = -(s32)((arg0 >> 8U) & 0x7F);
    }
    if (v < -0x7F) {
        r = -0x7F;
    } else {
        r = v < 0 ? v : 0;
    }
    if (!((arg0 >> 0xFU) & 1)) {
        flags |= 8;
    }
    if (!(arg0 & 0x40000000)) {
        flags |= 0x10;
    }
    m = arg0 & 0xBFFF00FF;
    if (((s32 (*)(void))is_sound_enabled)() == 1) {
        h = alloc_looping_sound_slot(m, arg1, arg2, r, flags);
        if (is_special_sound_id(m) != 0) {
            set_sound_slot_special_scale(h, lbl_805DC768);
        }
        return h;
    }
    return -1;
}

s32 play_packed_sound_once(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 r;
    s32 m;
    s32 flags;
    s32 v;
    s32 h;
    flags = 0;
    if (arg1 == 0) {
        flags |= 0xE;
    }
    if (arg3 & 1) {
        flags |= 0xC;
    }
    if (arg3 & 2) {
        v = -(s32)((arg0 >> 8U) & 0x7F);
        if (arg2 >= 0) {
            arg2 = 0;
        }
        v += arg2;
    } else {
        v = -(s32)((arg0 >> 8U) & 0x7F);
    }
    if (v < -0x7F) {
        r = -0x7F;
    } else {
        r = v < 0 ? v : 0;
    }
    if (!((arg0 >> 0xFU) & 1)) {
        flags |= 8;
    }
    if (!(arg0 & 0x40000000)) {
        flags |= 0x10;
    }
    m = arg0 & 0xBFFF00FF;
    if (((s32 (*)(void))is_sound_enabled)() == 1) {
        h = alloc_one_shot_sound_slot(m, arg1, r, flags);
        if (is_special_sound_id(m) != 0) {
            set_sound_slot_special_scale(h, lbl_805DC768);
        }
        return h;
    }
    return -1;
}

void is_sound_enabled(void) {
    is_ready__6TLobbyFPv((M2C_UNK *)(&(*(RecoveredGlobal_8000F7FC_lbl_80515F48 *)&sound_control_state).value));
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80228634_lbl_804CBE98 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80228754_lbl_804CBE98 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_802286C4_lbl_804CBE98 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8022804C_lbl_80514F64 {
    M2C_UNK value;
    u8 remaining[0xC38];
};

struct RecoveredGlobal_80228074_lbl_80514F64 {
    M2C_UNK value;
    u8 remaining[0xC38];
};

struct RecoveredGlobal_8022809C_lbl_80514F64 {
    M2C_UNK value;
    u8 remaining[0xC38];
};

struct RecoveredGlobal_802280C4_lbl_80514F64 {
    M2C_UNK value;
    u8 remaining[0xC38];
};

struct RecoveredGlobal_802287F0_lbl_80515BA0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct O_80228A74 { u8 pad[0x1c]; char names[1][0x20]; };

struct P_80228A74 { u8 pad[0x109c]; s32 count; };

struct L_8022884C { u8 pad[0x109c]; s32 count; s32 hi; s32 lo; };

extern "C" {
s32 get_instance__6TLobbyFv();
s32 get_player_floor__6TLobbyFi(s32);
s32 select_area_entrance(void *arg0);
s32 lookup_scene_object__6TLobbyFPv(s32, void *);
extern RecoveredGlobal_80228634_lbl_804CBE98 area_initializer_dispatch_table;
void run_area_scene_cleanup(u8 *arg0);
s32 lookup_scene_object__6TLobbyFPv(s32, void *);
M2C_UNK reset_story_select_state__6TLobbyFv();
extern RecoveredGlobal_80228634_lbl_804CBE98 area_initializer_dispatch_table;
void promote_area_floor(u8 *arg0);
s32 lookup_scene_object__6TLobbyFPv(s32, void *);
M2C_UNK set_scene__6TSceneFi(int);
M2C_UNK set_current_floor_area(int);
extern RecoveredGlobal_80228634_lbl_804CBE98 area_initializer_dispatch_table;
void load_area_scene_and_init(u8 *arg0);
M2C_UNK TLobby__sub_802401C8(void *);
extern unsigned char sound_control_state[];
void TLobby__sub_8022804C(void);
M2C_UNK update_sound_frame(void *);
extern unsigned char sound_control_state[];
void update_global_sound_frame(void);
M2C_UNK reset_sound_state__6TLobbyFPv(void *);
extern unsigned char sound_control_state[];
void TLobby__sub_8022809C(void);
M2C_UNK run_disk_error_check__6TLobbyFv();
int render_tick__Fv(void);
M2C_UNK init_sound_aux_effects(void *);
M2C_UNK validate_and_set_selection__6TLobbyFPvi(void *, int);
M2C_UNK TLobby__sub_803382E4();
M2C_UNK TLobby__sub_803CB81C();
extern unsigned char sound_control_state[];
void wait_for_sound_init__6TLobbyFv(void);
s32 init_range_zero__6TLobbyFPv(void* arg0);
extern RecoveredGlobal_802287F0_lbl_80515BA0 lbl_80515BA0;
s32 init_range_zero_global__6TLobbyFv(void);
void *reset_sound_owner_state(void *self);
void TLobby__sub_80240808(void *self, s32 x);
void *__register_global_object(void *obj, void *dtor, void *entry);
extern unsigned char sound_control_state[];
extern char lbl_80514F58[];
void TLobby__sub_80228118(void);
char *strcpy(char *dst, const char *src);
void add_token__6TLobbyFPvPv(O_80228A74 *self, const char *src);
void add_token__6TLobbyFPvPv(O_80228A74 *self, const char *src);
void clear_work_buffer(u8 *arg0);
void tokenize_args__6TLobbyFPvPv(O_80228A74 *self, char *s);
extern char lbl_805DC788[4];
u32 strlen(const char *s);
char *strcpy(char *dst, const char *src);
void trim_whitespace__6TLobbyFPv(char *s);
s32 debug_printf_at(u32, void *, ...);
void TLobby__sub_8022884C(L_8022884C *self);
M2C_UNK run_frame__6TLobbyFv();
M2C_UNK TLobby__sub_80226B64(int);
extern M2C_UNK floor_sound_bank_table[];
extern M2C_UNK floor_sound_bank_volume_table[];
void load_floor_sound_bank(s32 arg0);
void add_token__6TLobbyFPvPv(O_80228A74 *self, const char *src);
void clear_work_buffer(u8 *arg0);
void parse_csv_line__6TLobbyFPvPv(O_80228A74 *self, char *s);
}

extern "C" {

void clear_ready_flag_unless_locked__6TLobbyFPv(void *arg0);
void clear_work_buffer(u8 *arg0);
void *construct__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
s32 init_range_zero__6TLobbyFPv(void* arg0);
void refresh_render_state__6TLobbyFv(void);
void set_area__6TLobbyFPvi(void *arg0, s32 arg1);
s32 get_floor_map_terrain(s32);
int pop_sound_groups__6TLobbyFPvi(void*, void*);
void __ct__7TObjectFP7TObject(void *);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK init_range__6TLobbyFPvi(void*, int);
void memset(void *, int, int);
int render_tick__Fv(void);

    extern unsigned char sound_control_state[];
    extern float lbl_805DC76C;
void refresh_render_state__6TLobbyFv(void) { pop_sound_groups__6TLobbyFPvi(sound_control_state, (void*)0); ((int (*)(float))apply_clamped_field_27c__6TLobbyFv)(lbl_805DC76C); render_tick__Fv(); }

void load_floor_sound_bank(s32 arg0) {
    s32 temp_r0;
    s32 temp_r31;

    if (arg0 >= 0) {
        temp_r0 = arg0 * 4;
        temp_r31 = M2C_FIELD(((u8 *)(floor_sound_bank_table) + temp_r0), s32 *, 0);
        if (temp_r31 >= 0) {
            if (arg0 < 0x24) {
                ((M2C_UNK (*)(void *, f32))apply_clamped_field_27c__6TLobbyFv)((void *) (floor_sound_bank_volume_table), (f32) (M2C_FIELD(((u8 *)(floor_sound_bank_volume_table) + temp_r0), f32 *, 0)));
            }
            validate_and_set_selection__6TLobbyFPvi((void *) (sound_control_state), (int) (temp_r31));
            do {
                run_disk_error_check__6TLobbyFv();
                TLobby__sub_803CB81C();
                run_frame__6TLobbyFv();
            } while (((s32 (*)(void *))is_ready__6TLobbyFPv)((void *) (sound_control_state)) == 0);
            TLobby__sub_80226B64((int) (0));
        }
    }
}

typedef char RecoveredGlobal_8022804C_lbl_80514F64_size[sizeof(RecoveredGlobal_8022804C_lbl_80514F64) == 0xC3C ? 1 : -1];
void TLobby__sub_8022804C(void) {
    M2C_UNK *var_r3;
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_8022804C_lbl_80514F64 *)&sound_control_state).value);
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_8022804C_lbl_80514F64 *)&sound_control_state).value);
    TLobby__sub_802401C8((void *) (&(*(RecoveredGlobal_8022804C_lbl_80514F64 *)&sound_control_state).value));
}

typedef char RecoveredGlobal_80228074_lbl_80514F64_size[sizeof(RecoveredGlobal_80228074_lbl_80514F64) == 0xC3C ? 1 : -1];
void update_global_sound_frame(void) {
    update_sound_frame((void *) (&(*(RecoveredGlobal_80228074_lbl_80514F64 *)&sound_control_state).value));
}

typedef char RecoveredGlobal_8022809C_lbl_80514F64_size[sizeof(RecoveredGlobal_8022809C_lbl_80514F64) == 0xC3C ? 1 : -1];
void TLobby__sub_8022809C(void) {
    reset_sound_state__6TLobbyFPv((void *) (&(*(RecoveredGlobal_8022809C_lbl_80514F64 *)&sound_control_state).value));
}

typedef char RecoveredGlobal_802280C4_lbl_80514F64_size[sizeof(RecoveredGlobal_802280C4_lbl_80514F64) == 0xC3C ? 1 : -1];
void wait_for_sound_init__6TLobbyFv(void) {
    init_sound_aux_effects((void *) (&(*(RecoveredGlobal_802280C4_lbl_80514F64 *)&sound_control_state).value));
    validate_and_set_selection__6TLobbyFPvi((void *) (&(*(RecoveredGlobal_802280C4_lbl_80514F64 *)&sound_control_state).value), (int) (0));
    do {
        TLobby__sub_803382E4();
        run_disk_error_check__6TLobbyFv();
        TLobby__sub_803CB81C();
        render_tick__Fv();
    } while (((s32 (*)())is_sound_enabled)() == 0);
}

void TLobby__sub_80228118(void) {
    __register_global_object(reset_sound_owner_state(((char *)&sound_control_state)), (void *)TLobby__sub_80240808, lbl_80514F58);
}

void clear_ready_flag_unless_locked__6TLobbyFPv(void *arg0) {
    if (get_global_state__14TOKeyMachine01Fv() != 0xF) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & 0xFFFFFFFE);
    }
}

void set_area__6TLobbyFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = get_floor_map_terrain(M2C_FIELD(arg0, s32 *, 0xC));
}

#pragma push
#pragma fp_contract on
s32 select_area_entrance(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0) > 0x11) {
        return 4;
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) & 1) {
        return 2;
    }
    if ((get_instance__6TLobbyFv() == 0) && (get_player_floor__6TLobbyFi(M2C_FIELD(arg0, s32 *, 0)) == 0xD)) {
        switch (get_player_floor__6TLobbyFi(M2C_FIELD(arg0, s32 *, 4))) {
        case 8:
        case 9:
        case 10:
            return 1;
        default:
            return 0;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 >= 0) {
        return 1;
    }
    return (temp_r0 < 0) ? 0 : 4;
}
#pragma pop

typedef char RecoveredGlobal_80228634_lbl_804CBE98_size[sizeof(RecoveredGlobal_80228634_lbl_804CBE98) == 0x1B0 ? 1 : -1];
void run_area_scene_cleanup(u8 *arg0) {
    s32 sp8;
    M2C_UNK (*var_r12)(s32);
    s32 *var_r4;
    s32 var_r3;
    u8 *var_r31;
    var_r4 = (s32 *)(&sp8);
    var_r31 = (u8 *)(arg0);
    var_r3 = M2C_FIELD(arg0, s32 *, 4);
    if (lookup_scene_object__6TLobbyFPv(var_r3, var_r4) != 0) {
        var_r3 = (s32) &area_initializer_dispatch_table.value;
        var_r3 = (s32) &area_initializer_dispatch_table.value;
        var_r3 += sp8 * 0xC;
        var_r12 = M2C_FIELD(var_r3, M2C_UNK (**)(s32), 8);
        var_r12(var_r3);
    } else {
        var_r3 = (s32) &area_initializer_dispatch_table.value;
        var_r3 = (s32) &area_initializer_dispatch_table.value;
        var_r3 += M2C_FIELD(var_r31, s32 *, 4) * 0xC;
        var_r12 = M2C_FIELD(var_r3, M2C_UNK (**)(s32), 8);
        var_r12(var_r3);
    }
    M2C_FIELD(var_r31, s32 *, 4) = 0;
    M2C_FIELD(var_r31, s32 *, 8) = 0;
    M2C_FIELD(var_r31, s32 *, 0xC) = 0;
}

typedef char RecoveredGlobal_80228754_lbl_804CBE98_size[sizeof(RecoveredGlobal_80228754_lbl_804CBE98) == 0x1B0 ? 1 : -1];

typedef char RecoveredGlobal_802286C4_lbl_804CBE98_size[sizeof(RecoveredGlobal_802286C4_lbl_804CBE98) == 0x1B0 ? 1 : -1];
void load_area_scene_and_init(u8 *arg0) {
    s32 sp8;
    M2C_UNK (*var_r12)(s32);
    s32 *var_r4;
    s32 var_r3;
    u8 *var_r31;
    var_r31 = (u8 *)(arg0);
    var_r3 = M2C_FIELD(arg0, s32 *, 4);
    set_current_floor_area((int) (var_r3));
    var_r3 = M2C_FIELD(var_r31, s32 *, 0x10);
    set_scene__6TSceneFi((int) (var_r3));
    var_r3 = M2C_FIELD(var_r31, s32 *, 4);
    var_r4 = (s32 *)(&sp8);
    if (lookup_scene_object__6TLobbyFPv(var_r3, var_r4) != 0) {
        var_r3 = (s32) &(*(RecoveredGlobal_802286C4_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
        var_r3 = (s32) &(*(RecoveredGlobal_802286C4_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
        var_r3 += sp8 * 0xC;
        var_r12 = M2C_FIELD(var_r3, M2C_UNK (**)(s32), 4);
        var_r12(var_r3);
        return;
    }
    var_r3 = (s32) &(*(RecoveredGlobal_802286C4_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
    var_r3 = (s32) &(*(RecoveredGlobal_802286C4_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
    var_r3 += M2C_FIELD(var_r31, s32 *, 4) * 0xC;
    var_r12 = M2C_FIELD(var_r3, M2C_UNK (**)(s32), 4);
    var_r12(var_r3);
}

void promote_area_floor(u8 *arg0) {
    s32 sp8;
    M2C_UNK (*var_r12)(s32);
    s32 *var_r4;
    s32 var_r3;
    u8 *var_r31;
    var_r4 = (s32 *)(&sp8);
    var_r31 = (u8 *)(arg0);
    var_r3 = M2C_FIELD(arg0, s32 *, 4);
    if (lookup_scene_object__6TLobbyFPv(var_r3, var_r4) != 0) {
        var_r3 = (s32) &(*(RecoveredGlobal_80228754_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
        var_r3 = (s32) &(*(RecoveredGlobal_80228754_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
        var_r3 += sp8 * 0xC;
        var_r12 = M2C_FIELD(var_r3, M2C_UNK (**)(s32), 8);
        var_r12(var_r3);
    } else {
        var_r3 = (s32) &(*(RecoveredGlobal_80228754_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
        var_r3 = (s32) &(*(RecoveredGlobal_80228754_lbl_804CBE98 *)&area_initializer_dispatch_table).value;
        var_r3 += M2C_FIELD(var_r31, s32 *, 4) * 0xC;
        var_r12 = M2C_FIELD(var_r3, M2C_UNK (**)(s32), 8);
        var_r12(var_r3);
    }
    M2C_FIELD(var_r31, s32 *, 0) = (s32) M2C_FIELD(var_r31, s32 *, 4);
    M2C_FIELD(var_r31, s32 *, 4) = (s32) M2C_FIELD(var_r31, s32 *, 0xC);
    M2C_FIELD(var_r31, s32 *, 0x10) = (s32) M2C_FIELD(var_r31, s32 *, 0x18);
    reset_story_select_state__6TLobbyFv();
}

typedef char RecoveredGlobal_802287F0_lbl_80515BA0_size[sizeof(RecoveredGlobal_802287F0_lbl_80515BA0) == 0x28 ? 1 : -1];
s32 init_range_zero_global__6TLobbyFv(void) { return init_range_zero__6TLobbyFPv((void*)((s32) &lbl_80515BA0.value)); }

s32 init_range_zero__6TLobbyFPv(void* arg0) {
    init_range__6TLobbyFPvi(arg0, 0);
    return (s32)arg0;
}

struct O_80228A74;

#pragma push
#pragma opt_propagation off
void TLobby__sub_8022884C(L_8022884C *self) {
    s32 off;
    s32 i;
    s32 t;
    i = 0;
    off = 0;
    while (i < self->count) {
        t = off + 0x1c;
        debug_printf_at((self->hi << 16) | (self->lo + i), (u8 *)self + t);
        i++;
        off += 0x20;
    }
}
#pragma pop

void tokenize_args__6TLobbyFPvPv(O_80228A74 *self, char *s) {
    char *start;
    s32 quoted;
    clear_work_buffer((u8 *)self);
    start = s;
    quoted = 0;
    for (;;) {
        switch (*s) {
        case 0:
            add_token__6TLobbyFPvPv(self, start);
            return;
        case '"':
            if (quoted) {
                quoted = 0;
                *s = 0;
                s++;
            } else {
                s++;
                quoted = 1;
                start = s;
            }
            break;
        case '\t':
        case '\n':
            if (quoted) {
                s++;
            } else {
                *s = 0;
                s++;
                add_token__6TLobbyFPvPv(self, start);
                start = s;
            }
            break;
        default:
            s++;
            break;
        }
    }
}

void parse_csv_line__6TLobbyFPvPv(O_80228A74 *self, char *s) {
    char *start;
    s32 quoted;
    clear_work_buffer((u8 *)self);
    start = s;
    quoted = 0;
    for (;;) {
        switch (*s) {
        case 0:
            add_token__6TLobbyFPvPv(self, start);
            return;
        case '"':
            if (quoted) {
                quoted = 0;
                *s = 0;
                s++;
            } else {
                s++;
                quoted = 1;
                start = s;
            }
            break;
        case '\t':
        case '\n':
        case ',':
            if (quoted) {
                s++;
            } else {
                *s = 0;
                s++;
                add_token__6TLobbyFPvPv(self, start);
                start = s;
            }
            break;
        default:
            s++;
            break;
        }
    }
}

void add_token__6TLobbyFPvPv(O_80228A74 *self, const char *src) {
    strcpy(self->names[((P_80228A74 *)self)->count++], src);
}

void clear_work_buffer(u8 *arg0) {
    memset((void *)(arg0 + 0x1C), (int)(0), (int)(0x1000));
    M2C_FIELD(arg0, s32 *, 0x109C) = 0;
}

extern M2C_UNK lbl_804CC048[];

void *construct__6TLobbyFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC048;
    M2C_FIELD(arg0, void **, 0x10A0) = arg2;
    M2C_FIELD(arg0, void **, 0x10A4) = arg3;
    memset((void *)((void *)((char *)arg0 + 28)), (int)(0), (int)(4096));
    M2C_FIELD(arg0, u32 *, 0x109C) = 0;
    return arg0;
}
void trim_whitespace__6TLobbyFPv(char *s) {
    s32 len = strlen(s);
    s32 i;
    for (i = 0; i <= len && ((u8 *)s)[i] <= ' '; i++) {
    }
    if (i > len) {
        strcpy(s, lbl_805DC788);
    } else {
        for (; ((u8 *)s)[len] <= ' '; len--) {
            s[len] = 0;
        }
        strcpy(s, s + i);
    }
}

}
