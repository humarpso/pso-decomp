#include "types.h"

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

struct VBase_18_ac8580 { char pad[0x18]; };

struct VObj_18_ac8580 : VBase_18_ac8580 {
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
    virtual s32 m12();
    virtual s32 m13();
    virtual s32 m14();
};

extern "C" {
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(s32);
s32 draw_chunk_model(s32);
s32 draw_chunk_object(void *);
s32 draw_model_motion(void *, void *, f32);
void fn_80169E30(u8 *arg0);
s32 submit_cursor_candidate(void *, int);
s32 check_player_flag1__6TLobbyFv();
s32 end_conversation_camera();
s32 begin_conversation_camera();
s32 check_demo_mode__10TObjPlayerFv();
s32 is_any_player_within_radius_xz(void *, f32);
s32 send_code_45_1__10TObjPlayerFi(int);
s32 get_player_by_client_id(void *);
u32 __ct__12TQuestThreadFv(int, void *, int);
u32 __nw__7TObjectFUl(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
s32 set_parent__7TObjectFP7TObject(int, int);
extern s32 local_client_id;
extern u32 quest_mission_manager;
extern u32 quest_area_manager;
extern s32 tl_00;
extern const f32 lbl_805DB6D8;
extern const f32 lbl_805DB6DC;
void run_script_object_task(u8 *arg0);
}

extern "C" {

void run_script_object_task(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3_6;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 temp_r3_5;
    u32 var_r0;
    u32 var_r0_2;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((VObj_18_ac8580 *)(arg0))->m14();
        return;
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xAC);
    switch (temp_r0) {
    case 0:
        if ((((VObj_18_ac8580 *)(arg0))->m12() != 0) && (is_any_player_within_radius_xz((void *) (arg0), (f32) (lbl_805DB6D8)) != 0) && ((s32) *(s32 *)((s8 *)arg0 + 0xD8) > 0)) {
            *(s32 *)((s8 *)arg0 + 0xAC) = 1;
        }
        break;
    case 1:
        submit_cursor_candidate((void *) (arg0), (int) (-1));
        break;
    case 2:
        if ((s32) *(u16 *)((s8 *)arg0 + 0x94) == (s32) local_client_id) {
            *(s32 *)((s8 *)arg0 + 0xAC) = 3;
            begin_conversation_camera();
            temp_r0_2 = *(s32 *)((s8 *)arg0 + 0xD4);
            if ((temp_r0_2 >= 0x64) && (temp_r0_2 < 0x3E8) && ((u32) quest_mission_manager != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void *) (quest_mission_manager)) != 0)) {
                temp_r3 = __nw__7TObjectFUl((int) (0x194));
                var_r0 = temp_r3;
                if (var_r0 != 0U) {
                    var_r0 = __ct__12TQuestThreadFv((int) (temp_r3), (void *) (quest_mission_manager), (int) (*(s32 *)((s8 *)arg0 + 0xD8)));
                }
                *(u32 *)((s8 *)arg0 + 0xDC) = var_r0;
                temp_r3_2 = *(u32 *)((s8 *)arg0 + 0xDC);
                if (temp_r3_2 != 0U) {
                    set_parent__7TObjectFP7TObject((int) (temp_r3_2), (int) (tl_00));
                }
            } else if (((u32) quest_area_manager != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void *) (quest_area_manager)) != 0)) {
                temp_r3_3 = __nw__7TObjectFUl((int) (0x194));
                var_r0_2 = temp_r3_3;
                if (var_r0_2 != 0U) {
                    var_r0_2 = __ct__12TQuestThreadFv((int) (temp_r3_3), (void *) (quest_area_manager), (int) (*(s32 *)((s8 *)arg0 + 0xD8)));
                }
                *(u32 *)((s8 *)arg0 + 0xDC) = var_r0_2;
                temp_r3_4 = *(u32 *)((s8 *)arg0 + 0xDC);
                if (temp_r3_4 != 0U) {
                    set_parent__7TObjectFP7TObject((int) (temp_r3_4), (int) (tl_00));
                }
            }
        } else {
            *(s32 *)((s8 *)arg0 + 0xAC) = 1;
            *(u16 *)((s8 *)arg0 + 0x94) = 0xFFFFU;
        }
        break;
    case 3:
        temp_r3_5 = *(u32 *)((s8 *)arg0 + 0xDC);
        if (((temp_r3_5 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void *) (temp_r3_5)) == 0)) || ((u32) *(u32 *)((s8 *)arg0 + 0xDC) == 0U)) {
            *(s32 *)((s8 *)arg0 + 0xAC) = 0;
            *(u32 *)((s8 *)arg0 + 0xDC) = 0U;
            end_conversation_camera();
            if ((s32) *(u16 *)((s8 *)arg0 + 0x94) == (s32) local_client_id) {
                temp_r3_6 = get_player_by_client_id((void *) (local_client_id));
                if ((temp_r3_6 != 0) && (check_player_flag1__6TLobbyFv() != 0)) {
                    send_code_45_1__10TObjPlayerFi((int) (temp_r3_6));
                }
            }
        }
        break;
    }
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) (*(f32 *)((s8 *)arg0 + 0xB0) + lbl_805DB6DC);
    temp_f1 = *(f32 *)((s8 *)arg0 + 0xB4);
    temp_f0 = *(f32 *)((s8 *)arg0 + 0xB0);
    if (temp_f1 < temp_f0) {
        *(f32 *)((s8 *)arg0 + 0xB0) = (f32) (temp_f0 - temp_f1);
    }
    ((VObj_18_ac8580 *)(arg0))->m13();
}

#pragma push
#pragma fp_contract on
void fn_80169E30(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0xE0) = ((VObj *)arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4));
    if ((s32) *(s32 *)((s8 *)arg0 + 0xE0) == 1) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        set_global_param__8TObjFishFl(*(s32 *)((s8 *)arg0 + 0x24));
        if ((s32) *(s32 *)((s8 *)arg0 + 0xCC) == 1) {
            void *p = *(void **)((s8 *)arg0 + 0xBC);
            if (p != NULL) {
                draw_model_motion(*(void **)((s8 *)arg0 + 0x34), p, *(f32 *)((s8 *)arg0 + 0xB0));
            } else {
                draw_chunk_object(*(void **)((s8 *)arg0 + 0x34));
            }
        } else {
            draw_chunk_model(*(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 4));
        }
        pop_matrix();
    }
}
#pragma pop

}
