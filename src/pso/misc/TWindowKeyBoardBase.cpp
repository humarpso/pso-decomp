#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__19TWindowKeyBoardBaseFv(void* p);
void render__19TWindowKeyBoardBaseFv(void *arg0);
s32 draw_default_entry__9TWindowDDFi(void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);
s32 TWindowChat__sub_8025CB10(void *);
M2C_UNK TWindowSubStatusDisp__sub_8025E6DC(void *, s32);
s32 TWindowKeyBoardHard__sub_8025EB68();

void render__19TWindowKeyBoardBaseFv(void *arg0) {
    s32 temp_r31;

    if ((TWindowKeyBoardHard__sub_8025EB68() == 0) && ((TWindowChat__sub_8025CB10(arg0) != 0) || (M2C_FIELD(arg0, u16 *, 0x62) & 2))) {
        temp_r31 = draw_default_entry__9TWindowDDFi(arg0);
        if (M2C_FIELD(arg0, u16 *, 0x62) & 2) {
            TWindowSubComCard__sub_80245F98(arg0, temp_r31);
        }
        TWindowSubStatusDisp__sub_8025E6DC(arg0, temp_r31);
    }
}

void run_task__19TWindowKeyBoardBaseFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); }

}
