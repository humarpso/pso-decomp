#include "types.h"

extern "C" {

void confirm_mode_selection__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E9EC(void* p);
int TAdMultiChgGameModeGC__sub_8036E19C(void*, void*);
int close_window_30__21TAdMultiChgGameModeGCFPv(void*);
int handle_mode_selection__21TAdMultiChgGameModeGCFPv(void*);
int TAdMultiChgGameModeGC__sub_8036E858(void*, void*);

void confirm_mode_selection__21TAdMultiChgGameModeGCFPv(void* p) { if (handle_mode_selection__21TAdMultiChgGameModeGCFPv(p) == 0) { TAdMultiChgGameModeGC__sub_8036E858(p, (void*)1); } }

void TAdMultiChgGameModeGC__sub_8036E9EC(void* p) { close_window_30__21TAdMultiChgGameModeGCFPv(p); TAdMultiChgGameModeGC__sub_8036E19C(p, (void*)4); }

}
