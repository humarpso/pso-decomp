#include "types.h"

extern "C" {

void render_until_finished__6TMovieFv(void);

s32 run_disk_error_check__6TLobbyFv();
s32 render_tick__Fv();
s32 DVDCheckDisk();

void render_until_finished__6TMovieFv(void) {
loop_1:
    if ((DVDCheckDisk() == 0) && (run_disk_error_check__6TLobbyFv() == 0)) {
        render_tick__Fv();
        goto loop_1;
    }
}

}
