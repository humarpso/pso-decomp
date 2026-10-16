#include "types.h"
#include "pso/unk/TUnk_804CC870.h"

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 queue_destruction__7TObjectFv(void *);
s32 find_entity_by_id(int);
extern const f32 lbl_805DC844;
void run_task__13TUnk_804CC870Fv(u8 *arg0);
}

extern "C" {

void TUnk_804CC870::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    temp_r3 = find_entity_by_id((int) (*(u16 *)((s8 *)arg0 + 0x1C)));
    if (temp_r3 != 0) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (void *) (temp_r3 + 0x38));
    }
    *(s32 *)((s8 *)arg0 + 0x48) = (s32) (*(s32 *)((s8 *)arg0 + 0x48) + 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x48) >= 7) {
        *(s32 *)((s8 *)arg0 + 0x48) = 0;
    }
    if (*(f32 *)((s8 *)arg0 + 0x38) <= lbl_805DC844) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}
