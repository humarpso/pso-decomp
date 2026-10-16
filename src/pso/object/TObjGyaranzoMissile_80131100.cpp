#include "types.h"
#include "pso/object/TUnk_804A6DC0.h"

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

struct Obj_80131334 { u8 pad[0x1f8]; s32 state; };

struct Ent_80131488 { void *p; s32 a; s32 b; };

struct Obj_80131488 { Ent_80131488 *ents; u32 count; };

extern "C" {
void* yasminkov_2000h_ct(void *, s32, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_yasminkov_2000h(s32 arg0);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
extern s32 lbl_804A6DC0[];
void *TObjGyaranzoMissile__sub_8013136C(void *arg0, s16 arg1);
int TItemWeapon__ct(void);
extern unsigned char spawn_weapon_impact_effect[];
extern s32 lbl_804A6DC0[];
    extern const float lbl_805DB054;
    extern const float lbl_805DB060;
void* yasminkov_7000v_ct(void* a0, s32 _w1, void * _w2);
void* yasminkov_7000v_ct(void* a0, s32 _w1, void * _w2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_yasminkov_7000v(u8 *arg0);
f32 vec_squared_length();
f32 newton_sqrtf();
extern f32 lbl_805DB068;
extern f32 lbl_805DB06C;
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern s32 tl_05;
extern const f32 lbl_805DB050;
extern const float lbl_805DB054;
extern const f32 lbl_805DB058;
extern const f32 lbl_805DB05C;
void spawn_particle_effect(void *buf, s32 n);
extern u8 lbl_80506250[];
void TObjGyaranzoMissile__sub_80131488(Obj_80131488 *self);
}

extern "C" {

void yasminkov_7000v_node_callback(void* p);
int post_translate_matrix(void*);
int TItemWeapon__ct(void);
int get_player_list__10TObjPlayerFv(void*);

    extern unsigned char spawn_weapon_impact_effect[];
    extern unsigned char lbl_804A6CC8[];
    extern const float lbl_805DB038;
    extern const float lbl_805DB044;
    extern const float lbl_805DB04C;
void* yasminkov_2000h_ct(void* a0, s32 _w1, s32 _w2) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6CC8; *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)spawn_weapon_impact_effect; *(float*)((char*)a0 + 0x1e4) = lbl_805DB04C; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x204) = lbl_805DB038; *(float*)((char*)a0 + 0x200) = lbl_805DB038; *(float*)((char*)a0 + 0x1fc) = lbl_805DB038; *(int*)((char*)a0 + 0x208) = 0; *(float*)((char*)a0 + 0x214) = lbl_805DB044; *(float*)((char*)a0 + 0x210) = lbl_805DB044; *(float*)((char*)a0 + 0x20c) = lbl_805DB044; return a0; }

u8 *create_yasminkov_2000h(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x218));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)yasminkov_2000h_ct((void *)(temp_r3), (s32)(tl_05), (s32)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"

#include "types.h"
#include "pso/object/TObjGyaranzoMissile.h"
#include "pso/player/TObjPlayer.h"

void yasminkov_7000v_node_callback(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { post_translate_matrix((char*)p + 0x1fc); } }

#pragma push
#pragma opt_common_subs off
void TUnk_804A6DC0::update_weapon() {
    f32 buffer_14[3];
    s32 buffer_8[3];
    s32 temp_r0;
    s32 temp_r31;
    temp_r0 = *(s32 *)((s8 *)((u8 *)this) + 0x1F8);
    switch (temp_r0) {
    case 1:
        *(f32 *)((s8 *)((u8 *)this) + 0x200) = (f32) (*(f32 *)((s8 *)((u8 *)this) + 0x200) - lbl_805DB050);
        if (*(f32 *)((s8 *)((u8 *)this) + 0x200) <= (*(const f32 *)&lbl_805DB054)) {
            *(f32 *)((s8 *)((u8 *)this) + 0x200) = (f32) (*(const f32 *)&lbl_805DB054);
            *(s32 *)((s8 *)((u8 *)this) + 0x1F8) = 0;
            break;
        }
        break;
    case 2:
        *(f32 *)((s8 *)((u8 *)this) + 0x200) = (f32) (*(f32 *)((s8 *)((u8 *)this) + 0x200) + lbl_805DB050);
        if (lbl_805DB058 <= *(f32 *)((s8 *)((u8 *)this) + 0x200)) {
            *(f32 *)((s8 *)((u8 *)this) + 0x200) = (f32) lbl_805DB058;
            *(s32 *)((s8 *)((u8 *)this) + 0x1F8) = 3;
            break;
        }
        break;
    case 3:
        *(s32 *)((s8 *)((u8 *)this) + 0x1F8) = 1;
        temp_r31 = *(s32 *)((s8 *)(*(u8 **)((s8 *)((u8 *)this) + 0xF0)) + 0x60) - 0x4000;
        buffer_14[0] = sin_table_lookup(temp_r31);
        buffer_14[1] = lbl_805DB05C;
        buffer_14[2] = cos_table_lookup(temp_r31);
        buffer_8[0] = 0x4000;
        buffer_8[1] = *(s32 *)((s8 *)(*(u8 **)((s8 *)((u8 *)this) + 0xF0)) + 0x60);
        buffer_8[2] = 0;
        TObjPlayer::launch_weapon_casing(tl_05, (u32) ((u8 *)this), 2, (u32) &buffer_14[0], (u32) &buffer_8[0]);
        break;
    }
}
#pragma pop

void TUnk_804A6DC0::emit_marker_effects() {
    Obj_80131334 *self = (Obj_80131334 *)this;
    u8 buf[0x18];
    self->state = 2;
    ((TObjPlayer *)self)->draw_status_icon((s32)buf);
    spawn_particle_effect(buf, 9);
}

void *TObjGyaranzoMissile__sub_8013136C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A6DC0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
void* yasminkov_7000v_ct(void* a0, s32 _w1, void * _w2) { TItemWeapon__ct(); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)&lbl_804A6DC0); *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)spawn_weapon_impact_effect; *(float*)((char*)a0 + 0x1e4) = lbl_805DB060; *(int*)((char*)a0 + 0x1f8) = 0; *(float*)((char*)a0 + 0x204) = lbl_805DB054; *(float*)((char*)a0 + 0x200) = lbl_805DB054; *(float*)((char*)a0 + 0x1fc) = lbl_805DB054; return a0; }
u8 *create_yasminkov_7000v(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x208));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)yasminkov_7000v_ct((void*)((void *)(temp_r3)), (s32)((s32)(tl_05)), (void *)((void *)(arg0)))));
        }
        return var_r0;
    }
    return NULL;
}

void TObjGyaranzoMissile__sub_80131488(Obj_80131488 *self) {
    u32 i;
    for (i = 0; i < self->count; i++) {
        self->ents[i].p = lbl_80506250;
    }
}

f32 TObjGyaranzoMissile::scale_velocity(f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;
    if (vec_squared_length() > lbl_805DB068) {
        temp_f1 = newton_sqrtf();
        temp_f2 = farg0 / temp_f1;
        *(f32 *)&this->m_name = (f32) (*(f32 *)&this->m_name * temp_f2);
        *(f32 *)&this->m_flags = (f32) (*(f32 *)&this->m_flags * temp_f2);
        *(f32 *)&this->m_prev = (f32) (*(f32 *)&this->m_prev * temp_f2);
        return temp_f1;
    }
    return lbl_805DB06C;
}

#pragma push
#pragma fp_contract on
void TObjPlayer::horizontal_distance(u8 *arg1) {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    temp_f2 = *(f32 *)((s8 *)arg0 + 0);
    temp_f3 = *(f32 *)((s8 *)arg0 + 8) - *(f32 *)((s8 *)arg1 + 8);
    temp_f1 = temp_f2 - *(f32 *)((s8 *)arg1 + 0);
    ((f32 (*)(f32, f32, f32))newton_sqrtf)((temp_f1 * temp_f1) + (temp_f3 * temp_f3), temp_f2, temp_f3);
}
#pragma pop

}
