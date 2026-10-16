#include "pso/TChCrEffWall.h"
#include "pso/misc/TWindowCtrlMain.h"

#include "types.h"
#include "pso/misc/TCameraCtrl.h"

struct Ent_8029ACF8 { u8 b[8]; };

struct Args_8029ACF8 { void *a; void *b; s32 c; s32 d; };

extern "C" {
void *fn_8029AE88(void *arg0);
void * __ct__12TChCrEffWallFv(void *, void * = 0);
void *__nw__7TObjectFUl(int);
void * fn_8029AE88(void *arg0);
void TCameraCtrl__sub_80068EF0(void);
void set_depth_buffer_settings_1__Fv(void);
void restore_saved_depth_alpha_state(void);
void draw_default_sprite__12TChCrEffWallFv(s32, Ent_8029ACF8 *, f32);
extern Ent_8029ACF8 creation_effwall_sprite_position_table[6];
extern Ent_8029ACF8 creation_effwall_sprite_size_table[2];
extern const f32 lbl_805DDCB0;
extern const f32 lbl_805DDCB4;
}

extern "C" {

void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__12TChCrEffWall[];
extern void *TChCrEffWall__name;

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
void TChCrEffWall::render() {
    Args_8029ACF8 args;
    s32 i;
    set_depth_buffer_settings_1__Fv();
    for (i = 0; i < 6; i++) {
        draw_default_sprite__12TChCrEffWallFv(i + 10, &creation_effwall_sprite_position_table[i], lbl_805DDCB0);
    }
    for (i = 0; i < 2; i++) {
        draw_default_sprite__12TChCrEffWallFv(i + 10, &creation_effwall_sprite_size_table[i], lbl_805DDCB0);
    }
    TCameraCtrl::restore_full_screen_view();
    args.b = lbl_804DBF58;
    args.c = 0;
    args.d = 4;
    args.a = lbl_804DBF68;
    ((TWindowCtrlMain *)(&args))->draw_strip_swap_color(4, 6, lbl_805DDCB4);
    args.b = lbl_804DBFA8;
    args.a = lbl_804DBF88;
    ((TWindowCtrlMain *)(&args))->draw_strip_swap_color(4, 6, lbl_805DDCB4);
    TCameraCtrl__sub_80068EF0();
    restore_saved_depth_alpha_state();
}

TChCrEffWall::~TChCrEffWall() {}
void *__ct__12TChCrEffWallFv(void *arg0, void * _w1) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TChCrEffWall;
    *(void **)((s8 *)arg0 + 0x0) = TChCrEffWall__name;
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
