#include "types.h"
#include "pso/boss/TBoss2DeRolLe.h"
#include "pso/misc/TLobby_80335E08.h"
#include "pso/system/ChunkMaterialState.h"
#include "pso/ui/TAdTrialAgreementGC_80335958.h"
#include "pso/ui/TUnk_804EE458.h"
#include "pso/misc/TWindowChoiceSetting.h"
#include "pso/ui/TAdMultiPlyChrSelectGC.h"
#include "pso/ui/TAdTrialAgreementGC.h"
#include "pso/TMainTask.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80335BD4_lbl_8050BEC0 { s32 value; u8 remaining[0x1C]; };
typedef char RecoveredGlobal_80335BD4_lbl_8050BEC0_size[sizeof(RecoveredGlobal_80335BD4_lbl_8050BEC0) == 0x20 ? 1 : -1];

struct RecoveredGlobal_80335BD4_lbl_8058D4C0 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80335BD4_lbl_8058D4C0_size[sizeof(RecoveredGlobal_80335BD4_lbl_8058D4C0) == 0x10 ? 1 : -1];

struct RecoveredGlobal_80335A58_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80335A58_lbl_8050E3B8 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80335974_lbl_8050E208
{
  s32 value;
  u8 remaining[0x1AC];
};

struct RecoveredGlobal_80335974_lbl_8050E3B8
{
  s32 value;
  u8 remaining[0x1AC];
};

extern "C" {
s32 TCameraCtrl__sub_80068EF0();
s32 draw_record_with_camera__19TAdTrialAgreementGCFlll(void *, void *, int);
extern RecoveredGlobal_80335BD4_lbl_8050BEC0 saved_model_draw_color;
extern RecoveredGlobal_80335BD4_lbl_8058D4C0 model_material_color;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 lbl_805DF8B0;
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 play_sound_effect(int, int, int, int);
extern RecoveredGlobal_80335A58_lbl_8050E208 controller_input_state;
extern RecoveredGlobal_80335A58_lbl_8050E3B8 controller_physical_port_bank;
extern const f32 lbl_805DF8B4;
f32 sin_table_lookup(s32);
extern const f32 lbl_805DF8B8;
extern const f32 lbl_805DF8BC;
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

u8 TAdTrialAgreementGC__sub_80335958(u8 *arg0) {
    return (u8) (*(s32 *)((s8 *)arg0 + 0x24) == 2);
}

s32 TAdTrialAgreementGC__sub_8033596C(void* p) { return *(s32 *)&((TUnk_804EE458 *)p)->m_20; }

typedef char RecoveredGlobal_80335A58_lbl_8050E208_size[sizeof(RecoveredGlobal_80335A58_lbl_8050E208) == 0x1B0 ? 1 : -1];
typedef char RecoveredGlobal_80335A58_lbl_8050E3B8_size[sizeof(RecoveredGlobal_80335A58_lbl_8050E3B8) == 0x1B0 ? 1 : -1];

typedef struct RecoveredGlobal_80335974_lbl_8050E208 RecoveredGlobal_80335974_lbl_8050E208;
typedef struct RecoveredGlobal_80335974_lbl_8050E3B8 RecoveredGlobal_80335974_lbl_8050E3B8;
void TAdTrialAgreementGC::update_title_prompt() {
    u8 *arg0 = (u8 *)this;
  float new_var;
  if ((TWindowShortListCtrl__check_controller_button((int)((void *) (((u8 *) (&(*(RecoveredGlobal_80335974_lbl_8050E3B8 *)&controller_physical_port_bank).value)) + 0x20)), 8) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) (((u8 *) (&(*(RecoveredGlobal_80335974_lbl_8050E208 *)&controller_input_state).value)) + 0x160), 4) != 0))
  {
    play_sound_effect(0x52D01, 0, 0, 0);
    *(s32 *)&this->m_24 = 1;
  }
  new_var = lbl_805DF8B4 + sin_table_lookup((s32) (lbl_805DF8B8 * ((f32) (((*(s32 *)&this->m_38) % 120) * 3))));
  *((f32 *) (((s8 *) arg0) + 0x28)) = (f32) (new_var * lbl_805DF8BC);
}

void TAdTrialAgreementGC::handle_cursor_input() {
    u8 *input;
    input = (u8 *)&controller_physical_port_bank.value + 0x20;
    *(f32 *)&this->m_28 = (f32) lbl_805DF8B4;
    if ((TAdMultiPlyChrSelectGC::dispatch_draw_command((int)input, 0x10, 6, 1) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&controller_input_state.value + 0x160)), 0x10, 6, 1) != 0)) {
        *(s32 *)&this->_pad20 = (s32) (*(s32 *)&this->_pad20 - 1);
        if ((s32) *(s32 *)&this->_pad20 < 0) {
            *(s32 *)&this->_pad20 = 3;
        }
        play_sound_effect(0x54100, 0, 0, 0);
    }
    if ((TAdMultiPlyChrSelectGC::dispatch_draw_command((int)input, 0x20, 6, 1) != 0) || (TWindowChoiceSetting::apply_choice((s32)((void *) ((u8 *)&controller_input_state.value + 0x160)), 0x20, 6, 1) != 0)) {
        *(s32 *)&this->_pad20 = (s32) (*(s32 *)&this->_pad20 + 1);
        if ((s32) *(s32 *)&this->_pad20 >= 4) {
            *(s32 *)&this->_pad20 = 0;
        }
        play_sound_effect(0x54100, 0, 0, 0);
    }
    if ((TWindowShortListCtrl__check_controller_button((int)input, 4) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)&controller_input_state.value + 0x160), 4) != 0)) {
        *(s32 *)&this->m_24 = 2;
        play_sound_effect(0x40042309, 0, 0, 0);
    }
}

void TAdTrialAgreementGC::render_screen() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r31;
    s32 var_r31;
    if (TMainTask::get_state_flag() != 0) {
        TParticleCtrl::begin_effect_render();
        TCameraCtrl::restore_full_screen_view();
        lbl_805D5660 = model_render_flags;
        copy_vec4__13TRaderMapCoreFPvPv((&saved_model_draw_color.value), (&model_material_color.value));
        if ((s32) *(s32 *)&this->m_24 == 0) {
            model_render_flags |= 0x10;
            set_chunk_material_color((f32 *)(arg0 + 0x28));
            bind_title_texture_list();
            TLobby::draw_with_camera((int) (TLobby::get_record(0xA)), 0xA, 0x22, lbl_805DF8B0);
        }
        temp_r0 = *(s32 *)&this->m_24;
        if ((temp_r0 == 1) || (temp_r0 == 2)) {
            var_r31 = 0xB;
            do {
                draw_record_with_camera__19TAdTrialAgreementGCFlll((void *)arg0, (void *)var_r31, (int)var_r31);
                var_r31 += 1;
            } while (var_r31 != 0xF);
            bind_title_texture_list();
            TObjPlayer::init_xyz_limits();
            temp_r31 = TAdTrialAgreementGC__sub_8033596C(arg0);
            if ((s32) *(s32 *)&this->m_24 == 1) {
                draw_record_with_camera__19TAdTrialAgreementGCFlll(arg0, (void *)(temp_r31 + 0xF), 0xF);
                draw_record_with_camera__19TAdTrialAgreementGCFlll(arg0, (void *)(temp_r31 + 0x13), 0x13);
                draw_record_with_camera__19TAdTrialAgreementGCFlll(arg0, (void *)(temp_r31 + 0x17), 0x17);
            }
            if ((s32) *(s32 *)&this->m_24 == 2) {
                draw_record_with_camera__19TAdTrialAgreementGCFlll(arg0, (void *)(temp_r31 + 0x1B), 0x1B);
                draw_record_with_camera__19TAdTrialAgreementGCFlll(arg0, (void *)(temp_r31 + 0x1F), 0x1F);
                draw_record_with_camera__19TAdTrialAgreementGCFlll(arg0, (void *)(temp_r31 + 0x23), 0x23);
            }
            TObjPlayer::reset_transform_state();
        }
        copy_vec4__13TRaderMapCoreFPvPv((&model_material_color.value), (&saved_model_draw_color.value));
        model_render_flags = lbl_805D5660;
        TCameraCtrl__sub_80068EF0();
        TParticleCtrl::end_effect_render();
    }
}

void TAdTrialAgreementGC::run_state() {

    switch (*(s32 *)&this->m_24) {
    case 0:
        update_title_prompt();
        break;
    case 1:
        handle_cursor_input();
        break;
    case 2:
        break;
    }
    *(s32 *)&this->m_38 = (s32) (*(s32 *)&this->m_38 + 1);
}

extern s32 lbl_804EE458[];

void *__dt__13TUnk_804EE458Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804EE458;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
