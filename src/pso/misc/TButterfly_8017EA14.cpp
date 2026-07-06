#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base { char pad[0x18]; };
struct VObj : Base { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

extern "C" {

void render__10TButterflyFv(void *arg0);
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK fn_8017E900(void *);
M2C_UNK fn_803DA798();

extern s32 lbl_805D5B10;
extern const f32 lbl_805DBAE4;
extern const f32 lbl_805DBAE8;

void render__10TButterflyFv(void *arg0) {
    if (((VObj*)arg0)->m8(lbl_805DBAE4, lbl_805DBAE8) != 0) {
        TObjFish__sub_8001EDB0(lbl_805D5B10, 0);
        fn_803DA798();
        fn_8017E900(arg0);
    }
}

}
