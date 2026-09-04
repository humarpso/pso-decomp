#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
