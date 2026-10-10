#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Body_8034C1D0 { u32 w[0x234]; };

struct Big_8034C1D0 { u32 a; Body_8034C1D0 b; };

extern "C" {
extern s32 info_board_state_flags;
extern u32 information_board_response_buffer;
void *get_info_board_ptr__6TLobbyFv(void);
s32 TLobby__sub_8034C1D0(u32 dst, s32 src);
}

extern "C" {

void init_once__6TLobbyFi(s32 arg0);

extern s32 info_board_state_flags;
extern u32 information_board_response_buffer;

void init_once__6TLobbyFi(s32 arg0) {
    if (!(info_board_state_flags & 2) && (information_board_response_buffer != 0U)) {
        info_board_state_flags |= 2;
        TLobby__sub_8034C1D0((u32)(information_board_response_buffer), (s32)(arg0));
    }
}

s32 TLobby__sub_8034C1D0(u32 dst, s32 src) {
    *(Big_8034C1D0 *)dst = *(Big_8034C1D0 *)src;
}

void *get_info_board_ptr__6TLobbyFv(void) {
    void *p;
    if (!(info_board_state_flags & 2)) {
        return NULL;
    }
    p = (void *)information_board_response_buffer;
    if (p != NULL) {
        return p;
    }
    return NULL;
}

}
