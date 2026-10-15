#include "types.h"

extern "C" {

struct Base_8010FA4C_8010F9EC { char pad[0x14]; };
struct VObj_8010FA4C_8010F9EC : Base_8010FA4C_8010F9EC {
    virtual void m0();
    virtual void m1();
};

void reset_ring_state__9TItemLoadFPv(u8 *arg0);
void update_state__9TItemLoadFPv(void *arg0);
s32 test_flags_any(void *, int);
s32 advance_load_state__9TItemLoadFPv();
s32 clear_flags__11TAdRicoRingFPvUi(void *, int);
s32 clear_id__10TObjPlayerFPv(void *);
s32 update_ring__9TItemLoadFi();

extern s32 item_load_work_buffer_busy;

void reset_ring_state__9TItemLoadFPv(u8 *arg0) {
    if (test_flags_any(arg0 + 0x1C, 4) != 0) {
        item_load_work_buffer_busy = 0;
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1C, 4);
    }
    *(s32 *)((s8 *)arg0 + 0x18) = 0;
    clear_id__10TObjPlayerFPv(arg0 + 0x1C);
}

void update_state__9TItemLoadFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x18);
    switch (temp_r0) {
    case 1:
        advance_load_state__9TItemLoadFPv();
        return;
    case 2:
        update_ring__9TItemLoadFi();
        return;
    case 4:
        ((VObj_8010FA4C_8010F9EC *)arg0)->m1();
    case 3:
        return;
    }
}

}
