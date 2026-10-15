#include "pso/item/TItemTexLoad.h"

#include "types.h"
#include "pso/misc/TWindowSubMag.h"

extern "C" {
u16 * get_array_entry__20TWindowSubStatusDispFi(void * a0, s32 a1);
void fn_8026287C(u8 *arg0);
}

extern "C" {

int TWindowSubMag__sub_802627D8(void* p);
int TWindowSubMag__sub_80262808(void* p);

u16 * get_array_entry__20TWindowSubStatusDispFi(void * a0 = 0, s32 a1 = 0);

int TWindowSubMag__sub_802627D8(void* p) { return *(u32*)((char*)p + 0x60) & 0x1; }
int TWindowSubMag::is_cursor_locked() { return (*(u32*)((char*)this + 0x60) >> 7) & 0x1; }
int TWindowSubMag::get_flag_bit6() { return (*(u32*)((char*)this + 0x60) >> 6) & 0x1; }
int TWindowSubMag::get_flag_bit5() { return (*(u32*)((char*)this + 0x60) >> 5) & 0x1; }
int TWindowSubMag__sub_80262808(void* p) { return *(u16*)((char*)p + 0x62) & 0x8; }

void TWindowSubMag::set_mag_slot_state(s32 arg1) {
    u16 *temp_r3;

    temp_r3 = get_array_entry__20TWindowSubStatusDispFi(this, 0);
    *temp_r3 |= 2;
    if ((*(TItemTexLoad**)((s8 *)this + 0x6C))->load_item_icon((TItemData*)arg1) != 0) {
        *(s8 *)((s8 *)this + 0x60) = 1;
        return;
    }
    *(s8 *)((s8 *)this + 0x60) = 2;
}
void fn_8026287C(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((s32)get_array_entry__20TWindowSubStatusDispFi((void *)(arg0), (s32)(0))));
    *(u8 **)((s8 *)temp_r3 + 0x30) = (unsigned char *) ((void *) (arg0 + 0x70));
    *(u16 *)((s8 *)temp_r3 + 0) = (u16) (*(u16 *)((s8 *)temp_r3 + 0) & 0xFFFFFFFD);
}

}
