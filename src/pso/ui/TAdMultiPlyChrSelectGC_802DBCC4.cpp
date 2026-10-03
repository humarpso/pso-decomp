#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct S_802DC294 { u8 pad0[0x5C]; s32 f5C; } S_802DC294;

typedef s32 M2C_UNK;
struct Info_802DC024 {
    s32 val[4];
    s32 idx[4];
    s32 count;
};

struct Sel_802DC118 { u8 pad[0x64]; u32 win; };

extern "C" {
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(int);
s32 get_localized_text_entry(int, int);
M2C_UNK set_status_flag_80__12TQuestThreadFPv(int);
M2C_UNK TWindowSubComCard__sub_80265CFC(int, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, int);
extern const f32 lbl_805DE890;
s32 TAdMultiPlyChrSelectGC__sub_802DBE4C(long long arg1);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(int);
s32 get_localized_text_entry(int, int);
M2C_UNK set_status_flag_80__12TQuestThreadFPv(int);
M2C_UNK TWindowSubComCard__sub_80265CFC(int, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, int);
extern const f32 lbl_805DE890;
s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(unsigned long long arg1);
s32 get_state_flag__9TMainTaskFv(void);
void render__22TAdMultiPlyChrSelectGCFv(void *self);
s32 get_localized_text_entry(int, int);
M2C_UNK free_member__17TWindowSubComCardFPv(int, int);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(int, int, void *, f32);
s32 TWindowMessageYesNo__sub_802A59D8(void *, int, int, int);
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
extern M2C_UNK lbl_804728A8[];
extern const f32 lbl_805DE888;
s32 TAdMultiPlyChrSelectGC__sub_802DBCE8(s32 arg0);
s32 get_localized_text_entry(int, int);
M2C_UNK free_member__17TWindowSubComCardFPv(int, int);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(int, int, void *, f32);
s32 TWindowMessageYesNo__sub_802A59D8(void *, int, int, int);
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
extern M2C_UNK lbl_804728A0[];
extern const f32 lbl_805DE88C;
s32 TAdMultiPlyChrSelectGC__sub_802DBD64(s32 arg0);
s32 get_localized_text_entry(int, int);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(int, int);
M2C_UNK align_menu_entry_positions(int);
M2C_UNK TWindowSubComCard__sub_80265E60(int, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 create_window_menu(void *, int, int);
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
extern M2C_UNK lbl_80472890[];
extern const f32 lbl_805DE894;
s32 TAdMultiPlyChrSelectGC__sub_802DBF3C(void);
s32 get_localized_text_entry(int, int);
M2C_UNK free_member__17TWindowSubComCardFPv(int, int);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(int, int, void *, f32);
s32 TWindowMessageYesNo__sub_802A59D8(void *, int, int, int);
extern u8 lbl_80472898[];
extern const f32 lbl_805DE88C;
s32 TAdMultiPlyChrSelectGC__sub_802DBDE0(void);
extern u8 lbl_80541230[];
s32 get_localized_text_entry(int, int);
void *memset(void *, int, u32);
s32 sprintf(void *, const void *, ...);
u8 *TAdMultiPlyChrSelectGC__sub_802DC22C(s32 arg0, s32 arg1);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
s32 TAdMultiPlyChrSelectGC__sub_802DC294(S_802DC294 *arg0, s32 arg1);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE5F8(void *);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(u32);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 TAdMultiPlyChrSelectGC__sub_802C658C(u32);
void TAdMultiPlyChrSelectGC__sub_802DC024(void);
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(int, int, void *);
s32 count_ready__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
u8 *TAdMultiPlyChrSelectGC__sub_802DC22C(s32 arg0, s32 arg1);
extern M2C_UNK TAdMultiPlyChrSelectGC__data_805DE898;
void TAdMultiPlyChrSelectGC__sub_802DC118(u8 *arg0, s32 arg1);
}

extern "C" {

void TAdMultiPlyChrSelectGC__sub_802DC310(void *arg0);
s32 get_state_result__22TAdMultiPlyChrSelectGCFPv(void *arg0);
int request_scene_change__22TAdMultiPlyChrSelectGCFPv(void* p);
s32 TAdChrMoveEffectGC__sub_803490AC();
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 queue_destruction__7TObjectFv(void *);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
s32 set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 set_field_1c__22TAdMultiPlyChrSelectGCFPvi(s32, s32);

void render__22TAdMultiPlyChrSelectGCFv(void *self) {
    if (get_state_flag__9TMainTaskFv() == 1) return;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBCE8(s32 arg0) {
    s32 temp_r31;
    temp_r31 = TWindowMessageYesNo__sub_802A59D8((void *) (arg0), (int) (get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()), (int) (0), (int) (0));
    forward_slot_selection__16TAdChrSelASlotGCFPvPvPv((int) (temp_r31), (int) (get_localized_text_entry((int) (0x1F), (int) (0xA))), (void *) (lbl_804728A8), (f32) (lbl_805DE888));
    free_member__17TWindowSubComCardFPv((int) (temp_r31), (int) (1));
    return temp_r31;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBD64(s32 arg0) {
    s32 temp_r31;
    temp_r31 = TWindowMessageYesNo__sub_802A59D8((void *) (arg0), (int) (get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()), (int) (0), (int) (0));
    forward_slot_selection__16TAdChrSelASlotGCFPvPvPv((int) (temp_r31), (int) (get_localized_text_entry((int) (0x1F), (int) (9))), (void *) (lbl_804728A0), (f32) (lbl_805DE88C));
    free_member__17TWindowSubComCardFPv((int) (temp_r31), (int) (1));
    return temp_r31;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBDE0(void) {
    void *u1;
    int u2;
    s32 r = TWindowMessageYesNo__sub_802A59D8(u1, u2, 0, 0);
    forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(r, get_localized_text_entry(0x1F, 8), lbl_80472898, lbl_805DE88C);
    free_member__17TWindowSubComCardFPv(r, 1);
    return r;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBE4C(long long arg1) {
  s32 temp_r31;
  temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii((void *) arg1, (int) 1);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_localized_text_entry((int) 0x1F, (int) 7), (int) 0x21, (int) 0);
  set_flag_40__16TAdChrSelASlotGCFPv((int) temp_r31);
  set_status_flag_80__12TQuestThreadFPv((int) temp_r31);
  TWindowSubComCard__sub_80265CFC((int) temp_r31, (f32) lbl_805DE890);
  return temp_r31;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(unsigned long long arg1) {
  s32 temp_r31;
  temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii((void *) arg1, (int) 1);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_localized_text_entry((int) 0x1F, (int) 6), (int) 0x21, (int) 0);
  set_flag_40__16TAdChrSelASlotGCFPv((int) temp_r31);
  set_status_flag_80__12TQuestThreadFPv((int) temp_r31);
  TWindowSubComCard__sub_80265CFC((int) temp_r31, (f32) lbl_805DE890);
  return temp_r31;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBF3C(void) {
    s32 temp_r31;
    temp_r31 = create_window_menu((void *) (lbl_80472890), (int) (4), (int) (get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (get_localized_text_entry((int) (0x1F), (int) (2))), (int) (6), (int) (0));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (get_localized_text_entry((int) (0x1F), (int) (3))), (int) (6), (int) (1));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (get_localized_text_entry((int) (0x1F), (int) (4))), (int) (6), (int) (2));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (get_localized_text_entry((int) (0x1F), (int) (5))), (int) (6), (int) (3));
    TWindowSubComCard__sub_80265E60((int) (temp_r31), (f32) (lbl_805DE894));
    set_selected_index__17TWindowSubComCardFPvs((int) (temp_r31), (int) (0));
    align_menu_entry_positions((int) (temp_r31));
    return temp_r31;
}

void TAdMultiPlyChrSelectGC__sub_802DC024(void) {
    Info_802DC024 info;
    u32 i;
    info.count = TAdMultiPlyChrSelectGC__sub_802C6558();
    for (i = 0; i < 4; i++) {
        if (TAdMultiPlyChrSelectGC__sub_802C64D0(i) != 0) {
            info.val[i] = TAdMultiPlyChrSelectGC__sub_802C658C(i);
            info.idx[i] = i;
        } else {
            info.val[i] = -1;
            info.idx[i] = -1;
        }
    }
    TAdSinglePlyChrSelectGC__sub_801FE5F8(&info);
}

s32 get_state_result__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = -1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        var_r4 = 0;
        break;
    case 12:
        var_r4 = get_instance__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C));
        break;
    case 29:
        var_r4 = 0;
        break;
    }
    return var_r4;
}

void TAdMultiPlyChrSelectGC__sub_802DC118(u8 *arg0, s32 arg1) {
    Sel_802DC118 *s = (Sel_802DC118 *)arg0;
    if (s->win != 0) {
        switch (arg1) {
        case -1:
            if (TAdMultiPlyChrSelectGC__sub_802C6558() == count_ready__22TAdMultiPlyChrSelectGCFv()) {
                set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s->win, 0, &TAdMultiPlyChrSelectGC__data_805DE898);
                set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s->win, 1, &TAdMultiPlyChrSelectGC__data_805DE898);
                return;
            }
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s->win, 0, TAdMultiPlyChrSelectGC__sub_802DC22C((s32)arg0, get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()));
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s->win, 1, &TAdMultiPlyChrSelectGC__data_805DE898);
            break;
        default:
            if (TAdMultiPlyChrSelectGC__sub_802C6558() == count_ready__22TAdMultiPlyChrSelectGCFv()) {
                set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s->win, 0, &TAdMultiPlyChrSelectGC__data_805DE898);
                set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s->win, 1, &TAdMultiPlyChrSelectGC__data_805DE898);
                return;
            }
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s->win, 0, TAdMultiPlyChrSelectGC__sub_802DC22C((s32)arg0, arg1));
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s->win, 1, &TAdMultiPlyChrSelectGC__data_805DE898);
            break;
        }
    }
}

u8 *TAdMultiPlyChrSelectGC__sub_802DC22C(s32 arg0, s32 arg1) {
    memset(lbl_80541230, 0, 0x80);
    sprintf(lbl_80541230, (const void *)get_localized_text_entry(0x1F, 0), arg1 + 1);
    return lbl_80541230;
}

s32 TAdMultiPlyChrSelectGC__sub_802DC294(S_802DC294 *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
    case 2:
        return TAdMultiPlyChrSelectGC__sub_802DFFE8(arg0->f5C);
    case 1:
        return TAdMultiPlyChrSelectGC__sub_802DFFE8(arg0->f5C) + 4;
    default:
        return -1;
    }
}

int request_scene_change__22TAdMultiPlyChrSelectGCFPv(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
void TAdMultiPlyChrSelectGC__sub_802DC310(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x88));
        M2C_FIELD(arg0, u32 *, 0x88) = 0U;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            TAdChrMoveEffectGC__sub_803490AC();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) == 0x1D) {
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            TAdChrMoveEffectGC__sub_803490AC();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x68), 1);
        set_field_1c__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x6C), 1);
    }
}

}
