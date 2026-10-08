#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
bool TWindowChat__sub_8025CB10(u8 *arg0);
}

extern "C" {

void flush_if_flagged__11TWindowChatFPv(void* p);
int reset_input__11TWindowChatFPv(void* a0 = 0);
int get_flag__11TWindowChatFPv(void* a0 = 0);
int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p);

bool TWindowChat__sub_8025CB10(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        return 1;
    }
    return M2C_FIELD(arg0, s32 *, 0x94) != 0;
}

void flush_if_flagged__11TWindowChatFPv(void* p) { if (get_flag__11TWindowChatFPv(p) != 0) { reset_input__11TWindowChatFPv(p); } }

}
