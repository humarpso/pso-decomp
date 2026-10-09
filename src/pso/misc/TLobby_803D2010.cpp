#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void lock_enter__6TLobbyFv(void);
s32 OSDisableInterrupts();

extern s32 lobby_lock_nest_count;
extern s32 lobby_saved_interrupt_state;

void lock_enter__6TLobbyFv(void) {
    if ((s32) lobby_lock_nest_count == 0) {
        lobby_saved_interrupt_state = OSDisableInterrupts();
    }
    lobby_lock_nest_count += 1;
}

}
