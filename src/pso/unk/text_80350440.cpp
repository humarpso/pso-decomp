#include "types.h"

struct RecoveredGlobal_80350440_lbl_804F0D00 {
    s32 value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_80350440_lbl_804F0D1C {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void play_area_music(s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80350440_lbl_804F0D00 lbl_804F0D00;
extern RecoveredGlobal_80350440_lbl_804F0D1C quest_bgm_object_dispatch_table;
extern u8 *pending_destroy_object;
u8 *fn_80350440(u8 *arg0, u8 *arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_80350440_lbl_804F0D00_size[sizeof(RecoveredGlobal_80350440_lbl_804F0D00) == 0x1C ? 1 : -1];
typedef char RecoveredGlobal_80350440_lbl_804F0D1C_size[sizeof(RecoveredGlobal_80350440_lbl_804F0D1C) == 0x18 ? 1 : -1];
u8 *fn_80350440(u8 *arg0, u8 *arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &quest_bgm_object_dispatch_table.value;
    if ((void *) pending_destroy_object != NULL) {
        queue_destruction__7TObjectFv(pending_destroy_object);
    }
    pending_destroy_object = arg0;
    play_area_music(*(s32 *)((s8 *)(&lbl_804F0D00.value) + (arg2 * 4)));
    return arg0;
}

}
