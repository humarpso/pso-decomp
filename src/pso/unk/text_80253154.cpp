#include "types.h"

extern "C" {
s32 calc_buy_price__9TItemDataFPv(void *);
u32 format_item_description(void *);
void text_builder_append(s32);
void text_builder_reset(void);
extern s32 lbl_805DCDE0;
void format_description_with_price__15TWindowHelpItemFPv(u8 *arg0);
}

extern "C" {

void format_description_with_price__15TWindowHelpItemFPv(u8 *arg0) {
    text_builder_reset();
    text_builder_append(format_item_description(*(u8 **)((s8 *)arg0 + 0x68)));
    text_builder_append((s32) &lbl_805DCDE0);
    text_builder_append(calc_buy_price__9TItemDataFPv(*(u8 **)((s8 *)arg0 + 0x68)));
}

}
