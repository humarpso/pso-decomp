#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct B_8032D214 { u8 pad[0x18]; };

struct V_8032D214 : B_8032D214 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void *m5();
};

struct VBase_18_df5984 { char pad[0x18]; };

struct VObj_18_df5984 : VBase_18_df5984 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4();
};

extern "C" {
M2C_UNK render_status_disp__23TAdSinglePlyChrSelectGCFPvff(s32, f32, f32, f32);
extern const f32 lbl_805DF7B8;
extern const f32 lbl_805DF7BC;
void TAdWarningBaseGC__sub_8032D514(void *arg0, s32 arg1, s32 arg2);
s32 get_state_flag__9TMainTaskFv();
void TAdWarningBaseGC__vt5(void *self);
void send_and_handle__6TLobbyFPvii(s32, void *, int);
s32 update_window_mode_from_progress__6TLobbyFiPv(void *, void *);
extern u8 lbl_80477334[];
extern u8 lbl_8047733C[];
s32 TAdWarningBaseGC__sub_8032D214(V_8032D214 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
void play_sound_effect(int, int, int, int);
void TWindow__close(void *);
s32 TAdWarningBaseGC__sub_8032D214(V_8032D214 *arg0);
extern u8 lbl_8050E208[];
extern u8 lbl_8050E3B8[];
extern const f32 lbl_805DF7B0;
void TAdWarningBaseGC__vt4(u8 *arg0);
}

extern "C" {

void *TAdWarningBaseGC__ct(void *arg0);
void TAdWarningBaseGC__sub_8032D1E4(void);
void *TAdWarningBaseGC__vt0(void *arg0, s16 arg1);
void render__16TAdWarningBaseGCFi(s32 arg0);
M2C_UNK draw_textured_quad_at_depth(s32, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(M2C_UNK, M2C_UNK);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__ct__9TAdBackGCFv(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_global_param__8TObjFishFi(u32);

    extern int lbl_805D6CF4;
void TAdWarningBaseGC__sub_8032D1E4(void) { lbl_805D6CF4 = 0; }

extern M2C_UNK __vt__16TAdWarningBaseGC[];

void TAdWarningBaseGC__vt5(void *self) {
    if (get_state_flag__9TMainTaskFv() == 1) { return;
    }
}

s32 TAdWarningBaseGC__sub_8032D214(V_8032D214 *arg0) {
    s32 r = update_window_mode_from_progress__6TLobbyFiPv(lbl_80477334, lbl_8047733C);
    send_and_handle__6TLobbyFPvii(r, arg0->m5(), 3);
    return r;
}

void TAdWarningBaseGC__vt4(u8 *arg0) {
    u8 *a;
    u8 *b;
    M2C_FIELD(arg0, s32 *, 0x20) = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (M2C_FIELD(arg0, s32 *, 0x1C)) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x2C) = TAdWarningBaseGC__sub_8032D214((V_8032D214 *)arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        break;
    case 1:
        play_sound_effect(0x53F06, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        break;
    case 2:
        if (TWindowShortListCtrl__check_controller_button(a = lbl_8050E3B8 + 0x20, 4) != 0 ||
            test_flag_4c__23TAdSinglePlyChrSelectGCFPv(b = lbl_8050E208 + 0x160, 4) != 0 ||
            TWindowShortListCtrl__check_controller_button(a, 2) != 0 ||
            test_flag_4c__23TAdSinglePlyChrSelectGCFPv(b, 2) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
            M2C_FIELD(arg0, s32 *, 0x24) = 4;
        }
        break;
    case 3:
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, void **, 0x2C) = NULL;
        }
        if ((f32)++M2C_FIELD(arg0, s32 *, 0x28) > lbl_805DF7B0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = M2C_FIELD(arg0, s32 *, 0x24);
        }
        break;
    case 4:
        ((V_8032D214 *)arg0)->m4();
        break;
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) != M2C_FIELD(arg0, s32 *, 0x1C)) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}

void *TAdWarningBaseGC__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdWarningBaseGC;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__16TAdWarningBaseGC[];
extern void *lbl_805D4208;

void *TAdWarningBaseGC__ct(void *arg0) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdWarningBaseGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4208;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        __ct__9TAdBackGCFv(o, arg0);
    }
    o2 = __nw__7TObjectFUl(0x28);
    if (o2 != NULL) {
        __ct__12TAdBackTxtGCFv(o2, arg0);
    }
    return arg0;
}

extern u32 lbl_805D6D00;
extern f32 lbl_805DF7C0;

#pragma push
#pragma fp_contract on
void TAdWarningBaseGC__sub_8032D514(void *arg0, s32 arg1, s32 arg2) {
    render_status_disp__23TAdSinglePlyChrSelectGCFPvff(arg2, lbl_805DF7B8 + M2C_FIELD(arg0, f32 *, 0x1C), lbl_805DF7BC + M2C_FIELD(arg0, f32 *, 0x20), lbl_805DF7B8);
}
#pragma pop

void render__16TAdWarningBaseGCFi(s32 arg0) {
    if ((u32) lbl_805D6D00 != 0U) {
        set_global_param__8TObjFishFi(lbl_805D6D00);
        TWindowSubStatusDisp__sub_803DEE6C(1);
        TWindowSubStatusDisp__sub_803DF160(0, -1);
        draw_textured_quad_at_depth(arg0 + 0x1C, lbl_805DF7C0);
        get_player__20TWindowSubStatusDispFv();
    }
}

}
