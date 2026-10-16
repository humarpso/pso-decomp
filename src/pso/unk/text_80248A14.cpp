#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowSubItem.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct Obj_80248A14 { u8 pad[0x76]; s16 count; };

extern "C" {
void advance_state__20TWindowSubStatusDispFPv(s32);
void finalize_state__20TWindowSubStatusDispFPv(s32);
void advance_matching_entries__22THunterGuildSeqOfflineFPvii(Obj_80248A14 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void advance_matching_entries__22THunterGuildSeqOfflineFPvii(Obj_80248A14 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 e;
    for (i = 0; i < arg0->count; i++) {
        e = ((TUnk_804CE018 *)arg0)->get_array_entry(i);
        if (e != 0 && ((TWindowSubStatusDisp *)e)->is_flag_4_set() != 0 && arg2 == ((TWindowSubItem *)e)->get_cursor_pos()) {
            if (arg1 != 0) {
                finalize_state__20TWindowSubStatusDispFPv(e);
            } else {
                advance_state__20TWindowSubStatusDispFPv(e);
            }
        }
    }
}

}
