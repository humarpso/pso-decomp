#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern u8 lbl_805D6560;
void TKeyBoardControl__sub_80290D10(void);
}

extern "C" {

void update_main_menu_scene__16TKeyBoardControlFv(void);
M2C_UNK TKeyBoardControl__sub_8000F90C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F91C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F92C();
M2C_UNK TKeyBoardControl__sub_801A66B8();
M2C_UNK TLobby__sub_801E2F44(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjCMMainMenu__sub_8028EA88();
M2C_UNK render_tick__Fv();

extern u8 lbl_805D6560;

void update_main_menu_scene__16TKeyBoardControlFv(void) {
    TLobby__sub_801E2F44(0, 0, 0xFF);
    TKeyBoardControl__sub_801A66B8();
    TKeyBoardControl__sub_8000F90C(2);
    TKeyBoardControl__sub_8000F91C(6);
    if ((u8) lbl_805D6560 != 0) {
        TKeyBoardControl__sub_80290D10();
        TKeyBoardControl__sub_8000F92C();
        return;
    }
    TObjCMMainMenu__sub_8028EA88();
    render_tick__Fv();
}
void TKeyBoardControl__sub_80290D10(void) { (*(unsigned char *)&lbl_805D6560) = 0; }

}
