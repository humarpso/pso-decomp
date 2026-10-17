#include "types.h"
#include "pso/enemy/TObjEneSlime.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_800EBC28___vt__12TObjEneSlime {
    s32 value;
    u8 remaining[0x14C];
};

extern "C" {
s32 TBoss4DarkFalz__sub_8004B4F0(void *, void *);
s32 initialize__9TObjEnemyFPv(void *);
extern s32 __vt__12TObjEneSlime[];
extern s32 lbl_805D2AD8;
u8 *TObjEneSlime__ct(u8 *arg0, s32 arg1, u8 *arg2);
void *__dt__12TObjEneSlimeFv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

void *__dt__12TObjEneSlimeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjEneSlime;
        ((TObjEneSlime *)arg0)->release_split_slimes();
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 slime_bml_resource;

typedef char RecoveredGlobal_800EBC28___vt__12TObjEneSlime_size[sizeof(RecoveredGlobal_800EBC28___vt__12TObjEneSlime) == 0x150 ? 1 : -1];
u8 *TObjEneSlime__ct(u8 *arg0, s32 arg1, u8 *arg2) {
    s32 temp_r0;
    initialize__9TObjEnemyFPv((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_800EBC28___vt__12TObjEneSlime *)&__vt__12TObjEneSlime).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2AD8;
    ((TObjEneSlime *)(arg0))->apply_set_data(arg2);
    ((TObjEneSlime *)(arg0))->clear_lobby_object_state();
    ((TBoss3Volopt *)arg0)->reset_photon_effect();
    TBoss4DarkFalz__sub_8004B4F0((void *) (arg0 + 0x374), (void *) (arg2));
    *(s32 *)((s8 *)arg0 + 0x3B4) = (s32) *(s16 *)((s8 *)arg2 + 2);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x3B4);
    if (temp_r0 < 1) {
        if (TObjPlayer::check_demo_mode() != 0) {
            *(s32 *)((s8 *)arg0 + 0x3B4) = 3;
        }
    } else if (temp_r0 > 4) {
        *(s32 *)((s8 *)arg0 + 0x3B4) = 4;
    }
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x02000000);
    ((TObjEneSlime *)arg0)->init_slots();
    return arg0;
}

void TObjEneSlime::free_instance() {
    if ((u32) slime_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)slime_bml_resource, 1);
        slime_bml_resource = 0U;
    }
}

}
