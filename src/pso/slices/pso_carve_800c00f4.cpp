#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_800C00F4 { char pad[0x18]; };
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct VObj_800C00F4 : Base_800C00F4 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m48();
};

extern "C" {

f32 TObjPlayer__sub_80011014(void *);
extern const f32 lbl_805D9F44;
extern const f32 lbl_805D9F48;

void fn_800C00F4(void *arg0) {
    s16 temp_r4;
    s16 temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x374);
    if (!(temp_r4 & 2)) {
        temp_r4_2 = temp_r4 | 2;
        M2C_FIELD(arg0, s16 *, 0x374) = temp_r4_2;
        M2C_FIELD(arg0, s16 *, 0x394) = 0;
        M2C_FIELD(arg0, s32 *, 0x390) = (s32) (lbl_805D9F44 * (lbl_805D9F48 * TObjPlayer__sub_80011014(arg0)));
    }
    M2C_FIELD(arg0, s16 *, 0x326) = 1;
    M2C_FIELD(arg0, s16 *, 0x37A) = 3;
    ((struct VObj_800C00F4 *)arg0)->m48();
    M2C_FIELD(arg0, s16 *, 0x32C) = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & ~0xA00);
}

}
