#include "types.h"

extern "C" {

void bswap__16TRecvPsoDataLongFv(void);
s32 bswap__13packet_headerFv();

void bswap__16TRecvPsoDataLongFv(void) {
    bswap__13packet_headerFv();
}

}
