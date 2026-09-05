#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void obj_clearFlags30(void *, u32);
void TObjEneBalClawClaw__sub_80090798(u8 *arg0);
void obj_setFlags30(void *, u32);
void TObjEneBalClawClaw__sub_800907DC(u8 *arg0);
}

extern "C" {

void TObjEneBalClawClaw__sub_80090824(void);
void TObjEneBalClawClaw__sub_80090828(void);
int reset_active_state__18TObjEneBalClawClawFPv(void* p);
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);

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
