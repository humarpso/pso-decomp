#include "types.h"
#include "pso/items/TItemWeapon.h"

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
    virtual s32 m53();
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
    virtual s32 m53();
};

struct Trails_8011FE04 { u8 pad[0x18C]; void *trails[4]; };

extern "C" {

void TObjPlayer__sub_80100F34(void*);
void bind_loaded_resources__14TItemEquipBaseFv(void*);
s32 get_attack_stage__11TItemWeaponFv(void*);
void clear_equip_flags__10TObjPlayerFPvUi(void*,u32);
void set_status_flags__10TObjPlayerFPvUi(void*,u32);
s32 test_flag30_bit0x100000__10TObjPlayerFv(void*);
void register_technique_boosts__14TItemEquipBaseFPvPv(void*,void*);
s32 obj_isState7_324(void*);
void advance_weapon_photon_phase(void*);
s32 get_flag_40__8TItemMagFv(void*);
void TItemEffectWeapon__sub_8036340C(void*);
void TItemEffectWeapon__sub_80363410(void*);
extern const f32 lbl_805DAC9C;

u32 test_flags_1b8__10TObjPlayerFUl(void *, u32);
u32 test_flags_1b8__10TObjPlayerFUl(void *, u32);
s32 update_trail_slot__11TItemWeaponFPvi(void *, int);
s32 draw_weapon_model(void *);
s32 draw_weapon_at_joint(void *, int);
u32 test_flags_1b8__10TObjPlayerFUl(void *, u32);
s32 draw_weapon_model(void *);
s32 draw_weapon_at_joint(void *, int);
s32 get_field_d8__10TObjPlayerFv(void *);
u32 test_flags_1b8__10TObjPlayerFUl(void *, u32);
void render_trail__17TItemEffectWeaponFv(void *);
void push_id_to_list__10TObjPlayerFl(s32);
void draw_weapon_trails__11TItemWeaponFPv(u8 *arg0);
}

extern "C" {

void TItemWeapon::update_trails() {
    u8 *arg0 = (u8 *)this;
    if (test_flags_1b8__10TObjPlayerFUl(arg0, 0x400U) != 0U) {
        draw_weapon_at_joint((void *) (arg0), (int) (0x30));
        update_trail_slot__11TItemWeaponFPvi((void *) (arg0), (int) (0));
        draw_weapon_at_joint((void *) (arg0), (int) (0x23));
        update_trail_slot__11TItemWeaponFPvi((void *) (arg0), (int) (1));
        return;
    }
    if (test_flags_1b8__10TObjPlayerFUl(arg0, 1U) == 0U) {
        draw_weapon_model((void *) (arg0));
        update_trail_slot__11TItemWeaponFPvi((void *) (arg0), (int) (0));
        update_trail_slot__11TItemWeaponFPvi((void *) (arg0), (int) (1));
    }
}

void TItemWeapon::update_weapon_trails() {
    u8 *arg0 = (u8 *)this;
    if (((u32) *(u32 *)((s8 *)arg0 + 0xF0) != 0U) && (test_flags_1b8__10TObjPlayerFUl(arg0, 0xCU) == 0xCU) && (test_flags_1b8__10TObjPlayerFUl(arg0, 0x80U) == 0U)) {
        ((VObj_18_4841bb *)(arg0))->m53();
        update_trails();
    }
}
void TItemWeapon::draw_equipped_weapon() {
    u8 *arg0 = (u8 *)this;
    if (((u32) *(u32 *)((s8 *)arg0 + 0xF0) != 0U) && (test_flags_1b8__10TObjPlayerFUl(arg0, 0xCU) == 0xCU) && (test_flags_1b8__10TObjPlayerFUl(arg0, 0x80U) == 0U) && (test_flags_1b8__10TObjPlayerFUl(arg0, 0x1000U) == 0U)) {
        ((VObj_18_4841bb *)(arg0))->m53();
        if (test_flags_1b8__10TObjPlayerFUl(arg0, 0x400U) != 0U) {
            draw_weapon_at_joint((void *) (arg0), (int) (0x30));
            draw_weapon_at_joint((void *) (arg0), (int) (0x23));
            return;
        }
        if (test_flags_1b8__10TObjPlayerFUl(arg0, 1U) == 0U) {
            draw_weapon_model((void *) (arg0));
        }
    }
}
void draw_weapon_trails__11TItemWeaponFPv(u8 *arg0) {
    s32 count;
    if (((u32) *(u32 *)((s8 *)arg0 + 0xF0) != 0U) && (test_flags_1b8__10TObjPlayerFUl(arg0, 0xCU) == 0xCU) && (test_flags_1b8__10TObjPlayerFUl(arg0, 0x80U) == 0U)) {
        if (test_flags_1b8__10TObjPlayerFUl(arg0, 0x800U) != 0U) {
            push_id_to_list__10TObjPlayerFl(get_field_d8__10TObjPlayerFv(arg0));
            return;
        }
        ((VObj_18_8011FE04 *)(arg0))->m53();
        ((TItemWeapon *)arg0)->update_trails();
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
    if(test_flags_1b8__10TObjPlayerFUl(self,0x100)==0) {
        if(test_flags_1b8__10TObjPlayerFUl(self,0x4000)!=0) TObjPlayer__sub_80100F34(self);
        bind_loaded_resources__14TItemEquipBaseFv(self);
        stage=get_attack_stage__11TItemWeaponFv(self);
        if(stage!=self->stage) {
            clear_equip_flags__10TObjPlayerFPvUi(self,0x1000000);
            self->stage=stage;
        }
        if(stage>=0) set_status_flags__10TObjPlayerFPvUi(self,0x10);
        else clear_equip_flags__10TObjPlayerFPvUi(self,0x10);
        if(stage>=0 || test_flag30_bit0x100000__10TObjPlayerFv(self->player)) self->update_attack();
        else self->update_idle();
        if(self->motion) {
            self->motion_frame+=lbl_805DAC9C;
            frames=self->motion->frame_count;
            if((f32)frames<=self->motion_frame) self->motion_frame-=(f32)frames;
        }
        register_technique_boosts__14TItemEquipBaseFPvPv(self,self->material);
        self->update_weapon();
        if(!obj_isState7_324(self->player)) advance_weapon_photon_phase(self);
        if(get_flag_40__8TItemMagFv(self)) {
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

#include "types.h"

struct Pair_801200C0 { u8 a; u8 b; };

struct Data_801200C0 { u8 pad[0x16]; u8 max; u8 pad17[0x27 - 0x17]; u8 flags; };

struct Self_801200C0 { u8 pad[0x1a4]; Pair_801200C0 pairs[3]; u8 pad1aa[0x1d1 - 0x1aa]; u8 cur; u8 pad1d2[0x1dc - 0x1d2]; Data_801200C0 *data; };

extern "C" {
void TItemWeapon__sub_801200C0(Self_801200C0 *self);
}

extern "C" {

int TItemWeapon__sub_8012012C(void* p);

void TItemWeapon__sub_801200C0(Self_801200C0 *self) {
    s32 i;
    Pair_801200C0 *p;
    if (self->data->max < self->cur) {
        self->cur = 0;
    }
    if (self->data->flags & 8) {
        p = self->pairs;
        for (i = 0; i < 3; i++) {
            u8 a = p->a;
            s8 b = p->b;
            if (a <= 5 && b != 0) {
                p->a = 0;
                p->b = 0;
            }
            p++;
        }
    }
}

}

#include "types.h"

extern "C" {

int TItemWeapon__sub_8012012C(void* p);

int TItemWeapon__sub_8012012C(void* p) { return ((int (*)(void *, int))set_status_flags__10TObjPlayerFPvUi)(p, 4); }

}
