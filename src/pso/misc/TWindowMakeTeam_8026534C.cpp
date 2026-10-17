#include "types.h"
#include "pso/misc/TWindowMakeTeam_8026534C.h"
#include "pso/misc/TWindowMakeTeam.h"

extern "C" {

s32 init_status_disp__15TWindowMakeTeamFc(u8);
s32 draw_entry_0x110__15TWindowMakeTeamFSc(u8);
s32 create_menu__15TWindowMakeTeamFv(struct TWMT *);
s32 __ct__7TObjectFP7TObject();

struct TWMT;
extern void* __vt__15TWindowMakeTeam[];
extern s32 lbl_805D3958;

void *TWindowMakeTeam__ct(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r0;
    s32 v;
    register struct TWMT *self;

    __ct__7TObjectFP7TObject();
    self = (struct TWMT *) arg0;
    *(void **)((s8 *)self + 0x18) = (void *) __vt__15TWindowMakeTeam;
    v = lbl_805D3958;
    *(s32 *)((s8 *)self + 0) = v;
    *(s8 *)((s8 *)self + 0x1C) = 0;
    *(s8 *)((s8 *)self + 0x1D) = 0;
    *(s32 *)((s8 *)self + 0x20) = arg2;
    *(s32 *)((s8 *)self + 0x2C) = create_menu__15TWindowMakeTeamFv(self);
    *(s32 *)((s8 *)self + 0x30) = 0;
    *(s32 *)((s8 *)self + 0x34) = 0;
    *(s32 *)((s8 *)self + 0x24) = 0;
    *(s32 *)((s8 *)self + 0x28) = 0;
    *(u8 *)((s8 *)self + 0x1E) = 0U;
    *(u8 *)((s8 *)self + 0x1F) = 0U;
    temp_r0 = *(s32 *)((s8 *)self + 0x20);
    if ((temp_r0 == 1) || (temp_r0 == 2)) {
        ((TWindowMakeTeam *)(*(s32 *)((s8 *)self + 0x2C)))->set_entry_string_by_id((void *)(draw_entry_0x110__15TWindowMakeTeamFSc(*(u8 *)((s8 *)self + 0x1E))), 2);
    }
    ((TWindowMakeTeam *)(*(s32 *)((s8 *)self + 0x2C)))->set_entry_string_by_id((void *)(init_status_disp__15TWindowMakeTeamFc(*(u8 *)((s8 *)self + 0x1F))), 3);
    return arg0;
}

}
