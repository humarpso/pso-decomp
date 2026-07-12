#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TLobby__sub_80101AB0(void *);
void TObjPlayer__sub_8011E738(void *, void *, void *);

void fn_80109464(void *arg0) {
    void *x;
    x = TLobby__sub_80101AB0(M2C_FIELD(arg0, void **, 0x34));
    if (x != NULL) {
        TObjPlayer__sub_8011E738(x, (void *)((char *)arg0 + 28), (void *)((char *)arg0 + 40));
    }
    M2C_FIELD(arg0, u32 *, 0x38) = 1;
}

}
