#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TObjEneIllGillFv(void *arg0, s16 arg1);
void free_resources__14TObjEneIllGillFPv(void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void TObjEneMe3SinowZoa__sub_800D75F4(void *, int);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__14TObjEneIllGill[];

void *__dt__14TObjEneIllGillFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjEneIllGill;
        free_resources__14TObjEneIllGillFPv(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        TObjEneMe3SinowZoa__sub_800D75F4((s8 *)arg0 + 0x374, -1);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
