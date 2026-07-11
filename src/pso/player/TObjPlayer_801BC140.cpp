#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__10TObjPlayerFPvi(void *arg0, s32 arg1);
M2C_UNK save_position__14TBoss4DarkFalzFi(void *);
M2C_UNK TBoss4DarkFalz__sub_8004C220(void *, s32);
M2C_UNK fn_80018E08(void *);
M2C_UNK fn_801BEA38(void *, M2C_UNK, f32, f32);

void update_position__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    TBoss4DarkFalz__sub_8004C220(arg0, arg1 + 8);
    save_position__14TBoss4DarkFalzFi(arg0);
    fn_80018E08(arg0);
    fn_801BEA38(arg0, 0, M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x40));
}

}
