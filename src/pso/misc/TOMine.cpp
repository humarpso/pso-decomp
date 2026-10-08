#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base18_80170f64_80170EEC { char pad[0x18]; };
struct VObj_80170f64_80170EEC : Base18_80170f64_80170EEC {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77();
};

struct RecoveredGlobal_801711D0_lbl_804B2F2C { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_801711D0_lbl_804B2F2C_size[sizeof(RecoveredGlobal_801711D0_lbl_804B2F2C) == 0x10 ? 1 : -1];

struct RecoveredFields_80170F0C_arg0
{
  u8 unknown_0[0x2A8];
  s32 field_2A8;
  u8 unknown_2AC[0xA0];
  f32 field_34C;
  u8 unknown_350[0xC];
  u16 field_35C;
};

struct VBase_801710E4 { char pad[0x18]; };

struct VObj_801710E4 : VBase_801710E4 {
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

struct Obj_80171278 { s32 f00; u8 pad0[0x14]; u32 vptr; u8 pad1[0x14]; u32 flags30; u8 pad2[0x30C]; s32 f340; u8 pad3[8]; f32 f34C; f32 f350; s32 f354; f32 f358; u16 f35C; u8 pad4[2]; f32 f360; f32 f364; f32 f368; f32 f36C; s32 f370; };

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_801711D0_lbl_804B2F2C lbl_804B2F2C;
extern u32 lbl_805D5A50;
void load_static_resource__6TOMineFv(void);
u16 find_nearest_visible_player(void *, int, f32);
s32 update_trigger__10TOMineTrapFPv(void *);
s32 get_player_by_client_id(int);
int find_target_player__6TOMineFPv(u8 *arg0);
void free_sub_objects__6TOMineFPv(void* p);
void free_parts__6TOMineFPv(void* p);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void rotate_matrix_y(int, int);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DB854;
extern const f32 lbl_805DB858;
void render__6TOMineFPv(VObj_801710E4 *arg0);
void construct_actor_base__10TObjPlayerFPvPv(void *);
void obj_setFlags30(void *, u32);
extern M2C_UNK __vt__6TOMine[];
extern s32 lbl_805D3074;
extern const f32 lbl_805DB85C;
Obj_80171278 *TOMine__ct(Obj_80171278 *arg0);
}

extern "C" {

void *__dt__6TOMineFv(void *arg0, s16 arg1);
void free_instance__6TOMineFv(void);
void free_parts__6TOMineFPv(void* p);
void free_sub_objects__6TOMineFPv(void* p);
int get_player_state__6TOMineFPv(void* p);
void run_task__6TOMineFPv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK follow_target__10TOMineTrapFPv(void *);
M2C_UNK TOMineTrap__sub_80170BEC(void *);
M2C_UNK TOMineTrap__sub_80170CD4(void *);
M2C_UNK update_float_height__10TOMineTrapFPv(void *);
M2C_UNK detonate__10TOMineTrapFPv(void *);
int draw_ginja_object(void*);
M2C_UNK submit_cursor_candidate(void *, int);
int submit_target_to_player_cursor(void*);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
s32 check_demo_mode__10TObjPlayerFv();
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
int set_global_param__8TObjFishFi(void*);

int get_player_state__6TOMineFPv(void* p) { return submit_target_to_player_cursor(p); }

typedef struct RecoveredFields_80170F0C_arg0 RecoveredFields_80170F0C_arg0;
int find_target_player__6TOMineFPv(u8 *arg0) {
  u16 temp_r3;
  unsigned short new_var;
  ((RecoveredFields_80170F0C_arg0 *) arg0)->field_35C = find_nearest_visible_player((void *) arg0, (int) 0, (f32) ((RecoveredFields_80170F0C_arg0 *) arg0)->field_34C);
  temp_r3 = ((RecoveredFields_80170F0C_arg0 *) arg0)->field_35C;
  new_var = -1;
  if (temp_r3 != new_var)
  {
    ((RecoveredFields_80170F0C_arg0 *) arg0)->field_2A8 = get_player_by_client_id((int) temp_r3);
    update_trigger__10TOMineTrapFPv((void *) arg0);
  }
  return ((RecoveredFields_80170F0C_arg0 *) arg0)->field_35C;
}

void run_task__6TOMineFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;

    if (check_demo_mode__10TObjPlayerFv() != 1) {
        ((VObj_80170f64_80170EEC *) arg0)->m77();
        update_float_height__10TOMineTrapFPv((void *) (arg0));
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
        switch (temp_r0) {
        case 2:
        case 0:
            find_target_player__6TOMineFPv((u8 *)((void *)((void *) (arg0))));
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x334));
            VecCopy__FP3VecPC3Vec((void *) (M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C), (void *) (arg0 + 0x334));
            return;
        case 3:
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x8C);
            M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (temp_r3 - 1);
            if (temp_r3 < 0) {
                M2C_FIELD(arg0, s16 *, 0x326) = 4;
            }
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x344);
            switch (temp_r0_2) {
            default:
                TOMineTrap__sub_80170CD4((void *) (arg0));
                break;
            case 1:
                TOMineTrap__sub_80170BEC((void *) (arg0));
                break;
            case 2:
                follow_target__10TOMineTrapFPv((void *) (arg0));
                break;
            }
            submit_cursor_candidate((void *) (arg0), (int) (-1));
            return;
        case 4:
            detonate__10TOMineTrapFPv((void *) (arg0));
            break;
        }
    }
}

void free_sub_objects__6TOMineFPv(void* p) { set_global_param__8TObjFishFi(*(void**)((char*)p + 0x378)); draw_ginja_object(*(void**)((char*)p + 0x374)); }

void free_parts__6TOMineFPv(void* p) { set_global_param__8TObjFishFi(*(void**)((char*)p + 0x24)); draw_ginja_object(*(void**)((char*)p + 0x34)); }

extern u32 lbl_805D5A50;

void render__6TOMineFPv(VObj_801710E4 *arg0) {
    s32 t;
    if (M2C_FIELD(arg0, s16 *, 0x326) == 3 && arg0->m8(lbl_805DB854, lbl_805DB858) != 0) {
        push_matrix();
        post_translate_matrix((u8 *) arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x370));
        free_parts__6TOMineFPv((void*)(arg0));
        begin_effect_render__13TParticleCtrlFv();
        t = some_id_805c6f74;
        lbl_805D5660 = t;
        some_id_805c6f74 = t | 0x20;
        ((void (*)(void *, s32)) set_chunk_material_color)((u8 *) arg0 + 0x360, t);
        free_sub_objects__6TOMineFPv((void*)(arg0));
        set_chunk_material_color(chunk_material_color_half_alpha_f32);
        some_id_805c6f74 = lbl_805D5660;
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

void free_instance__6TOMineFv(void) {
    if ((u32) lbl_805D5A50 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A50, 1);
        lbl_805D5A50 = 0U;
    }
}

extern M2C_UNK __vt__6TOMine[];

void load_static_resource__6TOMineFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &lbl_804B2F2C.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D5A50) = var_r0;
}

void *__dt__6TOMineFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__6TOMine;
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Obj_80171278 *TOMine__ct(Obj_80171278 *arg0) {
    construct_actor_base__10TObjPlayerFPvPv(arg0);
    arg0->vptr = (u32)((s32 *)&__vt__6TOMine);
    arg0->f00 = lbl_805D3074;
    *(s16 *)((u8 *)arg0 + 0x328) = 0;
    arg0->f350 = lbl_805DB85C;
    arg0->f34C = lbl_805DB85C;
    arg0->f358 = lbl_805DB85C;
    arg0->f354 = 0;
    arg0->f35C = 0xFFFF;
    arg0->f360 = lbl_805DB85C;
    arg0->f364 = lbl_805DB85C;
    arg0->f368 = lbl_805DB85C;
    arg0->f36C = lbl_805DB85C;
    arg0->f340 = 0;
    arg0->f370 = 0;
    obj_setFlags30(arg0, 0x60000000);
    arg0->flags30 &= 0xFFFBFFFF;
    return arg0;
}

}
