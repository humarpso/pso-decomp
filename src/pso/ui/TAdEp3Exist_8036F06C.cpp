#include "types.h"

extern "C" {

int close_window__14TAdScrollWinGCFPv(void*);
void close_window__11TAdEp3ExistFPv(void* p);
int TAdEp3Exist__sub_8036F06C(void* p);
int TAdEp3Exist__sub_8036F08C(void* p);
int TAdEp3Exist__sub_8036F0AC(void* p);
int TAdMultiChgGameModeGC__sub_8023E974(void*);
int request_transition__21TAdMultiChgGameModeGCFv(void*);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);

int TAdEp3Exist__sub_8036F06C(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }
int TAdEp3Exist__sub_8036F08C(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
int TAdEp3Exist__sub_8036F0AC(void* p) { return TAdMultiChgGameModeGC__sub_8023E974(p); }
void close_window__11TAdEp3ExistFPv(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { close_window__14TAdScrollWinGCFPv(*(void**)((char*)p + 0x1c)); *(int*)((char*)p + 0x1c) = 0; } }

}
