#include "types.h"
#include "pso/misc/TWindowMessageLog.h"
extern "C" {
extern char *chat_log_lines[];
void append_line__17TWindowMessageLogFl(void *, char *);
void complete_reveal__14TWindowMessageFv(void *);
}

extern "C" {

void TWindowMessageLog::load_chat_history() {
    s32 i;
    for (i = 0; i < 30; i++) {
        if (chat_log_lines[i] != 0) {
            append_line__17TWindowMessageLogFl(this, chat_log_lines[i]);
        }
    }
    complete_reveal__14TWindowMessageFv(this);
    ((TWindowMessageLog *)this)->clamp_scroll_offset();
}

}
