#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
    M2C_UNK sp8;
    u8 trailing_storage[0x10];
};

typedef s32 M2C_UNK;
struct VBase_80337B00 { char pad[0x18]; };

struct VObj_80337B00 : VBase_80337B00 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(M2C_UNK, M2C_UNK);
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
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_status_flag__17TWindowSubComCardFPv(int);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 compact_items__18TCheckRoomSequenceFi(int);
s32 remove_bank_item_amount__18TCheckRoomSequenceFiii(int, int, int);
s32 copy_item_record__18TCheckRoomSequenceFiPvi(int, void *, int);
s32 copy_bank_to_card_window(int);
s32 TShopWindowBase__sub_8022397C(void *);
void TWindow__close(void *);
s32 get_selected_menu_value(int);
s32 select_cursor_entry__6TLobbyFPv(int);
void handle_confirm_dialog__21TShopDeleteItemWindowFPv(u8 *arg0);
s32 queue_destruction__7TObjectFv(void *);
s32 destroy__21TShopDeleteItemWindowFPv(void *arg0);
void handle_confirm_dialog__21TShopDeleteItemWindowFPv(u8 *arg0);
s32 TShopDeleteItemWindow__sub_80337E2C(void *);
void TShopDeleteItemWindow__vt9(u8 *arg0);
u16 obj_getField1c(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(void *);
s32 is_confirmed__24TShopEquipmentSellWindowFPv(void *);
s32 get_result__24TShopEquipmentSellWindowFPv(void *);
s32 is_confirmed__18TWindowInputNumberFPv(void *);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK set_position_xy(void *, f32, f32);
void TWindow__close(void *);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(void *, int);
void *create_yes_no_window(void *, int, int, int);
void *get_window_layout_position(int);
void handle_number_input__21TShopDeleteItemWindowFPv(u8 *arg0);
s32 copy_item_record__18TCheckRoomSequenceFiPvi(int, void *, int);
s32 copy_bank_item_with_stack_limit(int, void *, void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s16 get_child_field1c__15TShopWindowBaseFPv(void *);
s32 select_cursor_entry__6TLobbyFPv(int);
u16 obj_getField1c(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(void *);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK set_position_xy(void *, f32, f32);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(void *, int);
void *create_yes_no_window(void *, int, int, int);
void *get_window_layout_position(int);
void *__nw__7TObjectFUl(u32);
void *__ct__18TWindowInputNumberFPvllls(void *, void *, int, s32, int, int);
void set_displayed_item_colored__15TWindowHelpItemFPvUi(void *, void *);
void set_position__18TCheckRoomSequenceFPvff(void *, f32, f32);
s32 is_camera_ctrl_active__6TLobbyFv(void);
extern const f32 lbl_805DF998;
s32 update_item_select__21TShopDeleteItemWindowFPv(void *arg0);
}

extern "C" {

struct Base_80337980_80337910 { char pad[0x18]; };
struct VObj_80337980_80337910 : Base_80337980_80337910 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4(int a, int b);
};

void *TShopDeleteItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void TShopDeleteItemWindow__vt4(void *arg0);
void TShopDeleteItemWindow__vt5(void *arg0);
void *__dt__21TShopDeleteItemWindowFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __ct__15TShopWindowBaseFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
void init__9TItemDataFv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void TShopDeleteItemWindow__vt5(void *arg0) {
    struct VObj_80337910 *o = (struct VObj_80337910 *)M2C_FIELD(arg0, void **, 0x64);
    if (o != NULL) {
        o->m5();
    }
}

void TShopDeleteItemWindow__vt4(void *arg0) {
    struct VObj_80337948_80337910 *o = (struct VObj_80337948_80337910 *)M2C_FIELD(arg0, void **, 0x64);
    if (o != NULL) {
        o->m4();
    }
}

s32 destroy__21TShopDeleteItemWindowFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x30));
    }
    set_field_20__12TQuestListVMFPvi(arg0, 1);
    ((VObj_80337980_80337910 *)arg0)->m4(0x4C, 1);
}

extern M2C_UNK __vt__21TShopDeleteItemWindow[];

void handle_confirm_dialog__21TShopDeleteItemWindowFPv(u8 *arg0) {
    Stack_803379E0 stack;
    s32 temp_r30;
    s32 temp_r3_2;
    s32 temp_r3_3;
    u32 temp_r3;
    u32 temp_r3_4;
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x34);
    if ((temp_r3 != 0U) && (is_visible__17TWindowSubComCardFPv((int) (temp_r3)) != 0)) {
        temp_r30 = TShopWindowBase__sub_8022397C((void *) (arg0));
        temp_r3_2 = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x34)));
        if (temp_r3_2 == 0) {
            temp_r3_3 = select_cursor_entry__6TLobbyFPv((int) (M2C_FIELD(arg0, s32 *, 0x30)));
            if (copy_item_record__18TCheckRoomSequenceFiPvi((int) (temp_r3_3), (void *) (&stack.sp8), (int) (temp_r30)) != 0) {
                remove_bank_item_amount__18TCheckRoomSequenceFiii((int) (temp_r3_3), (int) (M2C_FIELD(arg0, s32 *, 0x5C)), (int) (temp_r30));
                compact_items__18TCheckRoomSequenceFi((int) (temp_r30));
                copy_bank_to_card_window((int) (temp_r30));
                set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (M2C_UNK)((int) (0)));
            }
            TWindow__close((void *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            return;
        }
        if (temp_r3_2 == 1) {
            TWindow__close((void *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (M2C_UNK)((int) (4)));
            return;
        }
        goto block_8;
    }
block_8:
    temp_r3_4 = M2C_FIELD(arg0, u32 *, 0x34);
    if ((temp_r3_4 != 0U) && (get_status_flag__17TWindowSubComCardFPv((int) (temp_r3_4)) != 0)) {
        TWindow__close((void *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (M2C_UNK)((int) (4)));
    }
}

void handle_number_input__21TShopDeleteItemWindowFPv(u8 *arg0) {
    if (*(void **)(arg0 + 0x38) != 0 && is_confirmed__18TWindowInputNumberFPv(*(void **)(arg0 + 0x38)) != 0) {
        if (*(void **)(arg0 + 0x34) == 0) {
            u32 id = obj_getField1c(*(void **)(arg0 + 0x24));
            *(void **)(arg0 + 0x34) = create_yes_no_window(get_window_layout_position(0x2B), id, 0, 0);
            set_ready_flag__18TCheckRoomSequenceFPv(*(void **)(arg0 + 0x34));
            set_selected_index__17TWindowSubComCardFPvs(*(void **)(arg0 + 0x34), 1);
            set_position_xy(*(void **)(arg0 + 0x34), get_scale__15TShopWindowBaseFv(arg0), get_scale__15TShopWindowBaseFv(arg0));
        }
        *(s32 *)(arg0 + 0x5C) = get_result__24TShopEquipmentSellWindowFPv(*(void **)(arg0 + 0x38));
        TWindow__close(*(void **)(arg0 + 0x38));
        *(void **)(arg0 + 0x38) = 0;
        set_field_20__12TQuestListVMFPvi(arg0, 3);
        ((VObj_80337B00 *)(arg0))->m4(0x4D, 1);
        return;
    }
    if (*(void **)(arg0 + 0x38) != 0 && is_confirmed__24TShopEquipmentSellWindowFPv(*(void **)(arg0 + 0x38)) != 0) {
        TWindow__close(*(void **)(arg0 + 0x38));
        *(void **)(arg0 + 0x38) = 0;
        set_field_20__12TQuestListVMFPvi(arg0, 4);
    }
}

#pragma push
#pragma opt_common_subs off
#define self ((Win_80337C2C *)arg0)
s32 update_item_select__21TShopDeleteItemWindowFPv(void *arg0) {
    Kind_80337C2C kind;
    s32 count;
    s32 base;
    s32 cursor;
    void *p;
    s32 id;
    base = TShopWindowBase__sub_8022397C(self);
    if (self->f30 != NULL) {
        cursor = select_cursor_entry__6TLobbyFPv((int)self->f30);
        if (self->f3c != NULL && cursor != self->f60) {
            if (copy_item_record__18TCheckRoomSequenceFiPvi(cursor, self->f40, base) != 0) {
                set_displayed_item_colored__15TWindowHelpItemFPvUi(self->f3c, self->f40);
            }
            self->f60 = cursor;
        }
    }
    if (TShopWindowBase__sub_802239EC(self) != 0) {
        set_field_20__12TQuestListVMFPvi(self, 7);
    } else if (TShopWindowBase__sub_80223A48(self) != 0) {
        if (copy_bank_item_with_stack_limit(select_cursor_entry__6TLobbyFPv((int)self->f30), &kind, &count, base) != 0) {
            if (kind.kind == 3 && count > 1) {
                p = __nw__7TObjectFUl(0x7C);
                if (p != NULL) {
                    id = get_child_field1c__15TShopWindowBaseFPv(self);
                    p = __ct__18TWindowInputNumberFPvllls(p, get_window_layout_position(0x2B), 1, count, 1, id);
                }
                self->f38 = p;
                if (self->f38 != NULL && is_camera_ctrl_active__6TLobbyFv() > 2) {
                    set_position__18TCheckRoomSequenceFPvff(self->f38, lbl_805DF998, lbl_805DF998);
                }
                set_field_20__12TQuestListVMFPvi(self, 2);
            } else {
                id = obj_getField1c(self->item);
                self->f34 = create_yes_no_window(get_window_layout_position(0x2B), id, 0, 0);
                set_ready_flag__18TCheckRoomSequenceFPv(self->f34);
                set_selected_index__17TWindowSubComCardFPvs(self->f34, 1);
                set_position_xy(self->f34, get_scale__15TShopWindowBaseFv(self), get_scale__15TShopWindowBaseFv(self));
                set_field_20__12TQuestListVMFPvi(self, 3);
                ((VObj_80337B00 *)self)->m4(0x4D, 1);
            }
        }
    }
}
#undef self
#pragma pop

void TShopDeleteItemWindow__vt9(u8 *arg0) {
    M2C_UNK (*temp_r12)(s32);
    M2C_UNK (*temp_r12_2)(s32);
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        TShopDeleteItemWindow__sub_80337E2C((void *) (arg0));
        return;
    case 1:
        update_item_select__21TShopDeleteItemWindowFPv((void *)((void *) (arg0)));
        return;
    case 2:
        handle_number_input__21TShopDeleteItemWindowFPv((u8 *)((void *) (arg0)));
        return;
    case 3:
        handle_confirm_dialog__21TShopDeleteItemWindowFPv((u8 *)((void *) (arg0)));
        return;
    case 4:
        destroy__21TShopDeleteItemWindowFPv((void *) (arg0));
        return;
    case 6:
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x2C);
        if (temp_r12 != NULL) {
            temp_r12(M2C_FIELD(arg0, s32 *, 0x64));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    case 7:
        temp_r12_2 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x28);
        if (temp_r12_2 != NULL) {
            temp_r12_2(M2C_FIELD(arg0, s32 *, 0x64));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
    default:
        return;
    }
}

void *__dt__21TShopDeleteItemWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TShopDeleteItemWindow;
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__21TShopDeleteItemWindow[];
extern void *TShopDeleteItemWindow__name;

void *TShopDeleteItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TShopDeleteItemWindow;
    M2C_FIELD(arg0, void **, 0x0) = TShopDeleteItemWindow__name;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x5C) = 1;
    M2C_FIELD(arg0, u8 *, 0x54) = 0;
    M2C_FIELD(arg0, u32 *, 0x60) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, void **, 0x64) = arg2;
    init__9TItemDataFv((void *)((char *)arg0 + 64));
    return arg0;
}

}
