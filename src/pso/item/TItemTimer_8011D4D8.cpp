#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TItemTimer__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK TItemTimer__sub_8011D598(void *, void *, void *);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK reset_fields__10TItemTimerFPv(void *);

extern M2C_UNK __vt__10TItemTimer[];
extern s32 lbl_805D2C88;

u8 *TItemTimer__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TItemTimer;
    reset_fields__10TItemTimerFPv((void *) (arg0 + 0x20));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C88;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg3 - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) < 1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
    TItemTimer__sub_8011D598((void *) (arg0 + 0x20), (void *) (arg1), (void *) (arg2));
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

}
