#include "types.h"
#include "pso/object/TObjMapWarpAncient.h"

extern "C" {

u8 *TObjMapWarpAncient__ct(u8 *arg0);
void *__dt__18TObjMapWarpAncientFv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
s32 TObjGoalWarpAncient__sub_8017D2D4(int);
s32 TObjMapWarp__ct();
void __dl__7TObjectFPv(void *);
void __dt__11TObjMapWarpFv(void *, int);
s32 free_if_valid__10TObjPlayerFl(s32);
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

extern s32 __vt__18TObjMapWarpAncient[];
extern s32 TObjMapWarpAncient__class_name;
extern const f32 lbl_805DBAC4;

u8 *TObjMapWarpAncient__ct(u8 *arg0) {
    TObjMapWarp__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjMapWarpAncient;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjMapWarpAncient__class_name;
    *(f32 *)((s8 *)arg0 + 0xFC) = (f32) lbl_805DBAC4;
    *(s32 *)((s8 *)arg0 + 0x100) = TObjGoalWarpAncient__sub_8017D2D4(2);
    *(s32 *)((s8 *)arg0 + 0x104) = TObjGoalWarpAncient__sub_8017D2D4(0);
    *(s32 *)((s8 *)arg0 + 0x108) = TObjGoalWarpAncient__sub_8017D2D4(4);
    *(s32 *)((s8 *)arg0 + 0x10C) = register_warp_object__19TObjGoalWarpAncientFPv(2);
    *(s32 *)((s8 *)arg0 + 0x110) = register_warp_object__19TObjGoalWarpAncientFPv(0);
    *(s32 *)((s8 *)arg0 + 0x114) = register_warp_object__19TObjGoalWarpAncientFPv(4);
    *(s32 *)((s8 *)arg0 + 0x118) = register_warp__19TObjGoalWarpAncientFPv(1);
    return arg0;
}

extern u32 ancient_warp_shared_resource;
extern s32 goal_warp_ancient_gvm_texture;

void TObjMapWarpAncient::free_globals() {
    free_if_valid__10TObjPlayerFl(goal_warp_ancient_gvm_texture);
    goal_warp_ancient_gvm_texture = 0;
    if ((u32) ancient_warp_shared_resource != 0U) {
        TLobby__sub_8001FE7C((void*)ancient_warp_shared_resource, 1);
        ancient_warp_shared_resource = 0U;
    }
}

}
