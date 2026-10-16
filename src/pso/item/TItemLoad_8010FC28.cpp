#include "types.h"
#include "pso/TItemLoad.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8010FCB4_lbl_8049F42C {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
s32 test_flags_any(void *, int);
s32 __dl__FPv(void *);
s32 TItemLoad__sub_80110010(void *, int);
extern RecoveredGlobal_8010FCB4_lbl_8049F42C lbl_8049F42C;
extern s32 item_load_work_buffer_busy;
u8 *TItemLoad__sub_8010FCB4(u8 *arg0, s16 arg1);
}

extern "C" {

s32 TItemLoad__sub_801107DC(void *);
s32 test_flags_any(void *, int);

extern s32 item_load_compressed_work_buffer;
extern s32 item_load_work_buffer_busy;

void TItemLoad::advance_load_state() {
    u8 *arg0 = (u8 *)this;
    if (test_flags_any((void *) (arg0 + 0x1C), (int) (4)) == 0) {
        if ((s32) item_load_work_buffer_busy != 1) {
            item_load_work_buffer_busy = 1;
            ((TObjPlayer *)(arg0 + 0x1C))->set_flags((int) (4));
            goto block_3;
        }
    } else {
block_3:
        if (((TItemLoad *)arg0)->load_data((int) (*(s32 *)((s8 *)arg0 + 0x20))) != 0U) {
            TItemLoad__sub_801107DC((void *) (arg0));
            ((TItemLoad *)arg0)->request_load((s32)((void *) (item_load_compressed_work_buffer)));
            *(s32 *)((s8 *)arg0 + 0x18) = 2;
        }
    }
}
typedef char RecoveredGlobal_8010FCB4_lbl_8049F42C_size[sizeof(RecoveredGlobal_8010FCB4_lbl_8049F42C) == 0x10 ? 1 : -1];
u8 *TItemLoad__sub_8010FCB4(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x14) = &lbl_8049F42C.value;
        if (test_flags_any((void *) (arg0 + 0x1C), (int) (4)) != 0) {
            item_load_work_buffer_busy = 0;
        }
        TItemLoad__sub_80110010((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__FPv((void *) (arg0));
        }
    }
    return arg0;
}

}
