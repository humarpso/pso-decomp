#include "types.h"
#include "pso/misc/TWindowChatSymbol.h"

extern "C" {

int update_fade__13TUnk_804CE018Fv(void*);
int initialize_subwindow__9TWindowDDFv(void*);
int update_window_entry_list__13TUnk_804CE018FPv(void*, void*);

void TWindowChatSymbol::run_task() { initialize_subwindow__9TWindowDDFv(this); update_fade__13TUnk_804CE018Fv(this); update_window_entry_list__13TUnk_804CE018FPv(this, (char*)this + 0x24); }

}
