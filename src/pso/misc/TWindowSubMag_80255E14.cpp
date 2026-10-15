#include "types.h"
#include "pso/misc/TWindowSubMag.h"

extern "C" {
void TWindowSubMag__sub_80255E24(u8 *arg0);
}

extern "C" {

s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowHelpItem__sub_80255DDC(void* p);
s16 get_field_2F8__20TWindowSubStatusDispFv(void* p);
s16 get_item_type__20TWindowSubStatusDispFv(void* p);
s16 get_stat__20TWindowSubStatusDispFv(void* p);
s16 get_value__20TWindowSubStatusDispFv(void* p);
s32 is_confirmed__18TWindowInputNumberFv();
s32 set_entry_state__20TWindowSubStatusDispFSc(s32 a0 = 0, s32 a1 = 0);
void set_flag0_bit20__15TWindowHelpItemFv(void* p);

void TWindowSubMag::set_flag60_bit4() { *(u8*)((char*)this + 0x60) |= 0x4; }

void TWindowSubMag__sub_80255E24(u8 *arg0) {
    u8 temp_r4;
    temp_r4 = *(u8 *)((s8 *)arg0 + 0x60);
    if (temp_r4 & 2) {
        *(u8 *)((s8 *)arg0 + 0x60) = (u8) (temp_r4 & 0xFFFFFFFB);
    }
}

}
