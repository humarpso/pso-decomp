#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__9TObjEneDDFv(void *arg0, s16 arg1);
void *init_object__9TObjEneDDFPv(void *arg0);
void TObjEneDD__ct(void *);
void TObjEneDD__vt0(void *, int);
void TObjEneEpsilon__sub_800B965C(void *, int);
void __dl__7TObjectFPv(void *);
void fn_800B98A4(void *, int);
void fn_800B98C0(void *);
void init_float_params__9TObjEneDDFPv(void *);

extern M2C_UNK lbl_80492558[];

void *__dt__9TObjEneDDFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80492558;
        TObjEneDD__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80492558[];
extern void *lbl_805D2A34;

void *init_object__9TObjEneDDFPv(void *arg0) {
    TObjEneDD__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80492558;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2A34;
    fn_800B98C0(arg0);
    init_float_params__9TObjEneDDFPv(arg0);
    fn_800B98A4(arg0, 30);
    TObjEneEpsilon__sub_800B965C(arg0, 30);
    return arg0;
}

}
