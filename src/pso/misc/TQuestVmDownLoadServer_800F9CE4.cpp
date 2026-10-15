#include "types.h"
#include "pso/misc/TQuestVmDownLoadServer.h"

extern "C" {

s32 wait_ready_loop__6TLobbyFv();

extern s32 lbl_805D49B4;
extern s32 lbl_805D5354;
extern s32 quest_download_in_progress;

s32 TQuestVmDownLoadServer::is_ready() {
    wait_ready_loop__6TLobbyFv();
    if ((s32) lbl_805D49B4 != 0) {
        return 0;
    }
    if ((s32) quest_download_in_progress != 0) {
        return 0;
    }
    return lbl_805D5354 ? 1 : 0;
}

}
