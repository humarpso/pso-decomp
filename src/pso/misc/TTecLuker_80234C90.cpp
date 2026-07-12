#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct BaseM_80234C90 { char pad[0x24]; };
struct VM_80234C90 : BaseM_80234C90 { virtual void m0(int); };

extern "C" {

void *__dt__9TTecLukerFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TTecLuker__sub_8022C0A0(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern void* __vt__9TTecLuker[];

void *__dt__9TTecLukerFv(void *arg0, s16 arg1) {
    s32 temp_cr0_eq;
    void *temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__9TTecLuker;
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF8));
            M2C_FIELD(arg0, u32 *, 0xF8) = 0U;
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0xEC);
        if (temp_r3 != NULL) {
            if (temp_r3 != NULL) {
                ((struct VM_80234C90 *) temp_r3)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0xEC) = NULL;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF0));
            M2C_FIELD(arg0, u32 *, 0xF0) = 0U;
        }
        M2C_FIELD(arg0, u32 *, 0xF0) = 0U;
        TTecLuker__sub_8022C0A0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
