#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void *__nw__7TObjectFUl(int);
void *TObjEneMorfosArm__ct(void *, void *, void *);
}

extern "C" {

void TObjEneMorfosArm__sub_8033542C(void);
void init_global__16TObjEneMorfosArmFv(void);
s32 get_instance__13TObjEneMorfosFv();

void TObjEneMorfosArm__sub_8033542C(void) {  }

extern s32 TObjEneMorfosArm__parent_morfos_instance;

void * create__16TObjEneMorfosArmFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x104);
    if (o != NULL) {
        o = TObjEneMorfosArm__ct(o, arg0, arg1);
    }
    return o;
}

void init_global__16TObjEneMorfosArmFv(void) {
    TObjEneMorfosArm__parent_morfos_instance = get_instance__13TObjEneMorfosFv();
}

}
