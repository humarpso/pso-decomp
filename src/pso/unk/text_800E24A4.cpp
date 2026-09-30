#include "types.h"
struct Obj_800E24A4 { u8 pad0[0x18]; void *vt; u8 pad1[0x37C - 0x1C]; s32 f37C; u8 pad2[0x3DC - 0x380]; s32 f3DC; u8 pad3[0x3EC - 0x3E0]; u8 f3EC[0x1C * 4]; };

extern "C" {
void init_state_1__8TObjFishFPv(s32);
void __dt__9TObjEnemyFv(void *, s32);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, s32, s32);
extern u8 TObjPlayer__sub_800D7C58[];
extern u8 lbl_80495934[];
Obj_800E24A4 *fn_800E24A4(Obj_800E24A4 *arg0, s16 arg1);
}

extern "C" {

Obj_800E24A4 *fn_800E24A4(Obj_800E24A4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->vt = lbl_80495934;
        TObjEneGibbles__sub_80156720(arg0);
        arg0->f37C = 0;
        init_state_1__8TObjFishFPv(arg0->f3DC);
        __destroy_arr(arg0->f3EC, TObjPlayer__sub_800D7C58, 0x1C, 4);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
