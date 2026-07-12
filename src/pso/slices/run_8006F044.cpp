#include "types.h"

extern "C" {

s32 get_layout_id__20TWindowSubStatusDispFv();

s32 calc_layout_hash__20TWindowSubStatusDispFv(void) {
    return get_layout_id__20TWindowSubStatusDispFv() * 0x8C9F;
}

s32 get_layout_id__20TWindowSubStatusDispFv();

s32 calc_entry_offset__20TWindowSubStatusDispFv(void) {
    return get_layout_id__20TWindowSubStatusDispFv() * 0x12C;
}

}
