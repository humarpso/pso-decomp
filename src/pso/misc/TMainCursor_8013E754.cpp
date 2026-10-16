#include "types.h"
#include "pso/misc/TMainCursor.h"

extern "C" {
}

extern "C" {

void TMainCursor::set_target_id_at_60(u8 arg1) {
    s32 arg0 = (s32)this;
    ((TMainCursor *)(arg0 + 0x60))->set_target_id(arg1);
}

}

#include "types.h"
#include "pso/TAdRicoRing.h"
#include "pso/misc/TLockOnCursor.h"
#include "pso/misc/TMainCursor.h"
#include "pso/misc/TWindowActionPalette.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TMainCursor::set_target_id(s16 v) { *(s16*)((char*)this + 0x6) = v; }

}
