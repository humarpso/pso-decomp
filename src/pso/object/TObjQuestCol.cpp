#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjQuestCol__vt13(void *arg0);
void TObjQuestCol__vt14(void* p);
s32 fn_80196B80(f32);
int fn_80197094(void*);
int fn_801F5BD4(void*);

void TObjQuestCol__vt14(void* p) { fn_80197094(p); fn_801F5BD4(*(void**)((char*)p + 0xb0)); }

s32 TObjQuestCol__vt13(void *arg0) {
    return (u32)__cntlzw(1 - fn_80196B80(M2C_FIELD(arg0, f32 *, 0xAC))) >> 5;
}

}
