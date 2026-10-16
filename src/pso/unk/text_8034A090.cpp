#include "types.h"
#include "pso/ui/TAdLoadQuestPrtTxtGC.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TNowLoading.h"

struct RecoveredGlobal_8034A5D0_lbl_804EFF80 {
    s32 value;
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

struct T_8034A198 {
    u8 pad0[0x18];
    void *vt;
    s32 count;
    void *objs[32];
    u8 pada0[0x220 - 0xA0];
    s32 slot;
};

extern "C" {
s32 __nw__7TObjectFUl(int);
s32 TAdLoadQuestPrtTxtGC__ct(int, void *, void *);
extern RecoveredGlobal_8034A5D0_lbl_804EFF80 quest_load_prt_txt_by_slot;
s32 get_or_create_prt_txt__14TAdLoadQuestGCFii(s32 arg0, s32 arg1);
void enable__13TParticleCtrlFPv(void *);
extern const f32 lbl_805DFD20;
extern const f32 lbl_805DFD24;
s32 __dt__7TObjectFv(void *, int);
s32 queue_destruction__7TObjectFv(void *);
s32 __dl__7TObjectFPv(void *);
extern RecoveredGlobal_8034A5D0_lbl_804EFF80 quest_load_prt_txt_by_slot;
extern s32 __vt__20TAdLoadQuestPrtTxtGC[];
T_8034A198 *__dt__20TAdLoadQuestPrtTxtGCFv(T_8034A198 *arg0, s16 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8034A5D0_lbl_804EFF80_size[sizeof(RecoveredGlobal_8034A5D0_lbl_804EFF80) == 0xC ? 1 : -1];

void TAdLoadQuestPrtTxtGC::run_task() {
    TAdLoadQuestPrtTxtGC_8034A090 *self = (TAdLoadQuestPrtTxtGC_8034A090 *)this;
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
                    ((TParticleCtrl *)(self->particles[i]))->clear_active_flag();
                    self->pos[i].x += lbl_805DFD20;
                    ((TNowLoading *)(self->particles[i]))->copy_pos(&self->pos[i]);
                }
            } else {
                if (self->particles[i] != NULL) {
                    enable__13TParticleCtrlFPv(self->particles[i]);
                    self->pos[i].x = lbl_805DFD24;
                    ((TNowLoading *)(self->particles[i]))->copy_pos(&self->pos[i]);
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

T_8034A198 *__dt__20TAdLoadQuestPrtTxtGCFv(T_8034A198 *arg0, s16 arg1) {
    s32 i;
    if (arg0 != NULL) {
        arg0->vt = __vt__20TAdLoadQuestPrtTxtGC;
        if (((u32 *)&quest_load_prt_txt_by_slot)[arg0->slot] != 0) {
            ((u32 *)&quest_load_prt_txt_by_slot)[arg0->slot] = 0;
        }
        for (i = 0; i < arg0->count; i++) {
            if (arg0->objs[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->objs[i]);
                arg0->objs[i] = NULL;
            }
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 get_or_create_prt_txt__14TAdLoadQuestGCFii(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r0;
    temp_r30 = arg1 * 4;
    if ((u32) *(s32 *)((s8 *)(&quest_load_prt_txt_by_slot.value) + temp_r30) == 0U) {
        temp_r3 = __nw__7TObjectFUl((int) (0x228));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = TAdLoadQuestPrtTxtGC__ct((int) (temp_r3), (void *) (arg0), (void *) (arg1));
        }
        *(s32 *)((s8 *)(&quest_load_prt_txt_by_slot.value) + temp_r30) = var_r0;
    }
    return *(s32 *)((s8 *)(&quest_load_prt_txt_by_slot.value) + temp_r30);
}

}
