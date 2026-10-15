#include "types.h"

struct VBase_18_fbe024 { char pad[0x18]; };

struct VObj_18_fbe024 : VBase_18_fbe024 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
    virtual s32 m5();
    virtual s32 m6();
    virtual s32 m7();
    virtual u32 m8();
};

struct RecoveredGlobal_80329830_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80329830_lbl_8050E3B8 {
    s32 value;
    u8 remaining[0x1AC];
};

struct Obj_80329AA8 { s32 f0; u8 pad[0x14]; void *vt; s32 f1C; u8 pad2[4]; s32 f24; s32 f28; s32 f2C; void *cur; s32 f34; };

struct Pos_803296E8 { f32 x, y; };

extern "C" {
s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(int);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(int);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 TWindow__close(void *);
extern RecoveredGlobal_80329830_lbl_8050E208 controller_input_state;
extern RecoveredGlobal_80329830_lbl_8050E3B8 controller_physical_port_bank;
extern const f32 lbl_805DF710;
void update_state__18TAdAgreementBaseGCFPv(u8 *arg0);
void create_callback__22TAdEnterSerialAccessGCFPvPvPv(void *, void *, void *);
extern char lbl_804770BC[];
extern char lbl_804770C4[];
void create_agreement_callback__18TAdAgreementBaseGCFv(void);
s32 get_state_flag__9TMainTaskFv();
void check_main_task_state__18TAdAgreementBaseGCFPv(void *self);
void *__nw__7TObjectFUl(u32);
void __ct__7TObjectFP7TObject(void *, void *);
void __ct__9TAdBackGCFv(void *, void *);
void __ct__12TAdBackTxtGCFv(void *, void *);
void add_item_rect__12TLevelSelectFPvPv(void *, void *);
void *__ct__14TAdSelectCurGCFv(void *, s32, void *, void *);
void set_ad_field__6TLobbyFPvi(void *, s32);
void fn_80329BAC(void* p);
extern u8 agreement_item_rect_table[];
extern u8 lbl_804770A0[];
extern s32 __vt__18TAdAgreementBaseGC[];
extern s32 lbl_805D41B8;
extern s32 tl_clipout;
Obj_80329AA8 *TAdAgreementBaseGC__ct(Obj_80329AA8 *arg0, void *arg1);
void *get_localized_text_entry(int, u32);
u32 calc_text_width(void *);
s32 render_status_line__15TAdSubPlyItemGCFPvi(void *, int, f32, f32, f32);
void draw_window_frame();
extern const f32 lbl_805DF700;
extern const f32 lbl_805DF704;
extern const f32 lbl_805DF708;
extern const f32 lbl_805DF70C;
void draw_agreement_text__18TAdAgreementBaseGCFv(void);
}

extern "C" {

void TAdAgreementBaseGC__sub_803297EC(void* p);
void TAdAgreementBaseGC__vt4(void);
void TAdAgreementBaseGC__vt5(void);
void TAdAgreementBaseGC__vt6(void);
void *__dt__18TAdAgreementBaseGCFv(void *arg0, s16 arg1);
void fn_80329BAC(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

void check_main_task_state__18TAdAgreementBaseGCFPv(void *self) {
    if (get_state_flag__9TMainTaskFv() == 1) { return;
    }
}

#pragma push
#pragma fp_contract on
void draw_agreement_text__18TAdAgreementBaseGCFv(void) {
    Pos_803296E8 pos[2];
    u32 i;
    draw_window_frame();
    for (i = 0; i < 2; i++) {
        pos[i].x = lbl_805DF700 - (f32) (calc_text_width(get_localized_text_entry(0x1B, i)) >> 1);
        pos[i].y = lbl_805DF708 * (f32) i + lbl_805DF704;
        render_status_line__15TAdSubPlyItemGCFPvi(get_localized_text_entry(0x1B, i), -1, pos[i].x, pos[i].y, lbl_805DF70C);
    }
}
#pragma pop

void TAdAgreementBaseGC__sub_803297EC(void* p) { *(s32*)((char*)p + 0x1c) = 4; }

extern s32 __vt__18TAdAgreementBaseGC[];

typedef char RecoveredGlobal_80329830_lbl_8050E208_size[sizeof(RecoveredGlobal_80329830_lbl_8050E208) == 0x1B0 ? 1 : -1];
typedef char RecoveredGlobal_80329830_lbl_8050E3B8_size[sizeof(RecoveredGlobal_80329830_lbl_8050E3B8) == 0x1B0 ? 1 : -1];

void create_agreement_callback__18TAdAgreementBaseGCFv(void) {
    create_callback__22TAdEnterSerialAccessGCFPvPvPv(lbl_804770BC, lbl_804770C4, (void *)draw_agreement_text__18TAdAgreementBaseGCFv);
}

void update_state__18TAdAgreementBaseGCFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;
    *(s32 *)((s8 *)arg0 + 0x20) = (s32) *(s32 *)((s8 *)arg0 + 0x1C);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1C);
    switch (temp_r0) {
    case 0:
        *(u32 *)((s8 *)arg0 + 0x2C) = ((VObj_18_fbe024 *)(arg0))->m8();
        *(s32 *)((s8 *)arg0 + 0x1C) = 1;
        break;
    case 1:
        if (get_selected_slot__23TAdSinglePlyChrSelectGCFPv((int) (*(s32 *)((s8 *)arg0 + 0x30))) == 1) {
            temp_r3 = TAdSinglePlyChrSelectGC__sub_801334DC((int) (*(s32 *)((s8 *)arg0 + 0x30)));
            switch (temp_r3) {
            case 0:
                *(s32 *)((s8 *)arg0 + 0x1C) = 2;
                *(s32 *)((s8 *)arg0 + 0x24) = 3;
                break;
            case 1:
                *(s32 *)((s8 *)arg0 + 0x1C) = 2;
                *(s32 *)((s8 *)arg0 + 0x24) = 4;
                break;
            }
        } else if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&controller_physical_port_bank.value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
            *(s32 *)((s8 *)arg0 + 0x1C) = 2;
            *(s32 *)((s8 *)arg0 + 0x24) = 5;
        }
        break;
    case 2:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x2C));
            *(u32 *)((s8 *)arg0 + 0x2C) = 0U;
        }
        ((VObj_18_fbe024 *)(arg0))->m4();
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x28) + 1;
        *(s32 *)((s8 *)arg0 + 0x28) = temp_r4;
        if ((f32) temp_r4 > lbl_805DF710) {
            *(s32 *)((s8 *)arg0 + 0x1C) = (s32) *(s32 *)((s8 *)arg0 + 0x24);
        }
        break;
    case 3:
        ((VObj_18_fbe024 *)(arg0))->m5();
        break;
    case 4:
        ((VObj_18_fbe024 *)(arg0))->m6();
        break;
    case 5:
        ((VObj_18_fbe024 *)(arg0))->m7();
        break;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x20) != (s32) *(s32 *)((s8 *)arg0 + 0x1C)) {
        *(s32 *)((s8 *)arg0 + 0x28) = 0;
    }
}

void *__dt__18TAdAgreementBaseGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TAdAgreementBaseGC;
        if (*(void **)((s8 *)arg0 + 0x2C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x2C)); *(s32 *)((s8 *)arg0 + 0x2C) = 0; }
        if (*(void **)((s8 *)arg0 + 0x30) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x30)); *(s32 *)((s8 *)arg0 + 0x30) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Obj_80329AA8 *TAdAgreementBaseGC__ct(Obj_80329AA8 *arg0, void *arg1) {
    void *p;
    __ct__7TObjectFP7TObject(arg0, arg1);
    arg0->vt = ((s32 *)&__vt__18TAdAgreementBaseGC);
    arg0->f0 = lbl_805D41B8;
    arg0->f28 = 0;
    arg0->f1C = 0;
    arg0->f24 = 0;
    arg0->f34 = 0;
    arg0->f2C = 0;
    arg0->cur = 0;
    p = __nw__7TObjectFUl(0x24);
    if (p != 0) {
        __ct__9TAdBackGCFv(p, arg0);
    }
    p = __nw__7TObjectFUl(0x28);
    if (p != 0) {
        __ct__12TAdBackTxtGCFv(p, arg0);
    }
    p = __nw__7TObjectFUl(0x708);
    if (p != 0) {
        p = __ct__14TAdSelectCurGCFv(p, tl_clipout, agreement_item_rect_table, lbl_804770A0);
    }
    arg0->cur = p;
    add_item_rect__12TLevelSelectFPvPv(arg0->cur, agreement_item_rect_table);
    add_item_rect__12TLevelSelectFPvPv(arg0->cur, agreement_item_rect_table + 8);
    fn_80329BAC((void*)(arg0->cur));
    set_ad_field__6TLobbyFPvi(arg0->cur, 1);
    return arg0;
}

void TAdAgreementBaseGC__vt4(void) {  }
void TAdAgreementBaseGC__vt5(void) {  }
void TAdAgreementBaseGC__vt6(void) {  }
void fn_80329BAC(void* p) { *(s32*)((char*)p + 0xb8) = 1; }

}
