#include "pso/TChCrEffCtrlPl.h"

TChCrEffCtrlPl::~TChCrEffCtrlPl() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase803398CC_803398cc_80339658 { char pad[0x18]; };
struct VObj803398CC_803398cc_80339658 : VBase803398CC_803398cc_80339658 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};

struct O_80339808 { s32 f0; u8 pad[0x14]; void *vt; s32 f1c; s32 f20; u8 v[8]; f32 f2c; u8 pad2[4]; s32 f34; };

struct Vec2_803396C8 { f32 x, y; };

struct O_803396C8 { u8 pad[0x24]; f32 x; f32 y; f32 f2c; f32 f30; s32 f34; };

extern "C" {
M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK restore_saved_depth_alpha_state();
M2C_UNK draw_ui_sprite(int, void *, f32, f32);
extern const f32 lbl_805DF9F0;
extern const f32 lbl_805DF9F4;
extern const f32 lbl_805DF9F8;
void render__14TChCrEffCtrlPlFv(u8 *arg0);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
s32 get_clamped_player_index__14TChCrEffCtrlPlFv();
extern u8 lbl_80477C70[];
extern u8 __vt__14TChCrEffCtrlPl[];
extern s32 lbl_805D4270;
extern const f32 lbl_805DFA08;
O_80339808 *__ct__14TChCrEffCtrlPlFv(O_80339808 *arg0, void * _w1);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern const f32 lbl_80477C78[];
extern const f32 lbl_805DF9F4;
extern const f32 lbl_805DF9FC;
extern const f32 lbl_805DFA00;
extern const f32 lbl_805DFA04;
void run_task__14TChCrEffCtrlPlFv(O_803396C8 *self);
}

extern "C" {

void TLobby_802D2F7C__sub_80339910(void *arg0);
void *create__14TChCrEffCtrlPlFPv(void *arg0);
void reset_impl__15TLobby_802D2F7CFPv(u8 *arg0);
void *__nw__7TObjectFUl(int);
u32 fn_80339954();

#pragma push
#pragma opt_common_subs off
void render__14TChCrEffCtrlPlFv(u8 *arg0) {
    f32 var_f2;
    set_depth_buffer_settings_1__Fv();
    var_f2 = lbl_805DF9F0 * M2C_FIELD(arg0, f32 *, 0x2C);
    if (var_f2 > lbl_805DF9F4) {
        var_f2 = lbl_805DF9F4;
    }
    draw_ui_sprite((int) (M2C_FIELD(arg0, s32 *, 0x1C)), (void *) (arg0 + 0x24), (f32) (lbl_805DF9F8), (f32) (var_f2));
    draw_ui_sprite((int) (M2C_FIELD(arg0, s32 *, 0x20)), (void *) (arg0 + 0x24), (f32) (lbl_805DF9F8), (f32) (M2C_FIELD(arg0, f32 *, 0x30)));
    restore_saved_depth_alpha_state();
}
#pragma pop

#pragma push
#pragma fp_contract on
void run_task__14TChCrEffCtrlPlFv(O_803396C8 *self) {
    f32 s;
    f32 v;
    f32 x;
    f32 y;
    self->f34 += 0xB60;
    self->x += lbl_805DF9FC * (lbl_80477C78[0] - self->x);
    self->y += lbl_805DF9FC * (lbl_80477C78[1] - self->y);
    self->f2c += lbl_805DFA00;
    if (self->f2c > 1.0f) {
        self->f2c = 1.0f;
    }
    self->f30 = self->f2c;
    if (lbl_805DF9F4 == self->f2c) {
        s = lbl_805DF9F4;
        v = TBoss8Dragon__sub_803D64C0(self->f34);
        if ((self->f34 & 0x20000) && v > lbl_805DFA04) {
            s -= v - lbl_805DFA04;
        }
        self->f30 = s * self->f2c;
    }
}
#pragma pop

O_80339808 *__ct__14TChCrEffCtrlPlFv(O_80339808 *arg0, void * _w1) {
    __ct__7TObjectFP7TObject(arg0);
    arg0->vt = __vt__14TChCrEffCtrlPl;
    arg0->f0 = lbl_805D4270;
    arg0->f1c = get_clamped_player_index__14TChCrEffCtrlPlFv() + 0x8B;
    arg0->f20 = get_clamped_player_index__14TChCrEffCtrlPlFv() + 0xBC;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg0->v, lbl_80477C70);
    arg0->f2c = lbl_805DFA08;
    arg0->f34 = 0;
    return arg0;
}

void *create__14TChCrEffCtrlPlFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = __ct__14TChCrEffCtrlPlFv((O_80339808 *)(o), (void *)(arg0));
    }
    return o;
}

void reset_impl__15TLobby_802D2F7CFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x24));
    ((VObj803398CC_803398cc_80339658 *) temp_r3)->m7();
    M2C_FIELD(arg0, s8 *, 0x1C) = 2;
}

void TLobby_802D2F7C__sub_80339910(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x28) = fn_80339954();
    }
    M2C_FIELD(arg0, s8 *, 0x1C) = 1;
}

}
