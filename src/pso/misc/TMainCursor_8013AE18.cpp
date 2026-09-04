#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *__dt__11TMainCursorFPvs(u8 *arg0, s16 arg1);
void update_target_player__11TMainCursorFi(s32 arg0);
M2C_UNK TObjPlayer__sub_8013DEF8(s32);
s32 TObjPlayer__sub_801C6DAC(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_cursor__11TMainCursorFPvs(void *, int);
M2C_UNK destroy_lock_on__11TMainCursorFPvi(int, int);
u8 *get_state__11TMainCursorFPv(void *);

void update_target_player__11TMainCursorFi(s32 arg0) {
    if ((TObjPlayer__sub_801C6DAC((void *)(arg0 + 0x1C)) != 0) && ((u32) M2C_FIELD(get_state__11TMainCursorFPv((void *)(arg0 + 0x1C)), u32 *, 0x424) != 0U)) {
        TObjPlayer__sub_8013DEF8(M2C_FIELD(get_state__11TMainCursorFPv((void *)(arg0 + 0x1C)), s32 *, 0x424) + 0x520);
    }
}

extern M2C_UNK lbl_804A71C4[];

u8 *__dt__11TMainCursorFPvs(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A71C4;
        if ((TObjPlayer__sub_801C6DAC((void *)((void *) (arg0 + 0x1C))) != 0) &&((u32) M2C_FIELD(get_state__11TMainCursorFPv((void *)(arg0 + 0x1C)), u32 *, 0x424) != 0U)) {
            destroy_lock_on__11TMainCursorFPvi((int) (M2C_FIELD(get_state__11TMainCursorFPv((void *)(arg0 + 0x1C)), s32 *, 0x424)), (int) (0));
        }
        destroy_cursor__11TMainCursorFPvs((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
