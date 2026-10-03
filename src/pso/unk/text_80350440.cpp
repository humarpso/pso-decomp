#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80350440_lbl_804F0D00 {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_80350440_lbl_804F0D1C {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void play_area_music(s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80350440_lbl_804F0D00 lbl_804F0D00;
extern RecoveredGlobal_80350440_lbl_804F0D1C lbl_804F0D1C;
extern u8 *lbl_805D6EA8;
u8 *fn_80350440(u8 *arg0, u8 *arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_80350440_lbl_804F0D00_size[sizeof(RecoveredGlobal_80350440_lbl_804F0D00) == 0x1C ? 1 : -1];
typedef char RecoveredGlobal_80350440_lbl_804F0D1C_size[sizeof(RecoveredGlobal_80350440_lbl_804F0D1C) == 0x18 ? 1 : -1];
u8 *fn_80350440(u8 *arg0, u8 *arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804F0D1C.value;
    if ((void *) lbl_805D6EA8 != NULL) {
        queue_destruction__7TObjectFv(lbl_805D6EA8);
    }
    lbl_805D6EA8 = arg0;
    play_area_music(M2C_FIELD(&lbl_804F0D00.value, M2C_UNK *, (arg2 * 4)));
    return arg0;
}

}
