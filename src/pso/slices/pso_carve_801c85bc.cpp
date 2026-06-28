#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801D0888(void *);
s32 fn_801D0E94();
void fn_801C862C(void);
void fn_801C8678(void);
int fn_801C867C(void* p);
int fn_801C96C4(void*);

int fn_801C85BC(void) { return 0; }
void fn_801C862C(void) {  }
void fn_801C8630(void *arg0) {
    if ((fn_801D0E94() == 0) && (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10)) {
        fn_801D0888(arg0);
    }
}
void fn_801C8678(void) {  }
int fn_801C867C(void* p) { return fn_801C96C4(p); }

}
