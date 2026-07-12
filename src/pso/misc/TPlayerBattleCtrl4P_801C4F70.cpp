#include "types.h"

extern "C" {

s32 TPlayerBattleCtrl4P__sub_801C4F70(void* p);
void TPlayerBattleCtrl4P__sub_801C4F78(void* p, s32 v);

s32 TPlayerBattleCtrl4P__sub_801C4F70(void* p) { return *(s32*)((char*)p + 0x0); }
void TPlayerBattleCtrl4P__sub_801C4F78(void* p, s32 v) { *(s32*)((char*)p + 0x14) = v; }

}
