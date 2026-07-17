#include "types.h"

extern "C" {

void TObjPlayer__sub_801211F0(void);
int get_player_list__10TObjPlayerFv(void);
void TObjPlayer__sub_80121208(void* p, s32 v);
void TObjPlayer__sub_80121210(void);

    extern int lbl_805D53E8;
void TObjPlayer__sub_801211F0(void) {
    int temp_r3 = lbl_805D53E8;
    lbl_805D53E8 = temp_r3 + 1;
}

    extern int lbl_805D53E8;
int get_player_list__10TObjPlayerFv(void) {  return lbl_805D53E8; }

void TObjPlayer__sub_80121208(void* p, s32 v) { *(s32*)((char*)p + 0xe0) = v; }

    extern int lbl_805D53E8;
void TObjPlayer__sub_80121210(void) { lbl_805D53E8 = 0; }

}
