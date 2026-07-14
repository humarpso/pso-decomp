#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__21TObjEneRe7BeruraPunchFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK TObjEneDD__sub_800B9D94(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK init_part__16TObjEneRe7BeruraFi(s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9794;
extern const f32 lbl_805D9798;

struct VObjHang {
    char pad[0x14];
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};

void render__21TObjEneRe7BeruraPunchFv(u8 *arg0) {
    f32 temp_f1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        lbl_805D5660 = some_id_805c6f74;
        clear_global_flag_400__9TObjEneDDFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) == 2) {
            ((VObjHang *)(arg0 + 0xF8))->m6();
            if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
                some_id_805c6f74 = lbl_805D5660;
                return;
            }
        }
        TObjEneDD__sub_800B9D94(arg0 + 0x38, arg0 + 0xE8, 0, 0);
        toggle_particle_effect__10TObjPlayerFv();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9624(0, lbl_805D9794, M2C_FIELD(arg0, f32 *, 0xCC), lbl_805D9794);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0xF4);
        TOMonitorMachine01__sub_803D8B5C(0, temp_f1, temp_f1, lbl_805D9798);
        init_part__16TObjEneRe7BeruraFi(M2C_FIELD(arg0, s32 *, 0xB8));
        TObjPlayer__sub_803D9B78();
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) == 2) {
            ((VObjHang *)(arg0 + 0xF8))->m7();
        }
        end_effect_render__13TParticleCtrlFv();
        some_id_805c6f74 = lbl_805D5660;
    }
}

}
