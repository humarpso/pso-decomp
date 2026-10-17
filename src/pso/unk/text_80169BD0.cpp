#include "types.h"
#include "pso/misc/TUnk_804B27D8.h"
#include "pso/TObject.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct Base { char pad[0x18]; };

struct VObj : Base {
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

extern "C" {
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_chunk_model(s32);
s32 draw_chunk_object(void *);
s32 draw_model_motion(void *, void *, f32);
s32 submit_cursor_candidate(void *, int);
s32 check_player_flag1__6TLobbyFv();
s32 end_conversation_camera();
s32 begin_conversation_camera();
s32 is_any_player_within_radius_xz(void *, f32);
s32 get_player_by_client_id(void *);
u32 __ct__12TQuestThreadFv(int, void *, int);
u32 __nw__7TObjectFUl(int);
extern s32 local_client_id;
extern u32 quest_mission_manager;
extern u32 quest_area_manager;
extern s32 tl_00;
extern const f32 lbl_805DB6D8;
extern const f32 lbl_805DB6DC;

void TUnk_804B27D8::run_task() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f0;
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 player;
    u32 temp_r3;
    u32 dc;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 temp_r3_5;
    u32 var_r0;
    u32 var_r0_2;
    if (TObjPlayer::check_demo_mode() == 1) {
        this->vfunc_16();
        return;
    }
    temp_r0 = *(s32 *)&this->m_ac;
    switch (temp_r0) {
    case 0:
        if ((this->update_active_state() != 0) && (is_any_player_within_radius_xz((void *) (arg0), (f32) (lbl_805DB6D8)) != 0) && ((s32) *(s32 *)&this->unk_D8 > 0)) {
            *(s32 *)&this->m_ac = 1;
        }
        break;
    case 1:
        submit_cursor_candidate((void *) (arg0), (int) (-1));
        break;
    case 2:
        if ((s32) this->m_94 == (s32) local_client_id) {
            *(s32 *)&this->m_ac = 3;
            begin_conversation_camera();
            temp_r0_2 = this->m_d4;
            if ((temp_r0_2 >= 0x64) && (temp_r0_2 < 0x3E8) && ((u32) quest_mission_manager != 0U) && (((TObject *)quest_mission_manager)->all_parents_unqueued_for_destruction() != 0)) {
                temp_r3 = __nw__7TObjectFUl((int) (0x194));
                var_r0 = temp_r3;
                if (var_r0 != 0U) {
                    var_r0 = __ct__12TQuestThreadFv((int) (temp_r3), (void *) (quest_mission_manager), (int) (*(s32 *)&this->unk_D8));
                }
                this->m_dc = var_r0;
                dc = this->m_dc;
                if (dc != 0U) {
                    ((TObject *)dc)->set_parent((TObject *)tl_00);
                }
            } else if (((u32) quest_area_manager != 0U) && (((TObject *)quest_area_manager)->all_parents_unqueued_for_destruction() != 0)) {
                temp_r3_3 = __nw__7TObjectFUl((int) (0x194));
                var_r0_2 = temp_r3_3;
                if (var_r0_2 != 0U) {
                    var_r0_2 = __ct__12TQuestThreadFv((int) (temp_r3_3), (void *) (quest_area_manager), (int) (*(s32 *)&this->unk_D8));
                }
                this->m_dc = var_r0_2;
                temp_r3_4 = this->m_dc;
                if (temp_r3_4 != 0U) {
                    ((TObject *)temp_r3_4)->set_parent((TObject *)tl_00);
                }
            }
        } else {
            *(s32 *)&this->m_ac = 1;
            this->m_94 = 0xFFFFU;
        }
        break;
    case 3:
        temp_r3_5 = this->m_dc;
        if (((temp_r3_5 != 0U) && (((TObject *)temp_r3_5)->all_parents_unqueued_for_destruction() == 0)) || ((u32) this->m_dc == 0U)) {
            *(s32 *)&this->m_ac = 0;
            this->m_dc = 0U;
            end_conversation_camera();
            if ((s32) this->m_94 == (s32) local_client_id) {
                player = get_player_by_client_id((void *) (local_client_id));
                if ((player != 0) && (check_player_flag1__6TLobbyFv() != 0)) {
                    TObjPlayer::send_code_45_1((int) (player));
                }
            }
        }
        break;
    }
    this->m_b0 = (f32) (this->m_b0 + lbl_805DB6DC);
    temp_f1 = *(f32 *)&this->m_b4;
    temp_f0 = this->m_b0;
    if (temp_f1 < temp_f0) {
        this->m_b0 = (f32) (temp_f0 - temp_f1);
    }
    this->vfunc_15();
}

#pragma push
#pragma fp_contract on
void TUnk_804B27D8::render() {
    u8 *arg0 = (u8 *)this;
    this->m_e0 = ((VObj *)arg0)->m8(this->m_c0, *(f32 *)&this->m_c4);
    if ((s32) this->m_e0 == 1) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, this->rotation_y);
        TObjFish::set_global_param(this->texture_id);
        if ((s32) this->m_cc == 1) {
            void *p = *(void * *)&this->m_bc;
            if (p != NULL) {
                draw_model_motion(*(void * *)&this->model, p, this->m_b0);
            } else {
                draw_chunk_object(*(void * *)&this->model);
            }
        } else {
            draw_chunk_model(*(s32 *)((s8 *)(*(void * *)&this->model) + 4));
        }
        pop_matrix();
    }
}
#pragma pop

}
