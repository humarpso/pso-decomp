#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__12TAdBackTxtGCFv(void *arg0);
void render__12TAdBackTxtGCFv(void *arg0);

s32 TMainTask__sub_8001A430();
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK fn_80141A30();
s32 toggle_flag_9__10TObjPlayerFPv();
M2C_UNK fn_8029BA3C(void *, s32, M2C_UNK);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);

void render__12TAdBackTxtGCFv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
        if (toggle_flag_9__10TObjPlayerFPv() == 0) {
            set_depth_buffer_settings_2__Fv();
            goto block_4;
        }
    } else if (TMainTask__sub_8001A430() != 1) {
block_4:
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        fn_8029BA3C(arg0, (s32) M2C_FIELD(arg0, s32 *, 0x1C) / 3, -1);
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
            fn_80141A30();
        }
    }
}

void run_task__12TAdBackTxtGCFv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r4 >= 0xE) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r4 + 1);
}

}
