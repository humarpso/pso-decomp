#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TBoss6Type2__vt20(void *arg0, u32 arg1, f32 farg0);
M2C_UNK TBoss6Type2__sub_802B9B20(void *);
M2C_UNK TBoss6Type2__sub_802BA078(void *);
f32 TObjPlayer__sub_80014108(void *, u32, f32);
u8 *TObjPlayer__sub_80015DC4(u32, s32);

extern const f32 TBoss6Type2__data_805DE410;

f32 TBoss6Type2__vt20(void *arg0, u32 arg1, f32 farg0) {
    s32 var_r31;
    s32 var_r30;
    s32 var_r29;
    u8 temp_r0;

    var_r31 = 1;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) && (arg1 != 0U)) {
        var_r30 = 0;
        var_r29 = 0;
        do {
            temp_r0 = *TObjPlayer__sub_80015DC4(arg1, var_r29);
            switch ((s32) temp_r0) {
            case 1:
                var_r30 |= 1;
                break;
            case 2:
                var_r30 |= 2;
                break;
            case 3:
                var_r30 |= 4;
                break;
            case 4:
                var_r30 |= 8;
                break;
            }
            var_r29 += 1;
        } while (var_r29 < 3);
        if (!(M2C_FIELD(arg0, s32 *, 0x2E4) & var_r30)) {
            var_r31 = 0;
        }
    }
    if (var_r31 != 0) {
        return TObjPlayer__sub_80014108(arg0, arg1, farg0);
    }
    TBoss6Type2__sub_802BA078(arg0);
    TBoss6Type2__sub_802B9B20(arg0);
    return TBoss6Type2__data_805DE410;
}

}
