#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct Base_800B3428 { char pad[0x18]; };
struct VObj_800B3428 : Base_800B3428 {
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
    virtual void m94();
VA
VA
VA
VA
VA
    virtual void m100();
};

extern "C" {

s32 TObjEneBm3FlyNest__sub_800B3AC8();
M2C_UNK TObjEneBm3FlyNest__sub_800B3ADC(void *);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK fn_80143504();
extern const f32 lbl_805D9D04;

void fn_800B3428(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((struct VObj_800B3428 *)arg0)->m94();
        TObjEneDD__sub_800BBA04(arg0, 2);
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) lbl_805D9D04;
        M2C_FIELD(arg0, s32 *, 0x4C0) = 1;
        M2C_FIELD(arg0, s32 *, 0x4C4) = 0x96;
        return;
    case 3:
        if (TObjEneBm3FlyNest__sub_800B3AC8() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        break;
    case 5:
        break;
    case 0:
        fn_80143504();
        TObjEneBm3FlyNest__sub_800B3ADC(arg0);
        ((struct VObj_800B3428 *)arg0)->m100();
        break;
    }
}

}
