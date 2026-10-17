#include "types.h"
#include "pso/object/TObjMapWarpAncient_8017D0DC.h"
#include "pso/object/TObjMapWarpAncient.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TLobby__sub_8001FE7C(void*, int);
s32 TObjGoalWarpAncient__sub_8017D2D4(int);
s32 TObjMapWarp__ct();
void __dl__7TObjectFPv(void *);
void *__dt__11TObjMapWarpFv(void *arg0, s16 arg1);
s32 register_warp__19TObjGoalWarpAncientFPv(int);
s32 register_warp_object__19TObjGoalWarpAncientFPv(int);

extern s32 __vt__18TObjMapWarpAncient[];

void *__dt__18TObjMapWarpAncientFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjMapWarpAncient;
        __dt__11TObjMapWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 TObjMapWarpAncient__class_name;
extern const f32 lbl_805DBAC4;

u8 *TObjMapWarpAncient__ct(TObjMapWarpAncient *map_warp_ancient) {
    TObjMapWarp__ct();
    *(s32 **)((s8 *)map_warp_ancient + 0x18) = __vt__18TObjMapWarpAncient;
    *(s32 *)((s8 *)map_warp_ancient + 0) = (s32) TObjMapWarpAncient__class_name;
    *(f32 *)((s8 *)map_warp_ancient + 0xFC) = (f32) lbl_805DBAC4;
    map_warp_ancient->m_100 = TObjGoalWarpAncient__sub_8017D2D4(2);
    map_warp_ancient->m_104 = TObjGoalWarpAncient__sub_8017D2D4(0);
    map_warp_ancient->m_108 = TObjGoalWarpAncient__sub_8017D2D4(4);
    map_warp_ancient->m_10c = register_warp_object__19TObjGoalWarpAncientFPv(2);
    map_warp_ancient->m_110 = register_warp_object__19TObjGoalWarpAncientFPv(0);
    map_warp_ancient->m_114 = register_warp_object__19TObjGoalWarpAncientFPv(4);
    map_warp_ancient->m_118 = register_warp__19TObjGoalWarpAncientFPv(1);
    return (u8 *)map_warp_ancient;
}

extern u32 ancient_warp_shared_resource;
extern s32 goal_warp_ancient_gvm_texture;

void TObjMapWarpAncient::free_globals() {
    TObjPlayer::free_if_valid(goal_warp_ancient_gvm_texture);
    goal_warp_ancient_gvm_texture = 0;
    if ((u32) ancient_warp_shared_resource != 0U) {
        TLobby__sub_8001FE7C((void*)ancient_warp_shared_resource, 1);
        ancient_warp_shared_resource = 0U;
    }
}

}
