#include "types.h"
#include "pso/item/TItemEquipBase.h"

extern "C" {
void fn_8010B7D8(u8 *arg0, s32 arg1);
void fn_8010B7E8(u8 *arg0, s32 arg1);
int clear_flags__11TAdRicoRingFUl(void*, int);
int set_flags__10TObjPlayerFUl(void*, int);

    extern const float lbl_805DAB60;
void TItemEquipBase::init_slot() { *(short *)&this->m_name = -1; *(short*)((char*)this + 0x2) = 0; *(float *)&this->m_flags = lbl_805DAB60; }

int TItemEquipBase::check_flag_32() { return set_flags__10TObjPlayerFUl((char*)this + 0xc, 32); }
int TItemEquipBase::clear_flag_c_bit5() { return clear_flags__11TAdRicoRingFUl((char*)this + 0xc, 32); }

void fn_8010B7D8(u8 *arg0, s32 arg1) {
    *(s16 *)((s8 *)arg0 + 4) = (s16) (*(s16 *)((s8 *)arg0 + 4) - arg1);
}

void fn_8010B7E8(u8 *arg0, s32 arg1) {
    *(s16 *)((s8 *)arg0 + 2) = (s16) (*(s16 *)((s8 *)arg0 + 2) - arg1);
}

}
