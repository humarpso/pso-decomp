#include "types.h"
#include "pso/misc/TQuestVmDownLoadServer.h"

extern "C" {

void TQuestVmDownLoadServer::clear_flag4_bit4() { *(u16*)((char*)this + 0x4) &= 0xfffffffb; }

}
