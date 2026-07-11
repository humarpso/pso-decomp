#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1);
s32 TOBoss4Rock__sub_8039C880();

extern M2C_UNK TBoss6Type1__data_80471040;
extern f32 TBoss6Type1__data_805DE304;
extern f32 lbl_805DE3EC;

void set_sync_data__11TBoss6Type1FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
    M2C_FIELD(arg1, s8 *, 8) = (s8) M2C_FIELD(arg0, s32 *, 0x438);
    M2C_FIELD(arg1, s8 *, 9) = (s8) M2C_FIELD(arg0, s32 *, 0x414);
    M2C_FIELD(arg1, s8 *, 0xA) = (s8) (lbl_805DE3EC * (TBoss6Type1__data_805DE304 * (f32) TOBoss4Rock__sub_8039C880()));
}

}
