#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TOKeyBase8016 { char pad[0x18]; };
struct TOKeyCol8016 : TOKeyBase8016 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

extern "C" {

void *TOKeyCol__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TOKey__ct();
M2C_UNK TOKey__sub_8016AB20(void *);

extern M2C_UNK __vt__8TOKeyCol[];
extern s32 lbl_805D3040;
extern const f32 lbl_805DB758;
extern const f32 lbl_805DB75C;
extern const f32 lbl_805DB760;

void *TOKeyCol__ct(void *arg0, s32 arg1, s32 arg2) {
    TOKey__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TOKeyCol;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3040;
    ((TOKeyCol8016 *)arg0)->ct(arg2);
    TOKey__sub_8016AB20(arg0);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB758;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB75C;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) (lbl_805DB760 + M2C_FIELD(arg0, f32 *, 0x68));
    if (((s32) M2C_FIELD(arg0, s32 *, 0xD0) != 2) && ((s32) M2C_FIELD(arg0, s32 *, 0x88) < 0)) {
        M2C_FIELD(arg0, s32 *, 0xD0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    }
    return arg0;
}

}
