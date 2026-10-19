#include "pso/boss/TBoss5GryphonSnarl.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/unk/text_80087278.h"
#include "pso/system/vector.h"

#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct V_80066DC8 { f32 x, y, z; };

struct Obj_80066DC8 { s32 f0; u8 pad4[0x14]; void *f18; s32 f1c; s32 c20[32]; s32 ca0[32]; V_80066DC8 pos; s32 f12c; };

struct D_80066DC8 { s32 f0; s32 f4; s32 f8; s32 fc; };

extern "C" {
s32 TBoss8Dragon__sub_8005D700(void *self);
extern u8 boss5_gryphon_snarl_effect_id_table[];
extern void *TBoss5GryphonSnarl__effect_table;
extern s32 lbl_805D2820;
extern const f32 lbl_805D8F0C;

s32 TLobby__sub_8001FE7C(s32, s32);
s32 TLobby__sub_803DA16C(void*);

void TBoss5GryphonSnarl::render() {  }

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
