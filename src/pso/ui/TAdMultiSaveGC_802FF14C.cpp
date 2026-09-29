#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
M2C_UNK TWindowSubComCard__sub_80265E60(int, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, int);
extern M2C_UNK lbl_80474D90[];
extern const f32 lbl_805DEF28;
s32 TAdMultiSaveGC__sub_802FF170(void);
}

extern "C" {

void queue_destruction__14TAdMultiSaveGCFv(void);
int begin_change_game_mode__21TAdMultiChgGameModeGCFv(void);
int queue_destruction__7TObjectFv(void);

void queue_destruction__14TAdMultiSaveGCFv(void) { queue_destruction__7TObjectFv(); begin_change_game_mode__21TAdMultiChgGameModeGCFv(); }
s32 TAdMultiSaveGC__sub_802FF170(void) {
    s32 temp_r31;
    temp_r31 = check_room_seq_4__16TAdChrSelASlotGCFii((void *) (lbl_80474D90), (int) (2));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (TQuestVmDownLoadServer__sub_8006EF6C((int) (0xD))), (int) (6), (int) (0));
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) (temp_r31), (int) (TQuestVmDownLoadServer__sub_8006EF6C((int) (0xE))), (int) (6), (int) (1));
    TWindowSubComCard__sub_80265E60((int) (temp_r31), (f32) (lbl_805DEF28));
    return temp_r31;
}

}
