#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_80122600(void *arg0);
s32 fn_8011E384();
M2C_UNK fn_8011E618(void *);
M2C_UNK fn_8011F5E0(void *);
s32 fn_801207E8(void *, M2C_UNK, M2C_UNK *);
s32 fn_80121CA8(void *);
M2C_UNK fn_80230AF0(void *, M2C_UNK *, s32, s32);
int fn_80121200(void*);
int fn_803D96A8(void*, void*);
void fn_80122680(void* p);
void fn_801225F8(void* p, s16 v);

void fn_801225F8(void* p, s16 v) { *(s16*)((char*)p + 0x1cc) = v; }
void fn_80122600(void *arg0) {
    M2C_UNK sp8;
    void *temp_r31;

    if (fn_8011E384() != 0) {
        if (fn_801207E8(arg0, 0, &sp8) != 0) {
            temp_r31 = M2C_FIELD(arg0, void **, 0xF0);
            fn_80230AF0(temp_r31, &sp8, M2C_FIELD(temp_r31, s32 *, 0x60), fn_80121CA8(arg0));
            fn_8011E618(arg0);
        }
    } else {
        fn_8011F5E0(arg0);
    }
}
void fn_80122680(void* p) { if (fn_80121200(p) == 1) { fn_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

}
