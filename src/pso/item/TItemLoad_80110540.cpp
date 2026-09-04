#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__9TItemLoadFv(void *arg0);
int run_task__9TItemLoadFv(void* p);
void __ct__7TObjectFP7TObject(void *);
void disallow_rendering__7TObjectFv(void *);
int update__9TItemLoadFv(void*);

int run_task__9TItemLoadFv(void* p) { return update__9TItemLoadFv(p); }

extern M2C_UNK __vt__9TItemLoad[];
extern void *lbl_805D2BF4;

void *__ct__9TItemLoadFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TItemLoad;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2BF4;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
