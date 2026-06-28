#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8000F9CC(s32);
s32 fn_80339E2C();
s32 fn_8033A138(void *);
s32 fn_8033A15C(void *);
int fn_8000F9B0(void);
int fn_80339F30(void*);
int fn_8033A184(void*, void*);
int queue_destruction__7TObjectFv(void*);
void fn_80339B64(void* p);
void fn_80339BB4(void* p);
int fn_80339B94(void* p);
int fn_80339BF4(void* p);
int fn_80339CC0(void* p);
void fn_80339CE4(void);
int fn_80339CE8(void* p);
int fn_80339F5C(void*, int);
int fn_8033A088(void*);

void fn_80339B64(void* p) { if (*(int*)((char*)p + 0x38) == 0) { queue_destruction__7TObjectFv(p); fn_8000F9B0(); } }
int fn_80339B94(void* p) { return fn_8033A088(p); }
void fn_80339BB4(void* p) { if (fn_80339F30(p) != 0) { fn_8033A184(p, (void*)4); } }
int fn_80339BF4(void* p) { return fn_80339F5C(p, 3); }
void fn_80339C18(void *arg0) {
    s32 var_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) <= 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        M2C_FIELD(arg0, s32 *, 0x2C) = fn_80339E2C();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
            fn_8033A184((void*)(arg0), (void*)(1));
            return;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
            var_r3 = fn_8033A15C(arg0);
        } else {
            var_r3 = fn_8033A138(arg0);
        }
        if (var_r3 == 7) {
            fn_8033A184((void*)(arg0), (void*)(4));
            return;
        }
        queue_destruction__7TObjectFv((void*)(arg0));
        fn_8000F9CC(9);
    }
}
int fn_80339CC0(void* p) { return fn_80339F5C(p, 2); }
void fn_80339CE4(void) {  }
int fn_80339CE8(void* p) { return fn_80339F5C(p, 1); }
void fn_80339D0C(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (!(temp_r4 & 2)) {
        if (temp_r4 & 1) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) == 0U) {
                fn_80339F5C((void*)(arg0), 0);
            }
        } else {
            if (temp_r4 & 4) {
                fn_8033A184((void*)(arg0), (void*)(1));
                return;
            }
            if (temp_r4 == 0) {
                fn_8033A184((void*)(arg0), (void*)(2));
            }
        }
    }
}
int fn_80339D78(void) { return 0; }

}
