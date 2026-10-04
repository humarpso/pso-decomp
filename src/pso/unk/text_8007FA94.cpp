#include "types.h"
struct Obj_8007FA94 { u8 pad[0x20]; s32 state; s32 value; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Obj_8007FB14 { u8 pad[0x20]; s32 state; s32 value; };

extern "C" {
void *__nw__7TObjectFUl(int);
void *__ct__17TDuelEffectStringFv(void *p, s32 v, void *s, s32 n);
void send_neg50__6TLobbyFPvPv(void *a, s32 b);
void queue_destruction__7TObjectFv(void *);
extern u8 lbl_80438D48[];
extern u8 lbl_80438D50[];
void fn_8007FA94(Obj_8007FA94 *self);
void *__nw__7TObjectFUl(int);
void *__ct__17TDuelEffectStringFv(void *p, s32 v, void *s, s32 n);
void *__ct__17TDuelEffectNumberFv(void *p, s32 v, void *s, s32 n);
void queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_particle_effect_with_flags(void *, M2C_UNK, M2C_UNK);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK play_cue_stream_file(void *);
extern u8 lbl_80438D40[];
extern u8 lbl_80438D58[];
extern u8 lbl_8048DFA0[];
void fn_8007FB14(Obj_8007FB14 *self);
}

extern "C" {

void fn_8007FA94(Obj_8007FA94 *self) {
    switch (self->state) {
    case 0: {
        void *p = __nw__7TObjectFUl(0x2C);
        if (p != NULL) {
            __ct__17TDuelEffectStringFv(p, self->value, lbl_80438D48, 1);
        }
        send_neg50__6TLobbyFPvPv(lbl_80438D50, 0x96);
        break;
    }
    case 30:
        queue_destruction__7TObjectFv(self);
        break;
    }
}
void fn_8007FB14(Obj_8007FB14 *self) {
    void *p;
    switch (self->state) {
    case 0x0:
        p = __nw__7TObjectFUl(0x2C);
        if (p != NULL) {
            __ct__17TDuelEffectNumberFv(p, self->value, lbl_80438D40, 5);
        }
        play_sound_effect(0x4B210, 0, 0, 0);
        break;
    case 0x1E:
        p = __nw__7TObjectFUl(0x2C);
        if (p != NULL) {
            __ct__17TDuelEffectNumberFv(p, self->value, lbl_80438D40, 4);
        }
        play_sound_effect(0x4B210, 0, 0, 0);
        break;
    case 0x3C:
        p = __nw__7TObjectFUl(0x2C);
        if (p != NULL) {
            __ct__17TDuelEffectNumberFv(p, self->value, lbl_80438D40, 3);
        }
        play_sound_effect(0x4B210, 0, 0, 0);
        break;
    case 0x5A:
        p = __nw__7TObjectFUl(0x2C);
        if (p != NULL) {
            __ct__17TDuelEffectNumberFv(p, self->value, lbl_80438D40, 2);
        }
        play_sound_effect(0x4B210, 0, 0, 0);
        break;
    case 0x78:
        p = __nw__7TObjectFUl(0x2C);
        if (p != NULL) {
            __ct__17TDuelEffectNumberFv(p, self->value, lbl_80438D40, 1);
        }
        play_sound_effect(0x4B210, 0, 0, 0);
        break;
    case 0x96:
        p = __nw__7TObjectFUl(0x2C);
        if (p != NULL) {
            __ct__17TDuelEffectStringFv(p, self->value, lbl_80438D40, 0);
        }
        break;
    case 0xA0:
        spawn_particle_effect_with_flags(lbl_8048DFA0, 0x1F1, 0x48C0);
        play_cue_stream_file(lbl_80438D58);
        break;
    case 0xB4:
        queue_destruction__7TObjectFv(self);
        break;
    }
}

}
