#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 TQuestVmDownLoadServer__sub_8006EF6C(s32 arg0);

int TWindowSubStatusDisp::get_download_server() { return TQuestVmDownLoadServer__sub_8006EF6C((0)); }

}
