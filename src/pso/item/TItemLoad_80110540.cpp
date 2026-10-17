#include "types.h"
#include "pso/item/TItemLoad_80110540.h"
#include "pso/object/TObject_8001A448.h"
#include "pso/TItemLoad.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);
int update__9TItemLoadFv(void*);

int run_task__9TItemLoadFv(void* p) { return update__9TItemLoadFv(p); }

extern s32 __vt__9TItemLoad[];
extern void *lbl_805D2BF4;

void *__ct__9TItemLoadFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__9TItemLoad;
    *(void * *)&((TItemLoad *)arg0)->m_name = lbl_805D2BF4;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
