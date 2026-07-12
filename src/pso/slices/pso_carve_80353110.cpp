#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemProShield__sub_8001140C(s32, s32);
s32 TItemProShield__sub_80076B5C(s32);
s32 TObjPlayer__sub_800112A4(s32, s32);
s32 obj_getS16_2BA(s32);
int fn_80353110(void* p);
int fn_80353134(void* p);
int fn_80353018(void*, int);

int fn_80353110(void* p) { return fn_80353018(p, 16); }
int fn_80353134(void* p) { return fn_80353018(p, 15); }
void fn_80353158(void *arg0) {
    TItemProShield__sub_8001140C(M2C_FIELD(arg0, s32 *, 0xF0), TItemProShield__sub_80076B5C(M2C_FIELD(arg0, s32 *, 0xF0)));
}
void fn_80353194(void *arg0) {
    TObjPlayer__sub_800112A4(M2C_FIELD(arg0, s32 *, 0xF0), obj_getS16_2BA(M2C_FIELD(arg0, s32 *, 0xF0)));
}

}
