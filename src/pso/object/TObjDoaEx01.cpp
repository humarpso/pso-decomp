#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__11TObjDoaEx01Fv(void *arg0);

M2C_UNK try_open__11TObjDoaEx01FPv();
M2C_UNK draw_model__11TObjDoaEx01FPv();

void render__11TObjDoaEx01Fv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        draw_model__11TObjDoaEx01FPv();
        return;
    }
    try_open__11TObjDoaEx01FPv();
}

}
