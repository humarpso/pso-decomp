#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801D0888();
void fn_801CB7A4(void);
void fn_801CB7D4(void);
int fn_801CB7D8(void* p);
int fn_801BA2F4(void*);

int fn_801CB748(void) { return 0; }
void fn_801CB7A4(void) {  }
void fn_801CB7A8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        fn_801D0888();
    }
}
void fn_801CB7D4(void) {  }
int fn_801CB7D8(void* p) { return fn_801BA2F4(p); }

}
