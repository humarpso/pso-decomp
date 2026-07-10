#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_instance__10TSceneSoraFv(void);
s32 TSceneSora__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 lbl_805D6050;
extern u32 lbl_805D6054;
extern s32 tl_05;

void create_instance__10TSceneSoraFv(void) {
    s32 var_r3;

    if ((u32) lbl_805D6054 != 0U) {
        var_r3 = __nw__7TObjectFUl(0xA4);
        if (var_r3 != 0) {
            var_r3 = TSceneSora__ct(var_r3, tl_05);
        }
        lbl_805D6050 = var_r3;
        return;
    }
    lbl_805D6050 = 0;
}

}
