#include "types.h"

struct RecoveredGlobal_8026B260___vt__19TWindowMessageQuest {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 TWindowMessage__ct(void *, void *, int, void *);
extern RecoveredGlobal_8026B260___vt__19TWindowMessageQuest __vt__19TWindowMessageQuest;
extern s32 lbl_805D39A0;
extern s32 local_client_id;
u8 *TWindowMessageQuest__ct(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8026B260___vt__19TWindowMessageQuest_size[sizeof(RecoveredGlobal_8026B260___vt__19TWindowMessageQuest) == 0x18 ? 1 : -1];
u8 *TWindowMessageQuest__ct(u8 *arg0, s32 arg1) {
    TWindowMessage__ct((void *) (arg0), (void *) (arg1), (int) (1), (void *) (local_client_id));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__19TWindowMessageQuest.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D39A0;
    *(s32 *)((s8 *)arg0 + 0x90) = 0;
    return arg0;
}

}
