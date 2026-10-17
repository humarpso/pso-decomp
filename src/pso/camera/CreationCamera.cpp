#include "types.h"
#include "pso/camera/CreationCamera.h"
#include "pso/misc/TCameraCtrl_80067654.h"
#include "pso/misc/TCameraCtrl_80067FC0.h"
#include "pso/ui/TAdSinglePlyChrSelectGC_801FBF54.h"
#include "pso/camera/TUnk_804DAB08.h"
#include "pso/object/TObjCMProportion.h"
struct CreationCameraVTable { void* reserved[2]; void (*methods[10])(); };
#include "pso/misc/CharacterAppearance.h"

struct CreationHeightBounds { f32 minimum, maximum; };

#include "pso/camera/CreationCamera.h"

struct Cam_80291784 {
    u8 pad[0x78];
    s32 mode;
    s32 timer;
};

extern "C" {
s32 TObjCMProportion__sub_8029916C(s32);
extern int creation_camera_mode;
extern const f32 lbl_805DD990;
extern const f32 lbl_805DD994;
f32 calc_character_height(void *);
extern CreationHeightBounds creation_camera_height_bounds_table[12];
extern CharacterAppearanceFields *creation_player_character;
extern const f32 lbl_805DD978;
extern const f32 lbl_805DD99C;
extern const f32 lbl_805DD9A0;
f32 cos_table_lookup(s32);
extern const f32 lbl_805DD96C,lbl_805DD978,lbl_805DD998;
void approach_creation_camera_target(u8 *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
extern const f32 lbl_805DD96C;
extern const f32 lbl_805DD998;
extern const f32 lbl_805DD9A4;
extern const f32 lbl_805DD9A8;
extern const f32 lbl_805DD9AC;
extern const f32 lbl_805DD9B0;
void update_creation_camera_auto(Cam_80291784 *arg0);
f32 TObjCMProportion::get_ratio(void),TObjCMProportion::get_right_trigger_ratio(void);
void get_creation_pad_stick(void*,void*);
s32 TObjCMProportion__sub_8029914C(s32);
f32 sin_table_lookup(s32),cos_table_lookup(s32);
extern const f32 lbl_805DD974,lbl_805DD978,lbl_805DD9B4,lbl_805DD9B8,lbl_805DD9BC,lbl_805DD9C0;
void *__nw__7TObjectFUl(int);
void update_creation_camera_auto(Cam_80291784*);

}

#include "pso/misc/TCameraCtrl.h"

struct RecoveredGlobal_80291D4C_lbl_80540958 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
int __ct__13TUnk_80488A28Fv(void);
extern CreationCameraVTable lbl_804DAB08;
    extern const float lbl_805DD974;
    extern const float lbl_805DD9C4;
    extern const float lbl_805DD9C8;
    extern int TObjCMMainMenu__selected_entry_id;
s32 decode_obfuscated_string__6TLobbyFPvi(void *, void *, int, int);
extern RecoveredGlobal_80291D4C_lbl_80540958 lbl_80540958;
void calc_spherical_camera_position__13TUnk_804DAB08Fv(CreationCamera*);
int creation_camera_mode;
void __dl__7TObjectFPv(void *);

typedef char RecoveredGlobal_80291D4C_lbl_80540958_size[sizeof(RecoveredGlobal_80291D4C_lbl_80540958) == 0x10 ? 1 : -1];

#pragma defer_codegen on
s32 *TLobby__sub_80291D4C(void) {
    s32 character_save_record;
    character_save_record = get_character_save_record(0xFFFFU);
    decode_obfuscated_string__6TLobbyFPvi((void *) (&lbl_80540958.value), (void *) (character_save_record + 0x229C), (int) (0xC), (int) (character_save_record));
    return &lbl_80540958.value;
}
u32 get_character_creation_selected_entry_id(void) {  return TObjCMMainMenu__selected_entry_id; }
void* construct_creation_camera(void* a0) { __ct__13TUnk_80488A28Fv(); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)&lbl_804DAB08); *(int *)&((TUnk_804DAB08 *)a0)->m_38 = 0; *(float*)((char*)a0 + 0x48) = lbl_805DD974; *(float *)&((TUnk_804DAB08 *)a0)->m_4c = lbl_805DD9C4; *(float*)((char*)a0 + 0x50) = lbl_805DD974; *(float*)((char*)a0 + 0x6c) = lbl_805DD9C8; *(int*)((char*)a0 + 0x74) = 0; *(int *)&((TUnk_804DAB08 *)a0)->m_70 = 0; ((TUnk_804DAB08 *)a0)->m_78 = 2; *(int*)((char*)a0 + 0x7c) = 0; ((TUnk_804DAB08 *)a0)->m_88 = lbl_805DD974; *(float*)((char*)a0 + 0x8c) = lbl_805DD974; creation_camera_mode = 0; *(int *)&((TUnk_804DAB08 *)a0)->m_54 = 17294; return a0; }
void *TCameraCtrl__sub_80291C64(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)&lbl_804DAB08;
        __dt__13TUnk_80488A28Fv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
}

void CreationCamera::run_task() {
    static void (CreationCamera::*modes[5])() = {
        &CreationCamera::update_auto, &CreationCamera::begin_review,
        &CreationCamera::advance_review, &CreationCamera::update_idle,
        &CreationCamera::advance_manual,
    };
    (this->*modes[creation_camera_mode])();
    calc_spherical_camera_position__13TUnk_804DAB08Fv(this);
}

extern "C" {
CreationHeightBounds creation_camera_height_bounds_table[12] = {
    {1.04999995f, 1.58000004f},
    {1.17999995f, 1.52999997f},
    {1.5f, 1.88f},
    {1.23000002f, 1.63f},
    {1.29999995f, 1.64999998f},
    {1.13f, 1.58000004f},
    {1.08000004f, 1.38f},
    {1.27999997f, 1.67999995f},
    {1.08000004f, 1.48000002f},
    {1.08000004f, 1.5f},
    {1.20000005f, 1.70000005f},
    {1.13f, 1.5f}
};
struct CreationViewParameters { f32 values[18]; };
CreationViewParameters creation_view_parameters[2] = {
    {{1.0f, 1.0f, 320.0f, 240.0f, 1.0f, 1.0f, 500.0f, 1.0f, 1.0f, 1.0f, 640.0f, 480.0f, 0.0f, 0.0f, 20.0f, 15.0f, 1.0f, 1.0f}},
    {{1.0f, 1.0f, 460.800018f, 240.0f, 1.0f, 1.0f, 500.0f, 1.0f, 1.0f, 1.0f, 640.0f, 480.0f, 0.0f, 0.0f, 20.0f, 15.0f, 1.0f, 1.0f}}
};
void run_task__14CreationCameraFv();
void render__7TObjectFv(); void render_shadows__7TObjectFv();
void TCameraCtrl::post_update_view();
CreationCameraVTable lbl_804DAB08 = {{0,0}, {
    (void(*)())TCameraCtrl__sub_80291C64, run_task__14CreationCameraFv,
    render__7TObjectFv, render_shadows__7TObjectFv,
    TCameraCtrl__sub_80067654, TCameraCtrl__sub_80067658,
    TCameraCtrl__sub_80067660, TCameraCtrl__sub_8006765C,
    TCameraCtrl__sub_80067664, TCameraCtrl::post_update_view,
}};
void *TCameraCtrl__vt8(void) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = construct_creation_camera(o);
    }
    return o;
}
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void CreationCamera::advance_manual(){
  s32 new_var;
  s32 sp10;
  f32 spC;
  f32 sp8;
  f32 temp_f1;
  f32 temp_f1_2;
  f32 temp_f1_3;
  s32 temp_r0;
  s32 temp_r0_2;
  s32 var_r4;

  if (TObjCMProportion__sub_8029914C(0x10) != 0)
  {
    temp_f1 = this->height;
    temp_f1 = temp_f1;
    temp_f1 = temp_f1 + lbl_805DD9B4;
    this->height = temp_f1;
    if (temp_f1 > lbl_805DD9B8)
    {
      this->height = (f32) lbl_805DD9B8;
    }
  }
  else
    if (TObjCMProportion__sub_8029914C(0x20) != 0)
  {
    temp_f1_2 = this->height;
    temp_f1_2 = temp_f1_2;
    temp_f1_2 = temp_f1_2 - lbl_805DD9B4;
    this->height = temp_f1_2;
    if (temp_f1_2 < lbl_805DD978)
    {
      this->height = (f32) lbl_805DD978;
    }
  }

  get_creation_pad_stick(&sp10, &spC);
  if (lbl_805DD974 != spC)
  {
    this->yaw = (s32) (((lbl_805DD9BC * spC) * sin_table_lookup(sp10)) + ((f32) this->yaw));
    new_var = (s32) (((lbl_805DD9BC * spC) * cos_table_lookup(sp10)) + ((f32) this->pitch));
    var_r4 = -0x2BBC;
    this->pitch = new_var;
    if ((((void *) creation_player_character) != 0) && ((((s32) creation_player_character->classId) == 0xA) || (creation_player_character->classFlags & 2)))
    {
      var_r4 = 0;
    }
    temp_r0 = this->pitch;
    if (temp_r0 > 0x2BBC)
    {
      this->pitch = 0x2BBC;
    }
    else
      if (temp_r0 < var_r4)
    {
      this->pitch = var_r4;
    }
  }
  else
    if (TObjCMProportion__sub_8029914C(0x80) != 0)
  {
    this->yaw = (s32) (this->yaw + 0x444);
  }
  else
    if (TObjCMProportion__sub_8029914C(0x40) != 0)
  {
    this->yaw = (s32) (this->yaw - 0x444);
  }
  this->distance = (f32) (this->distance + TObjCMProportion::get_right_trigger_ratio());
  this->distance = (f32) (this->distance - TObjCMProportion::get_ratio());
  temp_f1_3 = this->distance;
  if (temp_f1_3 > lbl_805DD9C0)
  {
    this->distance = (f32) lbl_805DD9C0;
  }
  else
    if (temp_f1_3 < lbl_805DD9B8)
  {
    this->distance = (f32) lbl_805DD9B8;
  }
  get_creation_pad_stick(0, &sp8);
  if ((sp8 > lbl_805DD974) || (TObjCMProportion__sub_8029914C(0x300F0) != 0))
  {
    this->ticks = 0;
    return;
  }
  temp_r0_2 = this->ticks + 1;
  this->ticks = temp_r0_2;
  if (temp_r0_2 > 0x96)
  {
    creation_camera_mode = 3;
  }
}
#pragma pop

void CreationCamera::update_auto(){ update_creation_camera_auto((Cam_80291784*)this); }

extern "C" {
void update_creation_camera_auto(Cam_80291784 *arg0) {
    s32 want;
    switch (get_character_creation_selected_entry_id()) {
    case 0:
    case 1:
    case 2:
    case 4:
        want = 0;
        break;
    case 6:
    case 8:
        want = 1;
        break;
    default:
        want = 2;
        break;
    }
    if (arg0->mode == want) {
        arg0->timer = 0;
    } else if (++arg0->timer > 30) {
        arg0->mode = want;
        arg0->timer = 0;
    }
    if (creation_player_character != NULL) {
        f32 s = calc_character_height(creation_player_character);
        switch (arg0->mode) {
        case 0:
            approach_creation_camera_target((u8 *)arg0, (s32)(0), (s32)(0), (f32)(lbl_805DD96C * s), (f32)(lbl_805DD9A4 * s));
            break;
        case 1:
            approach_creation_camera_target((u8 *)arg0, (s32)(0), (s32)(0), (f32)lbl_805DD998, (f32)lbl_805DD9A8);
            break;
        case 2:
            approach_creation_camera_target((u8 *)arg0, (s32)(0), (s32)(0), (f32)(lbl_805DD9AC * s), (f32)(lbl_805DD9B0 * s));
            break;
        }
    }
}
}

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
void CreationCamera::begin_review(){
    f32 temp_f2;
    s32 temp_r7;
    if ((void *) creation_player_character != NULL) {
        *(f32 *)((s8 *)this + 0x6C) = (f32) (lbl_805DD99C * calc_character_height((void *) (creation_player_character)));
        *(f32 *)((s8 *)this + 0x80) = (f32) *(f32 *)((s8 *)this + 0x6C);
        temp_r7 = (s8) *(u8 *)((s8 *)creation_player_character + 0x31) * 8;
        temp_f2 = *(f32 *)((s8 *)((u8 *)(creation_camera_height_bounds_table) + temp_r7) + 0);
        *(f32 *)((s8 *)this + 0x4C) = (f32) (lbl_805DD9A0 * (((lbl_805DD978 - *(f32 *)((s8 *)creation_player_character + 0x4C)) * (*(f32 *)((s8 *)((u8 *)(creation_camera_height_bounds_table) + temp_r7) + 4) - temp_f2)) + temp_f2));
        *(s32 *)((s8 *)this + 0x74) = 0;
        *(s32 *)((s8 *)this + 0x70) = 0;
        creation_camera_mode = 2;
        *(s32 *)((s8 *)this + 0x84) = 0x78;
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
void CreationCamera::advance_review(){
 if(--this->ticks<=0) {this->ticks=0;creation_camera_mode=3;return;}
 const f32 weight=lbl_805DD96C*(lbl_805DD978+cos_table_lookup((this->ticks<<15)/120));
 const f32 start=this->startDistance;
 this->distance=weight*(lbl_805DD998-start)+start;
}
#pragma pop

#pragma push
#pragma fp_contract on
void CreationCamera::update_idle(){
    s32 temp_r0;
    s32 temp_r0_2;
    if (TObjCMProportion__sub_8029916C(0x6F0) != 0) {
        *(u32 *)((s8 *)this + 0x84) = 0U;
        creation_camera_mode = 4;
        return;
    }
    *(u32 *)((s8 *)this + 0x84) = (u32) (*(u32 *)((s8 *)this + 0x84) + 1);
    if (*(u32 *)((s8 *)this + 0x84) & 0x100) {
        if ((*(s32 *)((s8 *)this + 0x70) > -0x6D) && (*(s32 *)((s8 *)this + 0x70) < 0x6D)) {
            *(s32 *)((s8 *)this + 0x70) = 0;
        } else {
            temp_r0 = *(s32 *)((s8 *)this + 0x70);
            if (temp_r0 < 0) {
                *(s32 *)((s8 *)this + 0x70) = temp_r0 + 0x6D;
            } else {
                *(s32 *)((s8 *)this + 0x70) = temp_r0 - 0x6D;
            }
        }
        temp_r0_2 = ((u32) *(u32 *)((s8 *)this + 0x84) >> 9U) & 3;
        switch (temp_r0_2) {
        case 0:
            *(s32 *)((s8 *)this + 0x74) = (s32) (*(s32 *)((s8 *)this + 0x74) + 0xDA);
            return;
        case 1:
            *(f32 *)((s8 *)this + 0x6C) = (f32) (*(f32 *)((s8 *)this + 0x6C) + lbl_805DD990);
            return;
        case 2:
            *(s32 *)((s8 *)this + 0x74) = (s32) (*(s32 *)((s8 *)this + 0x74) - 0xDA);
            return;
        case 3:
            *(f32 *)((s8 *)this + 0x6C) = (f32) (*(f32 *)((s8 *)this + 0x6C) + lbl_805DD994);
            break;
        }
    }
}
#pragma pop

#pragma defer_codegen off
