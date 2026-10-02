#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
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
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
s32 get_target_info__9TObjEneDDFPv();
s32 TObjEneDD__sub_800BB878(s32, s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjEneBm5GibonU__sub_803D853C(s32, const char *, ...);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_chunk_object(void *);
extern char lbl_804763D4[];
extern char lbl_804763E4[];
extern char lbl_804763F4[];
extern char lbl_80476400[];
extern char lbl_80476410[];
extern char lbl_80476428[];
extern char lbl_80476440[];
extern s32 lbl_805D28B8;
extern const f32 TObjEneRecon__data_805DF438;
extern const f32 lbl_805DF43C;
void TObjEneRecon__sub_8031E88C(u8 *arg0);
}

extern "C" {

void TObjEneRecon__sub_8031E88C(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    if (get_target_info__9TObjEneDDFPv() != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x3DC);
        switch (temp_r0) {
        case 0:
            TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 9), lbl_804763D4);
            break;
        case 1:
            TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 9), lbl_804763E4);
            break;
        case 2:
            TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 9), lbl_804763F4);
            break;
        }
        TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 0xA), lbl_80476400);
        TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 2), lbl_80476410);
        TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 3), lbl_80476428);
        TObjEneBm5GibonU__sub_803D853C(TObjEneDD__sub_800BB878(0, 5), lbl_80476440);
    }
    if (((VObj_18_26a62c *)(arg0))->m8(TObjEneRecon__data_805DF438, lbl_805DF43C) != 0) {
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3DC);
        switch (temp_r0_2) {
        case 1:
            rotate_matrix_x((int) (0), (int) (0x8000));
            break;
        case 2:
            rotate_matrix_x((int) (0), (int) (0x4000));
            break;
        }
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        draw_chunk_object((void *) (M2C_FIELD(arg0, s32 *, 0x34)));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    draw_chunk_object((void *) (lbl_805D28B8));
    pop_matrix();
}

}
