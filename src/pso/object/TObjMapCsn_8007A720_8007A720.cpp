#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* get_data_ptr__10TObjMapCsnFPv(void* p);
s32 get_map_count__10TObjMapCsnFv(void);

void* get_data_ptr__10TObjMapCsnFPv(void* p) { return (char*)p + 0x1c; }

extern s32 lbl_805D5650;

s32 get_map_count__10TObjMapCsnFv(void) {
    return lbl_805D5650;
}

}
