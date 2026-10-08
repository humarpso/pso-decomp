#include "types.h"

extern "C" {
extern u8 TObjPlayer__data_8050EA70[];
void destroy_char_data__10TObjPlayerFis(void *p, s32 d);
void __destroy_arr(void *arr, void *dtor, u32 size, u32 n);
void destroy_char_data_array__10TObjPlayerFv(void);
void __register_global_object(void *obj, void *dtor, void *chain);
void reset_lobby_settings__10TObjPlayerFPv(void *);
void *__construct_array(void *, void *, void *, u32, u32);
void destroy_char_data_array__10TObjPlayerFv(void);
void destroy_char_data__10TObjPlayerFis(void *p, s32 d);
void TObjPlayer__sub_801BFF80(void);
void init_char_data__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BE104(void);
}

extern "C" {

u8 TObjPlayer__data_8050E920[0xF0];
u8 lbl_8050EA10[0x30];
u8 lbl_8050EA40[0x24];
u8 lbl_8050EA64[0xC];
u8 TObjPlayer__data_8050EA70[0x42C * 0xC];
void TObjPlayer__sub_801BE104(void) {
    __construct_array(TObjPlayer__data_8050E920, (void *)TObjPlayer__sub_801BFF80, NULL, 0x14, 0xC);
    reset_lobby_settings__10TObjPlayerFPv(lbl_8050EA40);
    __construct_array(TObjPlayer__data_8050EA70, (void *)init_char_data__10TObjPlayerFPv, (void *)destroy_char_data__10TObjPlayerFis, 0x42C, 0xC);
    __register_global_object(NULL, (void *)destroy_char_data_array__10TObjPlayerFv, lbl_8050EA64);
}

void destroy_char_data_array__10TObjPlayerFv(void) {
    __destroy_arr(TObjPlayer__data_8050EA70, (void *)destroy_char_data__10TObjPlayerFis, 0x42c, 0xc);
}

}
