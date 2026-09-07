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
    virtual M2C_UNK m12();
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
};

struct VBase_18_f23361 { char pad[0x18]; };

struct VObj_18_f23361 : VBase_18_f23361 {
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
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual M2C_UNK m25();
};

struct RecoveredGlobal_8010255C_lbl_8050BEC0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_8010255C_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK get_field_d8__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_80100E38(void *);
M2C_UNK update_timer__5TItemFPv(void *);
u16 get_id__13TItemProArmorFPv(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
M2C_UNK push_to_player_list__5TItemFPv();
void TItem__sub_80102748(u8 *arg0);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 clear_shadow_flag__10TObjPlayerFPv(void *);
s32 set_shadow_flag__10TObjPlayerFPv(void *);
s8 TObjPlayer__sub_80102C30(void *);
s32 func_80141618__Fv();
s32 set_depth_buffer_settings_id__FUl(int);
s32 reset_transform_state__10TObjPlayerFv();
s32 reset_key_machine_state__10TObjPlayerFv();
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern RecoveredGlobal_8010255C_lbl_8050BEC0 lbl_8050BEC0;
extern RecoveredGlobal_8010255C_lbl_8058D4C0 lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void TItem__sub_8010255C(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_8010255C_lbl_8050BEC0_size[sizeof(RecoveredGlobal_8010255C_lbl_8050BEC0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_8010255C_lbl_8058D4C0_size[sizeof(RecoveredGlobal_8010255C_lbl_8058D4C0) == 0x10 ? 1 : -1];
void TItem__sub_8010255C(u8 *arg0) {
    if (all_parents_unqueued_for_destruction__7TObjectFv((void *) (arg0)) != 0) {
        set_shadow_flag__10TObjPlayerFPv((void *) (arg0));
        if ((TObjPlayer__sub_80102C30((void *)((void *) (arg0))) == 2) && (reset_key_machine_state__10TObjPlayerFv() != 0)) {
            set_depth_buffer_settings_id__FUl((int) (1));
            lbl_805D5660 = some_id_805c6f74;
            lbl_805D5664 = lbl_805D7784;
            lbl_805D5668 = lbl_805D7780;
            copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8050BEC0.value), (void *) (&lbl_8058D4C0.value));
            ((VObj_18_f23361 *)(arg0))->m25();
            copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8058D4C0.value), (void *) (&lbl_8050BEC0.value));
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
            some_id_805c6f74 = lbl_805D5660;
            reset_transform_state__10TObjPlayerFv();
            func_80141618__Fv();
        }
        clear_shadow_flag__10TObjPlayerFPv((void *) (arg0));
    }
}

#pragma push
#pragma fp_contract on
void TItem__sub_80102748(u8 *arg0) {
    s8 temp_r3;
    u32 temp_r4;
    temp_r3 = TObjPlayer__sub_80102C30((void *)(arg0));
    switch (temp_r3) {
    case 0:
        update_timer__5TItemFPv((void *) (arg0));
        return;
    case 1:
        M2C_FIELD(arg0, u32 *, 0xF0) = TPlayerBattleCtrl4P__sub_801BA74C((void *) (get_id__13TItemProArmorFPv((void *) (arg0))));
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
            TObjPlayer__sub_80100E38((void *) (arg0));
            ((VObj_18 *)(arg0))->m12();
            ((VObj_18 *)(arg0))->m13();
        }
        break;
    case 2:
        M2C_FIELD(arg0, u32 *, 0xF0) = TPlayerBattleCtrl4P__sub_801BA74C((void *) (get_id__13TItemProArmorFPv((void *) (arg0))));
        temp_r4 = M2C_FIELD(arg0, u32 *, 0xF0);
        if (temp_r4 != 0U) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (temp_r4 + 0x38));
            TObjPlayer__sub_80100E38((void *) (arg0));
            ((VObj_18 *)(arg0))->m12();
            ((VObj_18 *)(arg0))->m14();
            get_field_d8__10TObjPlayerFPv((void *) (arg0));
            push_to_player_list__5TItemFPv();
        }
        break;
    }
}
#pragma pop

}
