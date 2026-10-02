#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
};

extern "C" {
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjPlayer__sub_803E4684(s32);
M2C_UNK draw_chunk_object(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(void *, void *, f32);
void fn_80169E30(u8 *arg0);
s32 submit_cursor_candidate(void *, int);
s32 check_player_flag1__6TLobbyFPv();
s32 TCameraCtrl__sub_8006D494();
s32 TCameraCtrl__sub_8006D610();
s32 check_demo_mode__10TObjPlayerFv();
s32 TODragonfly__sub_80158360(void *, f32);
s32 send_code_45_1__10TObjPlayerFi(int);
s32 get_player_by_client_id(void *);
u32 __ct__12TQuestThreadFv(int, void *, int);
u32 __nw__7TObjectFUl(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
s32 set_parent__7TObjectFP7TObject(int, int);
extern s32 lbl_805D53A0;
extern u32 lbl_805D5EE8;
extern u32 lbl_805D5EEC;
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
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        if ((((VObj_18_ac8580 *)(arg0))->m12() != 0) && (TODragonfly__sub_80158360((void *) (arg0), (f32) (lbl_805DB6D8)) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xD8) > 0)) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        }
        break;
    case 1:
        submit_cursor_candidate((void *) (arg0), (int) (-1));
        break;
    case 2:
        if ((s32) M2C_FIELD(arg0, u16 *, 0x94) == (s32) lbl_805D53A0) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 3;
            TCameraCtrl__sub_8006D610();
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xD4);
            if ((temp_r0_2 >= 0x64) && (temp_r0_2 < 0x3E8) && ((u32) lbl_805D5EE8 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void *) (lbl_805D5EE8)) != 0)) {
                temp_r3 = __nw__7TObjectFUl((int) (0x194));
                var_r0 = temp_r3;
                if (var_r0 != 0U) {
                    var_r0 = __ct__12TQuestThreadFv((int) (temp_r3), (void *) (lbl_805D5EE8), (int) (M2C_FIELD(arg0, s32 *, 0xD8)));
                }
                M2C_FIELD(arg0, u32 *, 0xDC) = var_r0;
                temp_r3_2 = M2C_FIELD(arg0, u32 *, 0xDC);
                if (temp_r3_2 != 0U) {
                    set_parent__7TObjectFP7TObject((int) (temp_r3_2), (int) (tl_00));
                }
            } else if (((u32) lbl_805D5EEC != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void *) (lbl_805D5EEC)) != 0)) {
                temp_r3_3 = __nw__7TObjectFUl((int) (0x194));
                var_r0_2 = temp_r3_3;
                if (var_r0_2 != 0U) {
                    var_r0_2 = __ct__12TQuestThreadFv((int) (temp_r3_3), (void *) (lbl_805D5EEC), (int) (M2C_FIELD(arg0, s32 *, 0xD8)));
                }
                M2C_FIELD(arg0, u32 *, 0xDC) = var_r0_2;
                temp_r3_4 = M2C_FIELD(arg0, u32 *, 0xDC);
                if (temp_r3_4 != 0U) {
                    set_parent__7TObjectFP7TObject((int) (temp_r3_4), (int) (tl_00));
                }
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0xAC) = 1;
            M2C_FIELD(arg0, u16 *, 0x94) = 0xFFFFU;
        }
        break;
    case 3:
        temp_r3_5 = M2C_FIELD(arg0, u32 *, 0xDC);
        if (((temp_r3_5 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv((void *) (temp_r3_5)) == 0)) || ((u32) M2C_FIELD(arg0, u32 *, 0xDC) == 0U)) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 0;
            M2C_FIELD(arg0, u32 *, 0xDC) = 0U;
            TCameraCtrl__sub_8006D494();
            if ((s32) M2C_FIELD(arg0, u16 *, 0x94) == (s32) lbl_805D53A0) {
                temp_r3_6 = get_player_by_client_id((void *) (lbl_805D53A0));
                if ((temp_r3_6 != 0) && (check_player_flag1__6TLobbyFPv() != 0)) {
                    send_code_45_1__10TObjPlayerFi((int) (temp_r3_6));
                }
            }
        }
        break;
    }
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + lbl_805DB6DC);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xB4);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xB0);
    if (temp_f1 < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (temp_f0 - temp_f1);
    }
    ((VObj_18_ac8580 *)(arg0))->m13();
}

#pragma push
#pragma fp_contract on
void fn_80169E30(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xE0) = ((VObj *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE0) == 1) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) == 1) {
            void *p = M2C_FIELD(arg0, void **, 0xBC);
            if (p != NULL) {
                TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, void **, 0x34), p, M2C_FIELD(arg0, f32 *, 0xB0));
            } else {
                draw_chunk_object(M2C_FIELD(arg0, void **, 0x34));
            }
        } else {
            TObjPlayer__sub_803E4684(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 4));
        }
        pop_matrix();
    }
}
#pragma pop

}
