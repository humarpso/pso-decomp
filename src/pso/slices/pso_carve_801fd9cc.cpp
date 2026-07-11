#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_80076BBC();
s32 TAdPlayerLoadGC__sub_801E2048(s32, M2C_UNK *);
s32 TAdSinglePlyChrSelectGC__sub_801FD990(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FEB40();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80202BA8(M2C_UNK);
extern M2C_UNK lbl_804C8914[];
extern u32 lbl_805D5F6C;
extern s32 lbl_805D5F8C;

s32 pso_system_load_gc(void) {
    s32 var_r31;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F6C != 0U) && (TAdPlayerLoadGC__sub_80076BBC() == 0)) {
        var_r31 = TAdPlayerLoadGC__sub_801E2048(lbl_805D5F8C, lbl_804C8914);
        if (var_r31 == 0) {
            if (TAdSinglePlyChrSelectGC__sub_801FEB40() != 0) {
                var_r31 = TAdSinglePlyChrSelectGC__sub_801FD990(lbl_805D5F8C);
                if (var_r31 == 0) {
                    TAdSinglePlyChrSelectGC__sub_80202BA8(0xF);
                }
            }
        }
    }
    return var_r31;
}

}
