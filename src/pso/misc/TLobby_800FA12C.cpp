#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void pop_and_close__6TLobbyFv(void);
M2C_UNK pop_stack_entry__6TLobbyFPvs(void *, M2C_UNK);

extern void *async_file_read_current_request;

void pop_and_close__6TLobbyFv(void) {
    void *temp_r31;

    temp_r31 = M2C_FIELD(async_file_read_current_request, void **, 0x38);
    pop_stack_entry__6TLobbyFPvs(async_file_read_current_request, 1);
    async_file_read_current_request = temp_r31;
}

}
