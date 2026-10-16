#include "types.h"
#include "pso/misc/TUnk_804AF8D8.h"
#include "pso/misc/TOAirconCave01.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_8018A150_lbl_804B6C24 { s32 value; u8 remaining[0x148]; };

extern "C" {
u8 * construct_actor_base__10TObjPlayerFPvPv(void *);
s32 TLazerFenceSw__sub_8018A554(void *, f32);
extern RecoveredGlobal_8018A150_lbl_804B6C24 lbl_804B6C24;
extern s32 lbl_805D32E8;
extern const f32 lbl_805DBCF4;
extern const f32 lbl_805DBD00;
extern const f32 lbl_805DBD04;
extern const f32 lbl_805DBD08;
u8 *init_container_base(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

#pragma push
#pragma fp_contract on
u8 *init_container_base(u8 *arg0, s32 arg1, s32 arg2) {
    construct_actor_base__10TObjPlayerFPvPv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804B6C24.value;
    ((TUnk_804AF8D8 *)(arg0 + 0x340))->init_vtable_804AF8D8();
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D32E8;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(f32 *)((s8 *)arg0 + 0x334) = (f32) lbl_805DBD00;
    *(f32 *)((s8 *)arg0 + 0x338) = (f32) lbl_805DBD04;
    *(f32 *)((s8 *)arg0 + 0x33C) = (f32) lbl_805DBD00;
    if (*(f32 *)((s8 *)arg0 + 0x68) > lbl_805DBCF4) {
        *(s32 *)((s8 *)arg0 + 0x360) = 1;
    } else {
        *(s32 *)((s8 *)arg0 + 0x360) = 0;
    }
    ((TUnk_804AF8D8 *)(arg0 + 0x340))->sub_80156CEC();
    TLazerFenceSw__sub_8018A554((void *) (arg0 + 0x340), (f32) (lbl_805DBD08));
    *(s32 *)((s8 *)arg0 + 0x364) = 0;
    return arg0;
}
#pragma pop

}
