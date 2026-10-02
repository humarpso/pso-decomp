#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe4Sorcerer__vt104(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK update_player_state__9TObjEneDDFPv(void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneRe4Sorcerer__sub_801E3F1C(f32, f32);
M2C_UNK get_target_info__9TObjEneDDFPv();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_800F5BC0(s32, s16, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_chunk_object(s32);

extern s32 TObjEneRe4Sorcerer__data_805D52F4;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DA788;
extern const f32 TObjEneRe4Sorcerer__data_805DA78C;
extern const f32 TObjEneRe4Sorcerer__data_805DA790;
extern const f32 TObjEneRe4Sorcerer__data_805DA794;
extern const f32 lbl_805DA798;

struct Base { u8 pad[0x18]; };
struct VObj : Base {
    virtual void m0() = 0;
    virtual void m1() = 0;
    virtual void m2() = 0;
    virtual void m3() = 0;
    virtual void m4() = 0;
    virtual void m5() = 0;
    virtual void m6() = 0;
    virtual void m7() = 0;
    virtual s32 m8(f32, f32) = 0;
};

void TObjEneRe4Sorcerer__vt104(u8 *arg0) {
    get_target_info__9TObjEneDDFPv();
    if (((VObj *)arg0)->m8(lbl_805DA788, TObjEneRe4Sorcerer__data_805DA78C) != 0) {
        update_player_state__9TObjEneDDFPv(arg0, 0, 0);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        translate_matrix(0, TObjEneRe4Sorcerer__data_805DA790, TObjEneRe4Sorcerer__data_805DA794, TObjEneRe4Sorcerer__data_805DA790);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, s16 *, 0x3C0) = (s16) (M2C_FIELD(arg0, s16 *, 0x3C0) + 5);
        TObjPlayer__sub_800F5BC0(TObjEneRe4Sorcerer__data_805D52F4, M2C_FIELD(arg0, s16 *, 0x3C0), 0);
        M2C_FIELD(arg0, f32 *, 0x3C4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C4) + lbl_805DA798);
        some_id_805c6f74 |= 0x20000;
        TObjEneRe4Sorcerer__sub_801E3F1C(TObjEneRe4Sorcerer__data_805DA790, M2C_FIELD(arg0, f32 *, 0x3C4));
        toggle_particle_effect__10TObjPlayerFv();
        draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x34));
        end_effect_render__13TParticleCtrlFv();
        some_id_805c6f74 &= 0xFFFDFFFF;
        pop_matrix();
    }
}

}
