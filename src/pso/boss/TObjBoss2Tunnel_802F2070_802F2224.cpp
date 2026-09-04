#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss2Tunnel__sub_802F2278(void);
void spawn__15TObjBoss2TunnelFPvii(void *arg0, s32 arg1, s32 arg2);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_802F1FB0(void *, s32, s32, f32, s32);

void spawn__15TObjBoss2TunnelFPvii(void *arg0, s32 arg1, s32 arg2) {
    void *new_obj = (void *) __nw__7TObjectFUl(0x78);
    if ((u32) new_obj != 0U) {
        fn_802F1FB0(new_obj, M2C_FIELD(arg0, s32 *, 0x8C), arg1, M2C_FIELD(arg0, f32 *, 0x84), arg2);
    }
}

    extern int lbl_805D6968;
void TObjBoss2Tunnel__sub_802F2278(void) { lbl_805D6968 = (lbl_805D6968 | 0x8); }

}
