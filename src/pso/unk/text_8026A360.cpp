#include "types.h"
#include "pso/misc/TWindowMessageLog.h"
extern "C" {
extern char *chat_log_lines[];
void append_line__17TWindowMessageLogFPvi(void *, char *);
void complete_reveal__14TWindowMessageFPv(void *);
void load_chat_history__17TWindowMessageLogFPv(void *window);
}

extern "C" {

void load_chat_history__17TWindowMessageLogFPv(void *window) {
    s32 i;
    for (i = 0; i < 30; i++) {
        if (chat_log_lines[i] != 0) {
            append_line__17TWindowMessageLogFPvi(window, chat_log_lines[i]);
        }
    }
    complete_reveal__14TWindowMessageFPv(window);
    ((TWindowMessageLog *)window)->clamp_scroll_offset();
}

}
