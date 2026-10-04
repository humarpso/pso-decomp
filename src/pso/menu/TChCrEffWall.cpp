#include "pso/TChCrEffWall.h"

TChCrEffWall::~TChCrEffWall() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Ent_8029ACF8 { u8 b[8]; };

struct Args_8029ACF8 { void *a; void *b; s32 c; s32 d; };

extern "C" {
void *fn_8029AE88(void *arg0);
void * __ct__12TChCrEffWallFv(void *, void * = 0);
void *__nw__7TObjectFUl(int);
void * fn_8029AE88(void *arg0);
void TCameraCtrl__sub_80068EF0(void);
void restore_full_screen_view__11TCameraCtrlFv(void);
void set_depth_buffer_settings_1__Fv(void);
void restore_saved_depth_alpha_state(void);
void TWindowCtrlMain__sub_801E352C(Args_8029ACF8 *, s32, s32, f32);
void TChCrEffWall__sub_802910C8(s32, Ent_8029ACF8 *, f32);
extern Ent_8029ACF8 lbl_804652F0[6];
extern Ent_8029ACF8 lbl_80465320[2];
extern const f32 lbl_805DDCB0;
extern const f32 lbl_805DDCB4;
void render__12TChCrEffWallFv(void);
}

extern "C" {

void TChCrEffTagStr__sub_8029AED0(void* p);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__12TChCrEffWall[];
extern void *lbl_805D3D10;

void *lbl_804DBF58[4] = {
    (void *)0x0, (void *)0xff181818, (void *)0xff181818, (void *)0x0,
};
void *lbl_804DBF68[8] = {
    (void *)0x430c0000, (void *)0x0, (void *)0x43c00000, (void *)0x0,
    (void *)0x43c00000, (void *)0x44160000, (void *)0x430c0000, (void *)0x44160000,
};
void *lbl_804DBF88[8] = {
    (void *)0x44200000, (void *)0x0, (void *)0x43c00000, (void *)0x0,
    (void *)0x43c00000, (void *)0x44160000, (void *)0x44200000, (void *)0x44160000,
};
void *lbl_804DBFA8[4] = {
    (void *)0xec181818, (void *)0xff181818, (void *)0xff181818, (void *)0xec181818,
};
void render__12TChCrEffWallFv(void) {
    Args_8029ACF8 args;
    s32 i;
    set_depth_buffer_settings_1__Fv();
    for (i = 0; i < 6; i++) {
        TChCrEffWall__sub_802910C8(i + 10, &lbl_804652F0[i], lbl_805DDCB0);
    }
    for (i = 0; i < 2; i++) {
        TChCrEffWall__sub_802910C8(i + 10, &lbl_80465320[i], lbl_805DDCB0);
    }
    restore_full_screen_view__11TCameraCtrlFv();
    args.b = lbl_804DBF58;
    args.c = 0;
    args.d = 4;
    args.a = lbl_804DBF68;
    TWindowCtrlMain__sub_801E352C(&args, 4, 6, lbl_805DDCB4);
    args.b = lbl_804DBFA8;
    args.a = lbl_804DBF88;
    TWindowCtrlMain__sub_801E352C(&args, 4, 6, lbl_805DDCB4);
    TCameraCtrl__sub_80068EF0();
    restore_saved_depth_alpha_state();
}

void *__ct__12TChCrEffWallFv(void *arg0, void * _w1) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TChCrEffWall;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D10;
    return arg0;
}
void *fn_8029AE88(void *arg0) {
    void *o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__12TChCrEffWallFv((void *)(o), (void *)(arg0));
    }
    return o;
}

}
