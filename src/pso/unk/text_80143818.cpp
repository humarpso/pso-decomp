#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_409d1e { char pad[0x18]; };

struct VObj_18_409d1e : VBase_18_409d1e {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
};

extern "C" {
M2C_UNK construct_collider_proxy__10TObjPlayerFPv();
extern M2C_UNK __vt__10TObjMotion[];
extern s32 TObjMotion__class_name;
u8 *TObjMotion__ct(u8 *arg0);
}

extern "C" {

u8 *TObjMotion__ct(u8 *arg0) {
    construct_collider_proxy__10TObjPlayerFPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjMotion;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TObjMotion__class_name;
    ((VObj_18_409d1e *)(arg0))->m6();
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    return arg0;
}

}
