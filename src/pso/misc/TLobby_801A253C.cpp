#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801A253C(void);
void TLobby__sub_801A2550(void);
void TLobby__sub_801A2554(void);

extern s16 lbl_805D5CD2;
extern s16 lbl_805D5CD4;

void TLobby__sub_801A253C(void) {
    lbl_805D5CD2 = 0x1000;
    lbl_805D5CD4 = 0x4000;
}

void TLobby__sub_801A2550(void) {  }

extern s16 lbl_805D5CD0;
extern s16 lbl_805D5CD2;
extern s16 lbl_805D5CD4;

void TLobby__sub_801A2554(void) {
    lbl_805D5CD0 = 0;
    lbl_805D5CD2 = 0x1000;
    lbl_805D5CD4 = 0x4000;
}

}
