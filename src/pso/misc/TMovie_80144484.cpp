#include "types.h"
#include "pso/misc/TMovie.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 render_tick__Fv();
s32 DVDCheckDisk();

void TMovie::render_until_finished() {
loop_1:
    if ((DVDCheckDisk() == 0) && (TLobby::run_disk_error_check() == 0)) {
        render_tick__Fv();
        goto loop_1;
    }
}

}
