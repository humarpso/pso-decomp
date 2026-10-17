#include "types.h"
#include "pso/ui/TWindowInputNumber.h"
#include "pso/misc/TCheckRoomSequence.h"
#include "pso/misc/TShopEquipmentSellWindow.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

int TWindowInputNumber::is_confirmed() { return (this->inputFlags >> 1) & 0x1; }
