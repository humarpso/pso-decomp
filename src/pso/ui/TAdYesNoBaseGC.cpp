#include "types.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/ui/TAdYesNoBaseGC.h"
#include "pso/misc/TWindowSubComCard.h"

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
s32 send_and_handle__6TLobbyFii(int, void *, int);
s32 update_window_mode_from_progress__6TLobbyFPv(void *, void *);
s32 sub_8032C0B4__14TAdYesNoBaseGCFv(u8 *arg0);
void align_menu_entry_positions(s32);
void update_layout_height__17TWindowSubComCardFPvf(f32);
s32 init_shop_judgment_window(void *);
extern T_8032C118 lbl_804772E8[];
extern const f32 lbl_805DF788;
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
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 get_selected_menu_value(u32);
s32 TWindow__close(void *);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__ct__9TAdBackGCFv(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPv(void *);
void queue_destruction__7TObjectFv(void *);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, s32);

s32 TAdYesNoBaseGC::sub_8032C0B4() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r31;
    temp_r31 = update_window_mode_from_progress__6TLobbyFPv((void *) (arg0 + 0x30), (void *) (arg0 + 0x38));
    send_and_handle__6TLobbyFii((int) (temp_r31), (void *) (((VObj_18 *)(arg0))->m8()), (int) (1));
    return temp_r31;
}

s32 TAdYesNoBaseGC::create_menu_window() {
    O_8032C118 *arg0 = (O_8032C118 *)this;
    T_8032C118 t = lbl_804772E8[0];
    s32 r = init_shop_judgment_window(&t);
    update_layout_height__17TWindowSubComCardFPvf(lbl_805DF788);
    align_menu_entry_positions(r);
    ((TWindowSubComCard *)r)->set_selected_index((s16)arg0->sel);
    return r;
}

void TAdYesNoBaseGC::init_parts(void *arg1, void *arg2) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPv((void *)((char *)this + 48));
    ((void (*)(void *, void *))copy_vec2__28TWindowSubSymbolChatPartsSetFPv)((void *)((char *)this + 56), arg2);
}

extern const f64 lbl_804772F0;
extern s8 controller_input_state[];
extern s8 controller_physical_port_bank[];
extern const f32 lbl_805DF78C;

void TAdYesNoBaseGC__vt6(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;

    *(s32 *)((s8 *)arg0 + 0x20) = (s32) *(s32 *)((s8 *)arg0 + 0x1C);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1C);
    switch (temp_r0) {
    case 0:
        *(u32 *)((s8 *)arg0 + 0x40) = sub_8032C0B4__14TAdYesNoBaseGCFv((u8 *)(arg0));
        *(u32 *)((s8 *)arg0 + 0x44) = ((TAdYesNoBaseGC *)arg0)->create_menu_window();
        *(s32 *)((s8 *)arg0 + 0x1C) = 1;
        break;
    case 1:
        if (((TWindowMenu *)(*(u32 *)((s8 *)arg0 + 0x44)))->is_visible() != 0) {
            temp_r3 = get_selected_menu_value(*(u32 *)((s8 *)arg0 + 0x44));
            switch (temp_r3) {
            case 0:
                ((VtObj8032C1C8_8032C188*)arg0)->m6();
                *(s32 *)((s8 *)arg0 + 0x1C) = 2;
                *(s32 *)((s8 *)arg0 + 0x24) = 3;
                break;
            case 1:
                ((VtObj8032C1C8_8032C188*)arg0)->m7();
                *(s32 *)((s8 *)arg0 + 0x1C) = 2;
                *(s32 *)((s8 *)arg0 + 0x24) = 4;
                break;
            }
        } else if ((TWindowShortListCtrl__check_controller_button(controller_physical_port_bank + 0x20, 2) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv(controller_input_state + 0x160, 2) != 0)) {
            *(s32 *)((s8 *)arg0 + 0x1C) = 2;
            *(s32 *)((s8 *)arg0 + 0x24) = 4;
        }
        break;
    case 2:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x40) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x40));
            *(u32 *)((s8 *)arg0 + 0x40) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x44) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x44));
            *(u32 *)((s8 *)arg0 + 0x44) = 0U;
        }
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x28) + 1;
        *(s32 *)((s8 *)arg0 + 0x28) = temp_r4;
        if ((f32) temp_r4 > lbl_805DF78C) {
            *(s32 *)((s8 *)arg0 + 0x1C) = (s32) *(s32 *)((s8 *)arg0 + 0x24);
        }
        break;
    case 3:
        ((VtObj8032C1C8_8032C188*)arg0)->m4();
        break;
    case 4:
        ((VtObj8032C1C8_8032C188*)arg0)->m5();
        break;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x20) != (s32) *(s32 *)((s8 *)arg0 + 0x1C)) {
        *(s32 *)((s8 *)arg0 + 0x28) = 0;
    }
}

extern s32 __vt__14TAdYesNoBaseGC[];

void *TAdYesNoBaseGC__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TAdYesNoBaseGC;
        if (*(void **)((s8 *)arg0 + 0x40) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x40)); *(s32 *)((s8 *)arg0 + 0x40) = 0; }
        if (*(void **)((s8 *)arg0 + 0x44) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x44)); *(s32 *)((s8 *)arg0 + 0x44) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__14TAdYesNoBaseGC[];
extern const f32 lbl_805DF790;
extern const f32 lbl_805DF794;
extern void *lbl_805D41F8;
extern const f32 lbl_805DF798;
extern const f32 lbl_805DF79C;

void *TAdYesNoBaseGC__ct(void *arg0) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TAdYesNoBaseGC;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D41F8;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    *(f32 *)((s8 *)arg0 + 0x30) = lbl_805DF790;
    *(f32 *)((s8 *)arg0 + 0x34) = lbl_805DF794;
    *(f32 *)((s8 *)arg0 + 0x38) = lbl_805DF798;
    *(f32 *)((s8 *)arg0 + 0x3C) = lbl_805DF79C;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 1;
    *(u32 *)((s8 *)arg0 + 0x40) = 0;
    *(u32 *)((s8 *)arg0 + 0x44) = 0;
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
