#include "types.h"

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
    virtual s16 m14();
};

struct RecoveredGlobal_80126334_lbl_804A2960 {
    s32 value;
    u8 remaining[0xF4];
};

struct RecoveredGlobal_80126414_lbl_804A05E8 {
    s32 value;
    u8 remaining[0x1C];
};

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *frozen_shooter_create(s32 arg0);
u8 get_slot_count__14TItemProShieldFPv(void *);
u8 * TItemWeapon__ct(void *, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, s32);
extern RecoveredGlobal_80126334_lbl_804A2960 lbl_804A2960;
u8 *frozen_shooter_ct(u8 *arg0, u8 *arg1, s32 _w2);
u8 * TItemTimerEvent__ct(void *, s16, s32);
extern RecoveredGlobal_80126414_lbl_804A05E8 lbl_804A05E8;
u8 *freeze_curse_timer_ct(u8 *arg0, s16 arg1, s32 arg2, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_80126334_lbl_804A2960_size[sizeof(RecoveredGlobal_80126334_lbl_804A2960) == 0xF8 ? 1 : -1];
u8 *frozen_shooter_ct(u8 *arg0, u8 *arg1, s32 _w2) {
    TItemWeapon__ct(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804A2960.value;
    set_status_flags__10TObjPlayerFPvUi(arg0, 0x22);
    if (get_slot_count__14TItemProShieldFPv(arg0) == 1) {
        *(s32 *)((s8 *)arg0 + 0x1F8) = 0xA;
        *(s32 *)((s8 *)arg0 + 0x200) = 0x1F5;
    } else {
        *(s32 *)((s8 *)arg0 + 0x1F8) = 1;
        *(s32 *)((s8 *)arg0 + 0x200) = 0x95;
    }
    *(s32 *)((s8 *)arg0 + 0x1FC) = 0;
    return arg0;
}

u8 *frozen_shooter_create(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x204));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(frozen_shooter_ct((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}
typedef char RecoveredGlobal_80126414_lbl_804A05E8_size[sizeof(RecoveredGlobal_80126414_lbl_804A05E8) == 0x20 ? 1 : -1];
u8 *freeze_curse_timer_ct(u8 *arg0, s16 arg1, s32 arg2, f32 farg0) {
    TItemTimerEvent__ct(arg0, arg1, arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804A05E8.value;
    *(f32 *)((s8 *)arg0 + 0x2C) = farg0;
    return arg0;
}

#include "types.h"

#include "types.h"

}
