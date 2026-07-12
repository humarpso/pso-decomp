#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObj_8024C820 {
    char pad[0x18];
    virtual void m0(int);
};

extern "C" {

void release_ptr__15TWindowCtrlMainFPv(void **arg0);

void release_ptr__15TWindowCtrlMainFPv(void **arg0) {
    VObj_8024C820 *obj = (VObj_8024C820 *)*arg0;
    if (obj) {
        if (obj) {
            obj->m0(1);
        }
        *arg0 = NULL;
    }
}

}
