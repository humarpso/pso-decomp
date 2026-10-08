#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8018A150_lbl_804B6C24 { M2C_UNK value; u8 remaining[0x148]; };

extern "C" {
u8 * construct_actor_base__10TObjPlayerFPvPv(void *);
u8 * init_vtable_804AF8D8__14TOAirconCave01FPv(void *);
M2C_UNK fn_80156CEC(void *);
M2C_UNK TLazerFenceSw__sub_8018A554(void *, f32);
extern RecoveredGlobal_8018A150_lbl_804B6C24 lbl_804B6C24;
extern s32 lbl_805D32E8;
extern const f32 lbl_805DBCF4;
extern const f32 lbl_805DBD00;
extern const f32 lbl_805DBD04;
extern const f32 lbl_805DBD08;
u8 *init_container_base(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

#pragma push
#pragma fp_contract on
u8 *init_container_base(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    construct_actor_base__10TObjPlayerFPvPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804B6C24.value;
    init_vtable_804AF8D8__14TOAirconCave01FPv(arg0 + 0x340);
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D32E8;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, f32 *, 0x334) = (f32) lbl_805DBD00;
    M2C_FIELD(arg0, f32 *, 0x338) = (f32) lbl_805DBD04;
    M2C_FIELD(arg0, f32 *, 0x33C) = (f32) lbl_805DBD00;
    if (M2C_FIELD(arg0, f32 *, 0x68) > lbl_805DBCF4) {
        M2C_FIELD(arg0, s32 *, 0x360) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x360) = 0;
    }
    fn_80156CEC((void *) (arg0 + 0x340));
    TLazerFenceSw__sub_8018A554((void *) (arg0 + 0x340), (f32) (lbl_805DBD08));
    M2C_FIELD(arg0, s32 *, 0x364) = 0;
    return arg0;
}
#pragma pop

}
