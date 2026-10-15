#include "types.h"

struct VBase_18_409d1e { char pad[0x18]; };

struct VObj_18_409d1e : VBase_18_409d1e {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual s32 m6();
};

extern "C" {
s32 construct_collider_proxy__10TObjPlayerFPv();
extern s32 __vt__10TObjMotion[];
extern s32 TObjMotion__class_name;
u8 *TObjMotion__ct(u8 *arg0);
}

extern "C" {

u8 *TObjMotion__ct(u8 *arg0) {
    construct_collider_proxy__10TObjPlayerFPv();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TObjMotion;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjMotion__class_name;
    ((VObj_18_409d1e *)(arg0))->m6();
    *(s32 *)((s8 *)arg0 + 0xD8) = 0;
    *(s32 *)((s8 *)arg0 + 0xF8) = 0;
    *(s32 *)((s8 *)arg0 + 0xDC) = 0;
    *(s32 *)((s8 *)arg0 + 0xE0) = 0;
    *(s32 *)((s8 *)arg0 + 0xAC) = 0;
    return arg0;
}

}
