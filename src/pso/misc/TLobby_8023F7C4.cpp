#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TLobby__sub_8023F7C4(void* p);
s32 TLobby__sub_8023F7CC(void* p);
void TLobby__sub_8023F7D4(void* p, s32 v);
void set_mode__6TLobbyFPvi(void *arg0, s32 arg1);
void set_clamped_field27c__6TLobbyFPvf(void *arg0, f32 farg0);
s32 TLobby__sub_803AA35C(s32);

f32 TLobby__sub_8023F7C4(void* p) { return *(f32*)((char*)p + 0x2a4); }
s32 TLobby__sub_8023F7CC(void* p) { return *(s32*)((char*)p + 0x280); }
void TLobby__sub_8023F7D4(void* p, s32 v) { *(s32*)((char*)p + 0x280) = v; }
void set_mode__6TLobbyFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        TLobby__sub_803AA35C(0);
        M2C_FIELD(arg0, s32 *, 0x2A0) = arg1;
        return;
    case 1:
        TLobby__sub_803AA35C(1);
        M2C_FIELD(arg0, s32 *, 0x2A0) = arg1;
        return;
    case 2:
        TLobby__sub_803AA35C(2);
        M2C_FIELD(arg0, s32 *, 0x2A0) = arg1;
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
    M2C_FIELD(arg0, f32 *, 0x27C) = var_f1;
}

}
