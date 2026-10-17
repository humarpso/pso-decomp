#ifndef PSO_MISC_TWINDOWSUBTRADEMAIN_802D3924_H
#define PSO_MISC_TWINDOWSUBTRADEMAIN_802D3924_H

#include "types.h"

void clear_trade_range_bit(s32 arg0);
extern "C" {
bool is_trade_range_bit_set(s32 arg0);
}
void set_trade_range_bit(s32 arg0);

#endif
