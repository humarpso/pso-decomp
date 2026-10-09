#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80148DCC { char pad[0x18]; };
struct VObj_80148DCC : Base_80148DCC {
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
    virtual s32  m17(s32);
};
struct Base1_80148e54 { char pad[0x18]; };
struct VObj1_80148e54 : Base1_80148e54 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct VBase_18_3eea3b
{
  char pad[0x18];
};

struct VObj_18_3eea3b : VBase_18_3eea3b {
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
    virtual M2C_UNK m81();
    virtual M2C_UNK m82();
    virtual M2C_UNK m83();
    virtual M2C_UNK m84();
};

extern "C" {
void obj_clearFlags30(void *, u32);
void copy_position__20TBoss3VoloptHiraisinFi(s32);
void update_prev_position__10TObjPlayerFPv(void *);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, u32);
void set_indexed_flags(void *, s32, s32);
s32 get_register__12TQuestThreadFPvi(void *, s32);
s32 is_not_split_screen__13TRaderMapCoreFv(void);
M2C_UNK advance_animation_playback(void *);
M2C_UNK submit_cursor_candidate(void *, int);
extern u8 *quest_mission_manager;
extern u8 *quest_area_manager;
void run_task__11TObjNpcBaseFPv(u8 *arg0);
}

extern "C" {

void update_battle_target__10TObjPlayerFPv(void *arg0);
void draw_model__10TObjPlayerFPv(u8 *arg0);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_chunk_object(s32);
M2C_UNK restore_scene_lighting();
M2C_UNK select_actor_lighting(void *);
M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, M2C_UNK, M2C_UNK);
u16 find_nearest_visible_player(void *, M2C_UNK, f32 *, f32);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(M2C_UNK, void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix_from(M2C_UNK);
M2C_UNK pop_matrix();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
s32 get_player_by_client_id(u32);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);

void update_battle_target__10TObjPlayerFPv(void *arg0) {
    f32 *temp_r5;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 3) {
        if (((VObj_80148DCC *)arg0)->m17(30) != 0) {
            temp_r5 = M2C_FIELD(arg0, f32 **, 0x350);
            M2C_FIELD(arg0, u16 *, 0x338) = find_nearest_visible_player(arg0, 0, temp_r5, *temp_r5);
            {
                u32 tmp338 = (u32) M2C_FIELD(arg0, u16 *, 0x338);
                if (tmp338 != 0xFFFF) {
                    M2C_FIELD(arg0, s32 *, 0x2A8) = get_player_by_client_id(tmp338);
                } else {
                    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
                }
            }
        }
    }
}

extern s32 some_id_805c6f74;

void draw_model__10TObjPlayerFPv(u8 *arg0) {
    VObj1_80148e54 *self = (VObj1_80148e54 *)arg0;
    if ((self->m8(M2C_FIELD(arg0, f32 *, 0x398), M2C_FIELD(arg0, f32 *, 0x39C)) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x390) == 1)) {
        select_actor_lighting(arg0);
        some_id_805c6f74 |= 1;
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        push_matrix_from(0);
        set_position_vec3__10TObjPlayerFPvPv(0, arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_flag__10TObjPlayerFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x394) != 0) {
            draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            draw__16TObjEneRe7BeruraFPv(arg0);
        }
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        some_id_805c6f74 &= 0xFFFFFFFE;
        restore_scene_lighting();
        render_with_position_override__10TObjPlayerFPvPvi(arg0, 0, 0);
    }
}
typedef struct VBase_18_3eea3b VBase_18_3eea3b;
typedef struct VObj_18_3eea3b VObj_18_3eea3b;
#define PSO_VCALL_VObj_18_3eea3b_m81(_self) (((VObj_18_3eea3b *)(_self))->m81())
#define PSO_VCALL_VObj_18_3eea3b_m82(_self) (((VObj_18_3eea3b *)(_self))->m82())
#define PSO_VCALL_VObj_18_3eea3b_m83(_self) (((VObj_18_3eea3b *)(_self))->m83())
#define PSO_VCALL_VObj_18_3eea3b_m84(_self) (((VObj_18_3eea3b *)(_self))->m84())
void run_task__11TObjNpcBaseFPv(u8 *arg0) {
  s16 temp_r0;
  s32 temp_r4;
  s32 temp_r4_2;
  u8 *new_var;
  u8 *var_r31;
  if ((((s32) (*((s32 *) (((s8 *) arg0) + ((((((((((0x3A0 & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu))))) <= 0) && (((s32) (*((s32 *) (((s8 *) arg0) + 0x3A4)))) <= 0))
  {
    *((s32 *) (((s8 *) arg0) + 0x390)) = 1;
    set_indexed_flags(arg0, 0, 1);
  }
  else
  {
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x38C)))) == 0)
    {
      var_r31 = (u8 *) quest_mission_manager;
    }
    else
    {
      var_r31 = (u8 *) quest_area_manager;
    }
    temp_r4 = *((s32 *) (((s8 *) arg0) + 0x3A0));
    if (temp_r4 > 0)
    {
      if (get_register__12TQuestThreadFPvi(var_r31, temp_r4) != 0)
      {
        *((s32 *) (((s8 *) arg0) + 0x390)) = 1;
        set_indexed_flags(arg0, 0, 1);
      }
      else
      {
        *((s32 *) (((s8 *) arg0) + 0x390)) = 0;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1U);
      }
    }
    temp_r4_2 = *((s32 *) (((s8 *) arg0) + 0x3A4));
    if ((temp_r4_2 > 0) && (get_register__12TQuestThreadFPvi(var_r31, temp_r4_2) != 0))
    {
      *((s32 *) (((s8 *) arg0) + 0x390)) = 0;
      clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1U);
    }
  }
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  switch (temp_r0)
  {
    case 0:
      PSO_VCALL_VObj_18_3eea3b_m81(arg0);
      break;
    case 1:
      PSO_VCALL_VObj_18_3eea3b_m82(arg0);
      break;
    case 2:
      PSO_VCALL_VObj_18_3eea3b_m83(arg0);
      break;
    case 3:
      PSO_VCALL_VObj_18_3eea3b_m84(arg0);
      break;
  }
  advance_animation_playback((void *) arg0);
  update_prev_position__10TObjPlayerFPv(arg0);
  new_var = arg0;
  copy_position__20TBoss3VoloptHiraisinFi((s32) new_var);
  if ((((s32) (*((s32 *) (((s8 *) arg0) + 0x3A8)))) > 0) && (is_not_split_screen__13TRaderMapCoreFv() == 0))
  {
    submit_cursor_candidate((void *) arg0, (int) (-1));
  }
  obj_clearFlags30(arg0, 0x1B3FU);
}

}
