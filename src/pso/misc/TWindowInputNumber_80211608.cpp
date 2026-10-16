#include "types.h"
#include "pso/ui/TWindowInputNumber.h"
#include "pso/misc/TCheckRoomSequence.h"
#include "pso/misc/TShopEquipmentSellWindow.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
void TShopWindowBase__sub_802115F0(void);

int TWindowInputNumber::is_confirmed() { return (*(u16*)((char*)this + 0x60) >> 1) & 0x1; }

}
