#include "types.h"
#include "pso/misc/TQuestVmDownLoadServer.h"

extern "C" {

void TQuestVmDownLoadServer::clear_flag4_bit4() { this->m_flags &= 0xfffffffb; }

}
