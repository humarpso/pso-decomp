#include "types.h"
struct Obj_800D3E54 { u8 pad0[0x18]; void *vt; };

extern "C" {
void __dt__15TObjEnemyCustomFv(void *, int);
s32 __dt__18TObjEneMe3SinowZoaFPvs(void *, s16);
s32 TObjEneGibbles__sub_80156720(void *);
s32 __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
void TObjPlayer__sub_800D7C58();
extern u8 lbl_80494288[];
Obj_800D3E54 *fn_800D3E54(Obj_800D3E54 *arg0, s16 arg1);
}

extern "C" {

Obj_800D3E54 *fn_800D3E54(Obj_800D3E54 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->vt = lbl_80494288;
        TObjEneGibbles__sub_80156720(arg0);
        __destroy_arr((u8 *)arg0 + 0x3EC, (void *)TObjPlayer__sub_800D7C58, 0x1C, 4);
        __dt__18TObjEneMe3SinowZoaFPvs((u8 *)arg0 + 0x3D0, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
