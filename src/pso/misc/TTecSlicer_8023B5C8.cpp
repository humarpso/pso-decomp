#include "types.h"
#include "pso/misc/TTecSlicer.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8023B770_lbl_8044DC20
{
  M2C_UNK value;
  u8 remaining[0x44];
};

struct RecoveredFields_8023B770_var_r29
{
  u8 unknown_0[0x5C];
  s32 field_5C;
  s32 field_60;
  s32 field_64;
};

struct Vec_8023B72C { f32 x, y, z; };

struct Obj_8023B72C { u8 pad[0x38]; Vec_8023B72C mid; };

struct VBase_18_ed5691 { char pad[0x18]; };

struct VObj_18_ed5691 : VBase_18_ed5691 {
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
    virtual M2C_UNK m59(s32, s32, s16, s32, f32);
};

struct VBase_18_8023B900 { char pad[0x18]; };

struct VObj_18_8023B900 : VBase_18_8023B900 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

typedef s32 M2C_UNK;
struct Init_8023BBB4 {
    u16 f0;
    u8 pad2[2];
    s32 f4;
    s32 f8;
    s32 fc;
    s16 f10;
    s16 f12;
    f32 f14;
    u8 color[0x10];
    s32 f28;
    s32 f2c;
    Vec_8023B72C a;
    Vec_8023B72C b;
};

struct Slicer_8023BBB4 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    u8 pad1c[8];
    s32 f24;
    u8 pad28[0x10];
    Vec_8023B72C pos;
    u8 pad44[0x4C];
    Vec_8023B72C dir;
    Vec_8023B72C v9c;
    Vec_8023B72C va8;
    f32 fb4;
    f32 fb8;
    f32 fbc;
    u8 fwd[4];
    u16 fc4;
    s8 fc6;
    u8 pad_c7;
    u8 fc8[0x20];
    u8 fe8[0x20];
    s32 f108;
    s32 f10c;
    s32 f110;
    u16 f114;
    u8 pad116[2];
    s32 f118;
    s16 f11c;
    s16 f11e;
    f32 f120;
    s32 f124;
    u8 color[0x10];
    s32 f138;
    s32 f13c;
};

extern "C" {
M2C_UNK TBoss6Type1__sub_803D9370(s32, s32);
M2C_UNK TNpcPlayer__sub_803D97B4(s32);
f32 horizontal_distance_squared(s32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
s32 get_next_captured_target(s32, s32, s32, s32, s32);
M2C_UNK set_flags__10TObjPlayerFPvUi(s32, M2C_UNK);
extern f32 lbl_805DC958;
void update__10TTecSlicerFi(s32 arg0);
void update__10TTecSlicerFi(s32 arg0);
s32 test_flags_any(void *, M2C_UNK);
u32 get_player_by_client_id(u16);
M2C_UNK __ct__14TSlicerHistoryFv(void *, void *, s32, void *, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK allow_rendering__7TObjectFv(void *);
M2C_UNK copy_position__15TEffStarLight2DFPv(void *, void *);
void destroy_on_collision__10TTecSlicerFi(s32 arg0, s32);
u32 query_game_join_id__10TObjPlayerFv(s32);
M2C_UNK queue_destruction__7TObjectFv(s32);
void run_task__10TTecSlicerFv(u8 *arg0);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void dt__10TTecSlicerFis(void *, int);
M2C_UNK queue_destruction__7TObjectFv(s32);
extern M2C_UNK __vt__10TTecSlicer[];
void *__dt__10TTecSlicerFv(void *arg0, s16 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void advance_position__10TTecSlicerFPv(u8 *arg0);
int has_valid_handle__10TObjPlayerFPv(void *);
s16 get_remain_count__10TTecSlicerFPv(void *);
s32 TObjPlayer__sub_803D9B2C(void);
s32 pop_matrix(void);
extern RecoveredGlobal_8023B770_lbl_8044DC20 lbl_8044DC20;
void TTecSlicer__sub_8023B770(M2C_UNK *arg0, M2C_UNK *arg1, s32 arg2);
M2C_UNK spawn_item_timer__13TItemAttackerFiii(int, void *, int);
u32 get_player_by_client_id(u16);
u32 __nw__7TObjectFUl(M2C_UNK);
void destroy_if_set__10TTecSlicerFUi(u32);

extern const f32 lbl_805DC954;
void set_launch_midpoint__10TTecSlicerFPvPvPvPv(Obj_8023B72C *self, void *unused, Vec_8023B72C *a, Vec_8023B72C *b);
f32 horizontal_distance_squared(s32, s32);
s32 resolve_hittable_target(int, int);
void deliver_target_hit__10TTecSlicerFPv(u8 *arg0);
u32 query_game_join_id__10TObjPlayerFv(s32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 all_parents_unqueued_for_destruction__7TObjectFv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(u32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
s32 TObjPlayer__sub_803D9B2C(void);
s32 pop_matrix(void);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_ginja_object(u32);
M2C_UNK set_chunk_material_color(void *);
extern u8 lbl_804A7418[];
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DC95C;
extern const f32 lbl_805DC960;
void render__10TTecSlicerFv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void disallow_rendering__7TObjectFv(void *);
M2C_UNK set_flags__10TObjPlayerFPvUi(s32, M2C_UNK);
void init_forward__10TObjPlayerFPv(void *);
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 find_item_by_id(s32);
void set_item_count__6TLobbyFPvs(void *, s32);
s32 TLobby__sub_80103AD4(void);
f32 *get_weapon_range_record(s32, s32);
s32 get_extended_state__10TObjPlayerFPv(s32);
s8 TObjPlayer__sub_80121238(s32);
s32 get_uid__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_80121248(s32, s32);
s32 TObjPlayer__sub_8012125C(s32);
void TPhotonMagicSquare__sub_801A2640(void *, s32);
void fn_8023B590(void *, s32, s32);
void reset_fields_1e__10TTecSlicerFPv(void* p);
void set_launch_midpoint__10TTecSlicerFPvPvPvPv(Obj_8023B72C *self, void *unused, Vec_8023B72C *a, Vec_8023B72C *b);
void TTecSlicer__sub_8023B770(M2C_UNK *arg0, M2C_UNK *arg1, s32 arg2);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TNpcPlayer__sub_803D97B4(s32);
extern M2C_UNK __vt__10TTecSlicer[];
extern s32 lbl_805D3828;
extern s32 tl_05;
extern const f32 lbl_805DC950;
extern const f32 lbl_805DC964;
s32 TTecSlicer__ct(void *arg0, void *arg1, void *arg2, void *arg3, int arg4);
}

extern "C" {

void reset_fields_1e__10TTecSlicerFPv(void* p);
u32 csnVector(s32, s32, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(s32);

void reset_fields_1e__10TTecSlicerFPv(void* p) { *(u8*)((char*)p + 0x1e) = 0; *(u8*)((char*)p + 0x1f) = 0; }

void deliver_target_hit__10TTecSlicerFPv(u8 *arg0) {
    f32 dist;
    f32 range;
    s32 temp_r3;
    u8 *temp_r3_2;
    if (M2C_FIELD(arg0, u16 *, 0xC4) != 0xFFFF) {
        dist = horizontal_distance_squared((s32) (arg0 + 0x9C), (s32) (arg0 + 0x38));
        range = M2C_FIELD(arg0, f32 *, 0xB8) + M2C_FIELD(arg0, f32 *, 0xBC);
        if (dist < range * range) {
            temp_r3 = resolve_hittable_target(M2C_FIELD(arg0, u16 *, 0xC4), M2C_FIELD(arg0, s8 *, 0xC6));
            if (temp_r3 != 0) {
                temp_r3_2 = M2C_FIELD(arg0, u8 **, 0x108);
                ((VObj_18_ed5691 *)(temp_r3_2))->m59(M2C_FIELD(arg0, s32 *, 0x10C), temp_r3, M2C_FIELD(arg0, s16 *, 0x11C), M2C_FIELD(arg0, s8 *, 0xC6), M2C_FIELD(arg0, f32 *, 0x120));
            }
        }
    }
}

void destroy_on_collision__10TTecSlicerFi(s32 arg0, s32 _w1) {
    if (csnVector(arg0 + 0x44, arg0 + 0x38, 0x8100) != 0U) {
        queue_destruction__7TObjectFv(arg0);
    }
}

#pragma push
#pragma fp_contract on
void advance_position__10TTecSlicerFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec((s32)(arg0 + 0x44), (s32)(arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) ((M2C_FIELD(arg0, f32 *, 0x90) * M2C_FIELD(arg0, f32 *, 0xB4)) + M2C_FIELD(arg0, f32 *, 0x38));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x94) * M2C_FIELD(arg0, f32 *, 0xB4)) + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((M2C_FIELD(arg0, f32 *, 0x98) * M2C_FIELD(arg0, f32 *, 0xB4)) + M2C_FIELD(arg0, f32 *, 0x40));
}
#pragma pop

typedef struct RecoveredFields_8023B770_var_r29 RecoveredFields_8023B770_var_r29;
typedef struct RecoveredGlobal_8023B770_lbl_8044DC20 RecoveredGlobal_8023B770_lbl_8044DC20;
typedef char RecoveredGlobal_8023B770_lbl_8044DC20_size[((sizeof(RecoveredGlobal_8023B770_lbl_8044DC20)) == 0x48) ? (1) : (-1)];

void set_launch_midpoint__10TTecSlicerFPvPvPvPv(Obj_8023B72C *self, void *unused, Vec_8023B72C *a, Vec_8023B72C *b) {
    f32 t;
    t = a->x + b->x;
    t *= lbl_805DC954;
    self->mid.x = t;
    t = a->y + b->y;
    t *= lbl_805DC954;
    self->mid.y = t;
    t = a->z + b->z;
    t *= lbl_805DC954;
    self->mid.z = t;
}

void TTecSlicer__sub_8023B770(M2C_UNK *arg0, M2C_UNK *arg1, s32 arg2) {
  M2C_UNK *var_r29;
  M2C_UNK *var_r30;
  M2C_UNK *var_r3;
  s32 temp_r0;
  s32 var_r31;
  var_r29 = arg0;
  var_r30 = (M2C_UNK *) arg1;
  var_r31 = arg2;
  TObjPlayer__sub_803D9B2C();
  ((RecoveredFields_8023B770_var_r29 *) var_r29)->field_60 = var_r31;
  var_r3 = (M2C_UNK *) var_r29;
  ((RecoveredFields_8023B770_var_r29 *) var_r29)->field_5C = -0x4000;
  var_r31 = (s32) get_remain_count__10TTecSlicerFPv(var_r3);
  var_r3 = (M2C_UNK *) var_r30;
  temp_r0 = has_valid_handle__10TObjPlayerFPv(var_r3) * 3;
  var_r3 = (M2C_UNK *) (&lbl_8044DC20.value);
  var_r3 = (M2C_UNK *) (&lbl_8044DC20.value);
  ((RecoveredFields_8023B770_var_r29 *) var_r29)->field_64 = (s32) (*((M2C_UNK *) (((s8 *) (&lbl_8044DC20.value)) + ((var_r31 + temp_r0) * 4))));
  pop_matrix();
}

void update__10TTecSlicerFi(s32 arg0) {
    if (horizontal_distance_squared(arg0 + 0x38, arg0 + 0xA8) < lbl_805DC958) {
        deliver_target_hit__10TTecSlicerFPv((u8 *)(arg0));
        if (get_next_captured_target(arg0 + 0xC8, arg0 + 0xA8, arg0 + 0xC4, arg0 + 0xC6, arg0 + 0xBC) == 0) {
            set_flags__10TObjPlayerFPvUi(arg0 + 0xC0, 1);
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x90, arg0 + 0xA8);
            TBoss6Type1__sub_803D9370(arg0 + 0x90, arg0 + 0x38);
        }
        TNpcPlayer__sub_803D97B4(arg0 + 0x90);
    }
}

}

s32 TTecSlicer::create(u16 *arg0) {
    s32 var_r0;
    s32 var_r31;
    u8 *temp_r3;
    var_r31 = 0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(((u8 *)get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0))));
        if (temp_r3 != NULL) {
            var_r0 = ((s32)__nw__7TObjectFUl((M2C_UNK)((int) (0x140))));
            if (var_r0 != 0) {
                var_r0 = TTecSlicer__ct((void *)((void *)var_r0), (void *)((void *)arg0), (void *)((void *)temp_r3), (void *)((void *) ((u8 *)(temp_r3) + 0x38)), (int)((int) (M2C_FIELD(temp_r3, s32 *, 0x60))));
            }
            var_r31 = var_r0;
            spawn_item_timer__13TItemAttackerFiii((int) (var_r0), (void *) (&destroy_if_set__10TTecSlicerFUi), (int) (0x5A));
        }
    }
    return var_r31;
}

extern "C" {

void render__10TTecSlicerFv(u8 *arg0) {
    if (all_parents_unqueued_for_destruction__7TObjectFv() == 0 ||
        ((VObj_18_8023B900 *)arg0)->m8(lbl_805DC95C, lbl_805DC960) == 0 ||
        query_game_join_id__10TObjPlayerFv(M2C_FIELD(arg0, s32 *, 0x118)) == 0U) {
        return;
    }
    lbl_805D5660 = some_id_805c6f74;
    if (M2C_FIELD(arg0, s32 *, 0x13C) != 0) {
        some_id_805c6f74 |= 0x10;
        set_chunk_material_color(arg0 + 0x128);
    }
    if (M2C_FIELD(arg0, u32 *, 0x24) != 0U && M2C_FIELD(arg0, u32 *, 0x110) != 0U) {
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, u32 *, 0x24));
        begin_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0x64));
        rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x5C));
        TBoss7Tentacle__sub_803D9BA0(arg0 + 0x68);
        draw_ginja_object(M2C_FIELD(arg0, u32 *, 0x110));
        set_chunk_material_color(lbl_804A7418);
        end_effect_render__13TParticleCtrlFv();
    }
    pop_matrix();
    some_id_805c6f74 = lbl_805D5660;
}

void run_task__10TTecSlicerFv(u8 *arg0) {
    s32 temp_r4;
    u8 *var_r31;
    void *new_obj;
    M2C_FIELD(arg0, u32 *, 0x10C) = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x114));
    M2C_FIELD(arg0, u32 *, 0x108) = query_game_join_id__10TObjPlayerFv(M2C_FIELD(arg0, s32 *, 0x118));
    if (((u32) M2C_FIELD(arg0, u32 *, 0x108) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x10C) == 0U)) {
        queue_destruction__7TObjectFv((s32)((void *)(arg0)));
        return;
    }
    allow_rendering__7TObjectFv(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x13C) != 0) {
        var_r31 = arg0 + 0x128;
    } else {
        var_r31 = NULL;
    }
    new_obj = (void *)__nw__7TObjectFUl(0x60);
    if (new_obj != 0U) {
        __ct__14TSlicerHistoryFv(new_obj, arg0, M2C_FIELD(arg0, s32 *, 0x24), var_r31, M2C_FIELD(arg0, s32 *, 0x118));
    }
    if (test_flags_any(arg0 + 0xC0, 1) == 0) {
        update__10TTecSlicerFi((s32)(arg0));
    }
    advance_position__10TTecSlicerFPv((u8 *)(arg0));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x124) != 0U) {
        copy_position__15TEffStarLight2DFPv(M2C_FIELD(arg0, void **, 0x124), arg0 + 0x38);
    }
    if (test_flags_any(arg0 + 0xC0, 2) != 0) {
        queue_destruction__7TObjectFv((s32)((void *)(arg0)));
        return;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x5C);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (temp_r4 + M2C_FIELD(arg0, s32 *, 0x138));
    destroy_on_collision__10TTecSlicerFi((s32)(arg0), (s32)(temp_r4));
    M2C_FIELD(arg0, u32 *, 0x108) = 0U;
    M2C_FIELD(arg0, u32 *, 0x10C) = 0U;
}
void *__dt__10TTecSlicerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TTecSlicer;
        if (M2C_FIELD(arg0, void **, 0x124) != NULL) { queue_destruction__7TObjectFv((s32)((void *)(M2C_FIELD(arg0, void **, 0x124)))); }
        dt__10TTecSlicerFis((s8 *)arg0 + 0xE8, -1);
        dt__10TTecSlicerFis((s8 *)arg0 + 0xC8, -1);
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#define self ((Slicer_8023BBB4 *)arg0)
#define init ((Init_8023BBB4 *)arg1)
#pragma push
#pragma opt_common_subs off
#pragma opt_loop_invariants off
s32 TTecSlicer__ct(void *arg0, void *arg1, void *arg2, void *arg3, int arg4) {
    s32 c;
    s32 ext;
    s32 i;
    s32 e;
    TPhotonMagicSquare__sub_801A2640(self, tl_05);
    self->vt = __vt__10TTecSlicer;
    init_forward__10TObjPlayerFPv(self->fwd);
    reset_fields_1e__10TTecSlicerFPv(self->fc8);
    reset_fields_1e__10TTecSlicerFPv(self->fe8);
    self->f0 = lbl_805D3828;
    disallow_rendering__7TObjectFv(self);
    set_item_count__6TLobbyFPvs(self, TLobby__sub_80103AD4());
    self->f110 = init->f8;
    self->f24 = init->f4;
    self->f114 = init->f0;
    self->f118 = init->fc;
    self->f11c = init->f10;
    self->f11e = init->f12;
    self->f120 = init->f14;
    copy_vec4__13TRaderMapCoreFPvPv(self->color, init->color);
    self->f138 = init->f2c;
    self->f13c = 1;
    self->dir.x = TBoss8Dragon__sub_803D64C0(arg4);
    self->dir.y = lbl_805DC950;
    self->dir.z = TBoss8Dragon__sub_803D64DC(arg4);
    if (lbl_805DC950 != TBoss6Kakusan__sub_803D8BD8(&self->dir)) {
        TNpcPlayer__sub_803D97B4((s32)&self->dir);
    }
    self->f10c = (s32)arg2;
    self->f108 = find_item_by_id(self->f118);
    TTecSlicer__sub_8023B770((M2C_UNK *)self, (M2C_UNK *)self->f10c, init->f28);
    set_launch_midpoint__10TTecSlicerFPvPvPvPv((Obj_8023B72C *)self, (void *)self->f10c, &init->a, &init->b);
    self->fb8 = *get_weapon_range_record(self->f108, 0);
    self->fb4 = lbl_805DC964;
    VecCopy__FP3VecPC3Vec((s32)self + 0x9C, (s32)self + 0x38);
    VecCopy__FP3VecPC3Vec((s32)self + 0xA8, (s32)self + 0x38);
    self->fbc = lbl_805DC950;
    ext = get_extended_state__10TObjPlayerFPv(self->f10c);
    if (ext != 0) {
        if (TObjPlayer__sub_8012125C(ext) == 0) {
            set_flags__10TObjPlayerFPvUi((s32)self->fwd, 1);
        } else {
            for (i = 0; i != TObjPlayer__sub_8012125C(ext); i++) {
                e = TObjPlayer__sub_80121248(ext, i);
                c = TObjPlayer__sub_80121238(e);
                fn_8023B590(self->fc8, get_uid__10TObjPlayerFPv(e), c);
            }
        }
    }
    self->f124 = 0;
    self->f10c = 0;
    self->f108 = 0;
    self->fc4 = 0xFFFF;
    self->fc6 = 0;
    return (s32)self;
}
#pragma pop
#undef self
#undef init

}
