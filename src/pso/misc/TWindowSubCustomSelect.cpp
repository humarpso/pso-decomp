#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80277638 {
    f32 sp8;
    f32 spC;
};

struct RecoveredGlobal_80277928_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80277408_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct Ent_80277AEC { u16 id; u8 pad[0xA]; };

struct Pos_80277AEC { f32 x; f32 y; };

struct Sub_80277AEC { u8 pad[0x34]; s32 flags; };

struct Big_80277AEC { u8 pad[0x85C]; Sub_80277AEC sub; };

struct Stack_80277368
{
  f32 sp8;
  f32 spC;
};

extern "C" {
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(int, int, void *);
M2C_UNK TWindowSubCustomSelect__sub_802776D0(void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(int, int);
void render__22TWindowSubCustomSelectFv(u8 *arg0);
void draw_cursor_sprite__21TWindowSubCustomEquipFPvPvif(void *, void *, s32, f32);
extern const f32 TWindowSubCustomSelect__data_805DD5B0;
extern const f32 lbl_805DD5C4;
extern const f32 lbl_805DD5C8;
extern const f32 lbl_805DD5CC;
extern const f32 lbl_805DD5D0;
void TWindowSubCustomSelect__sub_80277638(u8 *arg0, u8 *arg1);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 is_player_input_active(int);
s32 update_window_entry_list(void *, void *);
s32 increment_counter__20TWindowSubStatusDispFPv(int);
s32 is_active__22TWindowSubCustomSelectFPv(void *);
void handle_cancel__22TWindowSubCustomSelectFPv(void *arg0);
void handle_decide__22TWindowSubCustomSelectFPv(void *arg0);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
extern RecoveredGlobal_80277928_lbl_8050E208 lbl_8050E208;
extern const f32 lbl_805DD5E4;
void run_task__22TWindowSubCustomSelectFv(u8 *arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 is_player_input_active(int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
extern RecoveredGlobal_80277928_lbl_8050E208 lbl_8050E208;
void TWindowSubCustomSelect__sub_80277408(u8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
Big_80277AEC *get_player_by_client_id(int);
s32 construct_with_parent__15TWindowAdditionFPvPv(void *, void *, s16, s32);
s32 get_window_layout_position(int);
void *reset_selection__20TWindowSubStatusDispFPv(void *, Pos_80277AEC *);
void *TWindowSubStatusDisp__sub_802880BC(void *, s32, s32);
extern u8 lbl_8044F818[];
extern u8 lbl_8044F8B8[];
extern u8 lbl_804D153C[];
extern M2C_UNK __vt__22TWindowSubCustomSelect[];
extern s32 lbl_805D3A28;
extern const f32 TWindowSubCustomSelect__data_805DD5B0;
extern const f32 lbl_805DD5E8;
extern const f32 lbl_805DD5EC;
u8 *TWindowSubCustomSelect__ct(u8 *arg0, s32 arg1);
s32 TWindowSubComCard__sub_8026D740(void *, void *, void *);
extern const f32 lbl_805DD5A8;
extern const f32 lbl_805DD5AC;
extern const f32 TWindowSubCustomSelect__data_805DD5B0;
extern const f32 lbl_805DD5B4;
extern const f32 lbl_805DD5B8;
extern const f32 lbl_805DD5BC;
extern const f32 lbl_805DD5C0;
s32 TWindowSubCustomSelect__sub_80277368(void *a);
}

extern "C" {

void *__dt__22TWindowSubCustomSelectFv(void *arg0, s16 arg1);
void handle_cancel__22TWindowSubCustomSelectFPv(void *arg0);
void handle_decide__22TWindowSubCustomSelectFPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void __dl__7TObjectFPv(void *);
void destroy_allocation__20TWindowSubStatusDispFis(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window__15TWindowAdditionFPvs(void *, int);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(s32, M2C_UNK);

void handle_cancel__22TWindowSubCustomSelectFPv(void *arg0) {
    if (is_active__22TWindowSubCustomSelectFPv((void *)(arg0)) == 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x73) = (u8) (M2C_FIELD(arg0, u8 *, 0x73) | 2);
    }
}

void handle_decide__22TWindowSubCustomSelectFPv(void *arg0) {
    play_sound_effect(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x73) = (u8) (M2C_FIELD(arg0, u8 *, 0x73) | 1);
    set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x7C), 2);
}

extern M2C_UNK __vt__22TWindowSubCustomSelect[];

typedef char RecoveredGlobal_80277408_lbl_8050E208_size[sizeof(RecoveredGlobal_80277408_lbl_8050E208) == 0x1B0 ? 1 : -1];

typedef struct Stack_80277368 Stack_80277368;
#pragma fp_contract on
s32 TWindowSubCustomSelect__sub_80277368(void *a) {
  u8 *arg0 = (u8 *) a;
  Stack_80277368 stack;
  u8 *new_var;
  f32 *new_var3;
  f32 tgt;
  float new_var2;
  new_var2 = (TWindowSubCustomSelect__data_805DD5B0 * ((f32) ((s8) (*((u8 *) (((s8 *) arg0) + 0x71)))))) + lbl_805DD5AC;
  tgt = lbl_805DD5A8 + new_var2;
  tgt -= lbl_805DD5B4;
  new_var3 = (f32 *) (((s8 *) arg0) + 0x6C);
  *new_var3 = (*new_var3) + (tgt - (*((f32 *) (((s8 *) arg0) + 0x6C))));
  stack.sp8 = lbl_805DD5B8;
  stack.spC = ((*((f32 *) (((s8 *) arg0) + 0x4C))) - lbl_805DD5BC) - lbl_805DD5C0;
  TWindowSubComCard__sub_8026D740(*((u8 **) (((s8 *) arg0) + 0x80)), (new_var = arg0) + 0x68, &stack.sp8);
}

void TWindowSubCustomSelect__sub_80277408(u8 *arg0) {
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r3_3;
    u8 temp_r4;
    u8 temp_r5;
    u8 *temp_r30;
    temp_r30 = (u8 *)&(*(RecoveredGlobal_80277408_lbl_8050E208 *)&lbl_8050E208).value + (is_player_input_active((int)((s32) M2C_FIELD(arg0, s16 *, 0x20))) * 0x50) + 0x20;
    if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0xF0), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_80277408_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0xF0), (int) (6), (int) (1)) != 0)) {
        play_sound_effect((M2C_UNK)(0x54100), (M2C_UNK)(0U), (M2C_UNK)(0), (M2C_UNK)(0));
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_80277408_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x71) = (u8) (M2C_FIELD(arg0, u8 *, 0x71) - 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_80277408_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x71) = (u8) (M2C_FIELD(arg0, u8 *, 0x71) + 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x80), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_80277408_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x80), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x70) = (u8) (M2C_FIELD(arg0, u8 *, 0x70) + 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r30), (int) (0x40), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&(*(RecoveredGlobal_80277408_lbl_8050E208 *)&lbl_8050E208).value + 0x160), (int) (0x40), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x70) = (u8) (M2C_FIELD(arg0, u8 *, 0x70) - 1);
        }
        temp_r3 = M2C_FIELD(arg0, u8 *, 0x70);
        if ((s8) temp_r3 < 0) {
            M2C_FIELD(arg0, u8 *, 0x70) = (u8) (temp_r3 + 3);
        }
        temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x70);
        if ((s8) temp_r3_2 >= 3) {
            M2C_FIELD(arg0, u8 *, 0x70) = (u8) (temp_r3_2 - 3);
        }
        temp_r3_3 = M2C_FIELD(arg0, u8 *, 0x71);
        if ((s8) temp_r3_3 < 0) {
            M2C_FIELD(arg0, u8 *, 0x71) = (u8) (temp_r3_3 + M2C_FIELD(arg0, u8 *, 0x72));
        }
        temp_r4 = M2C_FIELD(arg0, u8 *, 0x71);
        temp_r5 = M2C_FIELD(arg0, u8 *, 0x72);
        if ((s8) temp_r4 >= (s8) temp_r5) {
            M2C_FIELD(arg0, u8 *, 0x71) = (u8) (temp_r4 - temp_r5);
        }
    }
}

#pragma push
#pragma fp_contract on
void TWindowSubCustomSelect__sub_80277638(u8 *arg0, u8 *arg1) {
    Stack_80277638 stack;
    stack.sp8 = (lbl_805DD5C8 * (f32) (s8) M2C_FIELD(arg0, u8 *, 0x70)) + lbl_805DD5C4;
    stack.spC = (TWindowSubCustomSelect__data_805DD5B0 * (f32) (s8) M2C_FIELD(arg0, u8 *, 0x71)) + lbl_805DD5CC;
    draw_cursor_sprite__21TWindowSubCustomEquipFPvPvif(arg1, &stack.sp8, M2C_FIELD(arg0, s32 *, 0x74), lbl_805DD5D0);
}
#pragma pop

void render__22TWindowSubCustomSelectFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubCustomSelect__sub_802776D0((void *) (arg0), (int) (temp_r3));
    TWindowSubCustomSelect__sub_80277638((u8 *)((void *) (arg0)), (u8 *)((int) (temp_r3)));
    forward_render__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x7C)), (int) (temp_r3));
    TWindowSubStatusDisp__sub_8026D790((int) (M2C_FIELD(arg0, s32 *, 0x80)), (int) (temp_r3), (void *) (arg0 + 0x68));
}

typedef char RecoveredGlobal_80277928_lbl_8050E208_size[sizeof(RecoveredGlobal_80277928_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__22TWindowSubCustomSelectFv(u8 *arg0) {
    s32 temp_r30;
    u8 *temp_r30_2;
    temp_r30 = is_player_input_active((int) ((s32) M2C_FIELD(arg0, s16 *, 0x20)));
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if (is_active__22TWindowSubCustomSelectFPv((void *)((void *) (arg0))) == 0) {
        TWindowSubCustomSelect__sub_80277408((u8 *)((void *) (arg0)));
        temp_r30_2 = (u8 *)&lbl_8050E208.value + (temp_r30 * 0x50) + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r30_2), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (4)) != 0)) {
            handle_decide__22TWindowSubCustomSelectFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r30_2), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (2)) != 0)) {
            handle_cancel__22TWindowSubCustomSelectFPv((void *) (arg0));
        }
    }
    TWindowSubCustomSelect__sub_80277368((void *)((void *) (arg0)));
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DD5E4) {
        update_subwindow__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x7C)));
        increment_counter__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x80)));
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
    M2C_FIELD(arg0, s32 *, 0x74) = (s32) (M2C_FIELD(arg0, s32 *, 0x74) + 1);
}

void *__dt__22TWindowSubCustomSelectFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TWindowSubCustomSelect;
        destroy_allocation__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x80), 1);
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x7C), 1);
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
#pragma fp_contract on
u8 *TWindowSubCustomSelect__ct(u8 *arg0, s32 arg1) {
    Pos_80277AEC pos;
    Big_80277AEC *p;
    Sub_80277AEC *q;
    Ent_80277AEC *e;
    void *o;
    construct_with_parent__15TWindowAdditionFPvPv(arg0, lbl_804D153C, arg1, get_window_layout_position(0x10));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TWindowSubCustomSelect;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3A28;
    M2C_FIELD(arg0, s16 *, 0x20) = arg1;
    p = get_player_by_client_id(M2C_FIELD(arg0, s16 *, 0x20));
    if (p == NULL) {
        return arg0;
    }
    q = &p->sub;
    if (q == NULL) {
        return arg0;
    }
    if (q->flags & 0x10) {
        M2C_FIELD(arg0, u8 **, 0x78) = lbl_8044F8B8;
    } else {
        M2C_FIELD(arg0, u8 **, 0x78) = lbl_8044F818;
    }
    M2C_FIELD(arg0, s8 *, 0x73) = 0;
    M2C_FIELD(arg0, s8 *, 0x70) = 0;
    M2C_FIELD(arg0, s8 *, 0x71) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    e = M2C_FIELD(arg0, Ent_80277AEC **, 0x78);
    M2C_FIELD(arg0, u8 *, 0x72) = 0;
    while (e->id != 8) {
        e++;
        M2C_FIELD(arg0, u8 *, 0x72)++;
    }
    o = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
    if (o != NULL) {
        o = TWindowSubStatusDisp__sub_802880BC(o, get_message_10__20TWindowSubStatusDispFPv(0x22), M2C_FIELD(arg0, s16 *, 0x20));
    }
    M2C_FIELD(arg0, void **, 0x7C) = o;
    pos.x = lbl_805DD5E8;
    pos.y = TWindowSubCustomSelect__data_805DD5B0 * (f32)(s8)M2C_FIELD(arg0, u8 *, 0x72) + lbl_805DD5EC;
    o = alloc__23TAdSinglePlyChrSelectGCFPv(0xC);
    if (o != NULL) {
        o = reset_selection__20TWindowSubStatusDispFPv(o, &pos);
    }
    M2C_FIELD(arg0, void **, 0x80) = o;
    return arg0;
}
#pragma pop

}
