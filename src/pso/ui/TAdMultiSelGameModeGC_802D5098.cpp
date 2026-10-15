#include "types.h"
#include "pso/TAdMultiSelGameModeGC.h"

extern "C" {

s32 get_player_index__22TAdMultiPlyChrSelectGCFv(void* p);
void set_cursor_index__22TAdMultiPlyChrSelectGCFl(void* p, s32 v);
void set_field_100__22TAdMultiPlyChrSelectGCFl(void* p, s32 v);

void TAdMultiSelGameModeGC::set_selection_state(s32 v) { *(s32*)((char*)this + 0x700) = v; }

}
