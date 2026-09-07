#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct VBase_14_0d3ae4 { char pad[0x14]; };

struct VObj_14_0d3ae4 : VBase_14_0d3ae4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual M2C_UNK m3();
    virtual void m4();
    virtual s32 m5();
};

struct RecoveredFields_8009060C_arg0 {
    u8 unknown_0[0x37C];
    s32 field_37C;
    u8 unknown_380[0x8];
    s32 field_388;
};

extern "C" {
void obj_clearFlags30(void *, u32);
void TObjEneBalClawClaw__sub_80090798(u8 *arg0);
void obj_setFlags30(void *, u32);
void TObjEneBalClawClaw__sub_800907DC(u8 *arg0);
int reset_active_state__18TObjEneBalClawClawFPv(void* p);
void TObjEneBalClawClaw__sub_8009060C(u8 *arg0);
}

extern "C" {

void TObjEneBalClawClaw__sub_80090824(void);
void TObjEneBalClawClaw__sub_80090828(void);
int reset_active_state__18TObjEneBalClawClawFPv(void* p);
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);

typedef char RecoveredFields_8009060C_arg0_37C_offset[offsetof(RecoveredFields_8009060C_arg0, field_37C) == 0x37C ? 1 : -1];
typedef char RecoveredFields_8009060C_arg0_388_offset[offsetof(RecoveredFields_8009060C_arg0, field_388) == 0x388 ? 1 : -1];
void TObjEneBalClawClaw__sub_8009060C(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = ((RecoveredFields_8009060C_arg0 *)arg0)->field_37C;
    switch (temp_r0) {
    case 0:
        ((VObj_14_0d3ae4 *)((u8 *)(arg0) + (912)))->m3();
        ((RecoveredFields_8009060C_arg0 *)arg0)->field_388 = (s32) (((RecoveredFields_8009060C_arg0 *)arg0)->field_388 | 5);
        ((RecoveredFields_8009060C_arg0 *)arg0)->field_37C = 1;
    case 1:
        if (((VObj_14_0d3ae4 *)((u8 *)(arg0) + (912)))->m5() == 1) {
            ((RecoveredFields_8009060C_arg0 *)arg0)->field_388 = (s32) (((RecoveredFields_8009060C_arg0 *)arg0)->field_388 & ~5);
            reset_active_state__18TObjEneBalClawClawFPv((void*)(arg0));
        }
        return;
    case -1:
        ((RecoveredFields_8009060C_arg0 *)arg0)->field_388 = (s32) (((RecoveredFields_8009060C_arg0 *)arg0)->field_388 & 0xFFFFFFFB);
        break;
    }
}

void TObjEneBalClawClaw__sub_80090798(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xEFFFFFFF);
    obj_clearFlags30(arg0, 0x06040000U);
    M2C_FIELD(arg0, s32 *, 0x374) = 0xB;
}

void TObjEneBalClawClaw__sub_800907DC(u8 *arg0) {
    obj_setFlags30(arg0, 0x04040000U);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xDFFFFFFF);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x10000000);
}

void TObjEneBalClawClaw__sub_80090824(void) {  }

void TObjEneBalClawClaw__sub_80090828(void) {  }
int reset_active_state__18TObjEneBalClawClawFPv(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 0); }

}
