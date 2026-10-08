#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8003508C_80035084 {
    char pad[0x18];
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
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85(s16, int);
};

struct VBase_18_bd2ad6
{
  char pad[0x18];
};

struct VObj_18_bd2ad6 : VBase_18_bd2ad6 {
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
    virtual s32 m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual M2C_UNK m39();
    virtual M2C_UNK m40();
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
    virtual void m59();
    virtual M2C_UNK m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual M2C_UNK m85(s16, M2C_UNK);
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

#include <stddef.h>
struct Stack_800365C8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_800365C8_lbl_80435A44 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Self_80035420 {
    u8 pad0[0x18];
    void *vtable;
    u8 pad1C[0x5E0 - 0x1C];
    void *a5E0[10];
    s32 x608[4];
    s32 x618;
    s32 x61C;
    void *a620[4];
    void *a630[5];
    void *a644[3];
    void *x650;
    u8 pad654[0x6B8 - 0x654];
    void *x6B8;
    u8 pad6BC[0x6C8 - 0x6BC];
    void *x6C8;
    void *x6CC;
    void *x6D0;
    u8 pad6D4[0x73C - 0x6D4];
    void *x73C;
    void *a740[6];
};

struct Vec_800363B4 { f32 x, y, z; };

struct Seg_800363B4 { s8 n; u8 pad1[0xF]; void *model1; void *model2; };

struct Ang_800363B4 { s32 yaw; u8 pad4[0xC]; };

typedef struct Slot_80035D24 {
    s32 kind;
    s32 f04;
    f32 f08[3];
    s32 f14;
    s32 f18;
    s32 f1C;
    f32 f20[3];
    struct Slot_80035D24 *next;
    s32 f30;
    s32 f34;
} Slot_80035D24;

typedef struct Node_80035D24 {
    u8 pad0[4];
    struct { u8 pad[4]; s32 v; } *h;
    u8 pad8[0x2C - 8];
    struct Node_80035D24 *sub;
    struct Node_80035D24 *next;
} Node_80035D24;

extern "C" {
void TBoss2DeRolLe__sub_800361E8(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805D8458;
void TBoss2Fin__sub_80036620(u8 *arg0);
f32 newton_sqrtf(f32);
extern const f32 TBoss2DeRolLe__data_805D8288;
extern const f32 TBoss2DeRolLe__data_805D82A0;
extern const f32 TBoss2DeRolLe__data_805D82BC;
extern const f32 lbl_805D844C;
void TBoss2DeRolLe__sub_800360A8(void *arg0);
M2C_UNK advance_action_sequence__13TBoss2DeRolLeFPv(void *);
s32 queue_destruction__7TObjectFv(void *);
s32 construct_piece_controller__10TObjPlayerFPvii(int, void *, int);
s32 TBoss2DeRolLe__sub_8003383C(void *);
s32 update_projectile_spawns__13TBoss2DeRolLeFPv(void *);
s32 update_particle_ctrls__13TBoss2DeRolLeFPv(void *);
M2C_UNK TBoss2DeRolLe__sub_80034034(void *);
s32 is_ready__13TBoss2DeRolLeFPv(void *);
s32 backup_pos__13TBoss2DeRolLeFi(void *);
void TBoss2DeRolLe__sub_8003508C(void *arg0);
s32 query_teammate_state__9TObjEneDDFPv();
s32 update_lobby_state__9TObjEneDDFPv(void *);
s32 is_main_phase_15__9TObjEneDDFv();
s32 set_player_state_default__12TBoss8DragonFPv(void *);
s32 get_target_info__9TObjEneDDFPv(void *);
s32 TObjEneDD__sub_800BBA0C(void *);
s32 add_radar_scaled_marker(void *, int, int, int, f32);
s32 send_entity_set_flags__6TLobbyFPv(void *);
void *__nw__7TObjectFUl(int);
s32 run_tasks__7TObjectFv(void *);
extern const f32 TBoss2DeRolLe__data_805D82A0;
void run_task__13TBoss2DeRolLeFPv(u8 *arg0);
void TBoss2Fin__sub_80036620(u8 *arg0);
s32 fn_800FF788(void *, void *);
extern RecoveredGlobal_800365C8_lbl_80435A44 lbl_80435A44;
void run_task__9TBoss2FinFv(s32 arg0);
M2C_UNK __dt__7TObjectFv(void *, int);
s32 queue_destruction__7TObjectFv(void *);
s32 free_if_positive__13TBoss2DeRolLeFis(s32 arg0, s16 arg1);
M2C_UNK __dt__9TObjEneDDFv(void *, int);
M2C_UNK delete_buffer__12TBoss8DragonFis(void *, int);
M2C_UNK free__11TOBoss4RockFUi(int);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK __dl__7TObjectFPv(void *);
extern u8 lbl_804824D0[];
extern s32 TBoss2DeRolLe__instance;
u8 *__dt__13TBoss2DeRolLeFPvs(u8 *arg0, s16 arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_random_float__8TObjFishFv(f32);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 get_scale_factor__10TObjPlayerFv(f32);
M2C_UNK TObjLight__sub_801337F8(s32);
M2C_UNK scale_matrix(int, f32, f32, f32);
f32 vector_length(void *);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(int, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK normalize_vector(void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_chunk_object(void *);
extern const f64 lbl_80435A50[];
extern u32 lbl_805D4BA4;
extern s32 lbl_805D5560;
extern const f32 lbl_805D8260;
extern const f32 TBoss2Fin__data_805D8450;
extern const f32 lbl_805D8454;
void render__9TBoss2FinFv(u8 *arg0);
s32 dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 register_object__6TLobbyFPv(s32);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
void TObjPlayer__sub_8002E7C8(void);
void create_breakup_model__10TObjPlayerFv(void);
void TBoss2Fin__sub_800367C4(void);
void TBoss2Mine__sub_80038D88(void);
void TBoss2Tentacle__sub_8003A0AC(void);
s32 adjust_to_ground__15TObjBoss2TunnelFiPv(s32 arg0, void *arg1);
s32 check_v2_mode__9TObjEneDDFv(void);
u8 *load_enemy_bml_resource_named(void *, void *);
u8 *load_enemy_bml_resource(void *);
u8 *collect_and_count__12TBoss3VoloptFUii(s32, s32);
s32 init_all_slots__11TWindowCtrlFv(void);
extern u8 lbl_804356C0[];
extern u8 lbl_80435A18[];
extern s32 lbl_80482280[];
extern u8 lbl_80482398[];
extern s32 lbl_805D26A8[1];
extern s32 lbl_805D26AC[1];
extern s32 lbl_805D26B0[1];
extern s32 TBoss2DeRolLe__data_805D4B98[1];
extern s32 TBoss2DeRolLe__data_805D4B9C[1];
extern s32 TBoss2DeRolLe__data_805D4BA0[1];
extern u32 lbl_805D4BA4;
extern s32 lbl_805D4BA8;
extern s32 lbl_805D4BAC;
extern s32 lbl_805D4BB0;
extern s32 lbl_805D4BB4;
extern s32 lbl_805D4BB8;
extern s32 lbl_805D4BBC;
extern s32 lbl_805D4BC0;
extern s32 TBoss2DeRolLe__instance;
extern u8 *lbl_805D4BC8;
extern s32 lbl_805D4BCC;
extern const f32 TBoss2DeRolLe__data_805D827C;
void load_resources__13TBoss2DeRolLeFv(void);
}

extern "C" {

void TBoss2DeRolLe__sub_80035084(void);
void TBoss2DeRolLe__sub_80035088(void);
void TBoss2DeRolLe__sub_8003508C(void *arg0);
void TBoss2DeRolLe__sub_80036288(void);
void TBoss2DeRolLe__sub_8003628C(void);
void TBoss2DeRolLe__sub_80036290(void);
void TBoss2DeRolLe__sub_80036294(void);
void TBoss2DeRolLe__sub_80036298(void);
void TBoss2DeRolLe__sub_8003629C(void);
void TBoss2DeRolLe__sub_800362A0(void);
void TBoss2DeRolLe__sub_80036358(void* p);
void TBoss2DeRolLe__sub_800363A0(void* p);
void *create__13TBoss2DeRolLeFPv(void *arg0);
s32 free_if_positive__13TBoss2DeRolLeFis(s32 arg0, s16 arg1);
s32 get_instance__13TBoss2DeRolLeFv(void);
void init_params__13TBoss2DeRolLeFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
s32 init_resources__13TBoss2DeRolLeFi(s32 arg0);
void reset_parts__13TBoss2DeRolLeFv(void);
void send_6x13__13TBoss2DeRolLeFPv(void* p);
void set_move_params__13TBoss2DeRolLeFPvffff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void swap_6x13_fields__13TBoss2DeRolLeFPv(void* p);
void swap_endian__13TBoss2DeRolLeFPv(void* p);
void update_and_send__13TBoss2DeRolLeFPv(void* p);
void *TBoss2DeRolLe__ct(void *, void *, void *);
M2C_UNK TBoss2DeRolLe__sub_80034034(void *);
M2C_UNK TBoss2Fin__sub_800367C0();
M2C_UNK TBoss2Mine__sub_80038D84();
M2C_UNK TBoss2Tentacle__sub_8003A0A8();
int TLobby__send_and_handle_60(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjPlayer__sub_8002EB88();
int __dl__FPv();
void *__nw__7TObjectFUl(int);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
M2C_UNK clear_target_ref__10TObjPlayerFv();
int read_be16_field2__10TObjPlayerFPv(void*);

void TBoss2DeRolLe__sub_80035084(void) {  }
void TBoss2DeRolLe__sub_80035088(void) {  }

void TBoss2DeRolLe__sub_8003508C(void *arg0) {
    struct VBase_8003508C_80035084 *o = (struct VBase_8003508C_80035084 *)arg0;
    if (is_ready__13TBoss2DeRolLeFPv((void *)(arg0)) != 0) {
        TBoss2DeRolLe__sub_80034034(arg0);
        return;
    }
    o->m85(M2C_FIELD(arg0, s16 *, 0x326), 9);
}

extern u32 lbl_805D4BA4;

typedef struct VBase_18_bd2ad6 VBase_18_bd2ad6;
typedef struct VObj_18_bd2ad6 VObj_18_bd2ad6;
#define PSO_VCALL_VObj_18_bd2ad6_m103(_self) (((VObj_18_bd2ad6 *)(_self))->m103())
#define PSO_VCALL_VObj_18_bd2ad6_m39(_self) (((VObj_18_bd2ad6 *)(_self))->m39())
#define PSO_VCALL_VObj_18_bd2ad6_m40(_self) (((VObj_18_bd2ad6 *)(_self))->m40())
#define PSO_VCALL_VObj_18_bd2ad6_m85(_self, _arg0, _arg1) (((VObj_18_bd2ad6 *)(_self))->m85((_arg0), (_arg1)))
#define PSO_VCALL_VObj_18_bd2ad6_m30(_self) (((VObj_18_bd2ad6 *)(_self))->m30())
#define PSO_VCALL_VObj_18_bd2ad6_m60(_self) (((VObj_18_bd2ad6 *)(_self))->m60())
#define PSO_VCALL_VObj_18_bd2ad6_m86(_self) (((VObj_18_bd2ad6 *)(_self))->m86())
void run_task__13TBoss2DeRolLeFPv(u8 *arg0) {
  s16 temp_r0_2;
  s32 temp_r0;
  s32 temp_r0_3;
  s32 temp_r30;
  s32 temp_r3;
  u32 temp_r3_2;
  if (get_target_info__9TObjEneDDFPv((void *) arg0) != 0)
  {
    PSO_VCALL_VObj_18_bd2ad6_m103(arg0);
    return;
  }
  temp_r3 = *((s32 *) (((s8 *) arg0) + 0x3C0));
  if (temp_r3 & 0x8000)
  {
    send_entity_set_flags__6TLobbyFPv((void *) arg0);
    queue_destruction__7TObjectFv((void *) arg0);
    return;
  }
  if (temp_r3 & 0x80)
  {
    *((s32 *) (((s8 *) arg0) + 0x3C0)) = (s32) (temp_r3 & 0xFFFFFF7F);
    *((s32 *) (((s8 *) arg0) + 0x3C0)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x3C0))) | 0x40);
    temp_r3_2 = ((u32)__nw__7TObjectFUl((int) 0x500));
    if (temp_r3_2 != 0U)
    {
      construct_piece_controller__10TObjPlayerFPvii((int) temp_r3_2, (void *) arg0, (int) (*((s32 *) (((s8 *) arg0) + 0x618))));
    }
  }
  if ((is_main_phase_15__9TObjEneDDFv() != 0) && (((s32) (*((s32 *) (((s8 *) arg0) + 0x3C8)))) == 0))
  {
    if (update_lobby_state__9TObjEneDDFPv((void *) arg0) != 0)
    {
      *((s32 *) (((s8 *) arg0) + 0x3F4)) = 0;
    }
    else
    {
      *((s32 *) (((s8 *) arg0) + 0x3F4)) = 1;
    }
  }
  if ((((s32) (*((s32 *) (((s8 *) arg0) + 0x3C8)))) != 0) && ((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0x3CC)))) + 8))) & 0x10000))
  {
    temp_r0 = *((s32 *) (((s8 *) arg0) + 0x3F4));
    switch (temp_r0)
    {
      case 1:
        *((s32 *) (((s8 *) arg0) + 0x3F4)) = 0;
        advance_action_sequence__13TBoss2DeRolLeFPv((void *) arg0);
        break;
      case 0:
        *((s32 *) (((s8 *) arg0) + 0x3F4)) = 2;
        break;
      case 2:
        *((s32 *) (((s8 *) arg0) + 0x3F4)) = 1;
        break;
    }
  }
  temp_r30 = query_teammate_state__9TObjEneDDFPv();
  PSO_VCALL_VObj_18_bd2ad6_m39(arg0);
  PSO_VCALL_VObj_18_bd2ad6_m40(arg0);
  if (temp_r30 == 0)
  {
    temp_r0_2 = *((s16 *) (((s8 *) arg0) + 0x326));
    temp_r3 = temp_r0_2;
    if (((temp_r0_2 == 0x1F) || (temp_r3 == 0x20)) || (temp_r0_2 == 0x1E))
    {
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) | 0x800);
    }
    else
    {
      *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x30))) & 0xFFFFF7FF);
    }
    temp_r0_3 = *((s32 *) (((s8 *) arg0) + 0x3F4));
    if (temp_r0_3 != 1)
    {
      if (temp_r0_3 == 2)
      {
        if (is_ready__13TBoss2DeRolLeFPv((void *)((void *) arg0)) != 0)
        {
          TBoss2DeRolLe__sub_80034034((void *) arg0);
        }
        else
        {
          PSO_VCALL_VObj_18_bd2ad6_m85(arg0, *((s16 *) (((s8 *) arg0) + 0x326)), 2);
        }
      }
      else
      {
        TBoss2DeRolLe__sub_8003508C((void *) arg0);
      }
      if (PSO_VCALL_VObj_18_bd2ad6_m30(arg0) != 0)
      {
        PSO_VCALL_VObj_18_bd2ad6_m60(arg0);
      }
      PSO_VCALL_VObj_18_bd2ad6_m85(arg0, *((s16 *) (((s8 *) arg0) + 0x326)), 8);
      PSO_VCALL_VObj_18_bd2ad6_m85(arg0, *((s16 *) (((s8 *) arg0) + 0x326)), 0);
    }
    else
    {
      if (PSO_VCALL_VObj_18_bd2ad6_m30(arg0) != 0)
      {
        PSO_VCALL_VObj_18_bd2ad6_m60(arg0);
      }
      PSO_VCALL_VObj_18_bd2ad6_m85(arg0, *((s16 *) (((s8 *) arg0) + 0x326)), 0);
    }
    TBoss2DeRolLe__sub_8003383C((void *) arg0);
    update_projectile_spawns__13TBoss2DeRolLeFPv((void *) arg0);
  }
  TObjEneDD__sub_800BBA0C((void *) arg0);
  PSO_VCALL_VObj_18_bd2ad6_m86(arg0);
  backup_pos__13TBoss2DeRolLeFi((void *) arg0);
  set_player_state_default__12TBoss8DragonFPv((void *) arg0);
  add_radar_scaled_marker((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) 1, (int) 1, (f32) TBoss2DeRolLe__data_805D82A0);
  update_particle_ctrls__13TBoss2DeRolLeFPv((void *) arg0);
  if (temp_r30 == 0)
  {
    run_tasks__7TObjectFv((void *) (arg0 + 0x3D8));
  }
}

#define self ((Self_80035420 *)arg0)
u8 *__dt__13TBoss2DeRolLeFPvs(u8 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        self->vtable = lbl_804824D0;
        if (self->x73C != NULL) {
            queue_destruction__7TObjectFv(self->x73C);
            self->x73C = NULL;
        }
        for (i = 0; i < 6; i++) {
            if (self->a740[i] != NULL) {
                queue_destruction__7TObjectFv(self->a740[i]);
                self->a740[i] = NULL;
            }
        }
        free__11TOBoss4RockFUi(self->x618);
        self->x618 = 0;
        if (self->x6CC != NULL) {
            queue_destruction__7TObjectFv(self->x6CC);
            self->x6CC = NULL;
        }
        if (self->x6D0 != NULL) {
            queue_destruction__7TObjectFv(self->x6D0);
            self->x6D0 = NULL;
        }
        if (self->x6C8 != NULL) {
            delete_buffer__12TBoss8DragonFis(self->x6C8, 1);
            self->x6C8 = NULL;
        }
        if (self->x6B8 != NULL) {
            queue_destruction__7TObjectFv(self->x6B8);
            self->x6B8 = NULL;
        }
        if (self->x650 != NULL) {
            queue_destruction__7TObjectFv(self->x650);
            self->x650 = NULL;
        }
        for (i = 2; i >= 0; i--) {
            queue_destruction__7TObjectFv(self->a644[i]);
            self->a644[i] = NULL;
        }
        for (i = 4; i >= 0; i--) {
            queue_destruction__7TObjectFv(self->a630[i]);
            self->a630[i] = NULL;
        }
        for (i = 9; i >= 0; i--) {
            queue_destruction__7TObjectFv(self->a5E0[i]);
            self->a5E0[i] = NULL;
        }
        for (i = 3; i >= 0; i--) {
            queue_destruction__7TObjectFv(self->a620[i]);
            self->a620[i] = NULL;
        }
        free__11TOBoss4RockFUi(self->x61C);
        free_collision_body_parts(self);
        if ((u32)TBoss2DeRolLe__instance == (u32)arg0) {
            TBoss2DeRolLe__instance = 0;
        }
        free_if_positive__13TBoss2DeRolLeFis((s32)(arg0 + 0x684), -1);
        free_if_positive__13TBoss2DeRolLeFis((s32)(arg0 + 0x664), -1);
        __dt__7TObjectFv(arg0 + 0x3D8, -1);
        __dt__9TObjEneDDFv(self, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return arg0;
}
#undef self

void reset_parts__13TBoss2DeRolLeFv(void) {
    clear_target_ref__10TObjPlayerFv();
    TObjPlayer__sub_8002EB88();
    TBoss2Fin__sub_800367C0();
    TBoss2Mine__sub_80038D84();
    TBoss2Tentacle__sub_8003A0A8();
    if ((u32) lbl_805D4BA4 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4BA4, 1);
        lbl_805D4BA4 = 0U;
    }
}

extern void *tl_04;

void *create__13TBoss2DeRolLeFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x75C);
    if (o != NULL) {
        o = TBoss2DeRolLe__ct(o, tl_04, arg0);
    }
    return o;
}

extern const f32 TBoss2DeRolLe__data_805D827C;

u32 TBoss2DeRolLe__data_804FE268[15];
u32 lbl_804FE2A4[3];
u32 lbl_804FE2B0[10];
u32 lbl_804FE2D8[10];
u32 lbl_804FE300[3];
u32 lbl_804FE30C[4];
u32 lbl_804FE31C[3];
Slot_80035D24 lbl_804FE328[11];
void load_resources__13TBoss2DeRolLeFv(void) {
    s32 k;
    s32 m2;
    s32 m3;
    u8 *res;
    s32 i;
    Node_80035D24 *n;
    Node_80035D24 *m;
    Slot_80035D24 *p;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        res = load_enemy_bml_resource_named(lbl_80482398, lbl_80435A18);
    } else {
        res = load_enemy_bml_resource(lbl_80482398);
    }
    (*(u8 * *)&lbl_805D4BA4) = res;
    lbl_805D4BA8 = 0;
    lbl_805D4BAC = 0;
    lbl_805D4BB0 = 0;
    ((f32 *)lbl_804FE30C)[0] = TBoss2DeRolLe__data_805D827C;
    ((f32 *)lbl_804FE30C)[1] = TBoss2DeRolLe__data_805D827C;
    ((f32 *)lbl_804FE30C)[2] = TBoss2DeRolLe__data_805D827C;
    ((f32 *)lbl_804FE30C)[3] = TBoss2DeRolLe__data_805D827C;
    ((f32 *)lbl_804FE31C)[0] = TBoss2DeRolLe__data_805D827C;
    ((f32 *)lbl_804FE31C)[1] = TBoss2DeRolLe__data_805D827C;
    ((f32 *)lbl_804FE31C)[2] = TBoss2DeRolLe__data_805D827C;
    lbl_805D4BB4 = 0;
    lbl_805D4BB8 = 0;
    lbl_805D4BBC = 0;
    lbl_805D4BC0 = 0;
    for (i = 0; i < 1; i++) {
        TBoss2DeRolLe__data_805D4B98[i] = register_boss__6TLobbyFPv(lbl_805D26A8[i]);
    }
    for (i = 0; i < 3; i++) {
        ((s32 *)lbl_804FE300)[i] = dispatch_shared_handler_b__6TLobbyFPv(lbl_80482280[i]);
    }
    for (i = 0; i < 1; i++) {
        TBoss2DeRolLe__data_805D4B9C[i] = register_object__6TLobbyFPv(lbl_805D26AC[i]);
    }
    for (i = 0; i < 1; i++) {
        TBoss2DeRolLe__data_805D4BA0[i] = dispatch_shared_handler_a__6TLobbyFPv(lbl_805D26B0[i]);
    }
    TBoss2DeRolLe__instance = 0;
    TBoss2Tentacle__sub_8003A0AC();
    TBoss2Mine__sub_80038D88();
    for (k = 0; k < 5; k++) {
        adjust_to_ground__15TObjBoss2TunnelFiPv((s32)(lbl_804356C0 + k * 0xC), (u8 *)TBoss2DeRolLe__data_804FE268 + k * 0xC);
    }
    TBoss2Fin__sub_800367C4();
    res = (*(u8 * *)&lbl_805D4BA4);
    n = *(Node_80035D24 **)(*(u8 **)(*(u8 **)(res + 0x42C) + 0x28) + 0x2C);
    for (i = 0; i < 10; i++) {
        ((s32 *)lbl_804FE2B0)[i] = n->h->v + 8;
        ((s32 *)lbl_804FE2D8)[i] = n->sub->h->v + 8;
        n = n->next;
    }
    ((s32 *)lbl_804FE2A4)[0] = n->h->v + 8;
    m = n->next;
    ((s32 *)lbl_804FE2A4)[1] = m->h->v + 8;
    ((s32 *)lbl_804FE2A4)[2] = m->next->h->v + 8;
    lbl_805D4BC8 = collect_and_count__12TBoss3VoloptFUii(*(s32 *)(*(u8 **)(res + 0x42C) + 0x28), 0x4D);
    lbl_805D4BCC = *(s32 *)(lbl_805D4BC8 + 0x2C);
    for (m2 = 0; m2 < 11; m2++) {
        p = &lbl_804FE328[m2];
        p->kind = 0xF;
        p->f04 = 0;
        p->f08[0] = TBoss2DeRolLe__data_805D827C;
        p->f08[1] = TBoss2DeRolLe__data_805D827C;
        p->f08[2] = TBoss2DeRolLe__data_805D827C;
        p->f14 = 0;
        p->f18 = 0;
        p->f1C = 0;
        p->f20[0] = TBoss2DeRolLe__data_805D827C;
        p->f20[1] = TBoss2DeRolLe__data_805D827C;
        p->f20[2] = TBoss2DeRolLe__data_805D827C;
        p->next = 0;
        p->f30 = 0;
    }
    for (m3 = 0; m3 < 10; m3++) {
        lbl_804FE328[m3].next = &lbl_804FE328[m3 + 1];
    }
    p = &lbl_804FE328[10];
    p->kind = 0x1F;
    p->next = 0;
    create_breakup_model__10TObjPlayerFv();
    TObjPlayer__sub_8002E7C8();
    init_all_slots__11TWindowCtrlFv();
}

void TBoss2DeRolLe__sub_800360A8(void *arg0) {
  s8 *new_var;
  s8 *new_var2;
  f32 temp_f0;
  f32 temp_f1;
  f32 temp_f31;
  f32 temp_f3;
  f32 temp_f4;
  f32 temp_f5;
  new_var = ((s8 *) arg0) + 0xC;
  temp_f4 = *((f32 *) (((s8 *) arg0) + 0x10));
  temp_f31 = -(*((f32 *) (((s8 *) arg0) + 8)));
  temp_f5 = temp_f4 * temp_f4;
  temp_f3 = (TBoss2DeRolLe__data_805D82BC / (*((f32 *) (((s8 *) arg0) + 4)))) - (TBoss2DeRolLe__data_805D82BC / temp_f31);
  new_var2 = ((s8 *) arg0) + 0x1C;
  temp_f1 = (*((f32 *) (((s8 *) arg0) + 0x14))) + (temp_f5 / (lbl_805D844C * temp_f31));
  if ((((TBoss2DeRolLe__data_805D82BC / (*((f32 *) (((s8 *) arg0) + 4)))) - (TBoss2DeRolLe__data_805D82BC / temp_f31)) * (TBoss2DeRolLe__data_805D8288 * temp_f5)) > temp_f1)
  {
    *((f32 *) new_var) = newton_sqrtf((TBoss2DeRolLe__data_805D82A0 * temp_f1) / temp_f3);
    temp_f3 = (TBoss2DeRolLe__data_805D82BC / (*((f32 *) (((s8 *) arg0) + 4)))) - (TBoss2DeRolLe__data_805D82BC / temp_f31);
  }
  temp_f0 = *((f32 *) new_var);
  *((f32 *) new_var2) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x14))) + ((TBoss2DeRolLe__data_805D8288 * (temp_f0 * temp_f0)) / temp_f31));
}

void set_move_params__13TBoss2DeRolLeFPvffff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = farg2;
    M2C_FIELD(arg0, f32 *, 8) = farg3;
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) TBoss2DeRolLe__data_805D827C;
    TBoss2DeRolLe__sub_800360A8((void *)(arg0));
}

extern const f32 TBoss2DeRolLe__data_805D827C;

void init_params__13TBoss2DeRolLeFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = farg2;
    M2C_FIELD(arg0, f32 *, 8) = farg2;
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) TBoss2DeRolLe__data_805D827C;
    TBoss2DeRolLe__sub_800360A8((void *)(arg0));
}

void TBoss2DeRolLe__sub_800361E8(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 8) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) TBoss2DeRolLe__data_805D827C;
}

s32 free_if_positive__13TBoss2DeRolLeFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

s32 init_resources__13TBoss2DeRolLeFi(s32 arg0) {
    TBoss2DeRolLe__sub_800361E8((u8 *)(arg0));
    return arg0;
}

extern s32 TBoss2DeRolLe__instance;

s32 get_instance__13TBoss2DeRolLeFv(void) {
    return TBoss2DeRolLe__instance;
}

void TBoss2DeRolLe__sub_80036288(void) {  }
void TBoss2DeRolLe__sub_8003628C(void) {  }
void TBoss2DeRolLe__sub_80036290(void) {  }
void TBoss2DeRolLe__sub_80036294(void) {  }
void TBoss2DeRolLe__sub_80036298(void) {  }
void TBoss2DeRolLe__sub_8003629C(void) {  }
void TBoss2DeRolLe__sub_800362A0(void) {  }
void swap_endian__13TBoss2DeRolLeFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void swap_6x13_fields__13TBoss2DeRolLeFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void send_6x13__13TBoss2DeRolLeFPv(void* p) { swap_6x13_fields__13TBoss2DeRolLeFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss2DeRolLe__sub_80036358(void* p) { *(u8*)((char*)p + 0x0) = 19; *(u8*)((char*)p + 0x1) = 2; }
void update_and_send__13TBoss2DeRolLeFPv(void* p) { swap_endian__13TBoss2DeRolLeFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void TBoss2DeRolLe__sub_800363A0(void* p) { *(u8*)((char*)p + 0x0) = 20; *(u8*)((char*)p + 0x1) = 3; }

typedef char RecoveredGlobal_800365C8_lbl_80435A44_size[sizeof(RecoveredGlobal_800365C8_lbl_80435A44) == 0xC ? 1 : -1];

void render__9TBoss2FinFv(u8 *arg0) {
    Seg_800363B4 *seg;
    Ang_800363B4 *ang;
    Vec_800363B4 *pt;
    s32 j;
    s32 yaw;
    Vec_800363B4 v;
    set_global_param__8TObjFishFi(M2C_FIELD(M2C_FIELD(lbl_805D4BA4, u8 **, 0x42C), s32 *, 0x2C));
    seg = M2C_FIELD(arg0, Seg_800363B4 **, 0x20);
    ang = M2C_FIELD(arg0, Ang_800363B4 **, 0x24);
    pt = M2C_FIELD(arg0, Vec_800363B4 **, 0x2C);
    for (; seg->n >= 2; pt++, seg++, ang++) {
        for (j = seg->n - 1; j > 0; j--, pt++) {
            push_matrix();
            set_position_vec3__10TObjPlayerFPvPv(0, pt);
            VecCopy__FP3VecPC3Vec(&v, pt + 1);
            subtract_vector(&v, pt);
            if (TBoss2Fin__data_805D8450 == vector_length(&v)) {
                v.x = TBoss2Fin__data_805D8450;
                v.y = lbl_805D8454;
                v.z = TBoss2Fin__data_805D8450;
            } else {
                normalize_vector(&v);
            }
            yaw = 0;
            if (TBoss2Fin__data_805D8450 != get_random_float__8TObjFishFv(v.x) + get_random_float__8TObjFishFv(v.z)) {
                yaw = lbl_80435A50[0] * get_ad_end_text_start__10TObjPlayerFv(-v.x, -v.z);
                rotate_matrix_y(0, yaw);
            }
            rotate_matrix_x(0, lbl_80435A50[0] * get_scale_factor__10TObjPlayerFv(-v.y));
            rotate_matrix_y(0, ang->yaw - yaw);
            push_matrix();
            scale_matrix(0, lbl_805D8260, lbl_805D8260, lbl_805D8260);
            rotate_matrix_x(0, -0x4000);
            if (j == 1) {
                if (seg->model2 != NULL) {
                    draw_chunk_object(seg->model2);
                }
            } else if (seg->model1 != NULL) {
                draw_chunk_object(seg->model1);
            }
            pop_matrix();
            pop_matrix();
        }
    }
    TObjLight__sub_801337F8(lbl_805D5560);
}

void run_task__9TBoss2FinFv(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_800365C8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800365C8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800365C8, sp10) == 0x8) ? 1 : -1];
    Stack_800365C8 stack;
    TBoss2Fin__sub_80036620((u8 *)((void *) (arg0)));
    stack.sp8 = M2C_FIELD(&lbl_80435A44.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80435A44.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80435A44.value, s32 *, 8);
    fn_800FF788((void *) (arg0), (void *) (&stack.sp8));
}

void TBoss2Fin__sub_80036620(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x34, M2C_FIELD(arg0, u8 **, 0x80));
    VecCopy__FP3VecPC3Vec(arg0 + 0x54, M2C_FIELD(arg0, u8 **, 0x80));
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) (M2C_FIELD(arg0, f32 *, 0x58) - lbl_805D8458);
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) (M2C_FIELD(arg0, f32 *, 0x5C) + lbl_805D8458);
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, M2C_FIELD(arg0, u8 **, 0x84));
    VecCopy__FP3VecPC3Vec(arg0 + 0x64, M2C_FIELD(arg0, u8 **, 0x84));
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) (M2C_FIELD(arg0, f32 *, 0x68) - lbl_805D8458);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) + lbl_805D8458);
}

}
