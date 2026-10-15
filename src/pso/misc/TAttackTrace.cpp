#include "pso/TAttackTrace.h"

TAttackTrace::~TAttackTrace() {}

#include "types.h"

extern "C" {

void *TAttackTrace__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__12TAttackTrace[];
extern void *lbl_805D2A90;

void *TAttackTrace__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TAttackTrace;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D2A90;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}
