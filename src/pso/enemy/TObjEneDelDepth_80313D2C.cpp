#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V3_80313E34 { s32 a, b, c; };

extern "C" {
M2C_UNK render_anim_model__10TObjPlayerFPvf(void *, f32);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK create__19TObjEneDelDepthBombFPvPvPvPv(void *, void *, void *, int);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
s32 get_flag_bit4__15TObjEneDelDepthFPv(void *);
M2C_UNK TCameraCtrl__sub_803D8934(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern V3_80313E34 lbl_80475DB0;
extern M2C_UNK lbl_8058D490[];
extern s32 lbl_805D5678;
extern u8 *TObjEneDelDepth__data_805D6AC0;
extern const f32 lbl_805DF284;
void TObjEneDelDepth__sub_80313E34(u8 *arg0);
}

extern "C" {

void TObjEneDelDepth__sub_80313DE4(void* p);
void update_attack_cast__15TObjEneDelDepthFPv(u8 *arg0);
M2C_UNK TObjEneDelDepth__sub_803154A8(void *, int);
int TObjEneDelDepth__sub_80316488(void*, void*);
M2C_UNK create_ex__9TTecBartaFPvPvPvPv(void *, void *, int, int);
M2C_UNK create_ex__9TTecMegidFiiii(void *, void *, int, int);
s32 get_flag_bit4__15TObjEneDelDepthFPv(void *);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);

extern s32 lbl_805D5550;
extern u8 *TObjEneDelDepth__data_805D6AC0;

void update_attack_cast__15TObjEneDelDepthFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) - 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388);
    if ((temp_r0 <= 0) && (temp_r0 == 0)) {
        if ((s32) lbl_805D5550 == 3) {
            create_ex__9TTecMegidFiiii((void *) (arg0), (void *) (arg0 + 0x38), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(TObjEneDelDepth__data_805D6AC0, s32 *, 0x18)));
        } else {
            create_ex__9TTecBartaFPvPvPvPv((void *) (arg0), (void *) (arg0 + 0x38), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(TObjEneDelDepth__data_805D6AC0, s32 *, 0x18)));
        }
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
    M2C_FIELD(arg0, s32 *, 0x384) = temp_r0_2;
    if (temp_r0_2 <= 0) {
        if (get_flag_bit4__15TObjEneDelDepthFPv((void *) (arg0)) != 0) {
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (7));
            return;
        }
        TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (5));
    }
}

void TObjEneDelDepth__sub_80313DE4(void* p) { *(int*)((char*)p + 0x384) = 30; *(int*)((char*)p + 0x388) = 12; TObjEneDelDepth__sub_80316488(*(void**)((char*)p + 0x37c), (void*)1); set_draw_mode__15TObjEneDelDepthFPvi(p, (void*)2); }
void TObjEneDelDepth__sub_80313E34(u8 *arg0) {
    V3_80313E34 out;
    s32 temp_r0;
    s32 temp_r0_2;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) - 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x388);
    if ((temp_r0 <= 0) && (temp_r0 == 0)) {
        set_global_flag__10TObjPlayerFv();
        push_matrix_from((void *) (lbl_8058D490));
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        render_anim_model__10TObjPlayerFPvf((void *) (arg0), (f32) (lbl_805DF284));
        pop_matrix();
        push_matrix_from((void *) (lbl_805D5678 + 0x450));
        {
        V3_80313E34 v = lbl_80475DB0;
        TCameraCtrl__sub_803D8934(0, &v, &out);
        }
        pop_matrix();
        clear_global_state__10TObjPlayerFv();
        TBoss3Volopt__sub_8022675C((int) (0x4003A81D), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        create__19TObjEneDelDepthBombFPvPvPvPv((void *) (arg0), (void *) (arg0), (void *) (&out), (int) (M2C_FIELD(TObjEneDelDepth__data_805D6AC0, s32 *, 0x18)));
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
    M2C_FIELD(arg0, s32 *, 0x384) = temp_r0_2;
    if (temp_r0_2 <= 0) {
        if (get_flag_bit4__15TObjEneDelDepthFPv((void *) (arg0)) != 0) {
            TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (7));
            return;
        }
        TObjEneDelDepth__sub_803154A8((void *) (arg0), (int) (5));
    }
}

}
