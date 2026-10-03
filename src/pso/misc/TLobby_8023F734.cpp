#include "types.h"
#include "pso/audio/SoundRequestVoice.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Voice_80241FD8 {
    u32 pad0; s32 state; u32 pad1; s32 kind; u8 pad2[0x20 - 0x10]; s32 token;
    u8 pad3[0x48 - 0x24]; s32 fade; s32 fadeStep;
};

extern "C" {
s32 TLobby__sub_80240B40(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK TLobby__sub_803AA0E0(int, int, int);
void TLobby__sub_80241AD8(u8 *arg0);
int TLobby__sub_80240E8C(void);
extern const f32 lbl_805DC9E4;
s32 TLobby__sub_80242058(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK TLobby__sub_803AA1A0(int);
s32 TLobby__sub_80241FD8(struct Voice_80241FD8 *v, s32 step);
}

extern "C" {

int TLobby__sub_80240E8C(void);
void TLobby__sub_80240F38(void);
void TLobby__sub_80241A0C(void);
void clamp_params__6TLobbyFPv(void *arg0);
void TLobby__sub_802409E4(void* p);
s32 get_field_308__6TLobbyFPv(s32);

s32 TLobby__sub_80240B40(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_r5;
    var_r5 = arg2;
    if (var_r5 <= 0) {
        var_r5 = 0x88888888;
    }
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x80) = var_r5;
    M2C_FIELD(arg0, s32 *, 0x84) = var_r5;
    return 0;
}

int TLobby__sub_80240E8C(void) { return 0; }

void TLobby__sub_80240F38(void) {  }

void TLobby__sub_80241A0C(void) {  }

extern const f32 TLobby__data_805DC9E0;
extern const f32 lbl_805DC9EC;

void send_sound_request_reverb(SoundRequestVoice *voice) {
    f32 request = voice->reverb;
    s32 amount;
    if (request < TLobby__data_805DC9E0) {
        if (voice->bank == 5 || (voice->flags & 0x10)) amount = 0;
        else amount = s32(lbl_805DC9EC * voice->owner->reverb);
    } else amount = s32(lbl_805DC9EC * request);
    if (voice->bank == 6) {
        switch (voice->index) {
        case 12:
        case 25:
            return;
        default:
            break;
        }
    }
    if (voice->previousReverb != u8(amount))
        TLobby__sub_803AA0E0(voice->token, 91, amount);
}

void TLobby__sub_80241AD8(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    switch ((s32) M2C_FIELD(arg0, s32 *, 0xC)) {
    case 0:
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x28)) {
        M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(arg0, s32 *, 0x28);
        TLobby__sub_803AA0E0((int) (M2C_FIELD(arg0, s32 *, 0x20)), (int) (7), (int) ((u8) M2C_FIELD(arg0, s32 *, 0x28)));
    }
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_r3_2 != (s32) M2C_FIELD(arg0, s32 *, 0x30)) {
        M2C_FIELD(arg0, s32 *, 0x2C) = M2C_FIELD(arg0, s32 *, 0x30);
        TLobby__sub_803AA0E0((int) (M2C_FIELD(arg0, s32 *, 0x20)), (int) (0xA), (int) ((u8) M2C_FIELD(arg0, s32 *, 0x30)));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) == 5) {
        TLobby__sub_803AA0E0((int) (M2C_FIELD(arg0, s32 *, 0x20)), (int) (0x83), (int) (0U));
        return;
    }
    temp_r3_3 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_r3_3 != (s32) M2C_FIELD(arg0, s32 *, 0x38)) {
        M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(arg0, s32 *, 0x38);
        TLobby__sub_803AA0E0((int) (M2C_FIELD(arg0, s32 *, 0x20)), (int) (0x83), (int) ((u8) M2C_FIELD(arg0, s32 *, 0x38)));
    }
        break;
    }
}

void clamp_params__6TLobbyFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (((M2C_FIELD(arg0, s32 *, 0x48) + M2C_FIELD(arg0, s32 *, 0x40)) + M2C_FIELD(arg0, s32 *, 0x3C)) + M2C_FIELD(arg0, s32 *, 0x44)) + 0x7F;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (0x40 - (M2C_FIELD(arg0, s32 *, 0x50) + M2C_FIELD(arg0, s32 *, 0x54)));
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) ((M2C_FIELD(arg0, s32 *, 0x58) + M2C_FIELD(arg0, s32 *, 0x60)) + 0x40);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x280));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) < 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0x7F;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0x7F;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) < 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0x7F;
    }
}

s32 TLobby__sub_80241FD8(struct Voice_80241FD8 *v, s32 step) {
    switch (v->kind) {
    case 0:
        if (v->fadeStep == 0) {
            if (step != 0) {
                v->fadeStep = step;
                v->fade = -step;
            } else {
                if (step == 0 && v->state == 1) {
                    TLobby__sub_803AA1A0(v->token);
                }
                v->state = 0;
            }
        }
        break;
    }
    return 0;
}

#pragma push
#pragma fp_contract on
s32 TLobby__sub_80242058(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = arg4;
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = arg3;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0x7F;
    M2C_FIELD(arg0, s32 *, 0x24) = 0x88888888;
    M2C_FIELD(arg0, s32 *, 0x30) = 0x40;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x88888888;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0x88888888;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0x88888888;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s16 *, 0x8C) = 0x3F00;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, s16 *, 0x90) = 0;
    M2C_FIELD(arg0, s16 *, 0x92) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DC9E4;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    switch (M2C_FIELD(arg0, s32 *, 0xC)) {
    case 0:
        M2C_FIELD(arg0, s32 *, 4) = -1;
        TLobby__sub_80240E8C();
        break;
    }
    return 0;
}
#pragma pop

}
