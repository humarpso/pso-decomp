#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjCity_Season_SonicAdv2__sub_80183C38(void *arg0);
}

extern "C" {

void TObjCity_Season_SonicAdv2__sub_80183BFC(void* a0);
int advance_anim_time__25TObjCity_Season_EasterEggFPvif(void*, int, f32);

    extern f32 lbl_805DBC5C;
void TObjCity_Season_SonicAdv2__sub_80183BFC(void* a0) { advance_anim_time__25TObjCity_Season_EasterEggFPvif(a0, TObjCity_Season_SonicAdv2__sub_80183C38((void *)(a0)), lbl_805DBC5C); }
s32 TObjCity_Season_SonicAdv2__sub_80183C38(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x84) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x84) < 4) {
        return M2C_FIELD(arg0, s32 *, 0x84);
    }
    return 3;
}

}
