#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TWindowMakeTeam__sub_80131A5C(void* p);
int TLobby__sub_80244D2C(void*);
s32 TWindowSubTradeMain__sub_80244A4C(void *);
s32 clear_flag60_bit200__16TKeyBoardControlFPv(void * a0 = 0);
int get_lobby_field_20__15TWindowMakeTeamFPv(void* p);
s32 set_flag60_bit200__16TKeyBoardControlFPv(void *);
int set_flag62_bit2__16TKeyBoardControlFPv(void*);
s32 window_request_show(void * a0 = 0);

int TWindowMakeTeam__sub_80131A5C(void* p) { return set_flag62_bit2__16TKeyBoardControlFPv(*(void**)((char*)p + 0x20)); }

}
