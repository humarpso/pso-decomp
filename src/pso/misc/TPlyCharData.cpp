#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 __dt__12TPlyCharDataFv(s32 arg0, s16 arg1);
M2C_UNK __dl__FPv(s32);
M2C_UNK __dt__14TPlyDispConfigFv(s32, M2C_UNK);

s32 __dt__12TPlyCharDataFv(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__14TPlyDispConfigFv(arg0 + 0x3C0, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8007214C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 __ct__12TPlyCharDataFv(s32 arg0);
M2C_UNK __ct__14TPlyDispConfigFv(s32);
M2C_UNK init_inventory_items__12TPlyCharDataFPv(s32);

s32 __ct__12TPlyCharDataFv(s32 arg0) {
    __ct__14TPlyDispConfigFv(arg0 + 0x3C0);
    init_inventory_items__12TPlyCharDataFPv(arg0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80072188
#include "types.h"

extern "C" {

void init_inventory_items__12TPlyCharDataFPv(void* p);
int init__17TPlyInventoryItemFv(void*);

void init_inventory_items__12TPlyCharDataFPv(void* p) { { int i; for (i = 0; i < 30; i++) { init__17TPlyInventoryItemFv((char*)p + 0x4 + i * 28); } } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E0A04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap__12TPlyCharDataFv(s32 arg0);
M2C_UNK bswap__12player_statsFv(s32);
M2C_UNK bswap__15disp_data_part2Fv(s32);
M2C_UNK bswap__17TPlyInventoryItemFv(s32);
M2C_UNK TPlyDispConfig__sub_801E0A68(s32);

void bswap__12TPlyCharDataFv(s32 arg0) {
    s32 off;
    s32 i;

    for (i = 0, off = 0; i < 0x1E; i++, off += 0x1C) {
        bswap__17TPlyInventoryItemFv((s32)((char *)arg0 + off + 4));
    }
    bswap__15disp_data_part2Fv(arg0 + 0x370);
    bswap__12player_statsFv(arg0 + 0x34C);
    TPlyDispConfig__sub_801E0A68(arg0 + 0x3C0);
}

}
#endif
#endif
