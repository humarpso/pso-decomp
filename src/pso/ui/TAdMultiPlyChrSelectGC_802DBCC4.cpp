#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(int);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(int, int);
M2C_UNK set_status_flag_80__12TQuestThreadFPv(int);
M2C_UNK TWindowSubComCard__sub_80265CFC(int, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, int);
extern const f32 lbl_805DE890;
s32 TAdMultiPlyChrSelectGC__sub_802DBE4C(long long arg1);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(int);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(int, int);
M2C_UNK set_status_flag_80__12TQuestThreadFPv(int);
M2C_UNK TWindowSubComCard__sub_80265CFC(int, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, int);
extern const f32 lbl_805DE890;
s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(unsigned long long arg1);
s32 get_state_flag__9TMainTaskFv(void);
void render__22TAdMultiPlyChrSelectGCFv(void *self);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(int, int);
M2C_UNK free_member__17TWindowSubComCardFPv(int, int);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(int, int, void *, f32);
s32 TWindowMessageYesNo__sub_802A59D8(void *, int, int, int);
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
extern M2C_UNK lbl_804728A8[];
extern const f32 lbl_805DE888;
s32 TAdMultiPlyChrSelectGC__sub_802DBCE8(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(int, int);
M2C_UNK free_member__17TWindowSubComCardFPv(int, int);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(int, int, void *, f32);
s32 TWindowMessageYesNo__sub_802A59D8(void *, int, int, int);
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
extern M2C_UNK lbl_804728A0[];
extern const f32 lbl_805DE88C;
s32 TAdMultiPlyChrSelectGC__sub_802DBD64(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(int, int);
M2C_UNK set_selected_index__17TWindowSubComCardFPvs(int, int);
M2C_UNK TWindowSubComCard__sub_80265C30(int);
M2C_UNK TWindowSubComCard__sub_80265E60(int, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 TCheckRoomSequence__sub_802664A8(void *, int, int);
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
extern M2C_UNK lbl_80472890[];
extern const f32 lbl_805DE894;
s32 TAdMultiPlyChrSelectGC__sub_802DBF3C(void);
}

extern "C" {

int TAdMultiPlyChrSelectGC__sub_802DC294(void);
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
    forward_slot_selection__16TAdChrSelASlotGCFPvPvPv((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0x1F), (int) (0xA))), (void *) (lbl_804728A8), (f32) (lbl_805DE888));
    free_member__17TWindowSubComCardFPv((int) (temp_r31), (int) (1));
    return temp_r31;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBD64(s32 arg0) {
    s32 temp_r31;
    temp_r31 = TWindowMessageYesNo__sub_802A59D8((void *) (arg0), (int) (get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()), (int) (0), (int) (0));
    forward_slot_selection__16TAdChrSelASlotGCFPvPvPv((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0x1F), (int) (9))), (void *) (lbl_804728A0), (f32) (lbl_805DE88C));
    free_member__17TWindowSubComCardFPv((int) (temp_r31), (int) (1));
    return temp_r31;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBE4C(long long arg1) {
  s32 temp_r31;
  temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii((void *) arg1, (int) 1);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) TAdSinglePlyChrSelectGC__sub_80132F2C((int) 0x1F, (int) 7), (int) 0x21, (int) 0);
  set_flag_40__16TAdChrSelASlotGCFPv((int) temp_r31);
  set_status_flag_80__12TQuestThreadFPv((int) temp_r31);
  TWindowSubComCard__sub_80265CFC((int) temp_r31, (f32) lbl_805DE890);
  return temp_r31;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(unsigned long long arg1) {
  s32 temp_r31;
  temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii((void *) arg1, (int) 1);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) TAdSinglePlyChrSelectGC__sub_80132F2C((int) 0x1F, (int) 6), (int) 0x21, (int) 0);
  set_flag_40__16TAdChrSelASlotGCFPv((int) temp_r31);
  set_status_flag_80__12TQuestThreadFPv((int) temp_r31);
  TWindowSubComCard__sub_80265CFC((int) temp_r31, (f32) lbl_805DE890);
  return temp_r31;
}

s32 TAdMultiPlyChrSelectGC__sub_802DBF3C(void) {
    s32 temp_r31;
    temp_r31 = TCheckRoomSequence__sub_802664A8((void *) (lbl_80472890), (int) (4), (int) (get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0x1F), (int) (2))), (int) (6), (int) (0));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0x1F), (int) (3))), (int) (6), (int) (1));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0x1F), (int) (4))), (int) (6), (int) (2));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0x1F), (int) (5))), (int) (6), (int) (3));
    TWindowSubComCard__sub_80265E60((int) (temp_r31), (f32) (lbl_805DE894));
    set_selected_index__17TWindowSubComCardFPvs((int) (temp_r31), (int) (0));
    TWindowSubComCard__sub_80265C30((int) (temp_r31));
    return temp_r31;
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

int TAdMultiPlyChrSelectGC__sub_802DC294(void) { return 0; }

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
