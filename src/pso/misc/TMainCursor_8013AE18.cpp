#include "types.h"
#include "pso/misc/TMainCursor.h"

extern "C" {

u8 *__dt__11TMainCursorFPvs(u8 *arg0, s16 arg1);
s32 TObjPlayer__sub_8013DEF8(s32);
s32 TObjPlayer__sub_801C6DAC(void *);
s32 __dl__7TObjectFPv(void *);
s32 destroy_cursor__11TMainCursorFs(void *, int);
s32 destroy_lock_on__11TMainCursorFl(int, int);
u8 *get_state__11TMainCursorFv(void *);

void TMainCursor::update_target_player() {
    s32 arg0 = (s32)this;
    if ((TObjPlayer__sub_801C6DAC((void *)(arg0 + 0x1C)) != 0) && ((u32) *(u32 *)((s8 *)(get_state__11TMainCursorFv((void *)(arg0 + 0x1C))) + 0x424) != 0U)) {
        TObjPlayer__sub_8013DEF8(*(s32 *)((s8 *)(get_state__11TMainCursorFv((void *)(arg0 + 0x1C))) + 0x424) + 0x520);
    }
}

extern s32 lbl_804A71C4[];

u8 *__dt__11TMainCursorFPvs(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A71C4;
        if ((TObjPlayer__sub_801C6DAC((void *)((void *) (arg0 + 0x1C))) != 0) &&((u32) *(u32 *)((s8 *)(get_state__11TMainCursorFv((void *)(arg0 + 0x1C))) + 0x424) != 0U)) {
            destroy_lock_on__11TMainCursorFl((int) (*(s32 *)((s8 *)(get_state__11TMainCursorFv((void *)(arg0 + 0x1C))) + 0x424)), (int) (0));
        }
        destroy_cursor__11TMainCursorFs((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
