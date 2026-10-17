#include "types.h"
#include "pso/misc/TQuestVmDownLoadServer_801F9010.h"
#include "pso/misc/TQuestVmDownLoadServer.h"
#include "pso/misc/TDLGraph.h"

void TQuestVmDownLoadServer::reset_download() {
    fn_801F9030();
}
void fn_801F9030(void) {
    TDLGraph::update_graph(1, 1);
}
