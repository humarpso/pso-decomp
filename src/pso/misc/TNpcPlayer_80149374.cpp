#include "types.h"

extern "C" {
s32 read_be16_field2__10TObjPlayerFv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
    extern const float lbl_805DB1C4;
void TNpcPlayer__sub_80149448(void *arg0);
}

extern "C" {

s32 play_sound_effect(s32, s32, s32, s32);
s32 TLobby__send_and_handle_60(void *);
void TObjNpcBase__sub_80149358(void* p, s32 v);
void TObjNpcBase__sub_80149360(void* p, s32 v);
void TObjNpcBase__sub_80149368(void* p);
void TObjNpcBase__vt86(void);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 read_be16_field2__10TObjPlayerFv();

#include "types.h"
#include "pso/misc/TNpcPlayer.h"

extern "C" {

void TNpcPlayer::send_6x3E() {
    s32 arg0 = (s32)this;
    bswap_6x3E();
    TLobby__send_and_handle_60((void *) (arg0));
}
void TNpcPlayer::bswap_6x3E() {
    s32 arg0 = (s32)this;
    read_be16_field2__10TObjPlayerFv();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
    bswap_32__FPUl(arg0 + 0x14);
}
void TNpcPlayer::init_6x3E_packet() { *(short *)&this->m_flags = 0; *(short *)&this->m_id = 0; *(short *)&this->m_prev = -1; *(short*)((char*)this + 0xa) = -1; *(float *)&this->m_down = lbl_805DB1C4; *(float *)&this->m_up = lbl_805DB1C4; *(float *)&this->m_next = lbl_805DB1C4; *(unsigned char *)&this->m_name = 62; *(unsigned char*)((char*)this + 0x1) = 6; }
void TNpcPlayer__sub_80149448(void *arg0) {
    if ((s16) *(s16 *)((s8 *)arg0 + 0x326) != 2) {
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        return;
    }
    *(s16 *)((s8 *)arg0 + 0xB8) = 1;
}

}

}
