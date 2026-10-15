#include "types.h"

extern "C" {

void alloc_buffer__16TKeyBoardControlFv(void);
s32 xmalloc__FUl(s32);

extern s32 player_data_load_buffer;

void alloc_buffer__16TKeyBoardControlFv(void) {
    player_data_load_buffer = xmalloc__FUl(0x14000);
}

}
