#include "types.h"
struct Obj_8011F474 { u8 pad0[0x38]; f32 pos[3]; };

struct Base_8011F474 { u8 pad0[0x18]; };

struct Pl_8011F474 : Base_8011F474 {
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
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void on_near(Obj_8011F474 *, Obj_8011F474 *, s16, s16);
};

struct PlSelf_8011F474 : Pl_8011F474 {
    u8 pad1C[0xF0 - 0x1C];
    Obj_8011F474 *owner;
};

extern "C" {
void restore_action_type__11TItemWeaponFPv(void *);
void remap_extra_attack_type(void *);
s32 is_active_in_game__10TObjPlayerFPv(void *);
s16 is_status_subsystem_ready__10TObjPlayerFPv(void *);
void *get_extended_state__10TObjPlayerFPv(void *);
void query_extended_state__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_80121238(void *);
u16 get_uid__10TObjPlayerFPv(void *);
void *TObjPlayer__sub_80121248(void *, s32);
s32 TObjPlayer__sub_8012125C(void *);
f32 horizontal_distance_squared(void *, void *);
Obj_8011F474 *resolve_hittable_target(s32, s32);
void TObjPlayer__sub_8011F474(PlSelf_8011F474 *self, f32 range);
}

extern "C" {

void TObjPlayer__sub_8011F474(PlSelf_8011F474 *self, f32 range) {
    Obj_8011F474 *obj;
    u16 uid;
    void *state;
    s32 i;
    void *ent;
    s32 id;
    s32 ready;
    if (is_active_in_game__10TObjPlayerFPv(self) != 0) {
        remap_extra_attack_type(self);
        state = get_extended_state__10TObjPlayerFPv(self->owner);
        if (state != NULL) {
            for (i = 0; i != TObjPlayer__sub_8012125C(state); i++) {
                ent = TObjPlayer__sub_80121248(state, i);
                uid = get_uid__10TObjPlayerFPv(ent);
                id = TObjPlayer__sub_80121238(ent);
                obj = resolve_hittable_target(uid, id);
                if (obj != NULL && horizontal_distance_squared(self->owner->pos, obj->pos) < range) {
                    ready = is_status_subsystem_ready__10TObjPlayerFPv(self->owner);
                    query_extended_state__10TObjPlayerFPv(self->owner);
                    self->on_near(self->owner, obj, ready, id);
                }
            }
        }
        restore_action_type__11TItemWeaponFPv(self);
    }
}

}
