#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__18TWindowPartyStatusFv(s32 arg0);
M2C_UNK TWindowComCard__sub_8026F9F4(void *, int);
M2C_UNK TWindowDD__sub_8024664C(void *);
s32 TWindowSubComCard__sub_8026CBB8(int);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(void *, void *);
M2C_UNK draw__18TWindowPartyStatusFPv(void *);
M2C_UNK fn_8026FDC0(void *);
M2C_UNK fn_80270014();
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
M2C_UNK update_status_help_item(void *);

void run_task__18TWindowPartyStatusFv(s32 arg0) {
    fn_80270014();
    draw__18TWindowPartyStatusFPv((void *) (arg0));
    update_status_help_item((void *) (arg0));
    TWindowComCard__sub_8026F9F4((void *) (arg0), (int) (TWindowSubComCard__sub_8026CBB8((int) (0xAC))));
    TWindowDD__sub_8024664C((void *) (arg0));
    update_fade__17TWindowSubComCardFPv((void *) (arg0));
    TWindowSubStatusDisp__sub_80257C28((void *) (arg0), (void *) (arg0 + 0x24));
    fn_8026FDC0((void *) (arg0));
}

}
