#include "pso/THunterGuildSeqOnlineTask.h"

extern "C" {
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 TWindow__close(int);
s32 TWindowCtrl__sub_8024AEF0(void *);
extern s32 lbl_8050E208[];
extern s32 lbl_805D53A0;
extern u32 TQuestListOnline__data_805D61A4;
}

void THunterGuildSeqOnlineTask::run_task() {
    u8 *p;
    if (TQuestListOnline__data_805D61A4 != 0) {
        p = (u8 *)lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button((int)p, 4) != 0 ||
            TWindowShortListCtrl__check_controller_button((int)p, 2) != 0) {
            TWindow__close((int)TQuestListOnline__data_805D61A4);
            TQuestListOnline__data_805D61A4 = 0;
            TWindowCtrl__sub_8024AEF0((void *)lbl_805D53A0);
        }
    }
}

THunterGuildSeqOnlineTask::~THunterGuildSeqOnlineTask() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *THunterGuildSeqOnlineTask__ct(void *arg0);
void handle_6x73_exit_quest(void);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void *init__22THunterGuildSeqOfflineFPvPvPv(void *, void *, void *);

extern M2C_UNK __vt__25THunterGuildSeqOnlineTask[];
extern void *lbl_805D3660;

void *THunterGuildSeqOnlineTask__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25THunterGuildSeqOnlineTask;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3660;
    return arg0;
}

extern void *tl_00;
extern unsigned char reset_random_enemies_mode[];

void handle_6x73_exit_quest(void) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        init__22THunterGuildSeqOfflineFPvPvPv(o, tl_00, reset_random_enemies_mode);
    }
}

}
