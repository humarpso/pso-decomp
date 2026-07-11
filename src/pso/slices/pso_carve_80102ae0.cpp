#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80105874();
void free_rock_objects__6TLobbyFis(void*, int);
void free__11TOBoss4RockFUi(void*);
M2C_UNK fn_80363CE0();
M2C_UNK fn_803641EC();
extern s32 lbl_805D53F0;
extern u32 lbl_805D53F4;
extern u32 lbl_805D5400;

void fn_80102AE0(void) {
    fn_80105874();
    fn_80363CE0();
    fn_803641EC();
    if ((u32) lbl_805D5400 != 0U) {
        free_rock_objects__6TLobbyFis((void*)lbl_805D5400, 1);
        lbl_805D5400 = 0U;
    }
    if ((u32) lbl_805D53F4 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D53F4);
        lbl_805D53F4 = 0U;
    }
    lbl_805D53F0 = 0;
}

}
