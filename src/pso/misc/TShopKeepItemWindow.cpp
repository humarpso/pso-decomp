#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80221844 { char pad[0x18]; };
struct VObj_80221844 : Base_80221844 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8022187C_80221844 { char pad[0x18]; };
struct VObj_8022187C_80221844 : Base_8022187C_80221844 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

struct Base_802219A0 { char pad[0x18]; };

struct V_802219A0 : Base_802219A0 {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void m4(s32, s32);
};

struct Ent_802219A0 {
    s32 f0;
    s32 f4;
    char pad8[0x14];
};

struct Self_802219A0 {
    char pad0[0x24];
    s32 f24;
    Ent_802219A0 ents[30];
    char pad370[0x8];
    s32 f378;
    char pad37C[0x8];
    s32 f384;
    void *f388;
};

extern "C" {
u32 obj_getField1c(s32);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(u32);
s32 is_confirmed__24TShopEquipmentSellWindowFPv(u32);
s32 get_result__24TShopEquipmentSellWindowFPv(u32);
s32 is_confirmed__18TWindowInputNumberFPv(u32);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK set_position_xy(u32, f32, f32);
void TWindow__close(void *);
u32 create_yes_no_window(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK get_window_layout_position(M2C_UNK);
void update_number_input__19TShopKeepItemWindowFPv(void *arg0);
s32 close_with_cancel_callback__19TShopKeepItemWindowFPv(void *arg0);
s32 close_with_ok_callback__19TShopKeepItemWindowFPv(void *arg0);
s32 close__19TShopKeepItemWindowFPv(void *arg0);
void update_number_input__19TShopKeepItemWindowFPv(void *arg0);
s32 handle_deposit_list_select__19TShopKeepItemWindowFv(void *);
s32 rebuild_item_list__19TShopKeepItemWindowFv(void *);
void TShopKeepItemWindow__vt9(u8 *arg0);
void memset(void *, int, int);
int sprintf(char *, const char *, ...);
M2C_UNK TQuestVmDownLoadServer__sub_80222704(s32, M2C_UNK *);
extern char lbl_805DC718[4];
void TQuestVmDownLoadServer__sub_8022236C(s32 arg0);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 get_field_d8__10TObjPlayerFPv(s32);
M2C_UNK get_item_record__23TShopJudgmentItemWindowFPv(s32, s32, s32);
s32 store_item_in_bank(void *, s32, s32);
M2C_UNK copy_bank_to_card_window(s32);
M2C_UNK TShopWindowBase__sub_8022397C(void *);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void TWindow__close(void *);
s32 get_selected_menu_value(void *);
s32 select_cursor_entry__6TLobbyFPv(s32);
void handle_deposit_confirm__19TShopKeepItemWindowFv(void *arg0);
}

extern "C" {

void *TShopKeepItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void TShopKeepItemWindow__vt4(void *arg0);
void TShopKeepItemWindow__vt5(void *arg0);
void *__dt__19TShopKeepItemWindowFv(void *arg0, s16 arg1);
void show_message_or_error(s32 arg0);
M2C_UNK TCheckRoomSequence__sub_802109A4();
M2C_UNK TQuestVmDownLoadServer__sub_80222704(s32, M2C_UNK *);
M2C_UNK TShopWindowBase__sub_8022397C(void *);
void TWindow__close(void *);
void __ct__15TShopWindowBaseFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
M2C_UNK *get_status_window__20TWindowSubStatusDispFi(u16);
void memset(void *, int, int);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void TShopKeepItemWindow__vt5(void *arg0) {
    struct VObj_80221844 *temp_r3;

    temp_r3 = (struct VObj_80221844 *)M2C_FIELD(arg0, void **, 0x380);
    if (temp_r3 != NULL) {
        temp_r3->m5();
    }
}

void TShopKeepItemWindow__vt4(void *arg0) {
    struct VObj_8022187C_80221844 *o = (struct VObj_8022187C_80221844 *)M2C_FIELD(arg0, void **, 0x380);
    if (o != NULL) {
        o->m4();
    }
}

s32 close_with_cancel_callback__19TShopKeepItemWindowFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x398);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x380));
    }
    TShopWindowBase__sub_8022397C(arg0);
    TCheckRoomSequence__sub_802109A4();
    queue_destruction__7TObjectFv(arg0);
}

s32 close_with_ok_callback__19TShopKeepItemWindowFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x394);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x380));
    }
    TShopWindowBase__sub_8022397C(arg0);
    TCheckRoomSequence__sub_802109A4();
    queue_destruction__7TObjectFv(arg0);
}

s32 close__19TShopKeepItemWindowFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x384) != 0U) {
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x384));
    }
    set_field_20__12TQuestListVMFPvi(arg0, 1);
}

extern M2C_UNK __vt__19TShopKeepItemWindow[];

void handle_deposit_confirm__19TShopKeepItemWindowFv(void *arg0) {
    Self_802219A0 *self = (Self_802219A0 *)arg0;
    s32 base;
    s32 r;
    s32 i;
    void *win;
    win = self->f388;
    if (win != NULL && is_visible__17TWindowSubComCardFPv(win) != 0) {
        base = TShopWindowBase__sub_8022397C(arg0);
        r = get_selected_menu_value(self->f388);
        if (r == 0) {
            i = select_cursor_entry__6TLobbyFPv(self->f384);
            if (store_item_in_bank(&self->ents[i].f4, self->f378, base) != 0) {
                get_item_record__23TShopJudgmentItemWindowFPv(self->f24, get_field_d8__10TObjPlayerFPv(self->ents[i].f0), self->f378);
                copy_bank_to_card_window(base);
                play_sound_effect(0x52D01, 0, 0, 0);
                TWindow__close(self->f388);
                self->f388 = NULL;
                set_field_20__12TQuestListVMFPvi(arg0, 0);
                return;
            }
            ((V_802219A0 *) arg0)->m4(0x3C, 1);
            play_sound_effect(0x53F06, 0, 0, 0);
            TWindow__close(self->f388);
            self->f388 = NULL;
            set_field_20__12TQuestListVMFPvi(arg0, 7);
            return;
        }
        if (r == 1) {
            TWindow__close(self->f388);
            self->f388 = NULL;
            set_field_20__12TQuestListVMFPvi(arg0, 3);
            return;
        }
    }
    win = self->f388;
    if (win != NULL && get_status_flag__17TWindowSubComCardFPv(win) != 0) {
        TWindow__close(self->f388);
        self->f388 = NULL;
        set_field_20__12TQuestListVMFPvi(arg0, 3);
    }
}

void update_number_input__19TShopKeepItemWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;
    u32 w;
    w = M2C_FIELD(arg0, u32 *, 0x38C);
    if ((w != 0U) && (is_confirmed__18TWindowInputNumberFPv(w) != 0)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x388) == 0U) {
            temp_r31 = obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, u32 *, 0x388) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
            set_ready_flag__18TCheckRoomSequenceFPv(M2C_FIELD(arg0, u32 *, 0x388));
            temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
            set_position_xy(M2C_FIELD(arg0, u32 *, 0x388), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        }
        M2C_FIELD(arg0, s32 *, 0x378) = get_result__24TShopEquipmentSellWindowFPv(M2C_FIELD(arg0, u32 *, 0x38C));
        TWindow__close((void *)(M2C_FIELD(arg0, u32 *, 0x38C)));
        M2C_FIELD(arg0, u32 *, 0x38C) = 0U;
        set_field_20__12TQuestListVMFPvi(arg0, 2);
        return;
    }
    w = M2C_FIELD(arg0, u32 *, 0x38C);
    if ((w != 0U) && (is_confirmed__24TShopEquipmentSellWindowFPv(w) != 0)) {
        TWindow__close((void *)(M2C_FIELD(arg0, u32 *, 0x38C)));
        M2C_FIELD(arg0, u32 *, 0x38C) = 0U;
        set_field_20__12TQuestListVMFPvi(arg0, 3);
    }
}

void TShopKeepItemWindow__vt9(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        rebuild_item_list__19TShopKeepItemWindowFv((void *) (arg0));
        return;
    case 1:
        handle_deposit_list_select__19TShopKeepItemWindowFv((void *) (arg0));
        return;
    case 2:
        handle_deposit_confirm__19TShopKeepItemWindowFv((void *)((void *) (arg0)));
        return;
    case 3:
        close__19TShopKeepItemWindowFPv((void *) (arg0));
        return;
    case 4:
        update_number_input__19TShopKeepItemWindowFPv((void *) (arg0));
        return;
    case 5:
        close_with_ok_callback__19TShopKeepItemWindowFPv((void *) (arg0));
        return;
    case 7:
        close_with_cancel_callback__19TShopKeepItemWindowFPv((void *) (arg0));
    default:
        return;
    }
}

void *__dt__19TShopKeepItemWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TShopKeepItemWindow;
        if (M2C_FIELD(arg0, void **, 0x384) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x384)); M2C_FIELD(arg0, M2C_UNK *, 0x384) = 0; }
        if (M2C_FIELD(arg0, void **, 0x388) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x388)); M2C_FIELD(arg0, M2C_UNK *, 0x388) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38C)); M2C_FIELD(arg0, M2C_UNK *, 0x38C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x390) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x390)); M2C_FIELD(arg0, M2C_UNK *, 0x390) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__19TShopKeepItemWindow[];
extern void *TShopKeepItemWindow__class_name;

void *TShopKeepItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TShopKeepItemWindow;
    M2C_FIELD(arg0, void **, 0x0) = TShopKeepItemWindow__class_name;
    M2C_FIELD(arg0, u32 *, 0x370) = 0;
    M2C_FIELD(arg0, u32 *, 0x374) = 0;
    M2C_FIELD(arg0, u32 *, 0x378) = 1;
    M2C_FIELD(arg0, u32 *, 0x37C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x380) = arg2;
    M2C_FIELD(arg0, u32 *, 0x384) = 0;
    M2C_FIELD(arg0, u32 *, 0x388) = 0;
    M2C_FIELD(arg0, u32 *, 0x390) = 0;
    M2C_FIELD(arg0, u32 *, 0x38C) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x394) = 0;
    M2C_FIELD(arg0, u32 *, 0x398) = 0;
    memset((void *)((char *)arg0 + 40), 0, 840);
    return arg0;
}

extern M2C_UNK lbl_8044C290[];
extern s32 local_client_id;

void TQuestVmDownLoadServer__sub_8022236C(s32 arg0) {
    char buf[0x20];
    memset(buf, 0, 0x20);
    sprintf(buf, lbl_805DC718, 2);
    TQuestVmDownLoadServer__sub_80222704((s32)(arg0), (M2C_UNK *)((s32 *)buf));
}

void show_message_or_error(s32 arg0) {
    M2C_UNK *temp_r3;

    temp_r3 = get_status_window__20TWindowSubStatusDispFi((u16) local_client_id);
    if (temp_r3 != NULL) {
        TQuestVmDownLoadServer__sub_80222704(arg0, temp_r3);
        return;
    }
    TQuestVmDownLoadServer__sub_80222704(arg0, lbl_8044C290);
}

}
