#include "types.h"
#include "pso/misc/TLobby_80335E08.h"
#include "pso/misc/TWindowSubStatusDisp_803DEE6C.h"
#include "pso/ui/TAdTrialAgreementGC_80335958.h"
#include "pso/ui/TUnk_804EE458.h"
#include "pso/misc/TUnk_804EE470.h"
#include "pso/misc/TLobby.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/player/TObjPlayer.h"

struct Stack_80335E7C
{
  f32 sp8;
  f32 spC;
  f32 sp10;
  f32 sp14;
  f32 sp18;
  f32 sp1C;
  f32 sp20;
  f32 sp24;
};

struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    s32 value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
extern s32 lbl_804EE470[];
int __ct__7TObjectFP7TObject(void *);
    extern unsigned char lobby_record_table[];
s32 TCameraCtrl__sub_80068EF0();
extern const f32 lbl_805DF8C8;
extern const f32 lbl_805DF8CC;
extern const f32 lbl_805DF8D0;
extern const f32 lbl_805DF8D4;
extern const f32 lbl_805DF8D8;
extern const f32 lbl_805DF8DC;
extern const f32 lbl_805DF8E0;
extern const f32 lbl_805DF8E4;
extern RecoveredGlobal_8000F7FC_lbl_80515F48 title_texture_list;

    extern unsigned char lbl_804EE458[];
    extern const float lbl_805DF8B4;
    extern const float lbl_805DF8C0;
void*TUnk_804EE458::init_camera_state(int a1) { __ct__7TObjectFP7TObject((void *)(this)); *(int*)((char*)this + 0x18) = (int)lbl_804EE458; *(int*)((char*)this + 0x1c) = a1; this->m_20 = 0; *(int*)((char*)this + 0x24) = 0; this->m_28 = lbl_805DF8C0; *(float*)((char*)this + 0x2c) = lbl_805DF8B4; this->m_30 = lbl_805DF8B4; *(float*)((char*)this + 0x34) = lbl_805DF8B4; this->m_38 = 0; return this; }

void TLobby__sub_80335E74(void) {  }
void TLobby__sub_80335E78(void) {  }

typedef struct Stack_80335E7C Stack_80335E7C;
void TUnk_804EE470::render() {
  Stack_80335E7C stack;
  TParticleCtrl::begin_effect_render();
  TCameraCtrl::restore_full_screen_view();
  begin_screen_draw(1);
  bind_title_texture_list();
  set_draw_texture_and_color(1, -1);
  stack.sp8 = lbl_805DF8C8;
  stack.spC = lbl_805DF8CC;
  stack.sp10 = lbl_805DF8D0;
  stack.sp14 = lbl_805DF8D4;
  stack.sp1C = (stack.sp18 = lbl_805DF8D8);
  stack.sp24 = (stack.sp20 = lbl_805DF8DC);
  draw_textured_quad_at_depth((&stack.sp8), (f32) lbl_805DF8E0);
  set_draw_texture_and_color(2, -1);
  stack.sp8 = lbl_805DF8D0;
  stack.spC = lbl_805DF8CC;
  stack.sp10 = lbl_805DF8E4;
  stack.sp14 = lbl_805DF8D4;
  draw_textured_quad_at_depth((&stack.sp8), (f32) lbl_805DF8E0);
  TWindowSubStatusDisp::get_player();
  TCameraCtrl__sub_80068EF0();
  TParticleCtrl::end_effect_render();
}

void TUnk_804EE470::run_task() {  }
void *TUnk_804EE470::dt(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804EE470;
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}
void *TUnk_804EE470::ct_with_parent(void *arg1) {
    __ct__7TObjectFP7TObject((void *)(this));
    *(s32 **)((s8 *)this + 0x18) = lbl_804EE470;
    *(void * *)&this->unk_1C = arg1;
    return this;
}
void TLobby__sub_80335FE0(void) {  }
void TLobby__sub_80335FE4(void) {  }

void *get_title_texture_list(void) {
    return ((char *)&title_texture_list);
}

void*TLobby::get_record(int a0) {  return (char*)lobby_record_table + a0 * 32; }

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];
void bind_title_texture_list(void) {
    TObjPlayer::notify_fish_if_valid((u32)((s32 *)(&title_texture_list.value)));
}
typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

int TLobby__sub_80336030(void* p) { return TAdTrialAgreementGC__sub_8033596C(*(void**)((char*)p + 0x24)); }

}
