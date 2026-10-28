#include "pso/boss/TBoss5GryphonSnarl.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/unk/text_80087278.h"
#include "pso/system/vector.h"

#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/misc/TNowLoading.h"
#include "pso/TParticleCtrl.h"

extern "C" {
s32 TBoss8Dragon__sub_8005D700(void *self);
extern s32 boss5_gryphon_snarl_effect_id_table[];
extern s32 *TBoss5GryphonSnarl__effect_table;
extern const char *lbl_805D2820;
extern const f32 lbl_805D8F0C;
extern const f32 lbl_805D8EF8;
extern const f32 lbl_805D8EFC;
extern const f32 lbl_805D8F00;
extern const f32 lbl_805D8F04;
extern const f32 lbl_805D8F08;
extern s32 boss5_gryphon_bml_resource;
extern s32 boss5_gryphon_texture_list;
void TBoss8Dragon__sub_8006402C(s32 instance, Vec *pos, f32 radius, f32 scale);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
s32 get_bml_model(s32, s32);
void attach_particle_model(void *, s32, s32, s32, s32, f32);

s32 TLobby__sub_8001FE7C(s32, s32);
s32 release_texture_list(void*);

void TBoss5GryphonSnarl::render() {  }

}

#pragma push
#pragma fp_contract on
void TBoss5GryphonSnarl::run_task() {
    Vec v;
    f32 inner;
    f32 outer;
    s32 instance;
    f32 scale;
    s32 i;
    s32 angle;
    s32 j;

    switch (state) {
    case 0:
        inner = lbl_805D8EF8 * (f32)frame;
        instance = TBoss8Dragon::get_instance_count();
        scale = (f32)(30 - frame) / lbl_805D8EFC;
        scale += lbl_805D8F00;
        TBoss8Dragon__sub_8006402C(instance, &position, inner, scale);
        outer = lbl_805D8F04 + inner;
        for (i = 0; i < 32; i++) {
            angle = (i << 16) / 32;
            if (children_20[i] == NULL) {
                children_20[i] = (TObject *)spawn_continuous_particle_effect_with_flags(&position, TBoss5GryphonSnarl__effect_table[0], 0x2040);
            }
            if (children_20[i] != NULL) {
                v.x = inner * sin_table_lookup(angle) + position.x;
                v.y = lbl_805D8F08;
                v.z = inner * cos_table_lookup(angle) + position.z;
                ((TNowLoading *)children_20[i])->copy_pos(&v);
            }
            if (children_a0[i] == NULL) {
                children_a0[i] = (TObject *)spawn_continuous_particle_effect_with_flags(&position, TBoss5GryphonSnarl__effect_table[1], 0x40);
                if (children_a0[i] != NULL) {
                    attach_particle_model(children_a0[i], get_bml_model(boss5_gryphon_bml_resource, 1), boss5_gryphon_texture_list, 0, 0, lbl_805D8F00);
                }
            }
            if (children_a0[i] != NULL) {
                v.x = outer * sin_table_lookup(angle) + position.x;
                v.y = lbl_805D8F08;
                v.z = outer * cos_table_lookup(angle) + position.z;
                ((TNowLoading *)children_a0[i])->copy_pos(&v);
            }
        }
        frame++;
        if (frame > 30) {
            frame = 0;
            state = 1;
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
        frame++;
        if (frame > 30) {
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
    m_name = lbl_805D2820;
    VecCopy(&position, (const Vec *)arg2);
    position.y = lbl_805D8F0C;
    frame = 0;
    state = 0;
    spawn_particle_effect_with_flags(&position, TBoss5GryphonSnarl__effect_table[3], 0x40);
    spawn_particle_effect_with_flags(&position, TBoss5GryphonSnarl__effect_table[2], 0x40);
    for (i = 0; i < 32; i++) {
        children_20[i] = NULL;
        children_a0[i] = NULL;
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
        release_texture_list((void*)boss5_common_texture_list);
        TAdSinglePlyChrSelectGC::safe_free(boss5_common_texture_list);
        boss5_common_texture_list = 0U;
    }
    TLobby__sub_8001FE7C(lbl_805D4DD8, 1);
    lbl_805D4DD8 = 0;
}
