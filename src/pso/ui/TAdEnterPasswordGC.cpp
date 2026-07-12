#include "types.h"

extern "C" {

int TAdEnterPasswordGC__sub_8032B660(void* p);
int request_transition__18TAdEnterPasswordGCFPv(void* p);
int set_mode_0x14__21TAdMultiChgGameModeGCFv(void*);
int request_transition__21TAdMultiChgGameModeGCFv(void*);

int TAdEnterPasswordGC__sub_8032B660(void* p) { return set_mode_0x14__21TAdMultiChgGameModeGCFv(p); }
int request_transition__18TAdEnterPasswordGCFPv(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }

}
