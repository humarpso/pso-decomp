#include "types.h"

struct Obj_80248A14 { u8 pad[0x76]; s16 count; };

extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFi(void *, s32);
s32 get_cursor_pos__14TWindowSubItemFv(s32);
s32 is_flag_4_set__20TWindowSubStatusDispFv(s32);
void advance_state__20TWindowSubStatusDispFPv(s32);
void finalize_state__20TWindowSubStatusDispFPv(s32);
void advance_matching_entries__22THunterGuildSeqOfflineFPvii(Obj_80248A14 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void advance_matching_entries__22THunterGuildSeqOfflineFPvii(Obj_80248A14 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 e;
    for (i = 0; i < arg0->count; i++) {
        e = get_array_entry__20TWindowSubStatusDispFi(arg0, i);
        if (e != 0 && is_flag_4_set__20TWindowSubStatusDispFv(e) != 0 && arg2 == get_cursor_pos__14TWindowSubItemFv(e)) {
            if (arg1 != 0) {
                finalize_state__20TWindowSubStatusDispFPv(e);
            } else {
                advance_state__20TWindowSubStatusDispFPv(e);
            }
        }
    }
}

}
