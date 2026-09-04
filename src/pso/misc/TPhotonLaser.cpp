#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801AC43C(void);
void TObjPlayer__sub_801AC440(void);
void TObjPlayer__sub_801AC444(void* a0);
void *__dt__12TPhotonLaserFv(void *arg0, s16 arg1);
void render__12TPhotonLaserFv(void);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
int begin_effect_render__13TParticleCtrlFv(void);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);
int end_effect_render__13TParticleCtrlFv(void);
M2C_UNK queue_destruction__7TObjectFv(void *);

void render__12TPhotonLaserFv(void) { begin_effect_render__13TParticleCtrlFv(); end_effect_render__13TParticleCtrlFv(); }

extern M2C_UNK __vt__12TPhotonLaser[];

void *__dt__12TPhotonLaserFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TPhotonLaser;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x364) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x364));
            M2C_FIELD(arg0, u32 *, 0x364) = 0U;
        }
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_801AC43C(void) {  }
void TObjPlayer__sub_801AC440(void) {  }

    extern const float lbl_805DC1C0;
void TObjPlayer__sub_801AC444(void* a0) { *(float*)((char*)a0 + 0x180) = lbl_805DC1C0; *(float*)((char*)a0 + 0x184) = lbl_805DC1C0; *(float*)((char*)a0 + 0x188) = lbl_805DC1C0; *(float*)((char*)a0 + 0x18c) = lbl_805DC1C0; }

}
