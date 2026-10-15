#include "types.h"

extern "C" {

void init_item_data__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 init__9TItemDataFv();

void init_item_data__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    init__9TItemDataFv();
    *(s8 *)((s8 *)arg0 + 0) = 4;
    *(s32 *)((s8 *)arg0 + 0x10) = arg1;
}

}
