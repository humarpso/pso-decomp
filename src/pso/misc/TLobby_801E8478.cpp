#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag3__6TLobbyFv(void);
void free_static__6TLobbyFv(void);
M2C_UNK clear_flag_3__7TObjectFv(void *);
M2C_UNK TMainTask__sub_801F34D0(void *);

extern void *tl_03;

void clear_flag3__6TLobbyFv(void) {
    void *self = tl_03;
    if (self != NULL) {
        clear_flag_3__7TObjectFv(self);
    }
}

extern void *tl_03;

void free_static__6TLobbyFv(void) {
    void *temp = tl_03;
    if (temp != 0) {
        TMainTask__sub_801F34D0(temp);
    }
}

}
