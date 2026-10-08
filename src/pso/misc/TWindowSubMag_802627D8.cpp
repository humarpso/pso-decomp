#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u16 * get_array_entry__20TWindowSubStatusDispFPvi(void * a0, s32 a1);
void fn_8026287C(u8 *arg0);
}

extern "C" {

int TWindowSubMag__sub_802627D8(void* p);
int TWindowSubMag__sub_80262808(void* p);
int get_flag_bit5__13TWindowSubMagFPv(void* p);
int get_flag_bit6__13TWindowSubMagFPv(void* p);
int is_cursor_locked__13TWindowSubMagFPv(void* p);
void set_mag_slot_state__13TWindowSubMagFPvi(void *arg0, s32 arg1);
s32 load_item_icon__12TItemTexLoadFPvPv(s32 a0 = 0, s32 a1 = 0);
u16 * get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s32 a1 = 0);

int TWindowSubMag__sub_802627D8(void* p) { return *(u32*)((char*)p + 0x60) & 0x1; }
int is_cursor_locked__13TWindowSubMagFPv(void* p) { return (*(u32*)((char*)p + 0x60) >> 7) & 0x1; }
int get_flag_bit6__13TWindowSubMagFPv(void* p) { return (*(u32*)((char*)p + 0x60) >> 6) & 0x1; }
int get_flag_bit5__13TWindowSubMagFPv(void* p) { return (*(u32*)((char*)p + 0x60) >> 5) & 0x1; }
int TWindowSubMag__sub_80262808(void* p) { return *(u16*)((char*)p + 0x62) & 0x8; }

void set_mag_slot_state__13TWindowSubMagFPvi(void *arg0, s32 arg1) {
    u16 *temp_r3;

    temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    *temp_r3 |= 2;
    if (load_item_icon__12TItemTexLoadFPvPv(M2C_FIELD(arg0, s32 *, 0x6C), arg1) != 0) {
        M2C_FIELD(arg0, s8 *, 0x60) = 1;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x60) = 2;
}
void fn_8026287C(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((s32)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(0))));
    M2C_FIELD(temp_r3, u8 **, 0x30) = (unsigned char *) ((void *) (arg0 + 0x70));
    M2C_FIELD(temp_r3, u16 *, 0) = (u16) (M2C_FIELD(temp_r3, u16 *, 0) & 0xFFFFFFFD);
}

}
