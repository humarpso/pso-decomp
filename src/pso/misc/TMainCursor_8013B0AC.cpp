#include "types.h"
#include "pso/misc/TMainCursor.h"

struct Cur_8013B0F0 {
    u8 pad0[0x4EC];
    u8 pos[0x4F8 - 0x4EC];
    u8 target[0x510 - 0x4F8];
    u8 sub[4];
};

struct Pl_8013B0F0 {
    u8 pad[0x424];
    Cur_8013B0F0 *cur;
};

extern "C" {
s32 get_main_phase();
s32 bind_action_channels__11TMainCursorFv(Cur_8013B0F0 *);
s32 TMainCursor__sub_8013E03C(void *);
s32 set_target_index__11TMainCursorFs(void *, int);
s32 reset_nearest_target_record(void *);
s32 test_flag_2000000__10TObjPlayerFPv(Pl_8013B0F0 *);
s32 submit_cursor_candidate(Pl_8013B0F0 *, int);
Pl_8013B0F0 *get_player_by_client_id(u16);
extern Pl_8013B0F0 *player_slot_table[12];
void run_cursor_reset_task(s32 arg0);
}

extern "C" {

int init__13TLockOnCursorFPvPv(void);

    extern unsigned char lbl_804A7278[];
    extern int lbl_805D2CC0;
void*TMainCursor::init_vtable() { init__13TLockOnCursorFPvPv(); *(int*)((char*)this + 0x18) = (int)lbl_804A7278; *(int*)((char*)this + 0x0) = lbl_805D2CC0; return this; }
void run_cursor_reset_task(s32 arg0) {
    Pl_8013B0F0 *pl;
    Cur_8013B0F0 *cur;
    s32 i;
    pl = get_player_by_client_id(TMainCursor__sub_8013E03C((void *)(arg0 + 0x1C)));
    if (pl == NULL) {
        return;
    }
    cur = pl->cur;
    if (cur == NULL) {
        return;
    }
    reset_nearest_target_record(cur->sub);
    ((TMainCursor *)(cur->pos))->update_cursor_pos();
    set_target_index__11TMainCursorFs(cur->target, 0xFFFF);
    ((TMainCursor *)cur)->init_slots();
    bind_action_channels__11TMainCursorFv(cur);
    if (get_main_phase() == 0xF) {
        for (i = 0; i < 12; i++) {
            Pl_8013B0F0 *p = player_slot_table[i];
            if (p != NULL && test_flag_2000000__10TObjPlayerFPv(p) == 0) {
                submit_cursor_candidate(p, -1);
            }
        }
    } else {
        submit_cursor_candidate(pl, -1);
    }
}

}
