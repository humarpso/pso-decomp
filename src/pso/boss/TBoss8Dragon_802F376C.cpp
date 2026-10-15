#include "types.h"
#include "pso/boss/TBoss8Dragon.h"

struct Stack_802F3A48 {
    s32 sp8;
    u8 trailing_storage[0x3C];
};

struct Vec_802F376C { f32 x, y, z; };

struct Ent_802F376C { u8 pad[0x38]; f32 x; f32 y; f32 z; };

struct Vec_802F3878 { f32 x, y, z; };

struct Ent_802F3878 { u8 pad[0x38]; f32 x; f32 y; f32 z; };

struct Vec_802F3974 { f32 x, y, z; };

struct Ent_802F3974 { u8 pad[0x38]; f32 x; f32 y; f32 z; };

extern "C" {
s32 __nw__7TObjectFUl(int);
s32 setup_attack_slot__12TBoss8DragonFiUiiiPv(void *, void *, void *, void *, void *);
s32 ct_attack_object__12TBoss8DragonFPviii(int, int, void *, void *);
extern s32 tl_04;
u16 obj_getField1c(void *);
f32 clamp_velocity__15TObjBoss2TunnelFv(void *);
Ent_802F376C *get_enemy_entity(u16);
u16 get_part_count_plus__12TBoss8DragonFl(void *, int);
extern u32 boss8_dragon_leader_part;
extern const f32 lbl_805DED48;
s32 is_closest_part__12TBoss8DragonFPv(Ent_802F376C *arg0);
u16 obj_getField1c(void *);
f32 clamp_velocity__15TObjBoss2TunnelFv(void *);
Ent_802F376C *get_enemy_entity(u16);
u16 get_part_count_plus__12TBoss8DragonFl(void *, int);
extern u32 boss8_dragon_leader_part;
extern const f32 lbl_805DED48;
extern const f32 lbl_805DED4C;
s32 push_apart_from_parts__12TBoss8DragonFPv(Ent_802F3878 *arg0);
u16 obj_getField1c(void *);
f32 clamp_velocity__15TObjBoss2TunnelFv(void *);
Ent_802F376C *get_enemy_entity(u16);
u16 get_part_count_plus__12TBoss8DragonFl(void *, int);
extern u32 boss8_dragon_leader_part;
extern const f32 lbl_805DED48;
extern const f32 lbl_805DED4C;
s32 is_near_other_part__12TBoss8DragonFPv(Ent_802F3974 *arg0);
}

extern "C" {

s32 is_closest_part__12TBoss8DragonFPv(Ent_802F376C *arg0) {
    Vec_802F376C v;
    f32 len;
    s32 i;
    if (boss8_dragon_leader_part == 0) {
        return 1;
    }
    v.x = arg0->x - arg0->x;
    v.y = lbl_805DED48;
    v.z = arg0->z - arg0->z;
    len = clamp_velocity__15TObjBoss2TunnelFv(&v);
    for (i = 1; i < 6; i++) {
        u16 id = get_part_count_plus__12TBoss8DragonFl((void *)boss8_dragon_leader_part, i);
        if (id != obj_getField1c(arg0)) {
            Ent_802F376C *e = get_enemy_entity(id);
            if (e != NULL) {
                v.x = e->x - arg0->x;
                v.y = lbl_805DED48;
                v.z = e->z - arg0->z;
                if (!(clamp_velocity__15TObjBoss2TunnelFv(&v) >= len)) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

#pragma push
#pragma fp_contract on
s32 push_apart_from_parts__12TBoss8DragonFPv(Ent_802F3878 *arg0) {
    Vec_802F3878 v;
    f32 d;
    s32 i;
    if (boss8_dragon_leader_part == 0) {
        return 0;
    }
    for (i = 0; i < 6; i++) {
        u16 id = get_part_count_plus__12TBoss8DragonFl((void *)boss8_dragon_leader_part, i);
        if (id != obj_getField1c(arg0)) {
            Ent_802F3878 *e = ((Ent_802F3878 *)get_enemy_entity(id));
            if (e != NULL) {
                v.x = e->x - arg0->x;
                v.y = lbl_805DED48;
                v.z = e->z - arg0->z;
                d = clamp_velocity__15TObjBoss2TunnelFv(&v) - lbl_805DED4C;
                if (!(d >= lbl_805DED48)) {
                    arg0->x = v.x * d + arg0->x;
                    arg0->z = v.z * d + arg0->z;
                    return 1;
                }
            }
        }
    }
    return 0;
}
#pragma pop

s32 is_near_other_part__12TBoss8DragonFPv(Ent_802F3974 *arg0) {
    Vec_802F3974 v;
    s32 i;
    if (boss8_dragon_leader_part == 0) {
        return 0;
    }
    for (i = 0; i < 6; i++) {
        u16 id = get_part_count_plus__12TBoss8DragonFl((void *)boss8_dragon_leader_part, i);
        if (id != obj_getField1c(arg0)) {
            Ent_802F3974 *e = ((Ent_802F3974 *)get_enemy_entity(id));
            if (e != NULL) {
                v.x = e->x - arg0->x;
                v.y = lbl_805DED48;
                v.z = e->z - arg0->z;
                if (!(clamp_velocity__15TObjBoss2TunnelFv(&v) >= lbl_805DED4C)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

s32 TBoss8Dragon::spawn_attack_object(s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 arg0 = (s32)this;
    Stack_802F3A48 stack;
    s32 temp_r3;
    s32 var_r0;
    if (setup_attack_slot__12TBoss8DragonFiUiiiPv((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg4), (void *) (&stack.sp8)) != 0) {
        temp_r3 = __nw__7TObjectFUl((int) (0x8A4));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = ct_attack_object__12TBoss8DragonFPviii((int) (temp_r3), (int) (tl_04), (void *) (&stack.sp8), (void *) (arg3));
        }
        return var_r0;
    }
    return 0;
}

}
