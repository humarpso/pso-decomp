#include "pso/TBoss4Fade.h"
#include "pso/boss/TBoss4Fade.h"

TBoss4Fade::~TBoss4Fade() {}

#include "types.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__10TBoss4Fade[];
extern void *TBoss4Fade__name;

void *__ct__10TBoss4FadeFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TBoss4Fade;
    *(void * *)&((TBoss4Fade *)arg0)->m_name = TBoss4Fade__name;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}
