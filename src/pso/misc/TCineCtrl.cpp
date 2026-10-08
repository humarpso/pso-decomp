#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80077FA0___vt__9TCineCtrl {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Obj_80077F58 { u8 pad[0x28]; s32 state; };

struct VtxList_80077BC0 {
    f32 *pos;
    u32 *col;
    s32 n;
    s32 cap;
};

extern "C" {
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
extern M2C_UNK __vt__9TCineCtrl[];
extern void * lbl_805D4E60;
u8 *__dt__9TCineCtrlFv(u8 *arg0, s16 arg1);
extern const f32 lbl_805D91E0;
extern const f32 lbl_805D91E4;
extern const f32 lbl_805D91E8;
extern const f32 lbl_805D91EC;
void update_letterbox_show__9TCineCtrlFPv(u8 *arg0);
extern const f32 TCineCtrl__data_805D91D0;
extern const f32 lbl_805D91E0;
extern const f32 lbl_805D91E4;
void update_letterbox_hide__9TCineCtrlFPv(u8 *arg0);
void update_letterbox_show__9TCineCtrlFPv(u8 *arg0);
void update_letterbox_hide__9TCineCtrlFPv(u8 *arg0);
void run_task__9TCineCtrlFv(Obj_80077F58 *self);
void TCameraCtrl__sub_80068EF0(void);
void restore_full_screen_view__11TCameraCtrlFv(void);
void draw_tri_fan_2d__14TObjCMHairMenuFPviif(void *, u16, s32, f32);
void abs__4cXyzCFv(s32, s32);
extern const f32 TCineCtrl__data_805D91D0;
extern const f32 lbl_805D91D4;
extern const f32 lbl_805D91D8;
extern const f32 lbl_805D91DC;
void render__9TCineCtrlFv(u8 *arg0);
}

extern "C" {

void *TCineCtrl__ct(void *arg0);
void reset__9TCineCtrlFi(s32 arg0);
void reset_state__9TCineCtrlFi(s32 arg0);
void __ct__7TObjectFP7TObject(void *, void *);

extern void *lbl_805D4E60;
extern const f32 lbl_805D91E8;
extern const f32 lbl_805D91EC;

void render__9TCineCtrlFv(u8 *arg0) {
    VtxList_80077BC0 vl;
    u32 col[4];
    f32 pos[8];
    if (!(M2C_FIELD(arg0, f32 *, 0x1C) <= TCineCtrl__data_805D91D0)) {
        restore_full_screen_view__11TCameraCtrlFv();
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
        vl.pos = pos;
        vl.col = col;
        vl.n = 0;
        vl.cap = 4;
        M2C_FIELD(arg0, s8 *, 0x27) = (s8) M2C_FIELD(arg0, f32 *, 0x1C);
        vl.pos[0] = TCineCtrl__data_805D91D0;
        vl.pos[1] = TCineCtrl__data_805D91D0;
        vl.col[0] = M2C_FIELD(arg0, u32 *, 0x24);
        vl.pos[2] = lbl_805D91D4;
        vl.pos[3] = TCineCtrl__data_805D91D0;
        vl.col[1] = M2C_FIELD(arg0, u32 *, 0x24);
        vl.pos[4] = lbl_805D91D4;
        vl.pos[5] = M2C_FIELD(arg0, f32 *, 0x20);
        vl.col[2] = M2C_FIELD(arg0, u32 *, 0x24);
        vl.pos[6] = TCineCtrl__data_805D91D0;
        vl.pos[7] = M2C_FIELD(arg0, f32 *, 0x20);
        vl.col[3] = M2C_FIELD(arg0, u32 *, 0x24);
        draw_tri_fan_2d__14TObjCMHairMenuFPviif(&vl, 4U, 0x16, lbl_805D91D8);
        vl.pos[0] = TCineCtrl__data_805D91D0;
        vl.pos[1] = lbl_805D91DC - M2C_FIELD(arg0, f32 *, 0x20);
        vl.col[0] = M2C_FIELD(arg0, u32 *, 0x24);
        vl.pos[2] = lbl_805D91D4;
        vl.pos[3] = lbl_805D91DC - M2C_FIELD(arg0, f32 *, 0x20);
        vl.col[1] = M2C_FIELD(arg0, u32 *, 0x24);
        vl.pos[4] = lbl_805D91D4;
        vl.pos[5] = lbl_805D91DC;
        vl.col[2] = M2C_FIELD(arg0, u32 *, 0x24);
        vl.pos[6] = TCineCtrl__data_805D91D0;
        vl.pos[7] = lbl_805D91DC;
        vl.col[3] = M2C_FIELD(arg0, u32 *, 0x24);
        draw_tri_fan_2d__14TObjCMHairMenuFPviif(&vl, 4U, 0x16, lbl_805D91D8);
        TCameraCtrl__sub_80068EF0();
    }
}

#pragma push
#pragma opt_common_subs off
void update_letterbox_hide__9TCineCtrlFPv(u8 *arg0) {
    M2C_UNK (*temp_r12)(void *);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) - lbl_805D91E0);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) - lbl_805D91E4);
    if (M2C_FIELD(arg0, f32 *, 0x1C) <= TCineCtrl__data_805D91D0) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) TCineCtrl__data_805D91D0;
    }
    if (M2C_FIELD(arg0, f32 *, 0x20) <= TCineCtrl__data_805D91D0) {
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) TCineCtrl__data_805D91D0;
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x2C);
        if (temp_r12 != NULL) {
            temp_r12(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}
#pragma pop

void reset_state__9TCineCtrlFi(s32 arg0) {
    if ((void *) lbl_805D4E60 != NULL) {
        M2C_FIELD(lbl_805D4E60, s32 *, 0x2C) = arg0;
        M2C_FIELD(lbl_805D4E60, f32 *, 0x1C) = (f32) lbl_805D91E8;
        M2C_FIELD(lbl_805D4E60, f32 *, 0x20) = (f32) lbl_805D91EC;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x26) = 0;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x25) = 0;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x24) = 0;
        M2C_FIELD(lbl_805D4E60, s32 *, 0x28) = 2;
    }
}

extern void *lbl_805D4E60;
extern const f32 TCineCtrl__data_805D91D0;

#pragma push
#pragma opt_common_subs off
void update_letterbox_show__9TCineCtrlFPv(u8 *arg0) {
    M2C_UNK (*temp_r12)(void *);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + lbl_805D91E0);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + lbl_805D91E4);
    if (M2C_FIELD(arg0, f32 *, 0x1C) >= lbl_805D91E8) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805D91E8;
    }
    if (M2C_FIELD(arg0, f32 *, 0x20) >= lbl_805D91EC) {
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805D91EC;
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x2C);
        if (temp_r12 != NULL) {
            temp_r12(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}
#pragma pop

void reset__9TCineCtrlFi(s32 arg0) {
    if ((void *) lbl_805D4E60 != NULL) {
        M2C_FIELD(lbl_805D4E60, s32 *, 0x2C) = arg0;
        M2C_FIELD(lbl_805D4E60, f32 *, 0x1C) = (f32) TCineCtrl__data_805D91D0;
        M2C_FIELD(lbl_805D4E60, f32 *, 0x20) = (f32) TCineCtrl__data_805D91D0;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x26) = 0;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x25) = 0;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x24) = 0;
        M2C_FIELD(lbl_805D4E60, s32 *, 0x28) = 1;
    }
}

extern void *tl_fade;
extern const f32 TCineCtrl__data_805D91D0;
extern M2C_UNK __vt__9TCineCtrl[];
extern void *lbl_805D28A8;
extern void * lbl_805D4E60;

typedef char RecoveredGlobal_80077FA0___vt__9TCineCtrl_size[sizeof(RecoveredGlobal_80077FA0___vt__9TCineCtrl) == 0x18 ? 1 : -1];

void run_task__9TCineCtrlFv(Obj_80077F58 *self) {
    switch (self->state) {
    case 0:
        break;
    case 1:
        update_letterbox_show__9TCineCtrlFPv((u8 *)self);
        break;
    case 2:
        update_letterbox_hide__9TCineCtrlFPv((u8 *)self);
        break;
    }
}

u8 *__dt__9TCineCtrlFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80077FA0___vt__9TCineCtrl *)&__vt__9TCineCtrl).value;
        (*(s32 *)&lbl_805D4E60) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

void *TCineCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, tl_fade);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TCineCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D28A8;
    M2C_FIELD(arg0, f32 *, 0x1C) = TCineCtrl__data_805D91D0;
    M2C_FIELD(arg0, f32 *, 0x20) = TCineCtrl__data_805D91D0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    lbl_805D4E60 = arg0;
    return arg0;
}

}
