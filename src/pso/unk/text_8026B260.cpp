#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8026B260___vt__19TWindowMessageQuest {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 TWindowMessage__ct(void *, void *, int, void *);
extern RecoveredGlobal_8026B260___vt__19TWindowMessageQuest __vt__19TWindowMessageQuest;
extern s32 lbl_805D39A0;
extern s32 lbl_805D53A0;
u8 *TWindowMessageQuest__ct(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8026B260___vt__19TWindowMessageQuest_size[sizeof(RecoveredGlobal_8026B260___vt__19TWindowMessageQuest) == 0x18 ? 1 : -1];
u8 *TWindowMessageQuest__ct(u8 *arg0, s32 arg1) {
    TWindowMessage__ct((void *) (arg0), (void *) (arg1), (int) (1), (void *) (lbl_805D53A0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__19TWindowMessageQuest.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D39A0;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    return arg0;
}

}
