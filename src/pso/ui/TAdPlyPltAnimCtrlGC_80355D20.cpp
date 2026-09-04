#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdPlyPltAnimCtrlGC__sub_80355D38(void *arg0);
void set_anim_state__19TAdPlyPltAnimCtrlGCFPvi(void *arg0, s32 arg1);

void set_anim_state__19TAdPlyPltAnimCtrlGCFPvi(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x78) = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x74) = arg1;
}

void TAdPlyPltAnimCtrlGC__sub_80355D38(void *arg0) {
    set_anim_state__19TAdPlyPltAnimCtrlGCFPvi((void *)(arg0), (s32)(0));
}

}
