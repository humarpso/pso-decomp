#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_window_result__22TMedicalCenterSequenceFPv(void *arg0);

s32 is_visible__17TWindowSubComCardFPv(u32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK TWindow__close(u32);
s32 TWindowSubComCard__sub_80265BF8(u32);

void handle_window_result__22TMedicalCenterSequenceFPv(void *arg0) {
    s32 temp_r3;

    if (((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) && (is_visible__17TWindowSubComCardFPv((u32) M2C_FIELD(arg0, u32 *, 0x30)) != 0)) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x30));
        if (temp_r3 == 0) {
            TWindow__close(M2C_FIELD(arg0, u32 *, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
            set_field_20__12TQuestListVMFPvi(arg0, 4);
            return;
        }
        if (temp_r3 == 1) {
            TWindow__close(M2C_FIELD(arg0, u32 *, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
            set_field_20__12TQuestListVMFPvi(arg0, 5);
            return;
        }
        goto block_6;
    }
block_6:
    if (((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) && (get_status_flag__17TWindowSubComCardFPv((u32) M2C_FIELD(arg0, u32 *, 0x30)) != 0)) {
        TWindow__close(M2C_FIELD(arg0, u32 *, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        set_field_20__12TQuestListVMFPvi(arg0, 5);
    }
}

}
