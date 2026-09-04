#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss4Fade.h"

TBoss4Fade::~TBoss4Fade() {}
#else
#if PSO_CLASS_PACKAGE == 0x80359618
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__10TBoss4FadeFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__10TBoss4Fade[];
extern void *lbl_805D43F8;

void *__ct__10TBoss4FadeFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TBoss4Fade;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D43F8;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#endif
