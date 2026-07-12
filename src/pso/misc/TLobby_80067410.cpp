#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80067410(void);
M2C_UNK TLobby__sub_80066EC0();
M2C_UNK fn_802898E8();
M2C_UNK fn_8028AB38();
M2C_UNK fn_8028ACE0();
M2C_UNK fn_8028B36C();
void queue_destruction__7TObjectFv(void*);

extern u32 lbl_805D4DE0;

void TLobby__sub_80067410(void) {
    if ((u32) lbl_805D4DE0 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D4DE0);
        lbl_805D4DE0 = 0U;
    }
    fn_8028ACE0();
    fn_8028B36C();
    fn_802898E8();
    fn_8028AB38();
    TLobby__sub_80066EC0();
}

}
