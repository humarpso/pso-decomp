#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct G_800A3210 { u8 pad[0x18]; s32 arr[1]; };

struct Obj_800A2EDC { u8 pad0[0x18]; void *vt; u8 pad1c[0x3F0 - 0x1C]; void *items[4]; void *p400; void *p404; };

extern "C" {
M2C_UNK obj_clearFlags30(void *, s32);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TObjPlayer__sub_800A17B4(u8 *arg0);
int TObjPlayer__sub_800A1808(void* p);
M2C_UNK TOHangerMachine01__sub_803D9C00(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 obj_testFlags30(s32, s32);
M2C_UNK set_global_param__8TObjFishFi(s32);
extern s32 lbl_805D5014;
extern s32 lbl_805D5018;
extern s32 lbl_805D501C;
void render_shadow__10TObjPlayerFi(s32 arg0);
void TObjPlayer__sub_800A1974(void);
M2C_UNK TObjPlayer__sub_800A0728();
u32 get_enemy_entity(u16);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi(void *, M2C_UNK);
void handle_status_326__10TObjPlayerFPv(void *arg0);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
void set_hidden_flag__10TObjPlayerFPv(void *arg0);
f32 fn_8013157C(s32, s32);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
extern f32 lbl_805D9988;
void apply_fall_damage_flag__10TObjPlayerFi(s32 arg0);
void *TObjPlayer__sub_800A2F94(void *, void *, void *);
void *__nw__7TObjectFUl(int);
extern void *tl_04;
void *create_instance__10TObjPlayerFPv(void *arg0);
M2C_UNK TEneEffHamon__sub_800A380C();
void TLobby__sub_8001FE7C(void*, int);
void free_if_valid__10TObjPlayerFi(void*);
M2C_UNK reset_effect_count__10TObjPlayerFv();
extern u32 lbl_805D500C;
extern u32 lbl_805D5010;
void cleanup_effects__10TObjPlayerFv(void);
void TObjPlayer__sub_800A31F4(void);
void TObjPlayer__sub_800A31F8(void);
void TObjPlayer__sub_800A31FC(void);
int is_flag_set_388_bit26__10TObjPlayerFPv(void* p);
int TObjFish__sub_8001EDB0(void*, void*);
int TObjFish__sub_8001EDC4(void*);
extern u32 lbl_805D500C;
void set_fields_24_34_from_global__10TObjPlayerFPvPv(void* a0, void* a1);
void clear_counter__10TObjPlayerFPv(void* p);
void set_cancel_flag__10TObjPlayerFPv(void* p);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
s32 TObjPlayer__sub_800A3290(void *, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
void update_projectile_lifetime__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);
extern M2C_UNK lbl_804909C4[];
void *TObjPlayer__sub_800A3478(void *arg0, s16 arg1);
extern s32 lbl_805D5004;
f32 TObjPlayer__sub_800A3200(s32 arg0);
s32 TObjPlayer__sub_800A12C0(void *);
s32 update_hide_sequence__10TObjPlayerFPv(u8 *arg0);
s32 TObjPlayer__sub_800A16C4(void *);
s32 TObjPlayer__sub_800A1C84(void *);
s32 TObjPlayer__sub_800A1D70(void *);
s32 TObjPlayer__sub_800A1FEC(void *);
s32 TObjPlayer__sub_800A2390(void *);
s32 TObjPlayer__sub_800A27CC(void *);
void TObjPlayer__sub_800A1520(u8 *arg0);
extern s32 lbl_805D5004;
s32 TObjPlayer__sub_800A3210(s32 i, s32 _w1, s32 _w2);
M2C_UNK queue_destruction__7TObjectFv(void *);
void *TObjPlayer__sub_800A05B8(void *, s16);
void __dt__15TObjEnemyCustomFv(void *, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK __dl__7TObjectFPv(void *);
extern u8 lbl_804907EC[];
Obj_800A2EDC *TObjPlayer__sub_800A2EDC(Obj_800A2EDC *arg0, s16 arg1);
}

extern "C" {

void trigger_action_if_not_flagged__10TObjPlayerFPv(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK obj_clearFlags30(void *, s32);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);

extern const f32 lbl_805D9984;

s32 update_hide_sequence__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        obj_clearFlags30(arg0, 0x240300);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x800000);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        temp_r4 = temp_r5 & 0xFFB7FFFF;
        M2C_FIELD(arg0, s32 *, 0x388) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        M2C_FIELD(arg0, s16 *, 0x39C) = TObjPlayer__sub_800A3210((s32)(1), (s32)(temp_r4), (s32)(temp_r5));
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            TObjPlayer__sub_80011734(arg0, 0, lbl_805D9984);
        }
        update_collisions__10TObjPlayerFPv(arg0);
        temp_r3 = M2C_FIELD(arg0, s16 *, 0x39C) - 1;
        M2C_FIELD(arg0, s16 *, 0x39C) = (s16) temp_r3;
        if ((s16) temp_r3 <= 0) {
            set_hidden_flag__10TObjPlayerFPv((void *)(arg0));
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFF7FFFFF);
        break;
    }
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    TObjPlayer__sub_801B4A18(arg0, -1);
}

void trigger_action_if_not_flagged__10TObjPlayerFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x800000)) {
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 6);
    }
}

void TObjPlayer__sub_800A1520(u8 *arg0) {
  s16 temp_r0;
  temp_r0 = *((s16 *) (((0, (s8 *) arg0)) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        TObjPlayer__sub_800A27CC((void *) arg0);
        return;
      case 1:
        TObjPlayer__sub_800A2390(arg0);
        return;
      case 2:
        TObjPlayer__sub_800A1FEC((void *) arg0);
        return;
      case 4:
        TObjPlayer__sub_800A1D70((void *) arg0);
        return;
      case 3:
        TObjPlayer__sub_800A16C4((void *) arg0);
        return;
      case 5:
        TObjPlayer__sub_800A1C84((void *) arg0);
        return;
      case 6:
        update_hide_sequence__10TObjPlayerFPv((u8 *)((void *) arg0));
        return;
      case 8:
        TObjPlayer__sub_800A12C0((void *) arg0);
        break;
    }
  }
}

void TObjPlayer__sub_800A17B4(u8 *arg0) {
    obj_clearFlags30((void *)(arg0), (s32)(0x100U));
    TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x2FC), (int) (0xD7));
    TBoss3Volopt__sub_8022675C((int) (0x4003B22D), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}
int TObjPlayer__sub_800A1808(void* p) { return (*(u32*)((char*)p + 0x30) >> 23) & 0x1; }
void render_shadow__10TObjPlayerFi(s32 arg0) {
    if (obj_testFlags30(arg0, 0x800) == 0) {
        if (is_flag_set_388_bit26__10TObjPlayerFPv((void*)((s32)(arg0))) == 0) {
            set_global_param__8TObjFishFi(lbl_805D5014);
        } else {
            set_global_param__8TObjFishFi(lbl_805D5018);
        }
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x3B4);
        TObjFish__sub_803E46BC(lbl_805D501C);
        TObjPlayer__sub_803D9B78();
    }
}
void TObjPlayer__sub_800A1974(void) {  }
void handle_status_326__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 4) {
        if ((temp_r0 == 2) && (is_flag_set_388_bit26__10TObjPlayerFPv((void*)((s32)(arg0))) != 0) && (get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x428)) != 0U)) {
            TObjPlayer__sub_800A0728();
            return;
        }
        set_state__15TObjEneMe1GiGueFPvi(arg0, 4);
    }
}
void set_hidden_flag__10TObjPlayerFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800)) {
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x20000);
    }
}
void apply_fall_damage_flag__10TObjPlayerFi(s32 arg0) {
    M2C_UNK var_r4;
    if (fn_8013157C(arg0 + 0x38, arg0 + 0x50) > lbl_805D9988) {
        var_r4 = 8;
    } else {
        var_r4 = 0;
    }
    update_if_active__15TObjEneMe1GiGueFPv((void *)(arg0), (M2C_UNK)(var_r4));
}
void *create_instance__10TObjPlayerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x42C);
    if (o != NULL) {
        o = TObjPlayer__sub_800A2F94(o, tl_04, arg0);
    }
    return o;
}
void cleanup_effects__10TObjPlayerFv(void) {
    if ((u32) lbl_805D500C != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D500C, 1);
        lbl_805D500C = 0U;
    }
    if ((u32) lbl_805D5010 != 0U) {
        free_if_valid__10TObjPlayerFi((void*)lbl_805D5010);
        lbl_805D5010 = 0U;
    }
    reset_effect_count__10TObjPlayerFv();
    TEneEffHamon__sub_800A380C();
}

Obj_800A2EDC *TObjPlayer__sub_800A2EDC(Obj_800A2EDC *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vt = lbl_804907EC;
        TObjEneGibbles__sub_80156720(arg0);
        for (i = 0; i < 4; i++) {
            if (arg0->items[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->items[i]);
            }
        }
        if (arg0->p400 != NULL) {
            queue_destruction__7TObjectFv(arg0->p400);
        }
        if (arg0->p404 != NULL) {
            queue_destruction__7TObjectFv(arg0->p404);
        }
        TObjPlayer__sub_800A05B8((u8 *)arg0 + 0x408, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_800A31F4(void) {  }
void TObjPlayer__sub_800A31F8(void) {  }
void TObjPlayer__sub_800A31FC(void) {  }

f32 TObjPlayer__sub_800A3200(s32 arg0) {
    return M2C_FIELD((lbl_805D5004 + (arg0 * 4)), f32 *, 0);
}

s32 TObjPlayer__sub_800A3210(s32 i, s32 _w1, s32 _w2) {
    return (*(G_800A3210 * *)&lbl_805D5004)->arr[i];
}

int is_flag_set_388_bit26__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x388) >> 26) & 0x1; }
void set_fields_24_34_from_global__10TObjPlayerFPvPv(void* a0, void* a1) { *(int*)((char*)a0 + 0x34) = TObjFish__sub_8001EDC4((void*)((*(int *)&lbl_805D500C))); *(int*)((char*)a0 + 0x24) = TObjFish__sub_8001EDB0((void*)((*(int *)&lbl_805D500C)), a1); }
void clear_counter__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x340) = 0; }
void set_cancel_flag__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x340) = 1; }
void update_projectile_lifetime__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r0;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
    TBoss4Zako__sub_803D8910((void *) (arg0 + 0x38), (void *) (arg0 + 0xAC));
    {
        void *p = (void *) M2C_FIELD(arg0, void **, 0xD0);
        if (p != NULL) {
            copy_pos__11TNowLoadingFPvPv(p, (void *) (arg0 + 0x38));
        }
    }
    if (TObjPlayer__sub_800A3290((void *) (arg0), (int) (M2C_FIELD(arg0, u16 *, 0xC8))) != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC4) - 1;
    M2C_FIELD(arg0, s32 *, 0xC4) = temp_r0;
    if (temp_r0 <= 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
void *TObjPlayer__sub_800A3478(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804909C4;
        TObjEneGibbles__sub_80156720(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD0) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD0));
        }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
