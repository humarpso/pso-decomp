#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__5TOKeyFPv(void *arg0);
void TOKey__sub_80169FB0(void *);
void init_map_object_base(void *);

extern M2C_UNK lbl_804B27D8[];

void *init__5TOKeyFPv(void *arg0) {
    init_map_object_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B27D8;
    M2C_FIELD(arg0, u32 *, 0xD0) = -1;
    M2C_FIELD(arg0, u32 *, 0xC8) = 0;
    M2C_FIELD(arg0, u32 *, 0xAC) = 0;
    M2C_FIELD(arg0, u32 *, 0xCC) = 0;
    M2C_FIELD(arg0, u32 *, 0xD4) = 0;
    M2C_FIELD(arg0, u32 *, 0xD8) = 0;
    TOKey__sub_80169FB0((void *)((char *)arg0 + 152));
    M2C_FIELD(arg0, u32 *, 0xDC) = 0;
    M2C_FIELD(arg0, u32 *, 0xE0) = 1;
    return arg0;
}

}
