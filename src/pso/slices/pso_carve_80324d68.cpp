#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK TBoss8Dragon__sub_8034D500(void *, int, int, void *, f32);

void fn_80324D68(u8 *arg0) {
    TBoss8Dragon__sub_8034D500((void *) (arg0 + 0x48), (int) (M2C_FIELD(arg0, s32 *, 0x90)), (int) (0), (void *) (arg0 + 0x20), (f32) (M2C_FIELD(arg0, f32 *, 0x88)));
    TBoss8Dragon__sub_8034D500((void *) (arg0 + 0x48), (int) (M2C_FIELD(arg0, s32 *, 0x90)), (int) (0), (void *) (arg0 + 0x2C), (f32) (M2C_FIELD(arg0, f32 *, 0x8C)));
    if (M2C_FIELD(arg0, void **, 0x38) != 0) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x38), (void *) (arg0 + 0x20));
    }
    if (M2C_FIELD(arg0, void **, 0x3C) != 0) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x3C), (void *) (arg0 + 0x20));
    }
    if (M2C_FIELD(arg0, void **, 0x40) != 0) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x40), (void *) (arg0 + 0x2C));
    }
    if (M2C_FIELD(arg0, void **, 0x44) != 0) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x44), (void *) (arg0 + 0x2C));
    }
}

}
