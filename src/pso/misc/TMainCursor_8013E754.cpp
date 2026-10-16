#include "types.h"
#include "pso/misc/TMainCursor.h"

extern "C" {
void set_target_id__11TMainCursorFPvs(void* p, s16 v);
void set_target_id_at_60__11TMainCursorFiUc(s32 arg0, u8 arg1);
}

extern "C" {

void set_target_id_at_60__11TMainCursorFiUc(s32 arg0, u8 arg1) {
    set_target_id__11TMainCursorFPvs((void*)(arg0 + 0x60), arg1);
}

}

#include "types.h"
#include "pso/TAdRicoRing.h"
#include "pso/misc/TLockOnCursor.h"
#include "pso/misc/TMainCursor.h"
#include "pso/misc/TWindowActionPalette.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void set_target_id__11TMainCursorFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x6) = v; }

}
