#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__14TItemProShieldFv(void *arg0, s16 arg1);
void load_data__14TItemProShieldFv(void);
void __dt__14TItemEquipBaseFv(void *, int);
M2C_UNK bswap_32__FPUl(s32);
s32 fn_800F955C(s32);
void free_obj_heap__10TObjPlayerFPv(void *);

extern s32 lbl_805D2C3C;
extern s32 lbl_805D54C8;

void load_data__14TItemProShieldFv(void) {
    s32 temp_r3;
    s32 var_r31;
    s32 var_r30;
    s32 var_r29;
    s32 var_r28;

    temp_r3 = fn_800F955C(lbl_805D2C3C);
    lbl_805D54C8 = temp_r3;
    var_r31 = 0;
    var_r28 = temp_r3;
    do {
        var_r29 = var_r28;
        var_r30 = 0;
loop_2:
        bswap_32__FPUl(var_r29);
        var_r30 += 1;
        var_r29 += 4;
        if (var_r30 < 8) {
            goto loop_2;
        }
        bswap_32__FPUl(var_r28 + 0x20);
        bswap_32__FPUl(var_r28 + 0x24);
        bswap_32__FPUl(var_r28 + 0x28);
        var_r31 += 1;
        var_r28 += 0x2C;
    } while (var_r31 != 0x32);
}

extern M2C_UNK __vt__14TItemProShield[];

void *__dt__14TItemProShieldFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TItemProShield;
        __dt__14TItemEquipBaseFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
