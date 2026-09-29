#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};

struct T_8032C118 { s32 a; s32 b; };

struct O_8032C118 { u8 pad[0x2C]; s32 sel; };

extern "C" {
M2C_UNK send_and_handle__6TLobbyFPvii(int, void *, int);
s32 update_window_mode_from_progress__6TLobbyFiPv(void *, void *);
s32 TAdYesNoBaseGC__sub_8032C0B4(u8 *arg0);
void set_selected_index__17TWindowSubComCardFPvs(s32, s16);
void TWindowSubComCard__sub_80265C30(s32);
void TWindowSubComCard__sub_80265E60(f32);
s32 init_shop_judgment_window(void *);
extern T_8032C118 lbl_804772E8[];
extern const f32 lbl_805DF788;
s32 TAdYesNoBaseGC__sub_8032C118(O_8032C118 *arg0);
}

extern "C" {

struct VtBase8032C1C8_8032C188 { char pad[0x18]; };
struct VtObj8032C1C8_8032C188 : VtBase8032C1C8_8032C188 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

void *TAdYesNoBaseGC__ct(void *arg0);
void *TAdYesNoBaseGC__vt0(void *arg0, s16 arg1);
void TAdYesNoBaseGC__vt6(void *arg0);
void init_parts__14TAdYesNoBaseGCFPvPvPv(void *arg0, void *arg1, void *arg2);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 TWindowSubComCard__sub_80265BF8(u32);
M2C_UNK TWindow__close(void *);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__ct__9TAdBackGCFv(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *);
s32 is_visible__17TWindowSubComCardFPv(u32);
void queue_destruction__7TObjectFv(void *);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, M2C_UNK);

s32 TAdYesNoBaseGC__sub_8032C0B4(u8 *arg0) {
    s32 temp_r31;
    temp_r31 = update_window_mode_from_progress__6TLobbyFiPv((void *) (arg0 + 0x30), (void *) (arg0 + 0x38));
    send_and_handle__6TLobbyFPvii((int) (temp_r31), (void *) (((VObj_18 *)(arg0))->m8()), (int) (1));
    return temp_r31;
}

s32 TAdYesNoBaseGC__sub_8032C118(O_8032C118 *arg0) {
    T_8032C118 t = lbl_804772E8[0];
    s32 r = init_shop_judgment_window(&t);
    TWindowSubComCard__sub_80265E60(lbl_805DF788);
    TWindowSubComCard__sub_80265C30(r);
    set_selected_index__17TWindowSubComCardFPvs(r, (s16)arg0->sel);
    return r;
}

void init_parts__14TAdYesNoBaseGCFPvPvPv(void *arg0, void *arg1, void *arg2) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *)((char *)arg0 + 48));
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)((void *)((char *)arg0 + 56), arg2);
}

extern const f64 lbl_804772F0;
extern s8 lbl_8050E208[];
extern s8 lbl_8050E3B8[];
extern const f32 lbl_805DF78C;

void TAdYesNoBaseGC__vt6(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, u32 *, 0x40) = TAdYesNoBaseGC__sub_8032C0B4((u8 *)(arg0));
        M2C_FIELD(arg0, u32 *, 0x44) = TAdYesNoBaseGC__sub_8032C118((O_8032C118 *)(arg0));
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        break;
    case 1:
        if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x44)) != 0) {
            temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x44));
            switch (temp_r3) {
            case 0:
                ((VtObj8032C1C8_8032C188*)arg0)->m6();
                M2C_FIELD(arg0, s32 *, 0x1C) = 2;
                M2C_FIELD(arg0, s32 *, 0x24) = 3;
                break;
            case 1:
                ((VtObj8032C1C8_8032C188*)arg0)->m7();
                M2C_FIELD(arg0, s32 *, 0x1C) = 2;
                M2C_FIELD(arg0, s32 *, 0x24) = 4;
                break;
            }
        } else if ((TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208 + 0x160, 2) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
            M2C_FIELD(arg0, s32 *, 0x24) = 4;
        }
        break;
    case 2:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x44));
            M2C_FIELD(arg0, u32 *, 0x44) = 0U;
        }
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x28) + 1;
        M2C_FIELD(arg0, s32 *, 0x28) = temp_r4;
        if ((f32) temp_r4 > lbl_805DF78C) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
        }
        break;
    case 3:
        ((VtObj8032C1C8_8032C188*)arg0)->m4();
        break;
    case 4:
        ((VtObj8032C1C8_8032C188*)arg0)->m5();
        break;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}

extern M2C_UNK __vt__14TAdYesNoBaseGC[];

void *TAdYesNoBaseGC__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TAdYesNoBaseGC;
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x40)); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        if (M2C_FIELD(arg0, void **, 0x44) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x44)); M2C_FIELD(arg0, M2C_UNK *, 0x44) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__14TAdYesNoBaseGC[];
extern const f32 lbl_805DF790;
extern const f32 lbl_805DF794;
extern void *lbl_805D41F8;
extern const f32 lbl_805DF798;
extern const f32 lbl_805DF79C;

void *TAdYesNoBaseGC__ct(void *arg0) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TAdYesNoBaseGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D41F8;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DF790;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DF794;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DF798;
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DF79C;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 1;
    M2C_FIELD(arg0, u32 *, 0x40) = 0;
    M2C_FIELD(arg0, u32 *, 0x44) = 0;
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

}
