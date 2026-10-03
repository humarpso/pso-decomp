#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_801AFCF4 { u8 pad[8]; };

struct VObj_801AFCF4 : VBase_801AFCF4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32, s32);
};

struct Player_801AFCF4 {
    u8 pad[0x380];
    VObj_801AFCF4 *obj;
};

extern "C" {
s32 fn_8000F740(void *);
u16 obj_getField1c(void *);
s32 has_valid_handle__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BD0C0(void *);
s32 sub_802a7290_fwd__10TObjPlayerFPv(void *);
extern u8 lbl_804FE120[];
void set_action_provider_variant__10TObjPlayerFPvs(Player_801AFCF4 *arg0, s16 arg1);
}

extern "C" {

void set_action_provider_variant__10TObjPlayerFPvs(Player_801AFCF4 *arg0, s16 arg1) {
    if (arg1 != sub_802a7290_fwd__10TObjPlayerFPv(arg0->obj) && fn_8000F740(lbl_804FE120) != 0) {
        arg0->obj->m4(obj_getField1c(arg0), has_valid_handle__10TObjPlayerFPv(arg0), arg1);
        TObjPlayer__sub_801BD0C0(arg0);
    }
}

}
