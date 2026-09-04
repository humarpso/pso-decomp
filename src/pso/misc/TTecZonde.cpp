#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__9TTecZondeFv(void);

void render__9TTecZondeFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8023C740
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__9TTecZondeFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_technique_effect_resources__10TObjPlayerFPvs(void *, int);

extern M2C_UNK __vt__9TTecZonde[];

void *__dt__9TTecZondeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecZonde;
        destroy_technique_effect_resources__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
