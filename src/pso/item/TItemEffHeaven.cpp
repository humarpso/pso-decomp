#include "pso/TItemEffHeaven.h"

#include "types.h"
struct Obj_801092A8 {
    u8 pad0[0x18];
    void *vt;
    s16 f_1C;
    u8 pad1E[2];
    s32 f_20;
    s32 f_24;
    s32 f_28;
    s32 arr[3];
    s32 f_38;
    s32 f_3C;
    f32 v[3];
};

extern "C" {
void disallow_rendering__7TObjectFv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 __vt__14TItemEffHeaven[];
extern s32 lbl_805D2BB0;
extern const f32 lbl_805DAB34;
Obj_801092A8 *TItemEffHeaven__ct(Obj_801092A8 *self, void *parent, s32 a, s16 b, s32 c);
}

extern "C" {
void request_destroy__11TBoss4Type2FUi(void*);
}

void TItemEffHeaven::run_task() {}

TItemEffHeaven::~TItemEffHeaven() {
    for (int i = 0; i != 3; i++) {
        request_destroy__11TBoss4Type2FUi(m_arr[i]);
    }
}

#include "types.h"

extern "C" {

int destroy__14TItemEffHeavenFPv(void* p);
int queue_destruction__7TObjectFv(void*);

int destroy__14TItemEffHeavenFPv(void* p) { return queue_destruction__7TObjectFv(p); }
Obj_801092A8 *TItemEffHeaven__ct(Obj_801092A8 *self, void *parent, s32 a, s16 b, s32 c) {
    s32 i;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__14TItemEffHeaven;
    *(s32 *)self = lbl_805D2BB0;
    self->f_1C = b;
    self->f_20 = 0;
    self->f_3C = a;
    self->f_24 = c;
    self->v[2] = lbl_805DAB34;
    self->v[1] = lbl_805DAB34;
    self->v[0] = lbl_805DAB34;
    self->f_28 = 0;
    for (i = 0; i < 3; i++) {
        self->arr[i] = 0;
    }
    disallow_rendering__7TObjectFv(self);
    return self;
}

}
