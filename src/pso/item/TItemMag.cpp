#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_feed_timer__8TItemMagFPv(void *arg0);
void feed_if_over_90__8TItemMagFPv(void* p);
void feed_if_over_45__8TItemMagFPv(void* p);
void update_feed__8TItemMagFPv(void *arg0);
void check_level_cap__8TItemMagFPv(void *arg0);
void check_level_evolve__8TItemMagFPv(void *arg0);
int TItemMag__sub_80112E20(void*, void*);
M2C_UNK transfer_energy__8TItemMagFPv(void *);
M2C_UNK apply_switch_attack__5TItemFPvi(void *, M2C_UNK);
M2C_UNK TItemMag__sub_80112BC4(void *, M2C_UNK);
M2C_UNK apply_feed_delta__8TItemMagFPv(void *);
M2C_UNK TItemMag__sub_80112FB4();

void update_feed_timer__8TItemMagFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1CC) == 0) {
        TItemMag__sub_80112FB4();
    }
    transfer_energy__8TItemMagFPv(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) <= (s32) M2C_FIELD(arg0, s32 *, 0x1CC)) {
        apply_feed_delta__8TItemMagFPv(arg0);
        TItemMag__sub_80112E20((void*)(arg0), (void*)(1));
    }
    if ((M2C_FIELD(arg0, s32 *, 0x1CC) % 60) == 0) {
        apply_switch_attack__5TItemFPvi(arg0, 0x6C);
    }
}

void feed_if_over_90__8TItemMagFPv(void* p) { if (*(int*)((char*)p + 0x1cc) > 90) { TItemMag__sub_80112E20((void*)(p), (void*)((void*)1)); } }

void feed_if_over_45__8TItemMagFPv(void* p) { if (*(int*)((char*)p + 0x1cc) > 45) { TItemMag__sub_80112E20((void*)(p), (void*)((void*)1)); } }

void update_feed__8TItemMagFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1CC);
    if ((temp_r0 != 0x5A) && (temp_r0 > 0x5A)) {
        TItemMag__sub_80112E20((void*)(arg0), (void*)(1));
    }
}

void check_level_cap__8TItemMagFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1CC);
    if (temp_r0 == 0x5A) {
        TItemMag__sub_80112BC4(arg0, 0x11);
        return;
    }
    if (temp_r0 > 0x5A) {
        TItemMag__sub_80112E20((void*)(arg0), (void*)(1));
    }
}

s16 obj_getS16_32C(s32);

void check_level_evolve__8TItemMagFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1CC);
    if (temp_r0 == 0x5A) {
        if (obj_getS16_32C(M2C_FIELD(arg0, s32 *, 0xF0)) > 0) {
            TItemMag__sub_80112BC4(arg0, 0xF);
        }
    } else if (temp_r0 > 0x5A) {
        TItemMag__sub_80112E20((void*)(arg0), (void*)(1));
    }
}

}
