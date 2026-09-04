#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8004172C_8004155C { char pad[0xC]; };
struct VObj_8004172C_8004155C : Base_8004172C_8004155C {
    virtual void m0(int);
};

extern "C" {

void destroy__20TBoss3VoloptHiraisinFv(void);
void dispatch_state__20TBoss3VoloptHiraisinFPv(void *arg0);
M2C_UNK TBoss3VoloptHiraisin__sub_8004118C();
M2C_UNK TBoss3VoloptHiraisin__sub_800411F0();
M2C_UNK TBoss3VoloptHiraisin__sub_80041314();
M2C_UNK fn_80040FDC();

void dispatch_state__20TBoss3VoloptHiraisinFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
    case 1:
        TBoss3VoloptHiraisin__sub_8004118C();
        break;
    case 4:
        TBoss3VoloptHiraisin__sub_80041314();
        break;
    case 5:
        TBoss3VoloptHiraisin__sub_800411F0();
        break;
    case 7:
        fn_80040FDC();
        break;
    }
}

extern void *lbl_805D4C88;

void destroy__20TBoss3VoloptHiraisinFv(void) {
    struct VObj_8004172C_8004155C *o = (struct VObj_8004172C_8004155C *)lbl_805D4C88;
    if (o != NULL) {
        o->m0(1);
    }
    lbl_805D4C88 = NULL;
}

}
