#include "types.h"

extern "C" {

void *__dt__14TItemEffNeedleFv(void *self, s16 arg1);
void *__dt__18TItemEffNeedleBaseFv(void *self, s16 arg1);
void *__dt__17TItemEffNeedlePosFv(void *self, s16 arg1);
int TItemEffNeedleBase__sub_80109FF0(void);
void __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(void *);
void run_task__18TItemEffNeedleBaseFv(void *);
void render__18TItemEffNeedleBaseFv(void *);
void render_shadows__7TObjectFv(void *);
int TItemEffNeedle__vt4(void);
extern void *__vt__14TItemEffNeedle[7];
extern void *__vt__17TItemEffNeedlePos[7];
extern void *__vt__18TItemEffNeedleBase[7];

void *__dt__14TItemEffNeedleFv(void *self, s16 arg1) {
    if (self != NULL) {
        *(void ***)((u8 *)self + 0x18) = __vt__14TItemEffNeedle;
        __dt__18TItemEffNeedleBaseFv(self, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

void *__dt__18TItemEffNeedleBaseFv(void *self, s16 arg1) {
    if (self != NULL) {
        *(void ***)((u8 *)self + 0x18) = __vt__18TItemEffNeedleBase;
        __dt__7TObjectFv(self, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

int TItemEffNeedleBase__sub_80109FF0(void) { return 1; }

void *__dt__17TItemEffNeedlePosFv(void *self, s16 arg1) {
    if (self != NULL) {
        *(void ***)((u8 *)self + 0x18) = __vt__17TItemEffNeedlePos;
        __dt__18TItemEffNeedleBaseFv(self, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

void *__vt__14TItemEffNeedle[7] = {
    0, 0, (void *)__dt__14TItemEffNeedleFv, (void *)run_task__18TItemEffNeedleBaseFv,
    (void *)render__18TItemEffNeedleBaseFv, (void *)render_shadows__7TObjectFv,
    (void *)TItemEffNeedle__vt4,
};
void *__vt__17TItemEffNeedlePos[7] = {
    0, 0, (void *)__dt__17TItemEffNeedlePosFv, (void *)run_task__18TItemEffNeedleBaseFv,
    (void *)render__18TItemEffNeedleBaseFv, (void *)render_shadows__7TObjectFv,
    (void *)TItemEffNeedleBase__sub_80109FF0,
};
void *__vt__18TItemEffNeedleBase[7] = {
    0, 0, (void *)__dt__18TItemEffNeedleBaseFv, (void *)run_task__18TItemEffNeedleBaseFv,
    (void *)render__18TItemEffNeedleBaseFv, (void *)render_shadows__7TObjectFv,
    (void *)TItemEffNeedleBase__sub_80109FF0,
};

}
