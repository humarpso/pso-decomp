#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TBoss6Kakusan__sub_8032263C(void);

int TBoss6Kakusan__sub_8032263C(void) { return 0; }

}
#else
#if PSO_CLASS_PACKAGE == 0x803226BC
#include "types.h"

extern "C" {

void render__13TBoss6KakusanFv(void);

void render__13TBoss6KakusanFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80322920
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TBoss6KakusanFv(void *arg0, s16 arg1);
void request_destroy__11TBoss4Type2FUi(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__13TBoss6Kakusan[];

void *__dt__13TBoss6KakusanFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TBoss6Kakusan;
        if (M2C_FIELD(arg0, void **, 0x54) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x54)); M2C_FIELD(arg0, M2C_UNK *, 0x54) = 0; }
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
