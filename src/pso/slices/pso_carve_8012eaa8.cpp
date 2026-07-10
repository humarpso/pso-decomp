#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8011E384();
s32 fn_8011F5E0(void *);
s32 fn_80121CA8(void *);
s32 create__10TTecDebandFiii(s32, s32, s32);
s32 create__9TTecSiftaFPvPvPv(s32, s32, s32);
int fn_80121200(void*);
int TObjContainerIdo__sub_803D96A8(void*, void*);
void fn_8012EBB0(void* p);
int fn_8011E618(void*);
int fn_8012EB24(void* p);
int fn_8012EB50(void* p);
int fn_80115BC0(void*, int, int);

void fn_8012EAA8(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    if (fn_8011E384() != 0) {
        if (fn_80121CA8(arg0) == 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0xF0);
            create__10TTecDebandFiii(temp_r3, temp_r3 + 0x38, 2);
        } else {
            temp_r3_2 = M2C_FIELD(arg0, s32 *, 0xF0);
            create__9TTecSiftaFPvPvPv(temp_r3_2, temp_r3_2 + 0x38, 2);
        }
        fn_8011E618(arg0);
        return;
    }
    fn_8011F5E0(arg0);
}
int fn_8012EB24(void* p) { return fn_80115BC0((char*)p + 0x1f8, 1820, 10922); }
int fn_8012EB50(void* p) { return fn_80115BC0((char*)p + 0x1f8, -1820, 0); }
void fn_8012EB7C(void* p) { fn_8011E618(p); fn_8011E618(p); }
void fn_8012EBB0(void* p) { if (fn_80121200(p) == 1) { TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

}
