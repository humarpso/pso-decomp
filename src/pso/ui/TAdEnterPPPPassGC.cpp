#include "types.h"

extern "C" {

int TAdEnterPPPPassGC__sub_80339070(void* p);
int request_transition__17TAdEnterPPPPassGCFPv(void* p);
int request_transition__21TAdMultiChgGameModeGCFv(void*);
int TAdMultiChgGameModeGC__sub_8023EAC4(void*);

int TAdEnterPPPPassGC__sub_80339070(void* p) { return TAdMultiChgGameModeGC__sub_8023EAC4(p); }
int request_transition__17TAdEnterPPPPassGCFPv(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }

}
