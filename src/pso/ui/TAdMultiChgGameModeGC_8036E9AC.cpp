#include "types.h"

extern "C" {

void TAdMultiChgGameModeGC__sub_8036E9AC(void* p);
void TAdMultiChgGameModeGC__sub_8036E9EC(void* p);
int TAdMultiChgGameModeGC__sub_8036E19C(void*, void*);
int TAdMultiChgGameModeGC__sub_8036E224(void*);
int handle_mode_selection__21TAdMultiChgGameModeGCFPv(void*);
int TAdMultiChgGameModeGC__sub_8036E858(void*, void*);

void TAdMultiChgGameModeGC__sub_8036E9AC(void* p) { if (handle_mode_selection__21TAdMultiChgGameModeGCFPv(p) == 0) { TAdMultiChgGameModeGC__sub_8036E858(p, (void*)1); } }

void TAdMultiChgGameModeGC__sub_8036E9EC(void* p) { TAdMultiChgGameModeGC__sub_8036E224(p); TAdMultiChgGameModeGC__sub_8036E19C(p, (void*)4); }

}
