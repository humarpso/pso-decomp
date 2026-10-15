#include "types.h"

extern "C" {

u8 *destroy_and_delete__11TMainCursorFPvs(u8 *arg0, s16 arg1);
u8 *get_state__11TMainCursorFPv(void *);
s32 TObjPlayer__sub_801C6DAC(void *);
s32 __dl__7TObjectFPv(void *);
s32 destroy_cursor__11TMainCursorFPvs(void *, int);
s32 set_sub_cursor_value__11TMainCursorFPvi(int, int);

extern s32 lbl_804A7290[];

u8 *destroy_and_delete__11TMainCursorFPvs(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A7290;
        if ((TObjPlayer__sub_801C6DAC((void *) (arg0 + 0x1C)) != 0) && ((u32) *(u32 *)((s8 *)(get_state__11TMainCursorFPv(arg0 + 0x1C)) + 0x424) != 0U)) {
            set_sub_cursor_value__11TMainCursorFPvi((int) (*(s32 *)((s8 *)(get_state__11TMainCursorFPv(arg0 + 0x1C)) + 0x424)), (int) (0));
        }
        destroy_cursor__11TMainCursorFPvs((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
