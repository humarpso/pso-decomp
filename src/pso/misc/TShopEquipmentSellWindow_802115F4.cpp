#include "types.h"
#include "pso/misc/TShopEquipmentSellWindow.h"
#include "pso/misc/TCheckRoomSequence.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/ui/TWindowInputNumber.h"

extern "C" {

int TShopEquipmentSellWindow::is_confirmed() { return (this->m_60 >> 2) & 0x1; }
s32 TShopEquipmentSellWindow::get_result() { return this->m_6c; }

}
