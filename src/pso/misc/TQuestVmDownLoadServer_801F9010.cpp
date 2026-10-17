#include "types.h"
#include "pso/misc/TQuestVmDownLoadServer.h"
#include "pso/misc/TDLGraph.h"

extern "C" {
void fn_801F9030(void);
void TQuestVmDownLoadServer::reset_download() {
    fn_801F9030();
}
void fn_801F9030(void) {
    TDLGraph::update_graph(1, 1);
}

}
