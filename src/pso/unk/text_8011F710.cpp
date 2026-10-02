#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct VBase_18_f8c4e0 { char pad[0x18]; };

struct VObj_18_f8c4e0 : VBase_18_f8c4e0 {
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
    virtual s32 m19(void *, s32, M2C_UNK, f32);
    virtual f32 m20(void *, f32);
    virtual void m21();
    virtual M2C_UNK m22(void *, s32);
    virtual M2C_UNK m23(void *, f32);
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual s32 m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual M2C_UNK m73();
};

struct Stack_8011F7CC {
    s8 sp8;
    s8 sp9;
    u8 pad_A[0x2];
    u8 * spC;
    u8 pad_10[0x4];
    u8 * sp14;
    s32 sp18;
};

struct Item_8011F760 { u8 pad[0x10]; s32 count; };

#include "pso/items/TItemWeapon.h"

struct Stats_8011F710 { u8 pad[0x16]; u8 max; };

struct Obj_8011F710 { u8 pad[0x1D1]; u8 cur; u8 pad2[0x1DC - 0x1D2]; Stats_8011F710 *stats; };

extern "C" {
s32 obj_getField1c(void *);
s8 get_field_ed__10TObjPlayerFPv(void *);
s8 TObjPlayer__sub_80102C30();
s8 get_slot_count__14TItemProShieldFPv(void *);
M2C_UNK TObjPlayer__sub_8011C620(void *);
M2C_UNK reset_status_block__10TObjPlayerFPv(void *);
f32 get_attack_accuracy_scale(void *);
M2C_UNK apply_camera_shake__10TObjPlayerFiii(void *, void *, int);
M2C_UNK TObjPlayer__sub_801CBF08(void *, int);
extern s32 tl_05;
extern const f32 lbl_805DAC94;
extern const f32 lbl_805DAC98;
void deliver_hit__11TItemWeaponFPviPviif(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s32 arg4, f32 farg0);
s32 lookup_item_data__20TWindowSubStatusDispFPv(void *);
Item_8011F760 *get_weapon_range_record(void *, s32);
u32 TObjPlayer__sub_8011F760(void *self);
s32 is_active_in_game__10TObjPlayerFPv(void*);
s32 get_flag_40__8TItemMagFPv(void*);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 TObjPlayer__sub_8011F63C(void*);
M2C_UNK reset_status_block__10TObjPlayerFPv(void *);
s8 get_field_ed__10TObjPlayerFPv(void *);
s8 get_slot_count__14TItemProShieldFPv(void *);
void TObjPlayer__sub_8011C7C8(void*);
u32 test_flags_1b8__10TObjPlayerFPvUi(void*,u32);
s32 obj_getField1c(void *);
void spawn_effect__11TBoss4Type3Fsss(s16,s16,s16);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void*);
void set_status_flags__10TObjPlayerFPvUi(void*,u32);
void draw_status_icon__10TObjPlayerFPvi(void*,WeaponVector*);
void TObjPlayer__sub_8011EB84(void*,WeaponVector*,s32,s32);
void update_active_game_effect__10TObjPlayerFPv(void*);

s32 refresh_owner_stats__5TItemFPv(Obj_8011F710 *arg0);
s32 add_weapon_grind(Obj_8011F710 *arg0, s32 arg1);
}

extern "C" {

s32 add_weapon_grind(Obj_8011F710 *arg0, s32 arg1) {
    if ((s32)(arg0->stats->max - (u8)arg1) < arg0->cur) {
        arg0->cur = arg0->stats->max;
    } else {
        arg0->cur += arg1;
    }
    refresh_owner_stats__5TItemFPv(arg0);
    return 1;
}

u32 TObjPlayer__sub_8011F760(void *self) {
    u32 flags = 0;
    Item_8011F760 *it;
    if (lookup_item_data__20TWindowSubStatusDispFPv(self) == 3) {
        flags |= 2;
    } else {
        flags |= 1;
    }
    it = get_weapon_range_record(self, 0);
    if (it != 0 && it->count > 1) {
        flags |= 4;
    }
    return flags;
}

void deliver_hit__11TItemWeaponFPviPviif(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s32 arg4, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_8011F7CC, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_8011F7CC, sp9) == 0x1) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8011F7CC, spC) == 0x4) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8011F7CC, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8011F7CC, sp18) == 0x10) ? 1 : -1];
    Stack_8011F7CC stack;
    f32 var_f31;
    f32 var_f31_2;
    s32 temp_r31;
    s32 temp_r31_2;
    u8 *temp_r3;
    u8 *temp_r3_2;
    if (TObjPlayer__sub_80102C30() == 2) {
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xF0));
        if ((temp_r3 != NULL) && (arg2 != NULL)) {
            var_f31 = get_attack_accuracy_scale((void *) (temp_r3 + 0x7CC));
            if ((arg3 == 2) && (((VObj_18_f8c4e0 *)(arg0))->m33() == 0)) {
                var_f31 *= lbl_805DAC94;
            }
            temp_r31 = arg4 * 0x2C;
            if (((VObj_18_f8c4e0 *)(arg2))->m19(M2C_FIELD(arg0, u8 **, 0xF0), M2C_FIELD(arg2, s32 *, 0xA4) + temp_r31, 0, var_f31) != 0) {
                var_f31_2 = lbl_805DAC98;
                switch (arg3) {
                case 0:
                    var_f31_2 = ((VObj_18_f8c4e0 *)(arg2))->m20(M2C_FIELD(arg0, u8 **, 0xF0), farg0);
                    break;
                case 1:
                    var_f31_2 = ((VObj_18_f8c4e0 *)(arg2))->m20(M2C_FIELD(arg0, u8 **, 0xF0), farg0);
                    ((VObj_18_f8c4e0 *)(arg2))->m23(M2C_FIELD(arg0, u8 **, 0xF0), lbl_805DAC94 * var_f31_2);
                    break;
                case 2:
                    ((VObj_18_f8c4e0 *)(arg2))->m22(M2C_FIELD(arg0, u8 **, 0xF0), M2C_FIELD(arg2, s32 *, 0xA4) + temp_r31);
                    break;
                }
                if (((M2C_UNK (*)(s32, void *, s32, s32)) M2C_FIELD(arg0, M2C_UNK (**)(s32, void *, s32, s32), 0x1F4)) != NULL) {
                    M2C_FIELD(arg0, M2C_UNK (**)(s32, void *, s32, s32), 0x1F4)(tl_05, arg0, obj_getField1c((void *) (arg2)), arg4);
                }
                temp_r31_2 = (s32) var_f31_2;
                TObjPlayer__sub_801CBF08((void *) (M2C_FIELD(arg0, u8 **, 0xF0)), (int) (temp_r31_2));
                temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xF0));
                ((VObj_18_f8c4e0 *)(temp_r3_2))->m73();
                apply_camera_shake__10TObjPlayerFiii((void *) (M2C_FIELD(arg0, u8 **, 0xF0)), (void *) (arg2), (int) (temp_r31_2));
                reset_status_block__10TObjPlayerFPv((void *) (&stack.sp8));
                stack.sp8 = get_field_ed__10TObjPlayerFPv((void *) (arg0));
                stack.sp9 = get_slot_count__14TItemProShieldFPv((void *) (arg0));
                stack.spC = (u8 *)(M2C_FIELD(arg0, u8 **, 0xF0));
                stack.sp14 = (u8 *)(arg2);
                stack.sp18 = arg4;
                TObjPlayer__sub_8011C620((void *) (&stack.sp8));
            }
        }
    }
}
}
void TItemWeapon::dispatch_attack_marker() {
    TItemWeapon* self=this;
    WeaponMarkerPacket packet;
    WeaponVector gun_point;
    WeaponVector fallback_point;
    if (is_active_in_game__10TObjPlayerFPv(self) && !get_flag_40__8TItemMagFPv(self) && reset_key_machine_state__10TObjPlayerFv()) {
        self->heading=self->player->heading;
        self->stage=TObjPlayer__sub_8011F63C(self);
        reset_status_block__10TObjPlayerFPv((void *)(&packet));
        packet.kind=get_field_ed__10TObjPlayerFPv((void *)(self));
        packet.variant=get_slot_count__14TItemProShieldFPv((void *)(self));
        packet.player=self->player;
        TObjPlayer__sub_8011C7C8(&packet);
        if(test_flags_1b8__10TObjPlayerFPvUi(self,0x40000)) {
            spawn_effect__11TBoss4Type3Fsss(0x80,5,(s16)obj_getField1c((void *)(self->player)));
        } else if(test_flags_1b8__10TObjPlayerFPvUi(self,0x80000) && is_mode_two_and_ready__10TObjPlayerFPv(self)) {
            spawn_effect__11TBoss4Type3Fsss(0x80,5,(s16)obj_getField1c((void *)(self->player)));
        }
        self->emit_marker_effects();
        set_status_flags__10TObjPlayerFPvUi(self,0x1000000);
        if(!test_flags_1b8__10TObjPlayerFPvUi(self,2)) {
            if(test_flags_1b8__10TObjPlayerFPvUi(self,0x8000)) {
                draw_status_icon__10TObjPlayerFPvi(self,&gun_point);
                TObjPlayer__sub_8011EB84(self,&gun_point,self->projectile,0);
                return;
            }
            if(test_flags_1b8__10TObjPlayerFPvUi(self,0x20000)) {
                update_active_game_effect__10TObjPlayerFPv(self);
                return;
            }
            draw_status_icon__10TObjPlayerFPvi(self,&fallback_point);
            self->deliver_projectile(&fallback_point,0,0,1);
        }
    }
}
