#include "types.h"

extern "C" {

void set_selection_state__21TAdMultiSelGameModeGCFPvi(void* p, s32 v);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(void* p);
void set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);
void set_field_100__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);

void set_selection_state__21TAdMultiSelGameModeGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x700) = v; }

}
