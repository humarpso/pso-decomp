#include "types.h"
#include "pso/TObjEZBoneRotBase.h"

struct EZBoneRotKey {
    s32 bone;
    f32 axis[3];
};

struct EZBoneRotDesc {
    s32 period;
    u8 unk_04[0x4];
    s32 phase_step;
    f32 amplitude_scale;
    EZBoneRotKey *keys;
};

struct EZBoneRotState {
    u8 pad0[0x18];
    void **vtable;
    void *root;
    EZBoneRotDesc *desc;
    u8 pad24[0x84 - 0x24];
    s32 phase;
    u8 pad88[0x94 - 0x88];
    f32 scale;
};

extern "C" {
void __ct__7TObjectFP7TObject(TObject *self, TObject *parent);
extern void *__vt__17TObjEZBoneRotBase[];
extern const char *lbl_805D2B48;
extern const f32 lbl_805DAA4C;

TObjEZBoneRotBase *TObjEZBoneRotBase__ct(TObjEZBoneRotBase *self, TObject *parent, void *root, EZBoneRotDesc *desc) {
    EZBoneRotState *state = (EZBoneRotState *)self;
    TObjEZBoneRotBase *base;
    EZBoneRotKey *key;

    __ct__7TObjectFP7TObject(self, parent);
    base = (TObjEZBoneRotBase *)(TObject *)self;
    state->vtable = __vt__17TObjEZBoneRotBase;
    self->m_name = lbl_805D2B48;
    state->root = root;
    state->desc = desc;
    key = state->desc->keys;
    while (key->bone >= 0) {
        key++;
    }
    base->sub_800FED0C();
    state->phase = 0;
    state->scale = lbl_805DAA4C;
    return self;
}
}
