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

struct VBase_8012FB08 { char pad[0x18]; };

struct VObj_8012FB08 : VBase_8012FB08 {
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
    virtual s32 m49(void *, s32, s32, s32);
};

struct Self_8012FB08 : VObj_8012FB08 {
    u8 pad1C[0xF0 - 0x1C];
    u8 *owner;
    u8 padF4[0x1EC - 0xF4];
    void *f1EC;
    void *f1F0;
    u8 pad1F4[4];
    u8 f1F8[0xC];
    u8 f204[0xC];
};

extern "C" {
void draw_status_icons__10TObjPlayerFPvPv(void *, void *, void *);
void twin_psychogun_draw(u8 *arg0);
u8 * initialize_effect_object__10TObjPlayerFv(void *, s32, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_effect_object__10TObjPlayerFi(s32 arg0);
s32 is_mode_two_and_ready__10TObjPlayerFv(void *);
void launch_rare_weapon_special__10TObjPlayerFv(void *, void *, s32, f32);
void increment_burst_counter(void *);
void spawn_weapon_impact_effect(void);
void create_shoot_model_rot_z(void);
void create_gun_shot(void);
extern const f32 lbl_805DAFC8;
void twin_psychogun_marker(Self_8012FB08 *self);
}

extern "C" {

u8 *create_effect_object__10TObjPlayerFi(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x260));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(initialize_effect_object__10TObjPlayerFv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"

#include "types.h"

void twin_psychogun_marker(Self_8012FB08 *self) {
    u8 *p;
    s32 i;
    if (is_mode_two_and_ready__10TObjPlayerFv(self) != 0) {
        p = self->owner + 0x7CC;
        for (i = 0; i != 2; i++) {
            increment_burst_counter(p);
        }
        self->f1F0 = (void *)create_shoot_model_rot_z;
        self->f1EC = (void *)spawn_weapon_impact_effect;
        launch_rare_weapon_special__10TObjPlayerFv(self, self->f1F8, 1, lbl_805DAFC8);
        launch_rare_weapon_special__10TObjPlayerFv(self, self->f204, 0, lbl_805DAFC8);
    } else {
        self->f1F0 = (void *)create_gun_shot;
        self->f1EC = (void *)spawn_weapon_impact_effect;
        if (self->m49(self->f1F8, 0, 0, 1) != 0) {
            self->m49(self->f204, 0, 0, 0);
        } else {
            self->m49(self->f204, 0, 0, 1);
        }
    }
}

void twin_psychogun_draw(u8 *arg0) {
    draw_status_icons__10TObjPlayerFPvPv(arg0, arg0 + 0x1F8, arg0 + 0x204);
}

}
