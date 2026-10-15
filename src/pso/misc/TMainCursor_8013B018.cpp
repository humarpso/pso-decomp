#include "types.h"

extern "C" {

u8 *destruct__11TMainCursorFPvs(u8 *arg0, s16 arg1);
u8 *get_state__11TMainCursorFv(void *);
s32 TObjPlayer__sub_801C6DAC(void *);
s32 __dl__7TObjectFPv(void *);
s32 destroy_cursor__11TMainCursorFs(void *, int);
s32 set_target__11TMainCursorFl(int, int);

extern s32 lbl_804A7278[];

u8 *destruct__11TMainCursorFPvs(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A7278;
        if ((TObjPlayer__sub_801C6DAC((void *) (arg0 + 0x1C)) != 0) &&((u32) *(u32 *)((s8 *)(get_state__11TMainCursorFv(arg0 + 0x1C)) + 0x424) != 0U)) {
            set_target__11TMainCursorFl((int) (*(s32 *)((s8 *)(get_state__11TMainCursorFv(arg0 + 0x1C)) + 0x424)), (int) (0));
        }
        destroy_cursor__11TMainCursorFs((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
