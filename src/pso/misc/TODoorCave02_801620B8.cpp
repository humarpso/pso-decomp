#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_globals__12TODoorCave02Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5960;
extern s32 *TODoorCave02__data_805D5964;

void free_globals__12TODoorCave02Fv(void) {
    if ((s32 *) TODoorCave02__data_805D5964 != NULL) {
        free_if_valid__10TObjPlayerFi(*TODoorCave02__data_805D5964);
        if ((s32 *) TODoorCave02__data_805D5964 != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorCave02__data_805D5964);
            TODoorCave02__data_805D5964 = NULL;
        }
    }
    if ((u32) lbl_805D5960 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5960, 1);
        lbl_805D5960 = 0U;
    }
}

}
