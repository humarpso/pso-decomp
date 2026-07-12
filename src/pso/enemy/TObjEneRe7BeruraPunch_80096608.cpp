#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__21TObjEneRe7BeruraPunchFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_800A05B8(void *, int);
void fn_800BC40C(void *, int);
void fn_800BC5A0(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__21TObjEneRe7BeruraPunch[];

void *__dt__21TObjEneRe7BeruraPunchFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjEneRe7BeruraPunch;
        if (M2C_FIELD(arg0, void **, 0xD0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD0)); M2C_FIELD(arg0, M2C_UNK *, 0xD0) = 0; }
        if (M2C_FIELD(arg0, void **, 0xD4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD4)); M2C_FIELD(arg0, M2C_UNK *, 0xD4) = 0; }
        if (M2C_FIELD(arg0, void **, 0xD8) != NULL) { fn_800BC5A0(M2C_FIELD(arg0, void **, 0xD8), 1); M2C_FIELD(arg0, M2C_UNK *, 0xD8) = 0; }
        TObjPlayer__sub_800A05B8((s8 *)arg0 + 0xF8, -1);
        fn_800BC40C(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
