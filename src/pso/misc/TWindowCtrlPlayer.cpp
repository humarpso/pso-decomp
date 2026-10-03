#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Ctl_8024E2A8 {
    s32 f0;
    u8 pad4[0x18 - 4];
    M2C_UNK *vt;
    s16 f1c, f1e, f20;
    s32 f24;
    void *f28;
    void *f2c;
    void *f30;
    void *f34;
    void *f38;
    void *f3c;
};

extern "C" {

void *__dt__17TWindowCtrlPlayerFv(void *arg0, s16 arg1);
void render__17TWindowCtrlPlayerFv(void);
void run_task__17TWindowCtrlPlayerFv(void* p);
int TWindowCtrl__sub_8024DAAC(void*);
int TWindowCtrl__sub_8024DAC4(void*);
int TWindowCtrl__sub_8024DCE8(void*);
int update_target_info_window__11TWindowCtrlFPv(void* a0 = 0);
int TWindowCtrl__sub_8024DF5C(void* a0 = 0);
int TWindowCtrl__sub_8024DFF4(void* a0 = 0);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int fn_8024E0F0(void* a0 = 0);
void queue_destruction__7TObjectFv(void *);
void run_all_updates__11TWindowCtrlFPv(void* p);
int show_active_window__11TWindowCtrlFPv(void*);

s32 is_split_screen(void);
M2C_UNK set_flag_4__9TObjLukerFPv(void *);
void *__nw__7TObjectFUl(u32);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
void *TWindowActionPalette__ct(void *, s32);
void *fn_80269FE8(M2C_UNK, void *, s32);
M2C_UNK get_window_layout_position(M2C_UNK);
void *fn_80271400(s32);
void *TWindowMainMenu1P__ct(void *, void *, s32);
void *TWindowMainMenu4P__ct(void *, void *, s32);
extern u8 lbl_8044EC4C[];
extern s32 lbl_805D38E0;

void render__17TWindowCtrlPlayerFv(void) {  }
void run_task__17TWindowCtrlPlayerFv(void* p) { fn_8024E0F0(p); run_all_updates__11TWindowCtrlFPv(p); }

extern M2C_UNK __vt__17TWindowCtrlPlayer[];

void *__dt__17TWindowCtrlPlayerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowCtrlPlayer;
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

struct Ctl_8024E2A8 *TWindowCtrlPlayer__ct(struct Ctl_8024E2A8 *arg0, void *parent, s32 arg2) {
    void *p;

    __ct__7TObjectFP7TObject(arg0, parent);
    arg0->vt = __vt__17TWindowCtrlPlayer;
    arg0->f0 = lbl_805D38E0;
    arg0->f1c = 0;
    arg0->f1e = 0;
    arg0->f20 = 0;
    arg0->f24 = arg2;
    arg0->f28 = 0;
    arg0->f2c = 0;
    arg0->f30 = 0;
    arg0->f34 = 0;
    arg0->f38 = 0;
    arg0->f3c = 0;
    if (is_split_screen() != 0) {
        p = __nw__7TObjectFUl(0x60);
        if (p != 0) {
            p = TWindowMainMenu4P__ct(p, arg0, arg0->f24);
        }
        arg0->f28 = p;
    } else {
        p = __nw__7TObjectFUl(0xAC);
        if (p != 0) {
            p = TWindowMainMenu1P__ct(p, arg0, arg0->f24);
        }
        arg0->f28 = p;
    }
    arg0->f2c = fn_80269FE8(get_window_layout_position(0x20), lbl_8044EC4C, arg0->f24);
    arg0->f30 = fn_80271400(arg0->f24);
    set_flag_4__9TObjLukerFPv(arg0->f30);
    p = __nw__7TObjectFUl(0x78);
    if (p != 0) {
        p = TWindowActionPalette__ct(p, arg0->f24);
    }
    arg0->f34 = p;
    set_flag_4__9TObjLukerFPv(arg0->f34);
    return arg0;
}

}
