#include "types.h"

typedef s32 M2C_UNK;
struct Part_8013AF50 { u8 pad[0x124]; };

struct Cur_8013AF50 {
    u8 pad0[0x5C];
    Part_8013AF50 parts[4];
    u8 pad[0x510 - 0x5C - 4 * 0x124];
    u8 sub[4];
};

struct State_8013AF50 {
    u8 pad[0x424];
    Cur_8013AF50 *cur;
};

extern "C" {
M2C_UNK reset_cursor_parts__11TMainCursorFPv(void *);
M2C_UNK sort_list__11TMainCursorFii(Cur_8013AF50 *, s32);
M2C_UNK TMainCursor__sub_8013D4A0(Cur_8013AF50 *, s32);
State_8013AF50 *get_state__11TMainCursorFPv(s32);
M2C_UNK publish_nearest_target__11TMainCursorFPv(void *);
s32 TObjPlayer__sub_801C6DAC(s32);
void refresh_all_lists__11TMainCursorFi(s32 arg0);
}

extern "C" {

void* init_lockon__11TMainCursorFPv(void* a0);
int init__13TLockOnCursorFPvPvPv(void);

    extern unsigned char lbl_804A71C4[];
    extern int lbl_805D2CC4;
void* init_lockon__11TMainCursorFPv(void* a0) { init__13TLockOnCursorFPvPvPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A71C4; *(int*)((char*)a0 + 0x0) = lbl_805D2CC4; return a0; }
void refresh_all_lists__11TMainCursorFi(s32 arg0) {
    s32 i;
    if (TObjPlayer__sub_801C6DAC(arg0 + 0x1C) == 0) {
        return;
    }
    if (get_state__11TMainCursorFPv(arg0 + 0x1C)->cur == NULL) {
        return;
    }
    for (i = 0; i < 4; i++) {
        sort_list__11TMainCursorFii(get_state__11TMainCursorFPv(arg0 + 0x1C)->cur, i);
        TMainCursor__sub_8013D4A0(get_state__11TMainCursorFPv(arg0 + 0x1C)->cur, i);
    }
    publish_nearest_target__11TMainCursorFPv(get_state__11TMainCursorFPv(arg0 + 0x1C)->cur->sub);
    for (i = 0; i < 4; i++) {
        reset_cursor_parts__11TMainCursorFPv(&get_state__11TMainCursorFPv(arg0 + 0x1C)->cur->parts[i]);
    }
}

}
