#include "types.h"

extern "C" {

u8 *destroy__15TWindowFukidasiFPvs(u8 *arg0, s16 arg1);
s32 free__11TOBoss4RockFUi(void *);
s32 release_slot__11TWindowCtrlFPv(void *);
s32 __dl__7TObjectFPv(void *);
s32 destroy_window__15TWindowAdditionFPvs(void *, s32);
s32 clear_visible_flag__15TWindowFukidasiFPv(void *);
s32 is_flag_set__15TWindowFukidasiFPv(s32 *);

extern s32 lbl_804CF0B8[];

u8 *destroy__15TWindowFukidasiFPvs(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CF0B8;
        if (is_flag_set__15TWindowFukidasiFPv((s32 *)arg0) != 0) {
            clear_visible_flag__15TWindowFukidasiFPv(arg0);
            release_slot__11TWindowCtrlFPv(arg0 + 0x73);
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x78) != 0U) {
            free__11TOBoss4RockFUi(*(void **)((s8 *)arg0 + 0x78));
            *(u32 *)((s8 *)arg0 + 0x78) = 0U;
        }
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
