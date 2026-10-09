#include "pso/boss/TBoss5GryphonSnarl.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V_80066DC8 { f32 x, y, z; };

struct Obj_80066DC8 { s32 f0; u8 pad4[0x14]; void *f18; s32 f1c; s32 c20[32]; s32 ca0[32]; V_80066DC8 pos; s32 f12c; };

struct D_80066DC8 { s32 f0; s32 f4; s32 f8; s32 fc; };

extern "C" {
s32 TBoss8Dragon__sub_8005D700(void *self);
extern u8 lbl_80437F70[];
extern void *TBoss5GryphonSnarl__effect_table;
void TBoss5GryphonSnarl__sub_80066E88(void *self);
void VecCopy__FP3VecPC3Vec(void *, void *);
void spawn_particle_effect_with_flags(void *, s32, s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 __vt__18TBoss5GryphonSnarl[];
extern s32 lbl_805D2820;
extern void *TBoss5GryphonSnarl__effect_table;
extern const f32 lbl_805D8F0C;
Obj_80066DC8 *TBoss5GryphonSnarl__ct(Obj_80066DC8 *self, void *parent, void *arg2);
}

extern "C" {
void queue_destruction__7TObjectFv(void *);

void TBoss5GryphonSnarl__sub_80066E84(void);
void TLobby__sub_80066EC0(void);
void render__18TBoss5GryphonSnarlFv(void);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void render__18TBoss5GryphonSnarlFv(void) {  }

}

TBoss5GryphonSnarl::~TBoss5GryphonSnarl() {
    for (s32 index = 31; index >= 0; --index) {
        if (children_a0[index] != NULL) {
            queue_destruction__7TObjectFv(children_a0[index]);
            children_a0[index] = NULL;
        }
        if (children_20[index] != NULL) {
            queue_destruction__7TObjectFv(children_20[index]);
            children_20[index] = NULL;
        }
    }
}

extern "C" {

#pragma push
#pragma opt_common_subs off
Obj_80066DC8 *TBoss5GryphonSnarl__ct(Obj_80066DC8 *self, void *parent, void *arg2) {
    s32 i;
    __ct__7TObjectFP7TObject(self, parent);
    self->f18 = __vt__18TBoss5GryphonSnarl;
    self->f0 = lbl_805D2820;
    VecCopy__FP3VecPC3Vec(&self->pos, arg2);
    self->pos.y = lbl_805D8F0C;
    self->f12c = 0;
    self->f1c = 0;
    spawn_particle_effect_with_flags(&self->pos, ((D_80066DC8 *)TBoss5GryphonSnarl__effect_table)->fc, 0x40);
    spawn_particle_effect_with_flags(&self->pos, ((D_80066DC8 *)TBoss5GryphonSnarl__effect_table)->f8, 0x40);
    for (i = 0; i < 32; i++) {
        self->c20[i] = 0;
        self->ca0[i] = 0;
    }
    return self;
}
#pragma pop

void TBoss5GryphonSnarl__sub_80066E84(void) {  }

extern s32 lbl_805D4DD8;
extern u32 boss5_common_texture_list;

void TBoss5GryphonSnarl__sub_80066E88(void *self) {
    switch (TBoss8Dragon__sub_8005D700(self)) {
    case 0:
        TBoss5GryphonSnarl__effect_table = lbl_80437F70;
        break;
    }
}

void TLobby__sub_80066EC0(void) {
    if ((u32) boss5_common_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)boss5_common_texture_list);
        safe_free__23TAdSinglePlyChrSelectGCFUi(boss5_common_texture_list);
        boss5_common_texture_list = 0U;
    }
    TLobby__sub_8001FE7C(lbl_805D4DD8, 1);
    lbl_805D4DD8 = 0;
}

}
