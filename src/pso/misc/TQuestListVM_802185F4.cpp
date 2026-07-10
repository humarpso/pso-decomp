#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_windows__12TQuestListVMFPv(void *arg0);
void TQuestListVM__sub_8021867C(void);
M2C_UNK TWindow__close(void *);
int fn_8000F950(void);
int fn_80073DAC(void);

void close_windows__12TQuestListVMFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2378) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x2378));
        M2C_FIELD(arg0, u32 *, 0x2378) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2380) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x2380));
        M2C_FIELD(arg0, u32 *, 0x2380) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x237C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x237C));
        M2C_FIELD(arg0, u32 *, 0x237C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2374) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x2374));
        M2C_FIELD(arg0, u32 *, 0x2374) = 0U;
    }
}

    extern int evt2_random_enemies_mode;
void TQuestListVM__sub_8021867C(void) { fn_80073DAC(); evt2_random_enemies_mode = 3; fn_8000F950(); }

}
