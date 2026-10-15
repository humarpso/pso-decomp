#include "types.h"

extern "C" {

void *__ct__9TItemLoadFv(void *arg0);
int run_task__9TItemLoadFv(void* p);
void __ct__7TObjectFP7TObject(void *);
void disallow_rendering__7TObjectFv(void *);
int update__9TItemLoadFv(void*);

int run_task__9TItemLoadFv(void* p) { return update__9TItemLoadFv(p); }

extern s32 __vt__9TItemLoad[];
extern void *lbl_805D2BF4;

void *__ct__9TItemLoadFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__9TItemLoad;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D2BF4;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
