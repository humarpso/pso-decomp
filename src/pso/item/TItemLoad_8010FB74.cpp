#include "types.h"

extern "C" {

void update_load_state__9TItemLoadFPv(u8 *arg0);
void update_ring__9TItemLoadFi(s32 arg0);
s32 test_flags_any(void *, int);
s32 clear_flags__11TAdRicoRingFPvUi(s32, s32);
s32 free_texture__9TItemLoadFPv();
s32 get_ring_lobby__9TItemLoadFPv();
s32 set_flags__10TObjPlayerFPvUi(s32, s32);

void update_ring__9TItemLoadFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_ring_lobby__9TItemLoadFPv();
    if (temp_r3 != 2) {
        if (temp_r3 == 3) {
            clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1C, 1);
        } else {
            set_flags__10TObjPlayerFPvUi(arg0 + 0x1C, 1);
        }
        update_load_state__9TItemLoadFPv((u8 *)(arg0));
    }
}

void update_load_state__9TItemLoadFPv(u8 *arg0) {
    free_texture__9TItemLoadFPv();
    if (test_flags_any(arg0 + 0x1C, 1) != 0) {
        *(s32 *)((s8 *)arg0 + 0x18) = 1;
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x18) = 4;
}

}
