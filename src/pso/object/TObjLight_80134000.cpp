#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjLight__sub_80134000(void *arg0, void *arg1, f32 farg0);
M2C_UNK fn_8038B804(M2C_UNK *, f32, f32, f32);
M2C_UNK fn_803DF268(f32, f32, f32);
M2C_UNK fn_803DF394(M2C_UNK, f32, f32, f32);
M2C_UNK fn_803DF464(M2C_UNK, f32, f32, f32);
M2C_UNK fn_803DF528(M2C_UNK);

extern M2C_UNK lbl_8058D528[];

void TObjLight__sub_80134000(void *arg0, void *arg1, f32 farg0) {
    fn_803DF464(0, M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8));
    fn_8038B804(lbl_8058D528, M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 4), M2C_FIELD(arg0, f32 *, 8));
    fn_803DF394(0, M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 8), M2C_FIELD(arg1, f32 *, 0xC));
    fn_803DF268(farg0, farg0, farg0);
    fn_803DF528(0);
}

}
