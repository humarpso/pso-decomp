#include "types.h"
#include "pso/misc/TMainCursor.h"

extern "C" {
int set_target_index__11TMainCursorFs(void*, void* a1);
int set_target_index_at_60__11TMainCursorFPvPv(void* p, void* _w1);
}

extern "C" {

#include "types.h"

extern "C" {
s32 init_gc_tag();
s32 reset_target__11TMainCursorFi(void *);

}

int set_target_index_at_60__11TMainCursorFPvPv(void* p, void* _w1) { return set_target_index__11TMainCursorFs((void*)((char*)p + 0x60), (void*)(_w1)); }

}

#include "types.h"

extern "C" {

#include "types.h"
#include "pso/misc/TMainCursor.h"
#include "pso/TAdRicoRing.h"
#include "pso/misc/TLockOnCursor.h"
#include "pso/misc/TWindowActionPalette.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 TMainCursor::reset() {
    s32 arg0 = (s32)this;
    init_gc_tag();
    reset_target__11TMainCursorFi((void *) (arg0));
    return arg0;
}

}

}
