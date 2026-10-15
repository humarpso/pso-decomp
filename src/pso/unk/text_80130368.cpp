#include "types.h"

struct VBase_18_382324
{
  char pad[0x18];
};

struct VObj_18_382324 : VBase_18_382324 {
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
    virtual s32 m49(void *, s32, s32, s32);
};

extern "C" {
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFv(int);
s8 TObjPlayer__sub_80102C30(void *);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 update_technique_slot__10TTecRaFoieFl(int, int, int);
s32 play_sound_effect(int, int, int, int);
void TObjPlayer__sub_801303D8(u8 *arg0);
s32 init_shoot_model__10TObjPlayerFv(int, void *, void *, void *, f32);
s32 __nw__7TObjectFUl(int);
s32 create_shoot_model__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
s32 send_6x61_activate_mag_effect(void *, int);
s32 spawn_item_timer__13TItemAttackerFlll(void *, void *, int);
s32 is_mode_two_and_ready__10TObjPlayerFv();
s32 for_each_target_in_range__10TObjPlayerFPvf(void *, f32);
s32 update_active_game_effect__10TObjPlayerFv(void *);
s32 draw_status_icon__10TObjPlayerFl(void *, void *);
void TObjPlayer__sub_801307D0(void);
extern const f32 lbl_805DB000;
void TObjPlayer__sub_80130490(u8 *arg0);
}

extern "C" {

typedef struct VBase_18_382324 VBase_18_382324;
typedef struct VObj_18_382324 VObj_18_382324;
#define PSO_VCALL_VObj_18_382324_m49(_self, _arg0, _arg1, _arg2, _arg3) (((VObj_18_382324 *)(_self))->m49((_arg0), (_arg1), (_arg2), (_arg3)))

s32 create_shoot_model__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 temp_r3;
    s32 var_r0;
    s32 var_r3;
    var_r3 = 0;
    if (arg0 != 0) {
        temp_r3 = __nw__7TObjectFUl((int) (0x6C));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = init_shoot_model__10TObjPlayerFv((int) (temp_r3), (void *) (arg0), (void *) (arg1), (void *) (arg2), (f32) (farg0));
        }
        var_r3 = var_r0;
    }
    return var_r3;
}

void TObjPlayer__sub_801303D8(u8 *arg0) {
  s32 temp_r31;
  if ((((u32) (*((u32 *) (((s8 *) arg0) + 0xF0)))) != 0U) && (reset_key_machine_state__10TObjPlayerFv() != 0))
  {
    ;
    if ((get_current_floor() == get_field_3e4__10TObjPlayerFv((int) (*((u32 *) (((s8 *) arg0) + 0xF0))))) && (TObjPlayer__sub_80102C30((void *) arg0) == 2))
    {
      if (!arg0)
      {
      }
      update_technique_slot__10TTecRaFoieFl((int) play_sound_effect((int) 0x4001AA05, (int) ((*((u32 *) (((s8 *) arg0) + 0xF0))) + 0x38), (int) 0, (int) 0), (int) 0x300, (int) 0);
      PSO_VCALL_VObj_18_382324_m49(arg0, arg0 + 0x208, 0, 0, 1);
    }
  }
}
void TObjPlayer__sub_80130490(u8 *arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        draw_status_icon__10TObjPlayerFl((void *) (arg0), (void *) (arg0 + 0x208));
        if ((s32) *(s32 *)((s8 *)arg0 + 0x1FC) > 0x1999) {
            send_6x61_activate_mag_effect((void *) (arg0), (int) (0));
            spawn_item_timer__13TItemAttackerFlll((void *) (arg0), (void *) (TObjPlayer__sub_801307D0), (int) (0x1E));
            *(s32 *)((s8 *)arg0 + 0x204) = 0;
            return;
        }
        for_each_target_in_range__10TObjPlayerFPvf((void *) (arg0), (f32) (lbl_805DB000));
        return;
    }
    update_active_game_effect__10TObjPlayerFv((void *) (arg0));
}

}
