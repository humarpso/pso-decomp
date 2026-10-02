#include "types.h"

typedef s32 M2C_UNK;
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
M2C_UNK init_slots__11TMainCursorFPv(Cur_8013B0F0 *);
M2C_UNK TMainCursor__sub_8013C924(Cur_8013B0F0 *);
s32 TMainCursor__sub_8013E03C(void *);
M2C_UNK set_target_index__11TMainCursorFPvs(void *, int);
M2C_UNK update_cursor_pos__11TMainCursorFPv(void *);
M2C_UNK TMainCursor__sub_8013E240(void *);
s32 test_flag_2000000__10TObjPlayerFPv(Pl_8013B0F0 *);
M2C_UNK submit_cursor_candidate(Pl_8013B0F0 *, int);
Pl_8013B0F0 *get_player_by_client_id(u16);
extern Pl_8013B0F0 *lbl_8050EA10[12];
void run_cursor_reset_task(s32 arg0);
}

extern "C" {

void* init_vtable__11TMainCursorFPv(void* a0);
int init__13TLockOnCursorFPvPvPv(void);

    extern unsigned char lbl_804A7278[];
    extern int lbl_805D2CC0;
void* init_vtable__11TMainCursorFPv(void* a0) { init__13TLockOnCursorFPvPvPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A7278; *(int*)((char*)a0 + 0x0) = lbl_805D2CC0; return a0; }
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
    TMainCursor__sub_8013E240(cur->sub);
    update_cursor_pos__11TMainCursorFPv(cur->pos);
    set_target_index__11TMainCursorFPvs(cur->target, 0xFFFF);
    init_slots__11TMainCursorFPv(cur);
    TMainCursor__sub_8013C924(cur);
    if (get_main_phase() == 0xF) {
        for (i = 0; i < 12; i++) {
            Pl_8013B0F0 *p = lbl_8050EA10[i];
            if (p != NULL && test_flag_2000000__10TObjPlayerFPv(p) == 0) {
                submit_cursor_candidate(p, -1);
            }
        }
    } else {
        submit_cursor_candidate(pl, -1);
    }
}

}
