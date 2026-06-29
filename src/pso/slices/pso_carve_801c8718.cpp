#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_801C8878(s32 arg0);
s32 obj_isState2_324();
s16 obj_getField1c(s32);
M2C_UNK fn_801D1480(M2C_UNK *);
M2C_UNK fn_801D1494(M2C_UNK *);
int fn_8011E204(void*, void*);
int fn_80154788(void*, void*, void*);
int TObjPlayer__sub_801B12CC(void*);
int fn_801BE9A8(void*);
int fn_801C5B18(void*);
int fn_801C8770(void* p);
int TObjPlayer__sub_801B130C(void*);

void fn_801C8718(void* p) { fn_801BE9A8(p); fn_8011E204(p, (void*)5); TObjPlayer__sub_801B12CC(p); fn_80154788(p, (void*)0, (void*)1); fn_801C5B18((char*)p + 0x608); }
int fn_801C8770(void* p) { return TObjPlayer__sub_801B130C(p); }
int fn_801C8790(void) { return 0; }
int fn_801C8808(void) { return 0; }
void fn_801C8878(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        fn_801D1480((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        fn_801D1494((M2C_UNK *)&sp8);
    }
}

}
