#include "types.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/enemy/TObjEneMe3ShinowaReal.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/misc/TWindowKeyBoardHard.h"

extern "C" {
extern s32 TLobby__data_805D6144;
}

extern "C" {

int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TObjPlayer::set_field_dc(s32 v) { *(s32 *)&this->unk_DC = v; }
void TObjPlayer::set_field_d8(s32 v) { this->m_d8 = v; }
void TObjPlayer::reset_lobby_model() { reset_type(); }
void TObjPlayer::reset_type() { *(s32*)((char*)this + 0x0) = 0; }
void TObjPlayer::set_type(s32 v) { *(s32*)((char*)this + 0x0) = v; }
void TObjPlayer::send_6x12_packet() { bswap_6x12_packet(); TLobby__send_and_handle_60(this); }
void TObjPlayer::bswap_6x12_packet() { read_be16_field2(); bswap_16__FPUs((char*)this + 0x4); bswap_16__FPUs((char*)this + 0x6); bswap_32__FPUl((char*)this + 0x8); }
void TObjPlayer::set_type_dragon() { *(u8*)((char*)this + 0x0) = 18; *(u8*)((char*)this + 0x1) = 5; }
void TObjPlayer::bswap_dragon_boss_fields() { read_be16_field2(); bswap_16__FPUs((char*)this + 0x4); bswap_16__FPUs((char*)this + 0x6); bswap_32__FPUl((char*)this + 0x8); }
void TObjPlayer::bswap_stats() { read_be16_field2(); bswap_16__FPUs((char*)this + 0x4); bswap_16__FPUs((char*)this + 0x6); bswap_32__FPUl((char*)this + 0x8); }
s32 TObjEnemy::exchange_object_state(s32 arg1, s16 arg2) {
    u8 *arg0 = (u8 *)this;
    s16 temp_r31;
    temp_r31 = *(s16 *)&this->m_2c;
    if ((temp_r31 < 0) || (temp_r31 > 0xB4F)) {
        return 0;
    }
    if (arg2 == 0) {
        ((TLobby *)(TLobby__data_805D6144 + (temp_r31 * 0xC)))->copy_header((void *) (arg1));
    }
    if (arg2 == 1) {
        ((TLobby *)arg1)->copy_header((void *) (TLobby__data_805D6144 + (temp_r31 * 0xC)));
    }
    return 1;
}

}
