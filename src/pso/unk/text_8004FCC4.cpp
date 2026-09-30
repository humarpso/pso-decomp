#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8004FCC4_lbl_80437448 { M2C_UNK value; u8 remaining[0x8]; };

typedef struct Obj_8004FD50 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x90 - 0x1C];
    void *items[5];
    u8 pada4[0xEC - 0xA4];
    void *fec;
    u8 padf0[0x108 - 0xF0];
    void *f108;
} Obj_8004FD50;

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TBoss4Type2__sub_8004F904(void *);
void TLobby__sub_8022727C(s32);
void queue_event_1D__12TBoss3VoloptFss(s16, s16);
extern RecoveredGlobal_8004FCC4_lbl_80437448 lbl_80437448;
extern const f32 lbl_805D8A14;
extern const f32 lbl_805D8A18;
void fn_8004FCC4(u8 *arg0);
s32 is_ending_or_split_screen__14TBoss4DarkFalzFv();
void TCameraCtrl__sub_80069DA8();
void request_destroy__11TBoss4Type2FUi(void *);
void init_state_1__8TObjFishFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, s16);
void __dl__7TObjectFPv(void *);
extern u8 lbl_804857F4[];
Obj_8004FD50 *fn_8004FD50(Obj_8004FD50 *arg0, s16 arg1);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void fn_8004FCC4(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    TBoss4Type2__sub_8004F904(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE4) == 0x8C) {
        TLobby__sub_8022727C((s32) &lbl_80437448.value);
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xE8) + lbl_805D8A14;
    M2C_FIELD(arg0, f32 *, 0xE8) = temp_f1;
    if (temp_f1 > lbl_805D8A18) {
        M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_805D8A18;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xE4) + 1;
    M2C_FIELD(arg0, s32 *, 0xE4) = temp_r0;
    if (temp_r0 >= 0x12C) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

Obj_8004FD50 *fn_8004FD50(Obj_8004FD50 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vt = lbl_804857F4;
        if (arg0->fec != NULL) {
            init_state_1__8TObjFishFPv(arg0->fec);
            arg0->fec = NULL;
        }
        if (arg0->f108 != NULL) {
            init_state_1__8TObjFishFPv(arg0->f108);
            arg0->f108 = NULL;
        }
        for (i = 0; i < 5; i++) {
            if (arg0->items[i] != NULL) {
                request_destroy__11TBoss4Type2FUi(arg0->items[i]);
                arg0->items[i] = NULL;
            }
        }
        if (is_ending_or_split_screen__14TBoss4DarkFalzFv() == 0) {
            TCameraCtrl__sub_80069DA8();
        }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
