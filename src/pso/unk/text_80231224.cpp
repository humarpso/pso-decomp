#include "types.h"
struct Task_80231224 {
    u8 pad0[0x18];
    void **vt;
    void **emitters;
    u8 pad1[0x44 - 0x20];
    u8 band;
    u8 pad2[2];
    u8 single;
};

struct Profile_80231224 { u32 a; u32 count; };

extern "C" {
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);
void free__11TOBoss4RockFUi(void *);
void __dl__7TObjectFPv(void *);
extern void *lbl_804CC800[];
extern Profile_80231224 lbl_8044D2F4[];
u8 *fn_80231224(Task_80231224 *task, s16 flag);
}

extern "C" {

u8 *fn_80231224(Task_80231224 *task, s16 flag) {
    u32 i;
    if (task != NULL) {
        task->vt = lbl_804CC800;
        if (task->single != 0) {
            queue_destruction__7TObjectFv(task->emitters[0]);
        } else {
            for (i = 0; i < lbl_8044D2F4[task->band].count; i++) {
                queue_destruction__7TObjectFv(task->emitters[i]);
            }
        }
        free__11TOBoss4RockFUi(task->emitters);
        __dt__7TObjectFv(task, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(task);
        }
    }
    return (u8 *)task;
}

}
