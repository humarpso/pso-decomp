#include "types.h"
#include "pso/misc/TWindowChatSymbol.h"

extern "C" {

int update_fade__17TWindowSubComCardFv(void*);
int initialize_subwindow__9TWindowDDFv(void*);
int update_window_entry_list(void*, void*);

void TWindowChatSymbol::run_task() { initialize_subwindow__9TWindowDDFv(this); update_fade__17TWindowSubComCardFv(this); update_window_entry_list(this, (char*)this + 0x24); }

}
