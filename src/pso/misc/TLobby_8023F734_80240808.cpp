#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DC9D8;
void reset_sound_owner_state(u8 *arg0);
void __destroy_arr(void *arr, void *dtor, u32 size, u32 n);
void TLobby__sub_80242148(void *self, s32 x);
extern char lbl_805162EC[];
void TLobby__sub_80240974(void);
u16 TLobby__sub_802408EC(u16 crc, u8 c);
void *__construct_array(void *, void *, void *, u32, u32);
s32 __register_global_object(s32, void *, void *);
void TLobby__sub_80240974(void);
void TLobby__sub_80242148(void *self, s32 x);
void TLobby__sub_8024218C(void *self, s32 x);
extern char lbl_805162E0[];
extern char lbl_805162EC[];
void TLobby__sub_8024091C(void);
}

extern "C" {

void *TLobby__sub_80240808(void *arg0, s16 arg1);
void TLobby__sub_802409E4(void* p);
int TLobby__sub_802409F0(void);
void clamp_field9c__6TLobbyFPvf(void *arg0, f32 farg0);
void set_field0__6TLobbyFPvi(void* p, s32 v);
void update__6TLobbyFPv(void *arg0);
M2C_UNK __dl__FPv(void *);
s32 get_field_308__6TLobbyFPv(s32);

void *TLobby__sub_80240808(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x294) = 0;
        M2C_FIELD(arg0, s32 *, 0x290) = 0;
        M2C_FIELD(arg0, s32 *, 0x288) = -1;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void reset_sound_owner_state(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x2B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x294) = 0;
    M2C_FIELD(arg0, s32 *, 0x290) = 0;
    M2C_FIELD(arg0, s32 *, 0x284) = 0;
    M2C_FIELD(arg0, s32 *, 0x288) = -1;
    M2C_FIELD(arg0, s32 *, 0x298) = 0;
    M2C_FIELD(arg0, s32 *, 0x2B0) = -1;
    M2C_FIELD(arg0, s32 *, 0x2B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    M2C_FIELD(arg0, f32 *, 0x2A4) = (f32) lbl_805DC9D8;
    M2C_FIELD(arg0, s32 *, 0x2AC) = 0x1E240;
}

u16 TLobby__sub_802408EC(u16 crc, u8 c) {
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

void TLobby__sub_8024091C(void) {
    __construct_array(lbl_805162EC, (void *)TLobby__sub_8024218C, (void *)TLobby__sub_80242148, 0xA0, 0x28);
    __register_global_object(0, (void *)TLobby__sub_80240974, lbl_805162E0);
}

void TLobby__sub_80240974(void) {
    __destroy_arr(lbl_805162EC, (void *)TLobby__sub_80242148, 0xa0, 0x28);
}

void set_field0__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }

extern f32 TLobby__data_805DC9E0;
extern f32 lbl_805DC9E4;
extern f32 lbl_805DC9E8;

void clamp_field9c__6TLobbyFPvf(void *arg0, f32 farg0) {
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < TLobby__data_805DC9E0) {
        M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DC9E4;
        return;
    }
    if (var_f1 > lbl_805DC9E8) {
        var_f1 = lbl_805DC9E8;
    }
    M2C_FIELD(arg0, f32 *, 0x9C) = var_f1;
}

void TLobby__sub_802409E4(void* p) { *(s16*)((char*)p + 0x92) = 5; }

int TLobby__sub_802409F0(void) { return 0; }

void update__6TLobbyFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    if ((u32) (M2C_FIELD(arg0, s32 *, 0x80) + 0x77780000) == 0x8888U) {
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
        M2C_FIELD(arg0, s32 *, 0x80) = 0;
        M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r4 > 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
        if (temp_r0 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x84) = 0;
            M2C_FIELD(arg0, s32 *, 0x80) = 0;
            M2C_FIELD(arg0, s32 *, 0x78) = (s32) M2C_FIELD(arg0, s32 *, 0x7C);
        } else {
            M2C_FIELD(arg0, s32 *, 0x78) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x7C) * (temp_r4 - temp_r0)) / temp_r4);
            M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) - get_field_308__6TLobbyFPv(M2C_FIELD(arg0, s32 *, 0)));
        }
    }
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + M2C_FIELD(arg0, s32 *, 0x70) + M2C_FIELD(arg0, s32 *, 0x78));
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) + 0x2000);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) > 0x3FFF) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0x3FFF;
    }
}

}
