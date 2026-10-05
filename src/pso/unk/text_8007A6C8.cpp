#include "types.h"
extern "C" {
void init__10TObjMapCsnFPv(void *);
void init_and_return__10TObjMapCsnFi(void *);
void __construct_array(void *, void *, s32, s32, s32);
extern u8 TObjPlayer__sub_8007A7B8[];
void fn_8007A6C8(void);
}

extern "C" {

u8 lbl_804FF9C0[0x380];
u8 lbl_804FFD40[0x400];
__declspec(section ".data") u8 lbl_80500140[8];
u8 lbl_80500148[0x10];
void fn_8007A6C8(void) {
    __construct_array(lbl_804FF9C0, TObjPlayer__sub_8007A7B8, 0, 0x1C, 0x20);
    init_and_return__10TObjMapCsnFi(lbl_80500140);
    init__10TObjMapCsnFPv(lbl_80500148);
}

}
