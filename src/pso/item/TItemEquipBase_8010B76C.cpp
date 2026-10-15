#include "types.h"

extern "C" {
void fn_8010B7D8(u8 *arg0, s32 arg1);
void fn_8010B7E8(u8 *arg0, s32 arg1);
}

extern "C" {

int check_flag_32__14TItemEquipBaseFPv(void* p);
int clear_flag_c_bit5__14TItemEquipBaseFPv(void* p);
void init_slot__14TItemEquipBaseFPv(void* a0);
void subtract_s16_stat(s16 *arg0, s32 arg1);
s32 TItemData__sub_8010B808(void* p);
s32 TItemData__sub_8010B810(void* p);
void add_accuracy__9TItemDataFPvi(void *arg0, s32 arg1);
void add_s16__9TItemDataFPvi(s16 *arg0, s32 arg1);
void add_stat__9TItemDataFPvi(void *arg0, s32 arg1);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int set_flags__10TObjPlayerFPvUi(void*, int);

    extern const float lbl_805DAB60;
void init_slot__14TItemEquipBaseFPv(void* a0) { *(short*)((char*)a0 + 0x0) = -1; *(short*)((char*)a0 + 0x2) = 0; *(float*)((char*)a0 + 0x4) = lbl_805DAB60; }

int check_flag_32__14TItemEquipBaseFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0xc, 32); }
int clear_flag_c_bit5__14TItemEquipBaseFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0xc, 32); }

void fn_8010B7D8(u8 *arg0, s32 arg1) {
    *(s16 *)((s8 *)arg0 + 4) = (s16) (*(s16 *)((s8 *)arg0 + 4) - arg1);
}

void fn_8010B7E8(u8 *arg0, s32 arg1) {
    *(s16 *)((s8 *)arg0 + 2) = (s16) (*(s16 *)((s8 *)arg0 + 2) - arg1);
}

}
