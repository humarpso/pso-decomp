#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOKey__ct(void *arg0);
void init_map_object_base(void *);
void set_type__14TOKeyAncient01FPv(void *);

extern M2C_UNK __vt__5TOKey[];
extern const f32 lbl_805DB6E0;
extern void *lbl_805D3010;

void *TOKey__ct(void *arg0) {
    init_map_object_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__5TOKey;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3010;
    M2C_FIELD(arg0, u32 *, 0xC8) = -1;
    M2C_FIELD(arg0, f32 *, 0xCC) = lbl_805DB6E0;
    M2C_FIELD(arg0, u32 *, 0xD0) = 2;
    M2C_FIELD(arg0, u32 *, 0xD4) = 0;
    M2C_FIELD(arg0, u32 *, 0xE0) = 0;
    M2C_FIELD(arg0, u32 *, 0xD8) = 28;
    M2C_FIELD(arg0, u32 *, 0xDC) = 28;
    set_type__14TOKeyAncient01FPv((void *)((char *)arg0 + 152));
    M2C_FIELD(arg0, u32 *, 0xE4) = 0;
    return arg0;
}

}
