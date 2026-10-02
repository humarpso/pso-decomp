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
M2C_UNK update_player_state__9TObjEneDDFPv(void *, int, int);
s32 get_target_info__9TObjEneDDFPv();
s32 TObjEneDD__sub_800BB878(s32, s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
void TObjEneMe1Gee__sub_803D8098(s32, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_chunk_object(int);
extern M2C_UNK lbl_8043BE98[];
extern M2C_UNK lbl_8043BEA8[];
extern M2C_UNK lbl_8043BEBC[];
extern M2C_UNK lbl_8043BEC8[];
extern M2C_UNK lbl_8043BED8[];
extern M2C_UNK lbl_8043BEEC[];
extern M2C_UNK lbl_8043BF0C[];
extern const f32 lbl_805DA0BC;
extern const f32 TObjEneMe1Gee__data_805DA0C0;
void TObjEneMe1Gee__vt113(u8 *arg0);
}

extern "C" {

void TObjEneMe1Gee__vt113(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    if (get_target_info__9TObjEneDDFPv() != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x3C8);
            if (temp_r3 & 0x100) {
                TObjEneMe1Gee__sub_803D8098(TObjEneDD__sub_800BB878(0, 2), lbl_8043BE98);
            } else if (temp_r3 & 0x200) {
                TObjEneMe1Gee__sub_803D8098(TObjEneDD__sub_800BB878(0, 2), lbl_8043BEA8);
            } else {
                TObjEneMe1Gee__sub_803D8098(TObjEneDD__sub_800BB878(0, 2), lbl_8043BEBC);
            }
            temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x3C8);
            if (temp_r3_2 & 0x02000000) {
                TObjEneMe1Gee__sub_803D8098(TObjEneDD__sub_800BB878(0, 3), lbl_8043BEC8);
            } else if (temp_r3_2 & 0x04000000) {
                TObjEneMe1Gee__sub_803D8098(TObjEneDD__sub_800BB878(0, 3), lbl_8043BED8);
            } else {
                TObjEneMe1Gee__sub_803D8098(TObjEneDD__sub_800BB878(0, 3), lbl_8043BEBC);
            }
        }
        TObjEneMe1Gee__sub_803D8098(TObjEneDD__sub_800BB878(0, 4), lbl_8043BEEC);
        TObjEneMe1Gee__sub_803D8098(TObjEneDD__sub_800BB878(0, 5), lbl_8043BF0C);
    }
    if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DA0BC, TObjEneMe1Gee__data_805DA0C0) != 0) {
        update_player_state__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (0));
        toggle_particle_effect__10TObjPlayerFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        clear_global_flag_400__9TObjEneDDFv();
        draw_chunk_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

}
