#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TObjEneMe3SinowZoaFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjEneDD__sub_800B9A34(void *, int);
void fn_800D75F4(void *, int);
void fn_80156720(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__18TObjEneMe3SinowZoa[];

void *__dt__18TObjEneMe3SinowZoaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEneMe3SinowZoa;
        if (M2C_FIELD(arg0, void **, 0x454) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x454)); M2C_FIELD(arg0, M2C_UNK *, 0x454) = 0; }
        if (M2C_FIELD(arg0, void **, 0x458) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x458)); M2C_FIELD(arg0, M2C_UNK *, 0x458) = 0; }
        fn_80156720(arg0);
        fn_800D75F4((s8 *)arg0 + 0x414, -1);
        TObjEneDD__sub_800B9A34(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
