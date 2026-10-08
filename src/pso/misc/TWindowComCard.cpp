#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80249BA8_lbl_804CE8D0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80249BA8___vt__14TWindowComCard {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK draw_window_frame(void *, int);
M2C_UNK draw_visible_window_entries(void *, void *, int);
extern M2C_UNK __vt__14TWindowMessage[];
void render__14TWindowComCardFv(s32 arg0);
extern u8 *lbl_805D553C;
s32 get_class_name_text(s32 arg0);
s32 TWindowSubComCard__sub_8007B070(s32);
s32 get_keyboard_mode__17TWindowSubComCardFv(void);
M2C_UNK clear_and_init__17TWindowSubComCardFPvPv(int, void *);
void *__nw__7TObjectFUl(int);
extern s32 lbl_805D53A0;
s32 create_com_card_window__17TWindowSubComCardFi(s32 arg0);
void *__nw__7TObjectFUl(int);
u8 *create_for_card__14TWindowComCardFiii(s32 arg0, s32 arg1, s32 arg2);
u8 * construct_base__9TWindowDDFPvPvsPv(void *, s32, s16, s32);
M2C_UNK update_com_card_display(s32, s32);
extern RecoveredGlobal_80249BA8_lbl_804CE8D0 lbl_804CE8D0;
extern M2C_UNK __vt__14TWindowComCard[];
extern s32 lbl_805D38C0;
u8 *TWindowComCard__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TWindowComCard__sub_80249920(s32 arg0, s32 arg1, s32 arg2);
u8 TWindowComCard__sub_80249C18(void* p);
u8 TWindowComCard__sub_80249C20(void* p);
void *__dt__14TWindowComCardFv(void *arg0, s16 arg1);
void * create__14TWindowComCardFPvPv(void *arg0, void *arg1);
void* get_kbd_ptr__14TWindowComCardFPv(void* p);
void run_task__14TWindowComCardFv(void* p);
void set_display_value__14TWindowComCardFiii(s32 arg0, s32 arg1, s32 arg2);
void *get_card_entry__17TWindowSubComCardFi(void *);
int update_window_entry_list(void*, void*);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK update_com_card_display(s32, s32);
int initialize_subwindow__9TWindowDDFPv(void*);
int update_fade__17TWindowSubComCardFPv(void*);

void TWindowComCard__sub_80249920(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp = arg2 + (arg1 * 0x90);
    if (temp != 0) {
        update_com_card_display(arg0 + 0x24, temp);
    }
}

void set_display_value__14TWindowComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp = arg2 + (arg1 << 8);
    if (temp != 0) {
        update_com_card_display(arg0 + 0x24, temp);
    }
}

u8 *create_for_card__14TWindowComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r30;
    s32 var_r31;
    s32 var_r4;
    s32 var_r5;
    u8 *temp_r3;
    u8 *var_r0;
    u8 *var_r3;
    var_r30 = arg0;
    if (arg1 < 0) {
        var_r3 = (u8 *)(NULL);
        return NULL;
    }
    var_r3 = (u8 *)((void *)0x60);
    var_r31 = arg2 + (arg1 * 0x90);
    temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl((int)(0x60))));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r4 = var_r30;
        var_r5 = var_r31;
        var_r0 = (u8 *)(((u8 *)TWindowComCard__ct((u8 *)((void *)(temp_r3)), (s32)((void *)(var_r4)), (s32)((void *)(var_r5)))));
    }
    var_r3 = (u8 *)(var_r0);
    return var_r3;
}

void * create__14TWindowComCardFPvPv(void *arg0, void *arg1) {
    void *x0;
    void *o;
    x0 = get_card_entry__17TWindowSubComCardFi(arg1);
    if (x0 == NULL) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0x60);
    if (o != NULL) {
        o = TWindowComCard__ct((u8 *)(o), (s32)(arg0), (s32)(x0));
    }
    return o;
}

}
extern "C" {

s32 create_com_card_window__17TWindowSubComCardFi(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    temp_r3 = get_keyboard_mode__17TWindowSubComCardFv();
    if (temp_r3 == 0) {
        return 0;
    }
    if (TWindowSubComCard__sub_8007B070(temp_r3) != 0) {
        clear_and_init__17TWindowSubComCardFPvPv((int) (temp_r3), (void *) (lbl_805D53A0));
    }
    temp_r3_2 = ((s32)__nw__7TObjectFUl((int) (0x60)));
    var_r0 = temp_r3_2;
    if (var_r0 != 0) {
        var_r0 = ((s32)TWindowComCard__ct((u8 *)((void *)(temp_r3_2)), (s32)((void *)(arg0)), (s32)((void *)(temp_r3))));
    }
    return var_r0;
}

void render__14TWindowComCardFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void run_task__14TWindowComCardFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); update_window_entry_list(p, (char*)p + 0x24); }

extern M2C_UNK __vt__14TWindowComCard[];

void *__dt__14TWindowComCardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowComCard;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80249BA8_lbl_804CE8D0_size[sizeof(RecoveredGlobal_80249BA8_lbl_804CE8D0) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80249BA8___vt__14TWindowComCard_size[sizeof(RecoveredGlobal_80249BA8___vt__14TWindowComCard) == 0x1C ? 1 : -1];
u8 *TWindowComCard__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_base__9TWindowDDFPvPvsPv(arg0, (s32) &lbl_804CE8D0.value, 4, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80249BA8___vt__14TWindowComCard *)&__vt__14TWindowComCard).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D38C0;
    update_com_card_display((s32)(arg0 + 0x24), (s32)(arg2));
    return arg0;
}

void* get_kbd_ptr__14TWindowComCardFPv(void* p) { return (char*)p + 0x20; }
u8 TWindowComCard__sub_80249C18(void* p) { return *(u8*)((char*)p + 0x8e); }
u8 TWindowComCard__sub_80249C20(void* p) { return *(u8*)((char*)p + 0x8d); }
s32 get_class_name_text(s32 arg0) {
    return M2C_FIELD(M2C_FIELD(lbl_805D553C, s32 *, 0x1C), M2C_UNK *, (arg0 * 4));
}

}
