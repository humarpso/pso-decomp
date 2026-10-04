#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8034A5D0_lbl_804EFF80 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Vec3_8034A090 {
    f32 x;
    f32 y;
    f32 z;
};

struct TAdLoadQuestPrtTxtGC_8034A090 {
    u8 pad0[0x1C];
    s32 count;
    void *particles[32];
    Vec3_8034A090 pos[32];
    s32 state;
    s32 timer;
};

extern "C" {
s32 __nw__7TObjectFUl(int);
s32 TAdLoadQuestPrtTxtGC__ct(int, void *, void *);
extern RecoveredGlobal_8034A5D0_lbl_804EFF80 lbl_804EFF80;
s32 TAdLoadQuestGC__sub_8034A5D0(s32 arg0, s32 arg1);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
void clear_active_flag__13TParticleCtrlFPv(void *);
void enable__13TParticleCtrlFPv(void *);
extern const f32 lbl_805DFD20;
extern const f32 lbl_805DFD24;
void run_task__20TAdLoadQuestPrtTxtGCFv(TAdLoadQuestPrtTxtGC_8034A090 *self);
}

extern "C" {

typedef char RecoveredGlobal_8034A5D0_lbl_804EFF80_size[sizeof(RecoveredGlobal_8034A5D0_lbl_804EFF80) == 0xC ? 1 : -1];

void run_task__20TAdLoadQuestPrtTxtGCFv(TAdLoadQuestPrtTxtGC_8034A090 *self) {
    s32 i;
    switch (self->state) {
    case 0:
        self->timer++;
        if (self->timer > 0xF0) {
            self->timer = 0;
        }
        for (i = 0; i < self->count; i++) {
            if (self->timer > i * 0x14 && self->timer < i * 0x14 + 0x28) {
                if (self->particles[i] != NULL) {
                    clear_active_flag__13TParticleCtrlFPv(self->particles[i]);
                    self->pos[i].x += lbl_805DFD20;
                    copy_pos__11TNowLoadingFPvPv(self->particles[i], &self->pos[i]);
                }
            } else {
                if (self->particles[i] != NULL) {
                    enable__13TParticleCtrlFPv(self->particles[i]);
                    self->pos[i].x = lbl_805DFD24;
                    copy_pos__11TNowLoadingFPvPv(self->particles[i], &self->pos[i]);
                }
            }
        }
        break;
    case 1:
        break;
    case 2:
        break;
    }
}

s32 TAdLoadQuestGC__sub_8034A5D0(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r0;
    temp_r30 = arg1 * 4;
    if ((u32) M2C_FIELD(&lbl_804EFF80.value, M2C_UNK *, temp_r30) == 0U) {
        temp_r3 = __nw__7TObjectFUl((int) (0x228));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = TAdLoadQuestPrtTxtGC__ct((int) (temp_r3), (void *) (arg0), (void *) (arg1));
        }
        M2C_FIELD(&lbl_804EFF80.value, M2C_UNK *, temp_r30) = var_r0;
    }
    return M2C_FIELD(&lbl_804EFF80.value, M2C_UNK *, temp_r30);
}

}
