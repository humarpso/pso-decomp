#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __dl__FPv(void *);
M2C_UNK fn_8023E700(void *);
s32 TChCrLoadAfs__sub_8028B8B8();

struct SubBase { char pad[0x18]; };
struct SubObj : SubBase { virtual void m0(int); virtual void m1(int); virtual void m2(int); };

u8 *free_chcr_resources(u8 *arg0, s16 arg1) {
    SubObj *temp_r3;

    if (arg0 != NULL) {
        if (((void *) M2C_FIELD(arg0, void **, 0) != NULL) && (TChCrLoadAfs__sub_8028B8B8() == 0)) {
            temp_r3 = (SubObj *) (M2C_FIELD(arg0, void **, 0));
            if (temp_r3 != NULL) {
                temp_r3->m0(1);
            }
            M2C_FIELD(arg0, void **, 0) = NULL;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x54) != 0) {
            if (!(M2C_FIELD(arg0, s32 *, 0x4A8) & 1)) {
                fn_8023E700((void *) (arg0 + 0x1B8));
            }
            M2C_FIELD(arg0, s32 *, 0x54) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C0) != 0) {
            if (!(M2C_FIELD(arg0, s32 *, 0x4A8) & 2)) {
                fn_8023E700((void *) (arg0 + 0x324));
            }
            M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x32C) != 0) {
            if (!(M2C_FIELD(arg0, s32 *, 0x4A8) & 4)) {
                fn_8023E700((void *) (arg0 + 0x490));
            }
            M2C_FIELD(arg0, s32 *, 0x32C) = 0;
        }
        if (arg1 > 0) {
            __dl__FPv((void *) (arg0));
        }
    }
    return arg0;
}

}
