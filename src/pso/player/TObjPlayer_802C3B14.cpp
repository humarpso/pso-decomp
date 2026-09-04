#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_pending_action__10TObjPlayerFii(s32 arg0, s32 arg1);
void begin_action_from_char_select__10TObjPlayerFv(void);
s32 TObjPlayer__sub_801BFFA0(s32);
M2C_UNK TObjPlayer__sub_802C4600(s32);
M2C_UNK TObjPlayer__sub_802C4668(s32, s32);
int begin_action_state__10TObjPlayerFPv(void);
int get_char_index__23TAdSinglePlyChrSelectGCFUi(void*);

void begin_action_from_char_select__10TObjPlayerFv(void) { get_char_index__23TAdSinglePlyChrSelectGCFUi((void*)65535); begin_action_state__10TObjPlayerFPv(); }

void apply_pending_action__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 temp = TObjPlayer__sub_801BFFA0(arg0 + 0x41C);
    if (temp != 0) {
        TObjPlayer__sub_802C4668(arg1, temp);
        TObjPlayer__sub_802C4600(arg1);
    }
}

}
