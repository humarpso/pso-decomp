#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_quest_thread_state__6TLobbyFv(void);

extern void *lbl_805D5330;

s32 get_quest_thread_state__6TLobbyFv(void) {
    if ((void *) lbl_805D5330 != NULL) {
        return M2C_FIELD(lbl_805D5330, s32 *, 0x24);
    }
    return 0;
}

}
