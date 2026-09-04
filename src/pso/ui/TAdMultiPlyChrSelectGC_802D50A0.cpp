#include "types.h"

extern "C" {

int TObjPlayer__sub_802D5108(void);
int fn_802D50B8(void);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(void* p);
void set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);
void set_field_100__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);
void set_selection_state__21TAdMultiSelGameModeGCFPvi(void* p, s32 v);

s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x24); }
void set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x24) = v; }
void set_field_100__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x100) = v; }

int fn_802D50B8(void) { return 0; }
int TObjPlayer__sub_802D5108(void) { return 0; }

}
