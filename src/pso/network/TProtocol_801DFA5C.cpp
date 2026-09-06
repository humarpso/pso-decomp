#include "pso/packet_classes.h"

extern "C" {

int bswap_exit_game_header__9TProtocolFPv(void* p);
int __ct__16TPlyGuildCardTagFv(void*);
int bswap_32__FPUl(void*);
int bswap__13packet_headerFv(void*);
int bswap__16TPlyGuildCardTagFv(void*);

int bswap_exit_game_header__9TProtocolFPv(void* p) { return bswap__13packet_headerFv(p); }
}

void TCreateGame::bswap() {
    header.bswap();
    tag.bswap();
}

extern "C" {
}

void TFindUser::bswap() {
    header.bswap();
    tag.bswap();
    bswap_32(&target_gc);
}

TFindUser::TFindUser() {}

void TRoomChange::bswap() {
    header.bswap();
    tag.bswap();
}

extern "C" {
}

TRoomChange::TRoomChange() {}

extern "C" {

}
