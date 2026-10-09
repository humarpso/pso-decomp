#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803D25DC(void);
M2C_UNK memset(void *, int, int);

extern M2C_UNK adx_stream_slot_table[];
extern s32 lobby_buffer_ref_count;

void TLobby__sub_803D25DC(void) {
    if ((s32) lobby_buffer_ref_count == 0) {
        memset((void *) (adx_stream_slot_table), (int) (0), (int) (0x480));
    }
    lobby_buffer_ref_count += 1;
}

}
