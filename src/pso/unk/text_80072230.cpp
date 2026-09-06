#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800724F0 {
    M2C_UNK sp8;
    s32 spC;
};

extern "C" {
M2C_UNK send_challenge_packet__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_800728FC(void *);
void TLobby__sub_800724F0(M2C_UNK arg0, s32 arg1);
}

extern "C" {

s32 is_flag_set__6TLobbyFv();
M2C_UNK TLobby__sub_800727A0(void *);
extern M2C_UNK lbl_8048C9D8[];

void handle_6x97_select_challenge_mode_failure_option(void *arg0) {
    s32 var_r0;

    if (is_flag_set__6TLobbyFv() != 0) {
        TLobby__sub_800727A0(arg0);
        var_r0 = M2C_FIELD(arg0, s32 *, 8);
        if ((var_r0 < 0) || (var_r0 > 1)) {
            var_r0 = 0;
        }
        M2C_FIELD(&lbl_8048C9D8, s32 *, 0x24) = var_r0;
    }
}
void TLobby__sub_800724F0(M2C_UNK arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_800724F0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800724F0, spC) == 0x4) ? 1 : -1];
    Stack_800724F0 stack;
    TLobby__sub_800728FC((void *) (&stack.sp8));
    stack.spC = arg1;
    send_challenge_packet__6TLobbyFPv((void *) (&stack.sp8));
}

}
