#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8011E384();
s32 fn_8011F5E0(void *);
s32 fn_801207E8(void *, s32, s32 *);
s32 fn_80121CA8(void *);
s32 create__8TTecFoieFPvPvPvPv(void *, s32 *, s32, s32);
int fn_8011E618(void*);
int fn_8011E87C(void*, void*);
int fn_80120BBC(void*, void*);
s16 fn_801251AC(void* p);

s16 fn_801251AC(void* p) { return *(s16*)((char*)p + 0x12); }
void fn_801251B4(void *arg0) {
    s32 sp8;
    void *temp_r31;

    if (fn_8011E384() != 0) {
        if (fn_801207E8(arg0, 0, &sp8) != 0) {
            temp_r31 = M2C_FIELD(arg0, void **, 0xF0);
            create__8TTecFoieFPvPvPvPv(temp_r31, &sp8, M2C_FIELD(temp_r31, s32 *, 0x60), fn_80121CA8(arg0) + 2);
            fn_8011E618(arg0);
        }
    } else {
        fn_8011F5E0(arg0);
    }
}
void fn_80125238(void* p) { fn_80120BBC(p, (void*)49); fn_8011E87C(p, (void*)0); fn_8011E87C(p, (void*)1); fn_8011E87C(p, (void*)2); }
void fn_8012528C(void* p) { fn_8011E618(p); fn_8011E618(p); }

}
