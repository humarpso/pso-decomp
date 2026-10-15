#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

int TQuestVmDownLoadServer__sub_8006EF6C(void*);

int TWindowSubStatusDisp::get_download_server() { return TQuestVmDownLoadServer__sub_8006EF6C((void*)(0)); }

}
