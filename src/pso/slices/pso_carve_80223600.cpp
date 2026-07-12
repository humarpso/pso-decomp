#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_getField1c(u32);
s32 TObjPlayer__sub_801B12CC();
s32 clear_lobby_flag__10TObjPlayerFPv(u32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrl__sub_8024AEF0(u16);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 TObjPlayer__sub_801B130C();
s32 init_effect_5f0__10TObjPlayerFPv(void *);
s32 TWindowCtrl__sub_8024AEAC(u16);
s32 is_split_screen();
s32 TAdSinglePlyChrSelectGC__sub_801D5DAC();
s32 TAdSinglePlyChrSelectGC__sub_801FF5E4(s32);
void free_member_0x28__13TShopSequenceFPv(void* p);
void TShopSequence__sub_802236A0(void* p);
void free_member_0x28_variant__13TShopSequenceFPv(void* p);
void free_member__13TShopSequenceFPv(void* p);
int TQuestVmDownLoadServer__sub_80222848(void*);
int TQuestVmDownLoadServer__sub_80222898(void*);
int fn_80222910(void*);
int fn_8022297C(void*);

int TShopSequence__sub_80223600(void) { return 0; }

}
