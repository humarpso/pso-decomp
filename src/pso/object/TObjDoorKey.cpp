#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8018FF74 { char pad[0x18]; };
struct VObj_8018FF74 : Base_8018FF74 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
};
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__11TObjDoorKeyFv(void *arg0, s16 arg1);
void run_task__11TObjDoorKeyFv(void *arg0);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__5TOKeyFv(void *, M2C_UNK);
M2C_UNK fn_80154A00(void *);
M2C_UNK fn_80156720(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__11TObjDoorKeyFv(void *arg0) {
    struct VObj_8018FF74 *o = (struct VObj_8018FF74 *)arg0;
    o->m22();
}

extern M2C_UNK __vt__11TObjDoorKey[];

void *__dt__11TObjDoorKeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjDoorKey;
        fn_80154A00(arg0);
        fn_80156720(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF8));
            M2C_FIELD(arg0, u32 *, 0xF8) = 0U;
        }
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
