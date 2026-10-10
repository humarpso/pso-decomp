#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__18TAdGameStartBackGCFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 multi_confirm_texture_list;

void destroy_instance__18TAdGameStartBackGCFv(void) {
    if ((u32) multi_confirm_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)multi_confirm_texture_list);
        multi_confirm_texture_list = 0U;
    }
}

}
