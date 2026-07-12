#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowMainMenu4P__vt6(void *arg0);
void TWindowMainMenu4P__vt7(void* p);
int fn_80263C24(void*);
M2C_UNK fn_80263CAC();
int TWindowMainMenu__sub_802644D4(void*);

void TWindowMainMenu4P__vt7(void* p) { if (fn_80263C24(p) != 0) { TWindowMainMenu__sub_802644D4(p); } }

void TWindowMainMenu4P__vt6(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4C) & 1) {
        fn_80263CAC();
    }
}

}
