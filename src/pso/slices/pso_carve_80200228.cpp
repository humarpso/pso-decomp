#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801D5DAC();
M2C_UNK fn_801F494C(M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_801FCD04(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FCD3C(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200B28();
u32 check_flag__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK fn_802C3AC0(void *);
M2C_UNK memcpy(void *, s32, M2C_UNK);
extern s32 lbl_805D5544;
extern s32 lbl_805D5F58;
extern void *lbl_805D5F60;
extern void *const lbl_805D5F64;

void game_state_load(void) {
    memcpy(lbl_805D5F60, TAdSinglePlyChrSelectGC__sub_801FCD04(lbl_805D5F58), 0x41C);
    memcpy(lbl_805D5F64, TAdSinglePlyChrSelectGC__sub_801FCD3C(lbl_805D5F58), 0x2370);
    fn_801F494C(0);
    if (fn_801D5DAC() == 0) {
        if (check_flag__23TAdSinglePlyChrSelectGCFi(1) != 0U) {
            TAdSinglePlyChrSelectGC__sub_80200B28();
        } else {
            void *a = lbl_805D5F60;
            void *b;
            if (((u8) M2C_FIELD(a, u8 *, 0) == 0) && ((s32) M2C_FIELD(a, s32 *, 0x36C) == 0) && ((b = lbl_805D5F64, (s32) M2C_FIELD(b, s32 *, 0x248)) == 0) && ((s32) M2C_FIELD(b, s32 *, 0x24C) == 0)) {
                fn_802C3AC0(a);
            }
        }
    }
    M2C_FIELD(lbl_805D5F60, s8 *, 3) = (s8) lbl_805D5544;
}

}
