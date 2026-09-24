#include "types.h"
extern "C" {
extern u8 TObjPlayer__data_8050EA70[];
void destroy_char_data__10TObjPlayerFis(void *p, s32 d);
void __destroy_arr(void *arr, void *dtor, u32 size, u32 n);
void TObjPlayer__sub_801BE188(void);
}

extern "C" {

void TObjPlayer__sub_801BE188(void) {
    __destroy_arr(TObjPlayer__data_8050EA70, (void *)destroy_char_data__10TObjPlayerFis, 0x42c, 0xc);
}

}
