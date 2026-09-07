#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8019054C_lbl_804B7A70 { M2C_UNK value; u8 remaining[0x8C]; };
typedef char RecoveredGlobal_8019054C_lbl_804B7A70_size[sizeof(RecoveredGlobal_8019054C_lbl_804B7A70) == 0x90 ? 1 : -1];

extern "C" {
f32 get_random_float__8TObjFishFv(f32);
s32 get_global_state__14TOKeyMachine01Fv(void);
M2C_UNK copy_pair__18TObjEnvSoundGlobalFPvPv(void *, int);
extern RecoveredGlobal_8019054C_lbl_804B7A70 lbl_804B7A70;
extern const f32 lbl_805DBE18;
extern const f32 lbl_805DBE1C;
s32 TObjEnvSoundEx__sub_8019054C(u8 *arg0);
}

extern "C" {

void *__dt__14TObjEnvSoundExFv(void *arg0, s16 arg1);
void render__14TObjEnvSoundExFv(void);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

s32 TObjEnvSoundEx__sub_8019054C(u8 *arg0) {
    s32 var_r31;
    u32 temp_r4;
    var_r31 = 1;
    temp_r4 = M2C_FIELD(&lbl_804B7A70.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
    if (temp_r4 != 0U) {
        copy_pair__18TObjEnvSoundGlobalFPvPv((void *) (arg0 + 0x9C), (int) (temp_r4 + (M2C_FIELD(arg0, s32 *, 0x84) * 8)));
    } else {
        var_r31 = 0;
        M2C_FIELD(arg0, s32 *, 0x9C) = -1;
        M2C_FIELD(arg0, s32 *, 0xA0) = -1;
    }
    M2C_FIELD(arg0, f32 *, 0x98) = get_random_float__8TObjFishFv(M2C_FIELD(arg0, f32 *, 0x6C));
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) M2C_FIELD(arg0, f32 *, 0x70);
    if (M2C_FIELD(arg0, f32 *, 0xA4) <= lbl_805DBE18) {
        M2C_FIELD(arg0, f32 *, 0xA4) = (f32) lbl_805DBE1C;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) < -0x7F) {
        M2C_FIELD(arg0, s32 *, 0x90) = -0x7F;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) > 0x7F) {
        M2C_FIELD(arg0, s32 *, 0x90) = 0x7F;
    }
    return var_r31;
}

void render__14TObjEnvSoundExFv(void) {  }

extern M2C_UNK __vt__14TObjEnvSoundEx[];

void *__dt__14TObjEnvSoundExFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjEnvSoundEx;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
