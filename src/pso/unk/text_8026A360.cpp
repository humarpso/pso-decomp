#include "types.h"
extern "C" {
extern char *lbl_805187D8[];
void append_line__17TWindowMessageLogFPvi(void *, char *);
void complete_reveal__14TWindowMessageFPv(void *);
void clamp_scroll_offset__17TWindowMessageLogFPv(void *);
void load_chat_history__17TWindowMessageLogFPv(void *window);
}

extern "C" {

void load_chat_history__17TWindowMessageLogFPv(void *window) {
    s32 i;
    for (i = 0; i < 30; i++) {
        if (lbl_805187D8[i] != 0) {
            append_line__17TWindowMessageLogFPvi(window, lbl_805187D8[i]);
        }
    }
    complete_reveal__14TWindowMessageFPv(window);
    clamp_scroll_offset__17TWindowMessageLogFPv(window);
}

}
