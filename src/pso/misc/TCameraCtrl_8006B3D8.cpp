#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TCameraCtrl__sub_8006B520(void *arg0, s16 arg1);
void TCameraCtrl__sub_8006BA04(void);
void *TCameraCtrl__vt9(void);
void copy_camera_params__11TCameraCtrlFPv(void *arg0);
void create__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
void *destroy__11TCameraCtrlFPvs(void *arg0, s16 arg1);
void update_active_player__11TCameraCtrlFv(void);
void update_battle_camera__11TCameraCtrlFv(void);
M2C_UNK TCameraCtrl__sub_80069DA8();
M2C_UNK TCameraCtrl__sub_8006B798(void *, s32, s32, s32, s32);
void *TCameraCtrl__sub_8006BA68(void *);
void TCameraCtrl__sub_8006CCEC();
M2C_UNK TObjPlayer__sub_801B12CC();
M2C_UNK TObjPlayer__sub_801B130C();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void *get_params__11TCameraCtrlFPv(u32);

extern s32 lbl_805D53A0;

void update_active_player__11TCameraCtrlFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        TObjPlayer__sub_801B12CC();
    }
}

extern s32 lbl_805D53A0;

void update_battle_camera__11TCameraCtrlFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        TObjPlayer__sub_801B130C();
    }
}

extern const M2C_UNK lbl_80488AD8[];
extern s32 TCameraCtrl__data_805D4E10;

void *TCameraCtrl__sub_8006B520(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, const M2C_UNK **, 0x18) = lbl_80488AD8;
        TCameraCtrl__sub_80069DA8();
        TCameraCtrl__data_805D4E10 = 0;
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

extern s32 tl_07;

void create__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *obj = __nw__7TObjectFUl((int)(0x40));
    if (obj != NULL) {
        TCameraCtrl__sub_8006B798(obj, arg0, arg1, arg2, tl_07);
    }
}

extern M2C_UNK lbl_80488AF0[];

void *destroy__11TCameraCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80488AF0;
        TCameraCtrl__sub_8006CCEC();
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

void *TCameraCtrl__vt9(void) {
    void *o = __nw__7TObjectFUl((int)(0x6C));
    if (o != NULL) {
        o = TCameraCtrl__sub_8006BA68(o);
    }
    return o;
}

extern const f64 lbl_804383C8;
extern u32 lbl_805D4DF0;
extern const f32 lbl_805D9000;

void copy_camera_params__11TCameraCtrlFPv(void *arg0) {
    void *temp_r3;

    if ((u32) lbl_805D4DF0 != 0U) {
        temp_r3 = get_params__11TCameraCtrlFPv(lbl_805D4DF0);
        M2C_FIELD(arg0, f32 *, 0x48) = (f32) M2C_FIELD(temp_r3, f32 *, 0x28);
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x2C);
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(temp_r3, f32 *, 0x30);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x1C);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(temp_r3, f32 *, 0x20);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(temp_r3, f32 *, 0x24);
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (lbl_805D9000 * (f32) M2C_FIELD(temp_r3, s32 *, 0x14));
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(temp_r3, f32 *, 0x10);
    }
}

void TCameraCtrl__sub_8006BA04(void) {  }

}
