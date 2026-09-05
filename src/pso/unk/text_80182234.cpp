#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual M2C_UNK m19();
};
extern "C" {
s32 is_rader_map_active(void *);
void fn_801822D8(u8 *arg0);
}

extern "C" {

void fn_801822D8(u8 *arg0) {
    u8 *temp_r3;
    if (is_rader_map_active((void *) (arg0)) == 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    }
    ((VObj_18 *)(arg0))->m19();
    if (is_rader_map_active((void *) (arg0)) == 0) {
        temp_r3 = M2C_FIELD(arg0, u8 **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
    }
}

}
