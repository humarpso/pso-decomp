#include "types.h"
#include "pso/misc/TQuestVmDownLoadServer.h"
#include "pso/misc/TLobby.h"

extern "C" {

extern s32 lbl_805D49B4;
extern s32 lbl_805D5354;
extern s32 quest_download_in_progress;

s32 TQuestVmDownLoadServer::is_ready() {
    TLobby::wait_ready_loop();
    if ((s32) lbl_805D49B4 != 0) {
        return 0;
    }
    if ((s32) quest_download_in_progress != 0) {
        return 0;
    }
    return lbl_805D5354 ? 1 : 0;
}

}
