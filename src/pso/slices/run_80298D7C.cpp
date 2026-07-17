#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

    extern int TObjCMMainMenu__data_805D659C;
void clear_task_state__14TObjCMMainMenuFv(void) { TObjCMMainMenu__data_805D659C = 0; }

extern f32 lbl_805D3C98;

f32 get_scale__14TObjCMMainMenuFv(void) {
    return lbl_805D3C98;
}

extern f32 lbl_805D3CA0;

f32 TObjCMMainMenu__sub_80298D90(void) {
    return lbl_805D3CA0;
}

    extern int lbl_805D6570;
void TObjCMMainMenu__sub_80298D98(int a0) { lbl_805D6570 = a0; }

    extern int lbl_805D6538;
void TObjCMMainMenu__sub_80298DA0(int a0) { lbl_805D6538 = (lbl_805D6538 + a0); }

extern void *lbl_805D653C;

void TObjCMMainMenu__sub_80298DB0(f32 farg0) {
    if ((void *) lbl_805D653C != NULL) {
        M2C_FIELD(lbl_805D653C, f32 *, 0x38) = farg0;
    }
}

extern s32 lbl_805D652C;

u8 TObjCMMainMenu__sub_80298DC4(void) {
    return (u8) (lbl_805D652C == 0);
}

}
