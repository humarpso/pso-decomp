#include "types.h"
#include "pso/misc/TQuestVmDownLoadServer.h"

extern "C" {
s32 update_graph__8TDLGraphFll(s32, s32);
void fn_801F9030(void);
}

extern "C" {

void TQuestVmDownLoadServer::reset_download() {
    fn_801F9030();
}
void fn_801F9030(void) {
    update_graph__8TDLGraphFll(1, 1);
}

}
