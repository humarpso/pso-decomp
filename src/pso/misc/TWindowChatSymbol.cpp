#include "types.h"

extern "C" {

void run_task__17TWindowChatSymbolFv(void* p);
int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);
int update_window_entry_list(void*, void*);

void run_task__17TWindowChatSymbolFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); update_window_entry_list(p, (char*)p + 0x24); }

}
