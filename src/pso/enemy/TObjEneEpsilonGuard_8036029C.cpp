#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_body_effect__19TObjEneEpsilonGuardFPv(u8 *arg0);
s32 TCameraCtrl__sub_8006B360(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjFish__sub_8001EDC4(void *, int);
M2C_UNK TObjFish__sub_803DA798(int);
M2C_UNK TObjFish__sub_803E46BC();
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();

extern M2C_UNK main_task[];
extern s32 lbl_805D6FA0;
extern const f32 lbl_805E0208;
extern const f32 lbl_805E0214;
extern const f32 lbl_805E0218;

void render_body_effect__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    f32 temp_f1;

    if (TCameraCtrl__sub_8006B360(main_task) & 0x200) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9624((int) (0), (f32) (lbl_805E0208), (f32) (lbl_805E0214), (f32) (lbl_805E0208));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x4F8);
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (lbl_805E0218), (f32) (temp_f1));
        TObjFish__sub_803DA798((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        toggle_particle_effect__10TObjPlayerFv();
        TObjFish__sub_8001EDC4((void *) (lbl_805D6FA0), (int) (4));
        TObjFish__sub_803E46BC();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
