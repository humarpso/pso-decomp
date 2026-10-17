#include "pso/TProtocol.h"
#include "pso/system/byteswap.h"
#include <stddef.h>
#include "pso/protocol.h"

typedef char RegistConnectHeaderOffset[(offsetof(TSendPsoRegistConnect, header) == 0) ? 1 : -1];
typedef char RegistConnectPacketSize[(sizeof(TSendPsoRegistConnect) == 0x28) ? 1 : -1];

extern "C" {

int __ct__8TPlySmthFv(void*);
int fn_801E0900(void*);

void fn_801DF918(void* p) { ((packet_header *)p)->bswap(); fn_801E0900((char*)p + 0x4); bswap_32((u32 *)((char*)p + 0xc)); }
void* fn_801DF954(void* p) { __ct__8TPlySmthFv((char*)p + 0x4); return p; }
}

void TSendPsoRegistConnect::bswap() {
    header.bswap();
}

template<> void TRecvExit<true>::bswap() {
    header.bswap();
}
