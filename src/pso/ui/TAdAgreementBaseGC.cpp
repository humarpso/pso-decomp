#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TAdAgreementBaseGC__vt4(void);
void TAdAgreementBaseGC__vt5(void);
void TAdAgreementBaseGC__vt6(void);
void fn_80329BAC(void* p);

void TAdAgreementBaseGC__vt4(void) {  }
void TAdAgreementBaseGC__vt5(void) {  }
void TAdAgreementBaseGC__vt6(void) {  }
void fn_80329BAC(void* p) { *(s32*)((char*)p + 0xb8) = 1; }

}
#else
#if PSO_CLASS_PACKAGE == 0x803297EC
#include "types.h"

extern "C" {

void TAdAgreementBaseGC__sub_803297EC(void* p);

void TAdAgreementBaseGC__sub_803297EC(void* p) { *(s32*)((char*)p + 0x1c) = 4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80329A1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TAdAgreementBaseGCFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__18TAdAgreementBaseGC[];

void *__dt__18TAdAgreementBaseGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdAgreementBaseGC;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
