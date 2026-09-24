#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_800E2FB4 { u8 pad[0x378]; s32 state; };

extern "C" {
void TObjEnePanarms__sub_800E2DE4(void *arg0, s32 arg1);
s32 TObjPlayer__sub_800114D8(void *, void *, f32);
int TObjEnePanarms__sub_800E2F6C(u8 *arg0, s32 arg1, f32 farg0);
s32 TObjEnePanarms__sub_800E2FB4(O_800E2FB4 *self);
}

extern "C" {

u8 TObjEnePanarms__sub_800E2E54(void *arg0);
u8 TObjEnePanarms__sub_800E2E68(void *arg0);
u8 check_can_attack__14TObjEnePanarmsFPv(void *arg0);
int clear_render_callback__8TObjFishFv(void);
s32 create_bara__14TObjEnePanarmsFii(s32 arg0, s32 arg1);
u8 is_below_half_hp__14TObjEnePanarmsFPv(void *arg0);
u8 is_phase_12__14TObjEnePanarmsFPv(void *arg0);
s32 TObjControl__ct(s32, s32);
s32 TObjEnePanBARA__ct(s32, s32, s32, s32);
s32 TObjEnePanarms__sub_800DFB44(s32);
s32 __nw__7TObjectFUl(M2C_UNK);
int set_global_state__16TObjEneRe7BeruraFi(void*);

extern s32 tl_04;

s32 create_bara__14TObjEnePanarmsFii(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x470);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEnePanBARA__ct(var_r31, var_r4, arg0, arg1);
    }
    return var_r31;
}

void TObjEnePanarms__sub_800E2DE4(void *arg0, s32 arg1) {
  s32 *new_var;
  int new_var2;
  new_var2 = ~arg1;
  new_var = (s32 *) (((s8 *) arg0) + 0xB0);
  *new_var = (s32) ((*((s32 *) (((s8 *) arg0) + 0xB0))) & new_var2);
}

u8 is_phase_12__14TObjEnePanarmsFPv(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 0xC);
}

u8 check_can_attack__14TObjEnePanarmsFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 0) && (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

u8 TObjEnePanarms__sub_800E2E54(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 0xD);
}

u8 TObjEnePanarms__sub_800E2E68(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 0xE);
}

u8 is_below_half_hp__14TObjEnePanarmsFPv(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x380) == 0) && (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C0) == 0) && ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x3BC) / 2))) {
        var_r31 = 1;
    }
    return var_r31;
}

int TObjEnePanarms__sub_800E2F6C(u8 *arg0, s32 arg1, f32 farg0) {
    u16 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    temp_r3 = TObjPlayer__sub_800114D8((void *) (arg0), (void *) (arg1), (f32) (farg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFDFFFFFF);
    return temp_r3;
}

s32 TObjEnePanarms__sub_800E2FB4(O_800E2FB4 *self) {
    return self->state == 9 || self->state == 11;
}

int clear_render_callback__8TObjFishFv(void) { return set_global_state__16TObjEneRe7BeruraFi((void*)(0)); }

}
