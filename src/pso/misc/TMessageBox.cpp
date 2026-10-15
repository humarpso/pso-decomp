#include "pso/packet_classes.h"

extern "C" {

void bswap__11TMessageBoxFv(s32 arg0);
s32 __ct__16TPlyGuildCardTagFv(s32);
s32 bswap__13packet_headerFv();
s32 bswap__16TPlyGuildCardTagFv(s32);

void bswap__11TMessageBoxFv(s32 arg0) {
    bswap__13packet_headerFv();
    bswap__16TPlyGuildCardTagFv(arg0 + 4);
}

}

TMessageBox::TMessageBox() {}

extern "C" {

}
