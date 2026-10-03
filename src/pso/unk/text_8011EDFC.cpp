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

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct ShotVector { f32 x,y,z; };

struct ShotPayload { s32 reserved,kind,weapon; s16 source,target,collider,pad; f32 damage; };

struct Rec_8011F108 { u8 pad0[0xC]; f32 c; u8 pad1[0xC]; ShotVector pos; u8 pad2[4]; };

struct ShotStack { ShotVector rayOrigin,fallback,endpoint; ShotPayload hit; };

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
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s16 obj_getField1c(void *);
u8 *csnVector(void *, void *, M2C_UNK);
s32 get_field_d8__10TObjPlayerFPv(void *);
s32 is_mag_active__10TObjPlayerFPv(void *);
M2C_UNK spawn_item_attacker(int, void *, int, void *);
M2C_UNK fn_801094D8(int, void *, void *, void *, int);
f32 *get_weapon_range_record(void *, s16);
M2C_UNK TObjPlayer__sub_8011E3E8(void *);
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
Obj_8011F474 *resolve_hittable_target(s32, s32);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK rotate_matrix_y(int, void *);
M2C_UNK subtract_vector(void *, void *);
f32 normalize_vector(void *);
M2C_UNK push_matrix_from(void *);
M2C_UNK transform_point_by_current_matrix(void *, void *);
M2C_UNK pop_matrix();
f32 xyz_distance(void *, void *);
extern M2C_UNK lbl_8058D490[];
extern s32 tl_05;
extern const f32 lbl_805DAC98;
s32 launch_shot__11TItemWeaponFPvPviii(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

struct Obj_8011F474;
s32 launch_shot__11TItemWeaponFPvPviii(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_r31;
    ShotPayload hit;
    f32 *temp_r3_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_r4;
    f32 var_f31;
    s16 temp_r29;
    s32 var_r23;
    u8* temp_r22;
    u8* temp_r22_3;
    u8* temp_r3;
    s32 temp_r6;
    u8 *temp_r22_2;
    u8 *temp_r3_3;
    u8 *temp_r7;
    u8 *var_r29;
    var_r31 = 0;
    if (is_active_in_game__10TObjPlayerFPv((void *)(arg0)) != 0) {
        temp_r3 = (u8 *)get_extended_state__10TObjPlayerFPv((void *) (M2C_FIELD(arg0, u8 **, 0xF0)));
        if (temp_r3 != 0) {
            var_r23 = 0;
            var_r29 = (u8 *)(NULL);
            ShotVector endpoint = *(ShotVector *)arg1;
            if (arg2 < TObjPlayer__sub_8012125C(temp_r3)) {
                temp_r22 = (u8 *)TObjPlayer__sub_80121248(temp_r3,arg2);
                var_r29 = (u8 *)(((Obj_8011F474 *(*)(s32, s16))resolve_hittable_target)(((s32 (*)(void *))get_uid__10TObjPlayerFPv)(temp_r22),TObjPlayer__sub_80121238(temp_r22)));
                if (var_r29 != NULL) {
                    temp_r22_2 = (u8 *)&M2C_FIELD(var_r29, Rec_8011F108 **, 0xA4)[TObjPlayer__sub_80121238(temp_r22)];
                    VecCopy__FP3VecPC3Vec((void *) (&endpoint.x), (void *) &((Rec_8011F108 *)temp_r22_2)->pos);
                    subtract_vector((void *) (&endpoint.x), (void *) (arg1));
                    temp_f3 = normalize_vector((void *) (&endpoint.x)) - M2C_FIELD(temp_r22_2, f32 *, 0xC);
                    endpoint.x *= temp_f3;
                    endpoint.y *= temp_f3;
                    endpoint.z *= temp_f3;
                    vec3_add_to((void *) (&endpoint.x), (void *) (arg1));
                    var_r23 = 1;
                }
            }
            if (var_r23 == 0) {
                ShotVector fallback;
                push_matrix_from((void *) (lbl_8058D490));
                temp_r3_2 = (f32 *)(get_weapon_range_record(arg0, is_status_subsystem_ready__10TObjPlayerFPv((void *) (M2C_FIELD(arg0, u8 **, 0xF0)))));
                fallback.y = lbl_805DAC98;
                fallback.x = lbl_805DAC98;
                fallback.z = M2C_FIELD(temp_r3_2, f32 *, 0);
                rotate_matrix_y((int) (0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), s32 *, 0x60) + arg3));
                transform_point_by_current_matrix((void *) (&fallback.x), (void *) (&endpoint.x));
                pop_matrix();
                vec3_add_to((void *) (&endpoint.x), (void *) (arg1));
            }
            temp_r7 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xF0));
            ShotVector rayOrigin = *(ShotVector *)(temp_r7 + 0x2FC);
            rayOrigin.y = M2C_FIELD(arg1, f32 *, 4);
            temp_r3_3 = (u8 *)(csnVector(&rayOrigin.x, &endpoint.x, 0x8100));
            if (temp_r3_3 == NULL) {
                if (var_r29 != NULL) {
                    temp_r22_3 = (u8 *)TObjPlayer__sub_80121248(temp_r3,arg2);
                    temp_r22_2 = (u8 *)&M2C_FIELD(var_r29, Rec_8011F108 **, 0xA4)[TObjPlayer__sub_80121238(temp_r22_3)];
                    var_f31 = xyz_distance((void *) (arg1), (void *) &((Rec_8011F108 *)temp_r22_2)->pos) / M2C_FIELD(arg0, f32 *, 0x1E4);
                    if (arg4 != 0) {
                        remap_extra_attack_type((void *) (arg0));
                        hit.reserved = 0;
                        hit.kind = (s32) is_status_subsystem_ready__10TObjPlayerFPv((void *) (M2C_FIELD(arg0, u8 **, 0xF0)));
                        hit.source = obj_getField1c((void *) (M2C_FIELD(arg0, u8 **, 0xF0)));
                        hit.target = obj_getField1c((void *) (var_r29));
                        hit.weapon = get_field_d8__10TObjPlayerFPv((void *) (arg0));
                        hit.collider = TObjPlayer__sub_80121238(temp_r22_3);
                        hit.damage = ((f32 (*)(void *))query_extended_state__10TObjPlayerFPv)((void *) (M2C_FIELD(arg0, u8 **, 0xF0)));
                        spawn_item_attacker((int) (tl_05), (void *) (arg1), (int) ((s32) var_f31), (void *) (&hit.reserved));
                        var_r31 = 1;
                        restore_action_type__11TItemWeaponFPv((void *) (arg0));
                    }
                } else {
                    var_f31 = xyz_distance((void *) (arg1), (void *) (&endpoint.x)) / M2C_FIELD(arg0, f32 *, 0x1E4);
                }
            } else {
                VecCopy__FP3VecPC3Vec((void *) (&endpoint.x), (void *) (M2C_FIELD(temp_r3_3, u8 **, 4)));
                var_f31 = xyz_distance((void *) (arg1), (void *) (&endpoint.x)) / M2C_FIELD(arg0, f32 *, 0x1E4);
                if ((M2C_FIELD(M2C_FIELD(temp_r3_3, u8 **, 4), s32 *, 0x18) & 0x100) && ((u32) M2C_FIELD(arg0, u32 *, 0x1EC) != 0U)) {
                    fn_801094D8((int) (tl_05), (void *) (arg0), (void *) (arg1), (void *) (&endpoint.x), (int) ((s32) var_f31));
                }
            }
            TObjPlayer__sub_8011E3E8((void *) (arg0));
            if ((((M2C_UNK (*)(void *, void *, f32 *, f32)) M2C_FIELD(arg0, M2C_UNK (**)(void *, void *, f32 *, f32), 0x1F0)) != NULL) && (is_mag_active__10TObjPlayerFPv((void *) (arg0)) == 1)) {
                M2C_FIELD(arg0, M2C_UNK (**)(void *, void *, f32 *, f32), 0x1F0)(arg0, arg1, &endpoint.x, var_f31);
            }
        }
    }
    return var_r31;
}

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
