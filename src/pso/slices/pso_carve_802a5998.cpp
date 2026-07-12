#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80244888(void *);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 TWindowSubComCard__sub_80073DB8(s32);
s32 TQuestThread__sub_801F64BC(s32);
s32 TWindowSubComCard__sub_80265CFC(s32, f32);
s32 TObjCityMainWarp__sub_80266354(s32, s32, s32, s32);
s32 TCheckRoomSequence__sub_802664A8(s32, s32, s32);
int TWindowMenu__sub_802657E4(void*);
int TWindowSubComCard__sub_802A57FC(void* a0 = 0);
void run_task__19TWindowMessageYesNoFv(void* p);
int TWindowSubShortMail__sub_802A58AC(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
void TAdChrSelASlotGC__sub_802A596C(void* p, void* a1, void* a2);
void fn_802A56C4(void* p);
void fn_802A56F0(void* p);
void TWindowSubShortMail__sub_802A571C(void* p);
int TWindowSubComCard__sub_802A5748(void* p);
void free_member__17TWindowSubComCardFPv(void* p);
int TAdChrSelASlotGC__sub_800740FC(void*);
int set_flag70_bit10__16TObjCityMainWarpFPv(void*);
int TWindowSubComCard__sub_80265C10(void*);
int TWindowSubTradeMain__sub_80287560(void*);
int queue_destruction__7TObjectFv(void*);

int render__19TWindowMessageYesNoFv(void) { return 0; }

}
