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

extern "C" {
M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK fn_80141A30();
M2C_UNK draw_ui_sprite(int, void *, f32, f32);
extern const f32 lbl_805DF9F0;
extern const f32 lbl_805DF9F4;
extern const f32 lbl_805DF9F8;
void render__14TChCrEffCtrlPlFv(u8 *arg0);
}

extern "C" {

void TLobby_802D2F7C__sub_80339910(void *arg0);
void *create__14TChCrEffCtrlPlFPv(void *arg0);
void reset_impl__15TLobby_802D2F7CFPv(u8 *arg0);
void *__ct__14TChCrEffCtrlPlFv(void *, void *);
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
    fn_80141A30();
}
#pragma pop

void *create__14TChCrEffCtrlPlFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        o = __ct__14TChCrEffCtrlPlFv(o, arg0);
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
