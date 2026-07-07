#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_80072894(void *);
void TLobby__send_and_handle_60(void *);

void fn_800728C8(void *arg0) {
    fn_80072894(arg0);
    TLobby__send_and_handle_60(arg0);
}

}
