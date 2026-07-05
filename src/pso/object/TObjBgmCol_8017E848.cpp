#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjBase8017E8 { char pad[0x18]; };
struct TObjBgmCol8017E8 : TObjBase8017E8 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

extern "C" {

void *TObjBgmCol__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK fn_801A2640();

extern M2C_UNK __vt__10TObjBgmCol[];
extern s32 lbl_805D3228;

void *TObjBgmCol__ct(void *arg0, s32 arg1, s32 arg2) {
    fn_801A2640();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjBgmCol;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3228;
    ((TObjBgmCol8017E8 *)arg0)->ct(arg2);
    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) % 6);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x9C) < 0) {
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    }
    return arg0;
}

}
