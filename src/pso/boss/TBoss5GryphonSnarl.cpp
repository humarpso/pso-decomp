#include "pso/boss/TBoss5GryphonSnarl.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/unk/text_80087278.h"
#include "pso/system/vector.h"

#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/misc/TNowLoading.h"
#include "pso/TParticleCtrl.h"

struct V_80066DC8 { f32 x, y, z; };

struct Obj_80066DC8 { s32 f0; u8 pad4[0x14]; void *f18; s32 f1c; s32 c20[32]; s32 ca0[32]; V_80066DC8 pos; s32 f12c; };

struct D_80066DC8 { s32 f0; s32 f4; s32 f8; s32 fc; };

extern "C" {
s32 TBoss8Dragon__sub_8005D700(void *self);
extern u8 boss5_gryphon_snarl_effect_id_table[];
extern void *TBoss5GryphonSnarl__effect_table;
extern s32 lbl_805D2820;
extern const f32 lbl_805D8F0C;
extern const f32 lbl_805D8EF8;
extern const f32 lbl_805D8EFC;
extern const f32 lbl_805D8F00;
extern const f32 lbl_805D8F04;
extern const f32 lbl_805D8F08;
extern s32 boss5_gryphon_bml_resource;
extern s32 boss5_gryphon_texture_list;
void TBoss8Dragon__sub_8006402C(s32 instance, void *pos, f32 radius, f32 scale);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
s32 get_bml_model(s32, s32);
void attach_particle_model(void *, s32, s32, s32, s32, f32);

s32 TLobby__sub_8001FE7C(s32, s32);
s32 TLobby__sub_803DA16C(void*);

void TBoss5GryphonSnarl::render() {  }

}

#pragma push
#pragma fp_contract on
void TBoss5GryphonSnarl::run_task() {
    Obj_80066DC8 *self = (Obj_80066DC8 *)this;
    V_80066DC8 v;
    f32 inner;
    f32 outer;
    s32 instance;
    f32 scale;
    s32 i;
    s32 angle;
    s32 j;

    switch (self->f1c) {
    case 0:
        inner = lbl_805D8EF8 * (f32)self->f12c;
        instance = TBoss8Dragon::get_instance_count();
        scale = (f32)(30 - self->f12c) / lbl_805D8EFC;
        scale += lbl_805D8F00;
        TBoss8Dragon__sub_8006402C(instance, &self->pos, inner, scale);
        outer = lbl_805D8F04 + inner;
        for (i = 0; i < 32; i++) {
            angle = (i << 16) / 32;
            if (children_20[i] == NULL) {
                children_20[i] = (TObject *)spawn_continuous_particle_effect_with_flags(&self->pos, ((D_80066DC8 *)TBoss5GryphonSnarl__effect_table)->f0, 0x2040);
            }
            if (children_20[i] != NULL) {
                v.x = inner * sin_table_lookup(angle) + self->pos.x;
                v.y = lbl_805D8F08;
                v.z = inner * cos_table_lookup(angle) + self->pos.z;
                ((TNowLoading *)children_20[i])->copy_pos(&v);
            }
            if (children_a0[i] == NULL) {
                children_a0[i] = (TObject *)spawn_continuous_particle_effect_with_flags(&self->pos, ((D_80066DC8 *)TBoss5GryphonSnarl__effect_table)->f4, 0x40);
                if (children_a0[i] != NULL) {
                    attach_particle_model(children_a0[i], get_bml_model(boss5_gryphon_bml_resource, 1), boss5_gryphon_texture_list, 0, 0, lbl_805D8F00);
                }
            }
            if (children_a0[i] != NULL) {
                v.x = outer * sin_table_lookup(angle) + self->pos.x;
                v.y = lbl_805D8F08;
                v.z = outer * cos_table_lookup(angle) + self->pos.z;
                ((TNowLoading *)children_a0[i])->copy_pos(&v);
            }
        }
        self->f12c++;
        if (self->f12c > 30) {
            self->f12c = 0;
            self->f1c = 1;
        }
        break;
    case 1:
        for (j = 0; j < 32; j++) {
            if (children_20[j] != NULL) {
                ((TParticleCtrl *)children_20[j])->enable();
            }
            if (children_a0[j] != NULL) {
                ((TParticleCtrl *)children_a0[j])->enable();
            }
        }
        self->f12c++;
        if (self->f12c > 30) {
            queue_destruction__7TObjectFv(this);
        }
        break;
    }
}
#pragma pop

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

#pragma push
#pragma opt_common_subs off
TBoss5GryphonSnarl::TBoss5GryphonSnarl(TObject *parent, void *arg2) : TObject(parent) {
    s32 i;
    ((Obj_80066DC8 *)this)->f0 = lbl_805D2820;
    VecCopy((Vec *)&((Obj_80066DC8 *)this)->pos, (const Vec *)arg2);
    ((Obj_80066DC8 *)this)->pos.y = lbl_805D8F0C;
    ((Obj_80066DC8 *)this)->f12c = 0;
    ((Obj_80066DC8 *)this)->f1c = 0;
    spawn_particle_effect_with_flags(&((Obj_80066DC8 *)this)->pos, ((D_80066DC8 *)TBoss5GryphonSnarl__effect_table)->fc, 0x40);
    spawn_particle_effect_with_flags(&((Obj_80066DC8 *)this)->pos, ((D_80066DC8 *)TBoss5GryphonSnarl__effect_table)->f8, 0x40);
    for (i = 0; i < 32; i++) {
        ((Obj_80066DC8 *)this)->c20[i] = 0;
        ((Obj_80066DC8 *)this)->ca0[i] = 0;
    }
}
#pragma pop

void TBoss5GryphonSnarl__sub_80066E84(void) {  }

extern s32 lbl_805D4DD8;
extern u32 boss5_common_texture_list;

void TBoss5GryphonSnarl__sub_80066E88(void *self) {
    switch (TBoss8Dragon__sub_8005D700(self)) {
    case 0:
        TBoss5GryphonSnarl__effect_table = boss5_gryphon_snarl_effect_id_table;
        break;
    }
}

void TLobby__sub_80066EC0(void) {
    if ((u32) boss5_common_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)boss5_common_texture_list);
        TAdSinglePlyChrSelectGC::safe_free(boss5_common_texture_list);
        boss5_common_texture_list = 0U;
    }
    TLobby__sub_8001FE7C(lbl_805D4DD8, 1);
    lbl_805D4DD8 = 0;
}
