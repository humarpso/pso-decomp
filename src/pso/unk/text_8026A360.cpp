#include "types.h"
#include "pso/misc/TWindowMessage.h"
#include "pso/misc/TWindowMessageLog.h"
extern char *chat_log_lines[];

extern "C" {

void TWindowMessageLog::load_chat_history() {
    s32 i;
    for (i = 0; i < 30; i++) {
        if (chat_log_lines[i] != 0) {
            append_line((s32)chat_log_lines[i]);
        }
    }
    complete_reveal();
    ((TWindowMessageLog *)this)->clamp_scroll_offset();
}

}
