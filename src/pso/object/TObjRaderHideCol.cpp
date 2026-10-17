#include "types.h"
#include "pso/object/TObject_8001A448.h"
#include "pso/unk/text_8013157C.h"
#include "pso/object/TObjRaderHideCol.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TRaderMapCore.h"

struct RecoveredGlobal_80197490___vt__16TObjRaderHideCol {
    s32 value;
    u8 remaining[0x30];
};

struct Pl_801973B0 { u8 pad0[0x38]; f32 pos[3]; };

struct Hide_801973B0 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x4C]; f32 f90; s32 f94; };

extern "C" {
s32 construct_world_actor_base(void *);
extern s32 __vt__16TObjRaderHideCol[];
extern s32 lbl_805D3414;
void *get_player_by_client_id(s32 i);
extern s32 local_client_id;
void __dl__7TObjectFPv(void *);

void TObjRaderHideCol::render() {  }

void TObjRaderHideCol::run_task() {
    Hide_801973B0 *arg0 = (Hide_801973B0 *)this;
    Pl_801973B0 *p = (Pl_801973B0 *)get_player_by_client_id(local_client_id);
    if (p != 0) {
        if (xyz_distance_squared((u8 *)arg0->pos, (u8 *)p->pos) < arg0->f90 * arg0->f90) {
            if (!(arg0->f94 & 1)) {
                TRaderMapCore::hide_radar();
                arg0->f94 = 1;
            }
        } else if (arg0->f94 & 1) {
            TRaderMapCore::show_radar();
            arg0->f94 = 0;
        }
    }
}

void *__dt__16TObjRaderHideColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjRaderHideCol;
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80197490___vt__16TObjRaderHideCol_size[sizeof(RecoveredGlobal_80197490___vt__16TObjRaderHideCol) == 0x34 ? 1 : -1];
u8 *TObjRaderHideCol__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_world_actor_base(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80197490___vt__16TObjRaderHideCol *)&__vt__16TObjRaderHideCol).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3414;
    ((TObjRaderHideCol *)(arg0))->apply_object_set_data((void *)arg2);
    *(f32 *)((s8 *)arg0 + 0x90) = (f32) ((TObjRaderHideCol *)arg0)->scale;
    *(s32 *)&((TObjRaderHideCol *)arg0)->m_94 = 0;
    disallow_rendering__7TObjectFv((arg0));
    return arg0;
}

}
