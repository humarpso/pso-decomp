#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Elem_80077A28 { u8 data[0xD4]; };

struct Obj_80077A28 { s32 f0; Elem_80077A28 e[0x20]; };

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern u8 *lbl_805D4E5C;
void fn_800779A0(u8 *arg0);
u32 *fn_800779FC(u32 *dst, u32 *src);
void *__construct_array(void *, void *, void *, u32, u32);
void fn_80077A70(void);
Obj_80077A28 *construct_entry_array(Obj_80077A28 *self);
}

extern "C" {

void fn_800779A0(u8 *arg0) {
    s32 temp_r3;
    s32 var_r0;
    if ((void *) lbl_805D4E5C == NULL) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x1A84);
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = ((s32)construct_entry_array((Obj_80077A28 *)(temp_r3)));
        }
        lbl_805D4E5C = (unsigned char *) ((void *) var_r0);
    }
    fn_800779FC((u32 *)(lbl_805D4E5C), (u32 *)(arg0));
}
u32 *fn_800779FC(u32 *dst, u32 *src) {
    u32 *d = dst;
    u32 b;
    u32 a;
    s32 i;
    *dst = *src;
    for (i = 0; i < 0x350; i++) {
        a = src[1];
        b = *(src += 2);
        d[1] = a;
        *(d += 2) = b;
    }
    return dst;
}
Obj_80077A28 *construct_entry_array(Obj_80077A28 *self) {
    __construct_array(self->e, (void *)fn_80077A70, 0, 0xD4, 0x20);
    return self;
}

}
