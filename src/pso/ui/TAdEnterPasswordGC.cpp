#include "types.h"

extern "C" {

int TAdEnterPasswordGC__sub_8032B660(void* p);
int TAdEnterPasswordGC__sub_8032B680(void* p);
int TAdMultiChgGameModeGC__sub_8023EA34(void*);
int request_transition__21TAdMultiChgGameModeGCFv(void*);

int TAdEnterPasswordGC__sub_8032B660(void* p) { return TAdMultiChgGameModeGC__sub_8023EA34(p); }
int TAdEnterPasswordGC__sub_8032B680(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }

}
