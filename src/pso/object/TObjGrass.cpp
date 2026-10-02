#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_800BFB8C { s32 f0; s32 f4; s32 f8; s32 fc; };

struct D_800BFB8C { u8 pad[0x42c]; E_800BFB8C *entries; };

struct O_800BFB8C { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

struct O_800BFB68 { u8 pad[0x3d4]; s32 arr[12]; };

struct Obj_800BEE2C { u8 pad[0xb8]; s16 fb8; u8 pad2[0x326 - 0xba]; s16 f326; s16 f328; u8 pad3[0x3ac - 0x32a]; s32 f3ac; };

struct Obj_800BF880 { u8 pad0[0x18]; void *vt; u8 pad1c[0x3CC - 0x1C]; void *items[2]; };

typedef s32 M2C_UNK;
typedef struct Vec_800BE75C {
    f32 x, y, z;
} Vec_800BE75C;

typedef struct Range_800BE75C {
    f32 lo;
    f32 hi;
} Range_800BE75C;

typedef struct Grass_800BE75C {
    u8 pad0[0x38];
    Vec_800BE75C pos;
    u8 pad44[0x50 - 0x44];
    u8 mtx50[0x60 - 0x50];
    s32 f60;
    u8 pad64[0x2A8 - 0x64];
    s32 f2A8;
    u8 pad2AC[0x350 - 0x2AC];
    Range_800BE75C *range;
    u8 pad354[0x358 - 0x354];
    f32 f358;
    u8 pad35C[0x39C - 0x35C];
    s16 f39C;
} Grass_800BE75C;

struct Vec_800BEF8C { f32 x, y, z; };

struct VBase_18_800BEF8C { char pad[0x18]; };

struct VObj_18_800BEF8C : VBase_18_800BEF8C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16();
    virtual s32 m17(s32);
};

struct Vec_800BF66C { f32 x, y, z; };

struct Quad_800BF66C { s32 a, b, c, d; };

struct Ent8_800BF66C { s32 f0; s32 f4; };

struct Model_800BF66C { s32 f0; s32 f4; s32 f8; s32 fC; };

struct Data_800BF66C { u8 pad[0x42C]; Model_800BF66C *f42c; Ent8_800BF66C *f430; };

extern "C" {
s32 spawn_particle_effect(s32, s32);
void refresh_lobby_state__10TObjPlayerFPv(void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);
void TObjGrass__vt61(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void obj_clearFlags30(void *, u32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
s32 play_sound_effect(void *, void *, int, int);
extern const f32 TObjGrass__data_805D9EB8;
extern u32 TObjGrass__data_805D5154;
void TObjGrass__sub_800BFB8C(O_800BFB8C *self, s32 i);
void TObjGrass__sub_800BFB68(O_800BFB68 *self);
void TObjGrass__vt56(Obj_800BEE2C *self);
s32 queue_destruction__7TObjectFv(void *);
s32 __dt__18TObjEneMe3SinowZoaFPvs(void *, s16);
void __dt__9TObjEnemyFv(void *, int);
s32 TObjEneGibbles__sub_80156720(void *);
s32 __dl__7TObjectFPv(void *);
extern u8 __vt__9TObjGrass[];
Obj_800BF880 *__dt__9TObjGrassFv(Obj_800BF880 *arg0, s16 arg1);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
f32 TObjPlayer__sub_80017804(void *, Vec_800BE75C, f32);
M2C_UNK obj_setFlags30(void *, u32);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK advance_animation_playback(void *);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
f32 TBoss4Zako__sub_803D8910(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, s32);
s32 push_matrix_from(void *);
M2C_UNK TCameraCtrl__sub_803D9858(int);
extern u8 lbl_8058D490[];
extern const f32 TObjGrass__data_805D9EB8;
extern const f32 TObjGrass__data_805D9ED8;
u16 find_nearest_visible_player(void *, int, f32);
s32 check_path_obstructed(void *, void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, int);
s32 obj_getField1c(void *);
void obj_clearFlags30(void *, u32);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
u8 *get_enemy_entity(u16);
u8 *get_player_by_client_id(u16);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern M2C_UNK lbl_8043B790[];
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
void TObjGrass__vt26(u8 *arg0);
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
u8 *TLobby__sub_80020004(void *, int, void *, int, int, int);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 check_v2_mode__9TObjEneDDFv();
u8 *TObjEneDD__sub_800BB940(void *, void *);
M2C_UNK TBoss4Type3__sub_800D9960(void *, s32, s32, int, int);
u8 *TBoss4Type3__sub_800D9ABC(void *, int, f32, f32, f32);
s32 *alloc_buffer__11TOBoss4RockFPv(int);
M2C_UNK spawn_npc_enemy__6TLobbyFsiiiff(int, s32, s32, Quad_800BF66C *, f32, f32);
extern Quad_800BF66C lbl_8043B780;
extern M2C_UNK lbl_8043B7C0[];
extern M2C_UNK lbl_80492954[];
extern s32 lbl_80492964[];
extern Vec_800BF66C lbl_80500BD0;
extern s32 lbl_805D5140;
extern u32 TObjGrass__data_805D5144;
extern s32 lbl_805D5148;
extern s32 lbl_805D514C;
extern s32 TObjGrass__data_805D5150;
extern u32 TObjGrass__data_805D5154;
extern u32 lbl_805D5158;
extern u32 lbl_805D515C;
extern const f32 TObjGrass__data_805D9EB8;
extern const f32 lbl_805D9EF8;
extern const f32 lbl_805D9F00;
extern const f32 lbl_805D9F1C;
void TObjGrass__sub_800BF66C(void);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(int);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
s32 check_demo_mode__10TObjPlayerFv();
void TObjGrass__sub_800BCA2C(void *);
M2C_UNK TObjGrass__sub_800BCA30(void *);
M2C_UNK TObjGrass__sub_800BCE44(u8 *arg0);
M2C_UNK update__9TObjGrassFPv(u8 *arg0);
M2C_UNK TObjGrass__sub_800BD10C(void *);
M2C_UNK TObjGrass__sub_800BD4D8(void *);
M2C_UNK TObjGrass__sub_800BDD70(void *);
M2C_UNK TObjGrass__sub_800BE4C0(void *);
M2C_UNK TObjGrass__sub_800BE75C(Grass_800BE75C *o);
M2C_UNK TObjGrass__sub_800BE8FC(void *);
u8 *get_enemy_entity(u16);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK submit_cursor_candidate(void *, int);
u8 *get_player_by_client_id(u16);
extern const f32 TObjGrass__data_805D9EE8;
void run_task__9TObjGrassFv(u8 *arg0);
}

extern "C" {

s32 TObjGrass__vt34(void *arg0);
s32 TObjGrass__vt37(void *arg0);
void TObjGrass__vt57(void *arg0);
void TObjGrass__vt58(void *arg0);
void TObjGrass__vt59(void *arg0);
void TObjGrass__vt60(void *arg0);
void * create__9TObjGrassFPv(void *arg0);
void destroy_all__9TObjGrassFv(void);
M2C_UNK advance_animation_playback(void *);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
void *TObjControl__ct(void *, void *);
void *TObjGrass__ct(void *, void *, void *);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32);
s32 TObjPlayer__sub_80016D78();
s32 TObjPlayer__sub_80016FF8();
void __dt__11TBoss4Type3FPvs(void*, int);
void *__nw__7TObjectFUl(int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
void free__11TOBoss4RockFUi(void*);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
void obj_clearFlags30(void *, u32);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);

void TObjGrass__sub_800BCA2C(void * _w0) {  }

void TObjGrass__vt61(u8 *arg0) {
    u8 *temp_r6;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 8) {
        M2C_FIELD(arg0, s16 *, 0x326) = 8;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) & 0xFFFF7FFE);
        spawn_particle_effect((s32) (arg0 + 0x2FC), 0xF2);
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        send_entity_set_flags__6TLobbyFPv(arg0);
    }
}

#pragma fp_contract on
M2C_UNK TObjGrass__sub_800BCE44(u8 *arg0) {
  u8 *temp_r3;
  obj_clearFlags30((void *)((void *) arg0), (u32)((int) 0x04040000));
  advance_animation_playback((void *) arg0);
  *((f32 *) (((s8 *) arg0) + 0x310)) = (f32) TObjGrass__data_805D9EB8;
  *((f32 *) (((s8 *) arg0) + 0x308)) = (f32) TObjGrass__data_805D9EB8;
  apply_actor_gravity((void *)((void *) arg0), (M2C_UNK)((int) 0), (f32) TObjGrass__data_805D9EB8);
  update_collisions__10TObjPlayerFPv((void *) arg0);
  if (objInBand__FP7GameObjf((void *) arg0, (f32) TObjGrass__data_805D9EB8) != 0)
  {
    play_sound_effect((void *) ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x4003A603))), (void *) (arg0 + 0x38), (int) 0, (int) 0);
    play_effect_if_v2__10TObjPlayerFi((M2C_UNK)((int) (-0x200)));
  }
  if (((u32) (*((u32 *) (((s8 *) arg0) + 0xB4)))) != 8U)
  {
    *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xFFFFF9FF);
    temp_r3 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0xA4)));
    *((s32 *) (((s8 *) temp_r3) + 0x18)) = (s32) ((*((s32 *) (((s8 *) temp_r3) + 0x18))) & 0xFBFFFFFF);
    if (((f32) (*((s16 *) (((s8 *) arg0) + 0x32C)))) < (((f32) (*((s16 *) (((s8 *) arg0) + 0x2B8)))) * (*((f32 *) (((s8 *) arg0) + 0x354)))))
    {
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x2000);
      *((s32 *) (((s8 *) arg0) + 0x2A8)) = 0;
      *((s16 *) (((s8 *) arg0) + 0x338)) = (float) 0xFFFF;
      VecCopy__FP3VecPC3Vec((void *) (0x290 + arg0), (void *) (arg0 + 0x2FC));
      VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x29C), (void *) (arg0 + 0x2FC));
      *((f32 *) (((s8 *) arg0) + 0x398)) = (f32) TObjGrass__data_805D9EB8;
    }
    *((s16 *) (((s8 *) arg0) + 0x33E)) = (s16) (*((s16 *) (((s8 *) arg0) + 0x32C)));
  }
  TOTrapAncient01__sub_80226578((M2C_UNK)((void *) ((s32)copy_target_state__14TObjEnePanarmsFPvPv((void *)((void *) arg0), (M2C_UNK)((int) 0x4003A801)))), (void *)((void *) arg0), (void *)((void *) (arg0 + 0x38)), (M2C_UNK)(((int) 0) & 0xFFFFu), (M2C_UNK)((int) 0));
  play_effect_if_v2__10TObjPlayerFi((M2C_UNK)((int) (-0x200)));
  minimap_render_dot((void *)((void *) (arg0 + 0x38)), (M2C_UNK)((int) (-0x5DB4)), (M2C_UNK)((int) 1), (M2C_UNK)((int) 0));
}

void TObjGrass__vt60(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 7) {
        M2C_FIELD(arg0, s16 *, 0x326) = 7;
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
}

extern const f32 TObjGrass__data_805D9EB8;

M2C_UNK update__9TObjGrassFPv(u8 *arg0) {
    s16 temp_r4;

    obj_clearFlags30((void *)(arg0), (u32)(0x04040000));
    advance_animation_playback(arg0);
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        apply_actor_gravity(arg0, 0, TObjGrass__data_805D9EB8);
    }
    update_collisions__10TObjPlayerFPv(arg0);
    TOTrapAncient01__sub_80226578(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A801), arg0, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
    M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    }
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

void TObjGrass__vt59(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 6) {
        M2C_FIELD(arg0, s16 *, 0x326) = 6;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF9BFFFF);
}

extern const f32 TObjGrass__data_805D9EB8;

void TObjGrass__vt58(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x39E);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s16 *, 0x39E) = 0;
    case 0:
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        break;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x326) = 5;
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x326) = 4;
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) TObjGrass__data_805D9EB8;
        TObjGrass__sub_800BFB68((O_800BFB68 *)(arg0));
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x200000);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
}

M2C_UNK TObjGrass__sub_800BE75C(Grass_800BE75C *o) {
    Vec_800BE75C v;
    f32 d;
    f32 lo2;
    f32 hi2;
    obj_setFlags30(o, 0x04040000);
    advance_animation_playback(o);
    v.y = TObjGrass__data_805D9EB8;
    v.x = TObjGrass__data_805D9EB8;
    v.z = o->f358;
    push_matrix_from(lbl_8058D490);
    rotate_matrix_y(0, o->f60);
    rotate_vector_by_matrix(0, &v, &v);
    TCameraCtrl__sub_803D9858(1);
    TBoss4Zako__sub_803D8910(&v, o->mtx50);
    d = TObjPlayer__sub_80017804(o, v, TObjGrass__data_805D9ED8 * o->range->hi);
    lo2 = o->range->lo * o->range->lo;
    hi2 = o->range->hi * o->range->hi;
    if (lo2 < d || d < hi2) {
        o->f2A8 = 0;
        o->f39C = 0;
    }
    apply_actor_gravity(o, 0, TObjGrass__data_805D9EB8);
    TOTrapAncient01__sub_80226578(copy_target_state__14TObjEnePanarmsFPvPv(o, 0x4003A801), o, &o->pos, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
    minimap_render_dot(&o->pos, -0x5DB4, 1, 0);
}

void TObjGrass__vt57(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 >= 3) || (temp_r0 < 1)) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        if ((s16) M2C_FIELD(arg0, s16 *, 0x39C) == 2) {
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        } else {
            M2C_FIELD(arg0, s16 *, 0x326) = 2;
        }
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        obj_clearFlags30((void *)(arg0), (u32)(0x04040000));
    }
}

void TObjGrass__vt56(Obj_800BEE2C *self) {
    switch (self->f326) {
    case 0:
        switch (self->f328) {
        case 0:
        case 1:
            break;
        default:
            self->f328 = 2;
        case 2:
            if (self->f3ac != 0) {
                self->f328 = 0;
            }
            break;
        }
        break;
    default:
        self->f326 = 0;
        if (self->f3ac != 0) {
            self->f328 = 0;
        } else {
            self->f328 = 2;
        }
        self->fb8 = 1;
        break;
    }
}

s32 TObjGrass__vt37(void *arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x3AC) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            obj_clearFlags30((void *)(arg0), (u32)(0x04040000));
        }
        return 1;
    }
    return 0;
}

s32 TObjGrass__vt34(void *arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x3AC) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            obj_clearFlags30((void *)(arg0), (u32)(0x04040000));
        }
        return 1;
    }
    return 0;
}

extern void *tl_04;

void TObjGrass__vt26(u8 *arg0) {
    s32 best_id;
    s32 i;
    s32 id;
    u8 *p;
    f32 best;
    f32 d;
    u8 *q;
    u16 tid;
    if (((VObj_18_800BEF8C *)(arg0))->m17(0x1E) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x3AC) == 1) {
            M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFFU;
            M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
            return;
        }
        if (obj_testFlags30((void *) (arg0), 0x10) != 0) {
            i = 0;
            best_id = 0xFFFF;
            Vec_800BEF8C v = *(Vec_800BEF8C *)lbl_8043B790;
            best = M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x350), f32 *, 0) * M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x350), f32 *, 0);
            for (; i < lbl_805D586C + lbl_805D5870; i++) {
                p = get_player_data__10TObjPlayerFi(i);
                if (p == NULL) {
                    break;
                }
                id = obj_getField1c(p);
                if ((u16)id < 0x4000 && (u16)id != M2C_FIELD(arg0, u16 *, 0x1C) && !(M2C_FIELD(p, s32 *, 0x30) & 0x02000800)) {
                    f32 xx;
                    f32 zz;
                    VecCopy__FP3VecPC3Vec(&v, p + 0x2FC);
                    TBoss6Type1__sub_803D9370(&v, arg0 + 0x2FC);
                    xx = v.x * v.x;
                    zz = v.z * v.z;
                    d = xx + zz;
                    if (d < best && check_path_obstructed((void *) (arg0), p + 0x2FC) != 1) {
                        best_id = id;
                        best = d;
                    }
                }
            }
            M2C_FIELD(arg0, u16 *, 0x338) = best_id;
        } else {
            M2C_FIELD(arg0, u16 *, 0x338) = find_nearest_visible_player((void *) (arg0), 0, M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x350), f32 *, 0));
        }
        tid = M2C_FIELD(arg0, u16 *, 0x338);
        if (tid < 0x1000U) {
            q = get_player_by_client_id(tid);
            if (q != NULL) {
                if (get_field_3e4__10TObjPlayerFPv((int) (q)) == get_current_floor()) {
                    M2C_FIELD(arg0, u8 **, 0x2A8) = q;
                    obj_clearFlags30((void *) (arg0), 0x04040000);
                    return;
                }
            }
            M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
            return;
        }
        if (tid < 0x4000U) {
            M2C_FIELD(arg0, u8 **, 0x2A8) = get_enemy_entity(tid);
            obj_clearFlags30((void *) (arg0), 0x04040000);
        }
    }
}

void run_task__9TObjGrassFv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r30;
    u16 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r4;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjGrass__sub_800BCA2C((void *)((void *) (arg0)));
        return;
    }
    temp_r3 = M2C_FIELD(arg0, u16 *, 0x338);
    if (temp_r3 < 0x1000U) {
        temp_r3_2 = (u8 *)(get_player_by_client_id(temp_r3));
        if (temp_r3_2 != NULL) {
            if (get_field_3e4__10TObjPlayerFPv((int) (temp_r3_2)) == get_current_floor()) {
                M2C_FIELD(arg0, u8 **, 0x2A8) = temp_r3_2;
                goto done;
            }
        }
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    done:;
    } else if (temp_r3 < 0x4000U) {
        M2C_FIELD(arg0, u8 **, 0x2A8) = get_enemy_entity(temp_r3);
    } else {
        M2C_FIELD(arg0, u16 *, 0x338) = 0xFFFFU;
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            TObjGrass__sub_800BE8FC((void *) (arg0));
            break;
        case 1:
            TObjGrass__sub_800BE75C((Grass_800BE75C *)((void *) (arg0)));
            break;
        case 2:
            TObjGrass__sub_800BE4C0((void *) (arg0));
            break;
        case 3:
            TObjGrass__sub_800BDD70((void *) (arg0));
            break;
        case 4:
            TObjGrass__sub_800BD4D8((void *) (arg0));
            break;
        case 5:
            TObjGrass__sub_800BD10C((void *) (arg0));
            break;
        case 6:
            update__9TObjGrassFPv((u8 *)((void *) (arg0)));
            break;
        case 7:
            TObjGrass__sub_800BCE44((u8 *)((void *) (arg0)));
            break;
        case 8:
            TObjGrass__sub_800BCA30((void *) (arg0));
            break;
        case 9:
            break;
        }
    }
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2A8));
    if ((temp_r4 != NULL) && (M2C_FIELD(temp_r4, s32 *, 0x30) & 0x02000800)) {
        M2C_FIELD(arg0, s16 *, 0x33C) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        M2C_FIELD(arg0, u8 **, 0x2A8) = NULL;
    }
    update_prev_position__10TObjPlayerFPv((void *) (arg0));
    copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
    submit_cursor_candidate((void *) (arg0), (int) (-1));
    M2C_FIELD(arg0, f32 *, 0x2B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x2B4) + TObjGrass__data_805D9EE8);
}

void * create__9TObjGrassFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x404);
    if (o2 != NULL) {
        o2 = TObjGrass__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjGrass__data_805D5144;
extern u32 TObjGrass__data_805D5154;
extern u32 lbl_805D5158;
extern u32 lbl_805D515C;

void destroy_all__9TObjGrassFv(void) {
    if ((u32) TObjGrass__data_805D5144 != 0U) {
        free__11TOBoss4RockFUi((void*)TObjGrass__data_805D5144);
        TObjGrass__data_805D5144 = 0U;
    }
    if ((u32) lbl_805D515C != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D515C, 1);
        lbl_805D515C = 0U;
    }
    if ((u32) lbl_805D5158 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5158, 1);
        lbl_805D5158 = 0U;
    }
    if ((u32) TObjGrass__data_805D5154 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjGrass__data_805D5154, 1);
        TObjGrass__data_805D5154 = 0U;
    }
}

void TObjGrass__sub_800BF66C(void) {
    u8 *p;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        TObjGrass__data_805D5154 = (u32) TObjEneDD__sub_800BB940(lbl_80492954, lbl_8043B7C0);
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = TLobby__sub_80020004(p, 1, lbl_80492954, 0, 0, 0);
        }
        TObjGrass__data_805D5154 = (u32) p;
    }
    TObjGrass__data_805D5150 = 0;
    lbl_80500BD0.x = lbl_80500BD0.y = lbl_80500BD0.z = TObjGrass__data_805D9EB8;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = TBoss4Type3__sub_800D9ABC(p, 2, TObjGrass__data_805D9EB8, lbl_805D9EF8, lbl_805D9F1C);
    }
    lbl_805D5158 = (u32) p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = TBoss4Type3__sub_800D9ABC(p, 2, TObjGrass__data_805D9EB8, lbl_805D9EF8, lbl_805D9F1C);
    }
    lbl_805D515C = (u32) p;
    TBoss4Type3__sub_800D9960((void *) lbl_805D5158, ((Data_800BF66C *)TObjGrass__data_805D5154)->f42c->f8, ((Data_800BF66C *)TObjGrass__data_805D5154)->f430[lbl_80492964[9]].f4, 0x46, 0x48);
    TBoss4Type3__sub_800D9960((void *) lbl_805D515C, ((Data_800BF66C *)TObjGrass__data_805D5154)->f42c->f8, ((Data_800BF66C *)TObjGrass__data_805D5154)->f430[lbl_80492964[13]].f4, 0x3C, 0x3E);
    TObjGrass__data_805D5144 = (u32) alloc_buffer__11TOBoss4RockFPv(0xC);
    lbl_805D5140 = register_boss__6TLobbyFPv(0x4E);
    ((s32 *) TObjGrass__data_805D5144)[0] = dispatch_shared_handler_b__6TLobbyFPv(0x51);
    ((s32 *) TObjGrass__data_805D5144)[2] = dispatch_shared_handler_b__6TLobbyFPv(0x52);
    ((s32 *) TObjGrass__data_805D5144)[1] = dispatch_shared_handler_b__6TLobbyFPv(0x53);
    lbl_805D5148 = register_object__6TLobbyFPv(0x4D);
    lbl_805D514C = dispatch_shared_handler_a__6TLobbyFPv(0x4D);
    {
    Quad_800BF66C q = lbl_8043B780;
    q.a = (s32) ((Data_800BF66C *)TObjGrass__data_805D5154)->f430;
    spawn_npc_enemy__6TLobbyFsiiiff(0x35, ((Data_800BF66C *)TObjGrass__data_805D5154)->f42c->f8, ((Data_800BF66C *)TObjGrass__data_805D5154)->f42c->fC, &q, lbl_805D9F00, TObjGrass__data_805D9EB8);
    }
}

Obj_800BF880 *__dt__9TObjGrassFv(Obj_800BF880 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        i = 0;
        arg0->vt = __vt__9TObjGrass;
        do {
            if (arg0->items[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->items[i]);
                arg0->items[i] = NULL;
            }
            i++;
        } while (i < 2);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((u8 *)arg0 + 0x3B0, -1);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjGrass__sub_800BFB68(O_800BFB68 *self) {
    s32 i;
    for (i = 0; i < 12; i++) {
        self->arr[i] = 0;
    }
}

void TObjGrass__sub_800BFB8C(O_800BFB8C *self, s32 i) {
    self->f34 = (*(D_800BFB8C * *)&TObjGrass__data_805D5154)->entries[i].f8;
    self->f24 = (*(D_800BFB8C * *)&TObjGrass__data_805D5154)->entries[i].fc;
}

}
