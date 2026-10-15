#include "types.h"

extern "C" {

void *__ct__16TBoss4CheckEmptyFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__16TBoss4CheckEmpty[];
extern void *lbl_805D4318;

void *__ct__16TBoss4CheckEmptyFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TBoss4CheckEmpty;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D4318;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}
