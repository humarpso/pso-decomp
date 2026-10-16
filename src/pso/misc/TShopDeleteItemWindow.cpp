#include "types.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TShopDeleteItemWindow.h"
#include "pso/misc/TCheckRoomSequence.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TShopEquipmentSellWindow.h"
#include "pso/misc/TWindowHelpItem.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubItem.h"
#include "pso/ui/TWindowInputNumber.h"

struct Base_80337910 { char pad[0x18]; };
struct VObj_80337910 : Base_80337910 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_80337948_80337910 { char pad[0x18]; };
struct VObj_80337948_80337910 : Base_80337948_80337910 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

struct Stack_803379E0 {
    s32 sp8;
    u8 trailing_storage[0x10];
};

struct VBase_80337B00 { char pad[0x18]; };

struct VObj_80337B00 : VBase_80337B00 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4(s32, s32);
};

typedef struct Win_80337C2C {
    u8 pad0[0x24];
    void *item;
    u8 pad28[8];
    void *f30;
    void *f34;
    void *f38;
    void *f3c;
    u8 f40[0x20];
    s32 f60;
} Win_80337C2C;

typedef struct Kind_80337C2C {
    u8 kind;
    u8 rest[0x13];
} Kind_80337C2C;

extern "C" {
s32 set_field_20__15TShopWindowBaseFl(void *, s32);
s32 compact_items__18TCheckRoomSequenceFi(int);
s32 remove_bank_item_amount__18TCheckRoomSequenceFiii(int, int, int);
s32 copy_item_record__18TCheckRoomSequenceFiPvi(int, void *, int);
s32 copy_bank_to_card_window(int);
s32 sub_8022397C__15TShopWindowBaseFv(void *);
void TWindow__close(void *);
s32 get_selected_menu_value(int);
s32 select_cursor_entry__22TWindowSubShortCutListFv(int);
void handle_confirm_dialog__21TShopDeleteItemWindowFPv(u8 *arg0);
s32 queue_destruction__7TObjectFv(void *);
void handle_confirm_dialog__21TShopDeleteItemWindowFPv(u8 *arg0);
s32 TShopDeleteItemWindow__sub_80337E2C(void *);
void vfunc_11__21TShopDeleteItemWindowFv(u8 *arg0);
u16 obj_getField1c(void *);
s32 set_field_20__15TShopWindowBaseFl(void *, s32);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 set_position_xy__13TUnk_804CDFE8Fff(void *, f32, f32);
void TWindow__close(void *);
void *create_yes_no_window(void *, int, int, int);
void *get_window_layout_position(int);
void handle_number_input__21TShopDeleteItemWindowFPv(u8 *arg0);
s32 copy_item_record__18TCheckRoomSequenceFiPvi(int, void *, int);
s32 copy_bank_item_with_stack_limit(int, void *, void *, int);
s32 sub_8022397C__15TShopWindowBaseFv(void *);
s32 sub_802239EC__13TShopSequenceFv(void *);
s32 sub_80223A48__15TShopWindowBaseFv(void *);
s16 get_child_field1c__13TShopSequenceFv(void *);
s32 select_cursor_entry__22TWindowSubShortCutListFv(int);
u16 obj_getField1c(void *);
s32 set_field_20__15TShopWindowBaseFl(void *, s32);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 set_position_xy__13TUnk_804CDFE8Fff(void *, f32, f32);
void *create_yes_no_window(void *, int, int, int);
void *get_window_layout_position(int);
void *__nw__7TObjectFUl(u32);
void *__ct__18TWindowInputNumberFPvllls(void *, void *, int, s32, int, int);
extern const f32 lbl_805DF998;
}

extern "C" {

struct Base_80337980_80337910 { char pad[0x18]; };
struct VObj_80337980_80337910 : Base_80337980_80337910 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4(int a, int b);
};

void *TShopDeleteItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void vfunc_6__21TShopDeleteItemWindowFv(void *arg0);
void vfunc_7__21TShopDeleteItemWindowFv(void *arg0);
void *__dt__21TShopDeleteItemWindowFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __ct__15TShopWindowBaseFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
void init__9TItemDataFv(void *);
s32 set_field_20__15TShopWindowBaseFl(void *, s32);

void TShopDeleteItemWindow::vfunc_7() {
    struct VObj_80337910 *o = (struct VObj_80337910 *)*(void **)((s8 *)this + 0x64);
    if (o != NULL) {
        o->m5();
    }
}

void TShopDeleteItemWindow::vfunc_6() {
    struct VObj_80337948_80337910 *o = (struct VObj_80337948_80337910 *)*(void **)((s8 *)this + 0x64);
    if (o != NULL) {
        o->m4();
    }
}

s32 TShopDeleteItemWindow::destroy() {
    if ((u32) *(u32 *)((s8 *)this + 0x30) != 0U) {
        ((TWindowSubItem *)(*(void **)((s8 *)this + 0x30)))->clear_selected_and_update_entry();
    }
    set_field_20__15TShopWindowBaseFl(this, 1);
    ((VObj_80337980_80337910 *)this)->m4(0x4C, 1);
}

extern s32 __vt__21TShopDeleteItemWindow[];

void handle_confirm_dialog__21TShopDeleteItemWindowFPv(u8 *arg0) {
    Stack_803379E0 stack;
    s32 temp_r30;
    s32 temp_r3_2;
    s32 temp_r3_3;
    u32 temp_r3;
    u32 temp_r3_4;
    temp_r3 = *(u32 *)((s8 *)arg0 + 0x34);
    if ((temp_r3 != 0U) && (((TWindowMenu *)temp_r3)->is_visible() != 0)) {
        temp_r30 = sub_8022397C__15TShopWindowBaseFv((void *) (arg0));
        temp_r3_2 = get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x34)));
        if (temp_r3_2 == 0) {
            temp_r3_3 = select_cursor_entry__22TWindowSubShortCutListFv((int) (*(s32 *)((s8 *)arg0 + 0x30)));
            if (copy_item_record__18TCheckRoomSequenceFiPvi((int) (temp_r3_3), (void *) (&stack.sp8), (int) (temp_r30)) != 0) {
                remove_bank_item_amount__18TCheckRoomSequenceFiii((int) (temp_r3_3), (int) (*(s32 *)((s8 *)arg0 + 0x5C)), (int) (temp_r30));
                compact_items__18TCheckRoomSequenceFi((int) (temp_r30));
                copy_bank_to_card_window((int) (temp_r30));
                set_field_20__15TShopWindowBaseFl((void *)((void *) (arg0)), (s32)((int) (0)));
            }
            TWindow__close((void *)((int) (*(u32 *)((s8 *)arg0 + 0x34))));
            *(u32 *)((s8 *)arg0 + 0x34) = 0U;
            return;
        }
        if (temp_r3_2 == 1) {
            TWindow__close((void *)((int) (*(u32 *)((s8 *)arg0 + 0x34))));
            *(u32 *)((s8 *)arg0 + 0x34) = 0U;
            set_field_20__15TShopWindowBaseFl((void *)((void *) (arg0)), (s32)((int) (4)));
            return;
        }
        goto block_8;
    }
block_8:
    temp_r3_4 = *(u32 *)((s8 *)arg0 + 0x34);
    if ((temp_r3_4 != 0U) && (((TWindowSubComCard *)temp_r3_4)->get_status_flag() != 0)) {
        TWindow__close((void *)((int) (*(u32 *)((s8 *)arg0 + 0x34))));
        *(u32 *)((s8 *)arg0 + 0x34) = 0U;
        set_field_20__15TShopWindowBaseFl((void *)((void *) (arg0)), (s32)((int) (4)));
    }
}

void handle_number_input__21TShopDeleteItemWindowFPv(u8 *arg0) {
    if (*(void **)(arg0 + 0x38) != 0 && ((TWindowInputNumber *)(*(void **)(arg0 + 0x38)))->is_confirmed() != 0) {
        if (*(void **)(arg0 + 0x34) == 0) {
            u32 id = obj_getField1c(*(void **)(arg0 + 0x24));
            *(void **)(arg0 + 0x34) = create_yes_no_window(get_window_layout_position(0x2B), id, 0, 0);
            ((TCheckRoomSequence *)(*(void **)(arg0 + 0x34)))->set_ready_flag();
            ((TWindowSubComCardList *)(*(void **)(arg0 + 0x34)))->set_selected_index(1);
            set_position_xy__13TUnk_804CDFE8Fff(*(void **)(arg0 + 0x34), get_scale__15TShopWindowBaseFv(arg0), get_scale__15TShopWindowBaseFv(arg0));
        }
        *(s32 *)(arg0 + 0x5C) = ((TShopEquipmentSellWindow *)(*(void **)(arg0 + 0x38)))->get_result();
        TWindow__close(*(void **)(arg0 + 0x38));
        *(void **)(arg0 + 0x38) = 0;
        set_field_20__15TShopWindowBaseFl(arg0, 3);
        ((VObj_80337B00 *)(arg0))->m4(0x4D, 1);
        return;
    }
    if (*(void **)(arg0 + 0x38) != 0 && ((TShopEquipmentSellWindow *)(*(void **)(arg0 + 0x38)))->is_confirmed() != 0) {
        TWindow__close(*(void **)(arg0 + 0x38));
        *(void **)(arg0 + 0x38) = 0;
        set_field_20__15TShopWindowBaseFl(arg0, 4);
    }
}

#pragma push
#pragma opt_common_subs off
#define self ((Win_80337C2C *)arg0)
s32 TShopDeleteItemWindow::update_item_select(void *arg0) {
    Kind_80337C2C kind;
    s32 count;
    s32 base;
    s32 cursor;
    void *p;
    s32 id;
    base = sub_8022397C__15TShopWindowBaseFv(self);
    if (self->f30 != NULL) {
        cursor = select_cursor_entry__22TWindowSubShortCutListFv((int)self->f30);
        if (self->f3c != NULL && cursor != self->f60) {
            if (copy_item_record__18TCheckRoomSequenceFiPvi(cursor, self->f40, base) != 0) {
                ((TWindowHelpItem *)(self->f3c))->set_displayed_item_colored((u32)(self->f40));
            }
            self->f60 = cursor;
        }
    }
    if (sub_802239EC__13TShopSequenceFv(self) != 0) {
        set_field_20__15TShopWindowBaseFl(self, 7);
    } else if (sub_80223A48__15TShopWindowBaseFv(self) != 0) {
        if (copy_bank_item_with_stack_limit(select_cursor_entry__22TWindowSubShortCutListFv((int)self->f30), &kind, &count, base) != 0) {
            if (kind.kind == 3 && count > 1) {
                p = __nw__7TObjectFUl(0x7C);
                if (p != NULL) {
                    id = get_child_field1c__13TShopSequenceFv(self);
                    p = __ct__18TWindowInputNumberFPvllls(p, get_window_layout_position(0x2B), 1, count, 1, id);
                }
                self->f38 = p;
                if (self->f38 != NULL && TLobby::is_camera_ctrl_active() > 2) {
                    ((TCheckRoomSequence *)(self->f38))->set_position(lbl_805DF998, lbl_805DF998);
                }
                set_field_20__15TShopWindowBaseFl(self, 2);
            } else {
                id = obj_getField1c(self->item);
                self->f34 = create_yes_no_window(get_window_layout_position(0x2B), id, 0, 0);
                ((TCheckRoomSequence *)(self->f34))->set_ready_flag();
                ((TWindowSubComCardList *)(self->f34))->set_selected_index(1);
                set_position_xy__13TUnk_804CDFE8Fff(self->f34, get_scale__15TShopWindowBaseFv(self), get_scale__15TShopWindowBaseFv(self));
                set_field_20__15TShopWindowBaseFl(self, 3);
                ((VObj_80337B00 *)self)->m4(0x4D, 1);
            }
        }
    }
}
#undef self
#pragma pop

void TShopDeleteItemWindow::vfunc_11() {
    u8 *arg0 = (u8 *)this;
    s32 (*temp_r12)(s32);
    s32 (*temp_r12_2)(s32);
    u32 temp_r0;
    temp_r0 = *(u32 *)((s8 *)arg0 + 0x20);
    switch (temp_r0) {
    case 0:
        TShopDeleteItemWindow__sub_80337E2C((void *) (arg0));
        return;
    case 1:
        TShopDeleteItemWindow::update_item_select((void *)((void *) (arg0)));
        return;
    case 2:
        handle_number_input__21TShopDeleteItemWindowFPv((u8 *)((void *) (arg0)));
        return;
    case 3:
        handle_confirm_dialog__21TShopDeleteItemWindowFPv((u8 *)((void *) (arg0)));
        return;
    case 4:
        ((TShopDeleteItemWindow *)arg0)->destroy();
        return;
    case 6:
        temp_r12 = *(s32 (**)(s32))((s8 *)arg0 + 0x2C);
        if (temp_r12 != NULL) {
            temp_r12(*(s32 *)((s8 *)arg0 + 0x64));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    case 7:
        temp_r12_2 = *(s32 (**)(s32))((s8 *)arg0 + 0x28);
        if (temp_r12_2 != NULL) {
            temp_r12_2(*(s32 *)((s8 *)arg0 + 0x64));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
    default:
        return;
    }
}

void *__dt__21TShopDeleteItemWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TShopDeleteItemWindow;
        if (*(void **)((s8 *)arg0 + 0x30) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x30)); *(s32 *)((s8 *)arg0 + 0x30) = 0; }
        if (*(void **)((s8 *)arg0 + 0x34) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x34)); *(s32 *)((s8 *)arg0 + 0x34) = 0; }
        if (*(void **)((s8 *)arg0 + 0x38) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x38)); *(s32 *)((s8 *)arg0 + 0x38) = 0; }
        if (*(void **)((s8 *)arg0 + 0x3C) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x3C)); *(s32 *)((s8 *)arg0 + 0x3C) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__21TShopDeleteItemWindow[];
extern void *TShopDeleteItemWindow__name;

void *TShopDeleteItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TShopDeleteItemWindow;
    *(void **)((s8 *)arg0 + 0x0) = TShopDeleteItemWindow__name;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(void **)((s8 *)arg0 + 0x24) = arg3;
    *(u32 *)((s8 *)arg0 + 0x5C) = 1;
    *(u8 *)((s8 *)arg0 + 0x54) = 0;
    *(u32 *)((s8 *)arg0 + 0x60) = 0;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    *(u32 *)((s8 *)arg0 + 0x30) = 0;
    *(u32 *)((s8 *)arg0 + 0x34) = 0;
    *(u32 *)((s8 *)arg0 + 0x38) = 0;
    *(u32 *)((s8 *)arg0 + 0x3C) = 0;
    *(void **)((s8 *)arg0 + 0x64) = arg2;
    init__9TItemDataFv((void *)((char *)arg0 + 64));
    return arg0;
}

}
