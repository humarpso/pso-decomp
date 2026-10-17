#include "types.h"
#include "pso/misc/TContainerAncient01_8018B79C.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/system/GinjaMaterial.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TContainerAncient01.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct Base_8018B820_8018B79C { char pad[0x18]; };
struct VObj_8018B820_8018B79C : Base_8018B820_8018B79C {
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
    virtual void m20(s32, f32);
};
struct VBase8018B8BC_8018B79C { char pad[0x18]; };
struct VObj8018B8BC_8018B79C : VBase8018B8BC_8018B79C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
u32 get_bml_motion(int, int);
s32 get_bml_model(int, int);
s32 submit_cursor_candidate(void *, int, f32);
s32 run_task__7TObjectFv(void *);
extern s32 TContainerAncient01__bml_resource;
extern f32 TContainerAncient01__data_805DBD10;
extern const f32 TContainerAncient01__data_805DBD1C;
extern const f32 lbl_805DBD50;
extern const f32 lbl_805DBD54;
extern const f32 lbl_805DBD58;
f32 xyz_distance_squared(void *, void *, void *);
extern const f32 TContainerAncient01__data_805DBD44;
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
s32 draw_ginja_model_with_motion(s32, s32, f32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 reset_state__19TContainerAncient01Fv();

extern f32 TContainerAncient01__data_805DBD14;

f32 TContainerAncient01::receive_physical_attack(void *, f32) {
    s16 sp8;

    if ((u16) this->m_1c >= 0x1000U) {
        reset_state__19TContainerAncient01Fv();
        if (((u32) *(u32 *)&this->m_80 != 0U) && (access_object_saved_state(&sp8, 1) != 0)) {
            sp8 = 1;
            access_object_saved_state(&sp8, 0);
            send_object_state_update(&sp8);
        }
    }
    return TContainerAncient01__data_805DBD14;
}

f32 TContainerAncient01::receive_direct_attack(void *arg1, void *arg2_arg, void *, s32, s32) {
    s32 *arg2 = (s32 *)arg2_arg;
    s32 temp_r4;
    struct VObj_8018B820_8018B79C *o = (struct VObj_8018B820_8018B79C *)this;

    temp_r4 = *arg2;
    if ((temp_r4 == 0) || ((u32) (temp_r4 - 1) <= 3U) || (temp_r4 == 0x13)) {
        o->m20(0, TContainerAncient01__data_805DBD10);
    }
    return TContainerAncient01__data_805DBD14;
}

int TContainerAncient01::calc_distance_accuracy_penalty(void *, void *, void *, float) { return 1; }

extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD4C;

s32 TContainerAncient01__vt18(s32 arg0, s32 arg1) {
    return xyz_distance_squared((void *) (arg1 + 0x38), (void *) (arg0 + 0x38), (void *) (arg0)) < TContainerAncient01__data_805DBD44;
}

void TContainerAncient01::render() {
    u8 *arg0 = (u8 *)this;
    if (((VObj8018B8BC_8018B79C *) arg0)->m8(TContainerAncient01__data_805DBD3C, lbl_805DBD4C) != 0) {
        TObjFish::set_global_param(this->texture_id);
        push_matrix();
        post_translate_matrix((u8 *)&this->position);
        rotate_matrix_y(0, this->rotation_y);
        if ((s32) *(s32 *)&this->m_35c != 0) {
            scale_current_matrix((u8 *)&this->m_360);
        }
        if (TObjPlayer::check_demo_mode() == 1) {
            draw_ginja_object((void *)(*(s32 *)&this->model));
        } else {
            draw_ginja_model_with_motion(*(s32 *)&this->model, *(s32 *)&this->unknownF8, this->m_c0);
        }
        pop_matrix();
    }
}
void TContainerAncient01::run_task() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_r0;
    if (TObjPlayer::check_demo_mode() == 0) {
        if ((s32) *(s32 *)&this->m_35c == 0) {
            temp_r0 = this->mode;
            switch (temp_r0) {
            case 0:
                ((TContainerAncient01 *)arg0)->update_wait_for_player();
                break;
            case 1:
                ((TContainerAncient01 *)arg0)->sub_8018B48C();
                break;
            case 2:
                ((TContainerAncient01 *)arg0)->sub_8018B284();
                break;
            default:
                this->mode = 0;
                this->m_b8 = (s16) this->mode;
                this->m_2b4 = (f32) TContainerAncient01__data_805DBD1C;
                ((TContainerAncient01 *)arg0)->update_wait_for_player();
                break;
            }
            temp_f1 = this->m_2b4;
            this->m_2b4 = (f32) (temp_f1 + (*(const f32 *)&TContainerAncient01__data_805DBD10));
            submit_cursor_candidate((void *) (arg0), -1, (f32) (temp_f1));
        } else {
            temp_f1_2 = *(f32 *)&this->unk_364;
            if (temp_f1_2 <= lbl_805DBD50) {
                *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (*(f32 *)((s8 *)arg0 + 0x3C) - lbl_805DBD54);
                if (*(f32 *)((s8 *)arg0 + 0x3C) <= (lbl_805DBD58 * *(f32 *)&this->unk_364)) {
                    queue_destruction__7TObjectFv(arg0);
                }
            } else {
                *(f32 *)&this->unk_364 = (f32) (temp_f1_2 - lbl_805DBD54);
            }
        }
    }
    if ((u32) this->unknownF8 == get_bml_motion((int) (TContainerAncient01__bml_resource), 0)) {
        *(s32 *)&this->model = get_bml_model((int) (TContainerAncient01__bml_resource), 0);
    }
    if ((u32) this->unknownF8 == get_bml_motion((int) (TContainerAncient01__bml_resource), 1)) {
        *(s32 *)&this->model = get_bml_model((int) (TContainerAncient01__bml_resource), 1);
    }
    run_task__7TObjectFv((void *) (arg0));
}

}
