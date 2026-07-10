#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowKeyBoardSoft__sub_8025D994();
s32 TWindowKeyBoardSoft__sub_8025DA18();
s32 convert_input_text__19TWindowKeyBoardSoftFPv();
int fn_8025B850(void* p);
s32 fn_8025B8C8(void* p);
void TWindowKeyBoardSoft__sub_8025B928(void);

void TWindowKeyBoardSoft__sub_8025B9D8(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r4 & 4) {
        if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) {
            TWindowKeyBoardSoft__sub_8025DA18();
            return;
        }
        TWindowKeyBoardSoft__sub_8025D994();
        return;
    }
    if (temp_r4 & 2) {
        convert_input_text__19TWindowKeyBoardSoftFPv();
    }
}

}
