#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80054530_lbl_80485EC8 {
    M2C_UNK value;
    u8 remaining[0x1DC];
};

struct V_80054224 { f32 x, y, z; };

struct S_80054224 { u8 pad0[0x38]; V_80054224 pos; u8 pad44[0x39c - 0x44]; f32 f39c; };

struct Boss_800542B0 {
    u8 pad0[0x374];
    s32 state;
    u8 pad378[0x3D0 - 0x378];
    s32 f3d0;
    u8 pad3d4[0x3F8 - 0x3D4];
    void *items[13];
};

typedef void (Boss_800542B0::*Act_800542B0)();

struct Entry_800542B0 {
    s32 f0;
    s32 f4;
    Act_800542B0 enter;
    u8 pad14[0x2C - 0x14];
};

typedef s32 M2C_UNK;
extern "C" {
extern RecoveredGlobal_80054530_lbl_80485EC8 lbl_80485EC8;
extern const f32 lbl_805D8B20;
void TBoss4Type2__sub_80054530(u8 *arg0, s32 arg1);
extern u8 *lbl_8048615C[];
u8 *TBoss4Type2__sub_80054384(void *self, s32 i, s32 j);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss4Zako__sub_803D8910(void *, void *);
void TBoss6Type1__sub_803D9370(void *);
void TBoss4Type2__sub_80054224(S_80054224 *o, void *src, V_80054224 *in);
s32 TObjFish__sub_8001ED9C(s32, s32);
M2C_UNK TObjFish__sub_8001EDB0(s32, s32);
s32 TObjFish__sub_8001EDC4(s32, s32);
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK TObjFish__sub_800E3074(s32);
M2C_UNK update_camera_target__14TBoss6PlotFalzFv();
M2C_UNK TBoss6PlotFalz__sub_802AC008(f32, f32);
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern s32 lbl_80485EB0[];
extern RecoveredGlobal_80054530_lbl_80485EC8 lbl_80485EC8;
void TObjFish__sub_800543A4(u8 *arg0);
void request_destroy__11TBoss4Type2FUi(void *);
extern Entry_800542B0 lbl_80485C48[];
}

extern "C" {

void calc_scaled_field__11TBoss4Type2FPvii(void *arg0, s32 arg1, s32 arg2);
f32 calc_wave_offset__11TBoss4Type2Ff(f32 farg0);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f32 lbl_805D8B18;
extern const f32 lbl_805D8B60;
extern const f32 lbl_805D8B74;

f32 calc_wave_offset__11TBoss4Type2Ff(f32 farg0) {
    return lbl_805D8B60 * (lbl_805D8B18 - TBoss8Dragon__sub_803D64DC((s32) (lbl_805D8B74 * farg0)));
}

extern M2C_UNK lbl_80437628;

void calc_scaled_field__11TBoss4Type2FPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (arg1 + (s32) (M2C_FIELD(arg0, f32 *, 0x39C) * (f32) TBoss4Type2__sub_80141FA8(arg1, arg2)));
}
typedef char RecoveredGlobal_80054530_lbl_80485EC8_size[sizeof(RecoveredGlobal_80054530_lbl_80485EC8) == 0x1E0 ? 1 : -1];

void TBoss4Type2__sub_80054224(S_80054224 *o, void *src, V_80054224 *in) {
    V_80054224 v = *in;
    TBoss6Type1__sub_803D9370(&v);
    v.x *= o->f39c;
    v.y *= o->f39c;
    v.z *= o->f39c;
    VecCopy__FP3VecPC3Vec(&o->pos, src);
    TBoss4Zako__sub_803D8910(&o->pos, &v);
}

void TBoss4Type2__sub_800542B0(Boss_800542B0 *arg0, s32 arg1) {
    s32 i;
    void **p;

    arg0->state = arg1;
    for (i = 8; i < 13; i++) {
        p = &arg0->items[i];
        if (*p != NULL) {
            request_destroy__11TBoss4Type2FUi(*p);
            *p = NULL;
        }
    }
    arg0->f3d0 = 5;
    TBoss4Type2__sub_80054530((u8 *)arg0, lbl_80485C48[arg0->state].f4);
    Act_800542B0 f = lbl_80485C48[arg0->state].enter;
    if (f) {
        (arg0->*f)();
    }
}

u8 *TBoss4Type2__sub_80054384(void *self, s32 i, s32 j) {
    return lbl_8048615C[i] + (j - 1) * 0x4000;
}

#pragma push
#pragma opt_propagation off
void TObjFish__sub_800543A4(u8 *arg0) {
    s32 i;
    s32 off;
    s32 a;
    set_global_flag__10TObjPlayerFv();
    for (i = 0; i < 6; i++) {
        TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x390), lbl_80485EB0[i]);
        set_global_param__8TObjFishFi();
        switch (i) {
        case 2:
        case 3:
        case 4:
            TBoss6PlotFalz__sub_802AC008(M2C_FIELD(arg0, f32 *, 0x3DC), M2C_FIELD(arg0, f32 *, 0x3E0));
            off = (i - 2) * 4 + 0x42C;
            TObjFish__sub_800E3074(*(s32 *)(arg0 + off));
            a = TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x390), lbl_80485EB0[i]);
            TObjEneSlimeOne__sub_803E4AF4(a, TObjFish__sub_8001ED9C(M2C_FIELD(arg0, s32 *, 0x390), M2C_FIELD((u8 *)&lbl_80485EC8.value + (M2C_FIELD(arg0, s32 *, 0x3E4) << 5) + i * 4, s32 *, 8)), M2C_FIELD(arg0, f32 *, 0x3E8));
            clear_render_callback__8TObjFishFv(*(s32 *)(arg0 + off));
            update_camera_target__14TBoss6PlotFalzFv();
            break;
        case 5:
            TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0x480));
            TObjEneSlimeOne__sub_803E4AF4(TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x390), lbl_80485EB0[i]), TObjFish__sub_8001ED9C(M2C_FIELD(arg0, s32 *, 0x390), M2C_FIELD((u8 *)&lbl_80485EC8.value + (M2C_FIELD(arg0, s32 *, 0x3E4) << 5) + i * 4, s32 *, 8)), M2C_FIELD(arg0, f32 *, 0x3E8));
            clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0x480));
            break;
        default:
            TObjEneSlimeOne__sub_803E4AF4(TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x390), lbl_80485EB0[i]), TObjFish__sub_8001ED9C(M2C_FIELD(arg0, s32 *, 0x390), M2C_FIELD((u8 *)&lbl_80485EC8.value + (M2C_FIELD(arg0, s32 *, 0x3E4) << 5) + i * 4, s32 *, 8)), M2C_FIELD(arg0, f32 *, 0x3E8));
            break;
        }
    }
    clear_global_state__10TObjPlayerFv();
    M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
}
#pragma pop

void TBoss4Type2__sub_80054530(u8 *arg0, s32 arg1) {
    if (arg1 != -1) {
        M2C_FIELD(arg0, s32 *, 0x3E4) = arg1;
        M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8B20;
        M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(((u8 *)(&lbl_80485EC8.value) + (arg1 << 5)), s32 *, 0);
    }
}

}
