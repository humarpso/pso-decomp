#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800B2214 { char pad[0xC]; };
struct VObj_800B2214 : Base_800B2214 {
    virtual void m2(int);
};

extern "C" {

void TObjEneBm3Fly__sub_800B2214(void);

extern void *TObjEneBm3Fly__data_805D50F4;

void TObjEneBm3Fly__sub_800B2214(void) {
    void *obj = TObjEneBm3Fly__data_805D50F4;
    if (obj != NULL) {
        if (obj != NULL) {
            ((VObj_800B2214 *)obj)->m2(1);
        }
        TObjEneBm3Fly__data_805D50F4 = NULL;
    }
}

}
