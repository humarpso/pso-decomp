#include "types.h"
#include "pso/item/TItemEquipBase.h"

extern "C" {
void fn_8010B7D8(u8 *arg0, s32 arg1);
void fn_8010B7E8(u8 *arg0, s32 arg1);
}

extern "C" {

void subtract_s16_stat(s16 *arg0, s32 arg1);
s32 TItemData__sub_8010B808(void* p);
s32 TItemData__sub_8010B810(void* p);
void add_accuracy__9TItemDataFPvi(void *arg0, s32 arg1);
void add_s16__9TItemDataFPvi(s16 *arg0, s32 arg1);
void add_stat__9TItemDataFPvi(void *arg0, s32 arg1);
int clear_flags__11TAdRicoRingFUl(void*, int);
int set_flags__10TObjPlayerFUl(void*, int);

    extern const float lbl_805DAB60;
void TItemEquipBase::init_slot() { *(short*)((char*)this + 0x0) = -1; *(short*)((char*)this + 0x2) = 0; *(float*)((char*)this + 0x4) = lbl_805DAB60; }

int TItemEquipBase::check_flag_32() { return set_flags__10TObjPlayerFUl((char*)this + 0xc, 32); }
int TItemEquipBase::clear_flag_c_bit5() { return clear_flags__11TAdRicoRingFUl((char*)this + 0xc, 32); }

void fn_8010B7D8(u8 *arg0, s32 arg1) {
    *(s16 *)((s8 *)arg0 + 4) = (s16) (*(s16 *)((s8 *)arg0 + 4) - arg1);
}

void fn_8010B7E8(u8 *arg0, s32 arg1) {
    *(s16 *)((s8 *)arg0 + 2) = (s16) (*(s16 *)((s8 *)arg0 + 2) - arg1);
}

}
