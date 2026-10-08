#include "types.h"
#include "pso/items/TItemWeapon.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_4841bb { char pad[0x18]; };

struct VObj_18_4841bb : VBase_18_4841bb {
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
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
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
    virtual M2C_UNK m53();
};

struct VBase_18_8011FE04 { char pad[0x18]; };

struct VObj_18_8011FE04 : VBase_18_8011FE04 {
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
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
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
    virtual M2C_UNK m53();
};

struct Trails_8011FE04 { u8 pad[0x18C]; void *trails[4]; };

extern "C" {

void TObjPlayer__sub_80100F34(void*);
void bind_loaded_resources__14TItemEquipBaseFPv(void*);
s32 get_attack_stage__11TItemWeaponFPv(void*);
void clear_equip_flags__10TObjPlayerFPvUi(void*,u32);
void set_status_flags__10TObjPlayerFPvUi(void*,u32);
s32 test_flag30_bit0x100000__10TObjPlayerFPv(void*);
void register_technique_boosts__14TItemEquipBaseFPvPv(void*,void*);
s32 obj_isState7_324(void*);
void advance_weapon_photon_phase(void*);
s32 get_flag_40__8TItemMagFPv(void*);
void TItemEffectWeapon__sub_8036340C(void*);
void TItemEffectWeapon__sub_80363410(void*);
extern const f32 lbl_805DAC9C;

u32 test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
void update_weapon_trails__10TObjPlayerFPv(u8 *arg0);
u32 test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
M2C_UNK update_trail_slot__11TItemWeaponFPvi(void *, int);
M2C_UNK draw_weapon_model(void *);
M2C_UNK draw_weapon_at_joint(void *, int);
void update_trails__11TItemWeaponFPv(u8 *arg0);
u32 test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
M2C_UNK draw_weapon_model(void *);
M2C_UNK draw_weapon_at_joint(void *, int);
void draw_equipped_weapon__10TObjPlayerFPv(u8 *arg0);
M2C_UNK get_field_d8__10TObjPlayerFPv(void *);
u32 test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
void update_trails__11TItemWeaponFPv(u8 *arg0);
void render_trail__17TItemEffectWeaponFv(void *);
void push_id_to_list__10TObjPlayerFi(M2C_UNK);
void draw_weapon_trails__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void update_trails__11TItemWeaponFPv(u8 *arg0) {
    if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x400U) != 0U) {
        draw_weapon_at_joint((void *) (arg0), (int) (0x30));
        update_trail_slot__11TItemWeaponFPvi((void *) (arg0), (int) (0));
        draw_weapon_at_joint((void *) (arg0), (int) (0x23));
        update_trail_slot__11TItemWeaponFPvi((void *) (arg0), (int) (1));
        return;
    }
    if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 1U) == 0U) {
        draw_weapon_model((void *) (arg0));
        update_trail_slot__11TItemWeaponFPvi((void *) (arg0), (int) (0));
        update_trail_slot__11TItemWeaponFPvi((void *) (arg0), (int) (1));
    }
}

void update_weapon_trails__10TObjPlayerFPv(u8 *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0xCU) == 0xCU) && (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x80U) == 0U)) {
        ((VObj_18_4841bb *)(arg0))->m53();
        update_trails__11TItemWeaponFPv((u8 *)((void *) (arg0)));
    }
}
void draw_equipped_weapon__10TObjPlayerFPv(u8 *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0xCU) == 0xCU) && (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x80U) == 0U) && (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x1000U) == 0U)) {
        ((VObj_18_4841bb *)(arg0))->m53();
        if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x400U) != 0U) {
            draw_weapon_at_joint((void *) (arg0), (int) (0x30));
            draw_weapon_at_joint((void *) (arg0), (int) (0x23));
            return;
        }
        if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 1U) == 0U) {
            draw_weapon_model((void *) (arg0));
        }
    }
}
void draw_weapon_trails__10TObjPlayerFPv(u8 *arg0) {
    s32 count;
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0xCU) == 0xCU) && (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x80U) == 0U)) {
        if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x800U) != 0U) {
            push_id_to_list__10TObjPlayerFi(get_field_d8__10TObjPlayerFPv(arg0));
            return;
        }
        ((VObj_18_8011FE04 *)(arg0))->m53();
        update_trails__11TItemWeaponFPv(arg0);
        count = 0;
        do {
            void *trail = ((Trails_8011FE04 *)arg0)->trails[count];
            if (trail) {
                render_trail__17TItemEffectWeaponFv(trail);
            }
            count++;
        } while (count != 4);
    }
}

}
void TItemWeapon::update_active_weapon() {
    TItemWeapon* self=this;
    s32 stage;
    u32 frames;
    s32 count;
    s32 idle_count;
    if(test_flags_1b8__10TObjPlayerFPvUi(self,0x100)==0) {
        if(test_flags_1b8__10TObjPlayerFPvUi(self,0x4000)!=0) TObjPlayer__sub_80100F34(self);
        bind_loaded_resources__14TItemEquipBaseFPv(self);
        stage=get_attack_stage__11TItemWeaponFPv(self);
        if(stage!=self->stage) {
            clear_equip_flags__10TObjPlayerFPvUi(self,0x1000000);
            self->stage=stage;
        }
        if(stage>=0) set_status_flags__10TObjPlayerFPvUi(self,0x10);
        else clear_equip_flags__10TObjPlayerFPvUi(self,0x10);
        if(stage>=0 || test_flag30_bit0x100000__10TObjPlayerFPv(self->player)) self->update_attack();
        else self->update_idle();
        if(self->motion) {
            self->motion_frame+=lbl_805DAC9C;
            frames=self->motion->frame_count;
            if((f32)frames<=self->motion_frame) self->motion_frame-=(f32)frames;
        }
        register_technique_boosts__14TItemEquipBaseFPvPv(self,self->material);
        self->update_weapon();
        if(!obj_isState7_324(self->player)) advance_weapon_photon_phase(self);
        if(get_flag_40__8TItemMagFPv(self)) {
            count=0;
            do {
                void* trail=self->trails[count];
                if(trail) TItemEffectWeapon__sub_8036340C(trail);
                count++;
            } while(count!=4);
            return;
        }
        idle_count=0;
        do {
            void* trail=self->trails[idle_count];
            if(trail) TItemEffectWeapon__sub_80363410(trail);
            idle_count++;
        } while(idle_count!=4);
    }
}
