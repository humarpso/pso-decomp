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
extern M2C_UNK lbl_80514F64[];
void TLobby__sub_80227B48(void);
M2C_UNK get_field_0x280__6TLobbyFPv(M2C_UNK *);
extern M2C_UNK lbl_80514F64[];
void TLobby__sub_80227CC0(void);
M2C_UNK set_menu_index__6TLobbyFPvi(void *, int);
extern M2C_UNK lbl_80514F64[];
void TLobby__sub_80227CE8(u8 *arg0);
M2C_UNK is_ready__6TLobbyFPv(M2C_UNK *);
extern M2C_UNK lbl_80514F64[];
void is_sound_enabled(void);
s32 is_special_sound_id(u32 x);
s32 is_special_sound_id(u32 x);
void is_sound_enabled(void);
M2C_UNK TLobby__sub_8023F780(s32, f32);
s32 TLobby__sub_8023F944(s32, s32, s32, s32, s32);
extern const f32 lbl_805DC768;
s32 normalize_sound_request(u32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 is_special_sound_id(u32 x);
void is_sound_enabled(void);
M2C_UNK TLobby__sub_8023F780(s32, f32);
s32 TLobby__sub_8023FA8C(s32, s32, s32, s32);
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
int TLobby__sub_8023F8B0(void*, int);
int TLobby__sub_8023FF64(void*);
s32 get_player_by_client_id(s32);
M2C_UNK bswap_6xB2_play_sound();
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK on_set_mode__6TLobbyFv(M2C_UNK);
M2C_UNK set_mode__6TLobbyFPvi(M2C_UNK *, s32);

int TLobby__sub_80227AF8(void* p) { return TLobby__sub_8023F754(p); }

extern s32 lbl_805D53A0;

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

void TLobby__sub_80227B48(void) {
    set_clamped_field27c__6TLobbyFPvf((M2C_UNK *)(&(*(RecoveredGlobal_8000F7FC_lbl_80515F48 *)&lbl_80514F64).value));
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
        temp_r3 = get_player_by_client_id(lbl_805D53A0);
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

extern M2C_UNK lbl_80514F64[];

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
    set_mode__6TLobbyFPvi(lbl_80514F64, arg0);
}

void TLobby__sub_80227CC0(void) {
    get_field_0x280__6TLobbyFPv((M2C_UNK *)(&(*(RecoveredGlobal_8000F7FC_lbl_80515F48 *)&lbl_80514F64).value));
}

typedef char RecoveredGlobal_80069094_camera_controller_registry_size[sizeof(RecoveredGlobal_80069094_camera_controller_registry) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4_size[sizeof(RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4_size[sizeof(RecoveredGlobal_800687C8_TCameraCtrl__data_804FF6C4) == 0xC ? 1 : -1];
void TLobby__sub_80227CE8(u8 *arg0) {
    set_menu_index__6TLobbyFPvi((void *)(&(*(RecoveredGlobal_800687E4_TCameraCtrl__data_804FF6C4 *)&lbl_80514F64).value), (int)(arg0));
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

int release_sound_with_fade(void* p) { return TLobby__sub_8023F8B0(p, 64); }
int TLobby__sub_80227D38(void) { return TLobby__sub_8023FF64((void*)(0)); }

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
        h = TLobby__sub_8023F944(m, arg1, arg2, r, flags);
        if (is_special_sound_id(m) != 0) {
            TLobby__sub_8023F780(h, lbl_805DC768);
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
        h = TLobby__sub_8023FA8C(m, arg1, r, flags);
        if (is_special_sound_id(m) != 0) {
            TLobby__sub_8023F780(h, lbl_805DC768);
        }
        return h;
    }
    return -1;
}

void is_sound_enabled(void) {
    is_ready__6TLobbyFPv((M2C_UNK *)(&(*(RecoveredGlobal_8000F7FC_lbl_80515F48 *)&lbl_80514F64).value));
}

}
