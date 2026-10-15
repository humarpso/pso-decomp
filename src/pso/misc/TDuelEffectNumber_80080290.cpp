#include "types.h"

struct RecoveredGlobal_80080438_lbl_80438DD4 {
    s32 value;
    u8 remaining[0x14];
};

struct Entry_800803D4 { u8 data[0x18]; };

extern "C" {
void TDuelEffectNumber__sub_800802F8(void *, void *, f32);
extern RecoveredGlobal_80080438_lbl_80438DD4 duel_number_default_layout;
void render_number_default__17TDuelEffectNumberFPvf(u8 *arg0, f32 farg0);
extern Entry_800803D4 duel_number_pair_layout[];
void TDuelEffectNumber__sub_800802F8(void *, void *, f32);
void render_pair__17TDuelEffectNumberFPvf(void *self, f32 f);
}

extern "C" {

void *__ct__17TDuelEffectNumberFv(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__17TDuelEffectNumber[];
extern void *TDuelEffectNumber__class_name;

void *__ct__17TDuelEffectNumberFv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TDuelEffectNumber;
    *(void **)((s8 *)arg0 + 0x0) = TDuelEffectNumber__class_name;
    *(f32 *)((s8 *)arg0 + 0x1C) = *(f32 *)((s8 *)arg2 + 0x0);
    *(f32 *)((s8 *)arg0 + 0x20) = *(f32 *)((s8 *)arg2 + 0x4);
    *(void **)((s8 *)arg0 + 0x24) = arg3;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    return arg0;
}
typedef char RecoveredGlobal_80080438_lbl_80438DD4_size[sizeof(RecoveredGlobal_80080438_lbl_80438DD4) == 0x18 ? 1 : -1];

void render_pair__17TDuelEffectNumberFPvf(void *self, f32 f) {
    s32 i;
    for (i = 0; i < 2; i++) {
        TDuelEffectNumber__sub_800802F8(self, &duel_number_pair_layout[i], f);
    }
}

void render_number_default__17TDuelEffectNumberFPvf(u8 *arg0, f32 farg0) {
    TDuelEffectNumber__sub_800802F8(arg0, &duel_number_default_layout.value, farg0);
}

}
