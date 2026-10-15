#include "types.h"
#include "pso/misc/TMainCursor.h"

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
s32 reset_cursor_parts__11TMainCursorFv(void *);
s32 sort_list__11TMainCursorFll(Cur_8013AF50 *, s32);
s32 publish_target_list__11TMainCursorFPvi(Cur_8013AF50 *, s32);
State_8013AF50 *get_state__11TMainCursorFv(s32);
s32 publish_nearest_target__11TMainCursorFPv(void *);
s32 TObjPlayer__sub_801C6DAC(s32);
}

extern "C" {

int init__13TLockOnCursorFPvPv(void);

    extern unsigned char lbl_804A71C4[];
    extern int lockon_list_clear_task_name;
void*TMainCursor::init_lockon() { init__13TLockOnCursorFPvPv(); *(int*)((char*)this + 0x18) = (int)lbl_804A71C4; *(int*)((char*)this + 0x0) = lockon_list_clear_task_name; return this; }
void TMainCursor::refresh_all_lists() {
    s32 arg0 = (s32)this;
    s32 i;
    if (TObjPlayer__sub_801C6DAC(arg0 + 0x1C) == 0) {
        return;
    }
    if (get_state__11TMainCursorFv(arg0 + 0x1C)->cur == NULL) {
        return;
    }
    for (i = 0; i < 4; i++) {
        sort_list__11TMainCursorFll(get_state__11TMainCursorFv(arg0 + 0x1C)->cur, i);
        publish_target_list__11TMainCursorFPvi(get_state__11TMainCursorFv(arg0 + 0x1C)->cur, i);
    }
    publish_nearest_target__11TMainCursorFPv(get_state__11TMainCursorFv(arg0 + 0x1C)->cur->sub);
    for (i = 0; i < 4; i++) {
        reset_cursor_parts__11TMainCursorFv(&get_state__11TMainCursorFv(arg0 + 0x1C)->cur->parts[i]);
    }
}

}
