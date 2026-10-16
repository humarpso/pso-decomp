#include "pso/packet_classes.h"
#include "pso/TPlyGuildCardTag.h"

extern "C" {

void bswap__11TMessageBoxFv(s32 arg0);
s32 bswap__13packet_headerFv();

void bswap__11TMessageBoxFv(s32 arg0) {
    bswap__13packet_headerFv();
    ((TPlyGuildCardTag *)(arg0 + 4))->bswap();
}

}

TMessageBox::TMessageBox() {}
