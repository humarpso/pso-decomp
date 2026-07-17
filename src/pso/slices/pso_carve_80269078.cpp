#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80244C0C(s32, s32);
s32 TWindowSubStatusDisp__sub_80257BC0(s32, s32, s32);
void *get_quest_id__12TQuestListVMFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void draw_value__13TWindowMesetaFPvi(void *arg0, s32 arg1);
M2C_UNK TWindowSubStatusDisp__sub_80287580(s32, s32, M2C_UNK, f32);
s32 get_entry_id__17TWindowSubComCardFPv(void* p);
int TWindowSubComCard__sub_8026906C(void* p);

int fn_80269078(void) { return 0; }

}
