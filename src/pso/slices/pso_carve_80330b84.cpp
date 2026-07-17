#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 refresh_item_list__19TWindowSubTradeMainFPvPv(u32, s32);
s32 TLobby__sub_802D29AC();
s32 set_trade_state__19TWindowSubTradeMainFPvs(u32, s32);
s32 TLobby__sub_802D299C();
void TWindowSubTradeMain__sub_80330A84(void* p);

int TWindowSubTradeMain__sub_80330B84(void) { return 0; }

}
