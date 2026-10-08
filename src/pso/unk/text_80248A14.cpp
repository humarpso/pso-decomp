#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Obj_80248A14 { u8 pad[0x76]; s16 count; };

extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
s32 get_cursor_pos__14TWindowSubItemFPv(s32);
s32 is_flag_4_set__20TWindowSubStatusDispFPv(s32);
void advance_state__20TWindowSubStatusDispFPv(s32);
void finalize_state__20TWindowSubStatusDispFPv(s32);
void advance_matching_entries__22THunterGuildSeqOfflineFPvii(Obj_80248A14 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void advance_matching_entries__22THunterGuildSeqOfflineFPvii(Obj_80248A14 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 e;
    for (i = 0; i < arg0->count; i++) {
        e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, i);
        if (e != 0 && is_flag_4_set__20TWindowSubStatusDispFPv(e) != 0 && arg2 == get_cursor_pos__14TWindowSubItemFPv(e)) {
            if (arg1 != 0) {
                finalize_state__20TWindowSubStatusDispFPv(e);
            } else {
                advance_state__20TWindowSubStatusDispFPv(e);
            }
        }
    }
}

}
