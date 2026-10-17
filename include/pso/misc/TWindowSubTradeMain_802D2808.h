#ifndef PSO_MISC_TWINDOWSUBTRADEMAIN_802D2808_H
#define PSO_MISC_TWINDOWSUBTRADEMAIN_802D2808_H

#include "types.h"

extern "C" {
void TWindowSubTradeMain__sub_802D2870(void);
s32 are_both_trade_offers_confirmed(void);
void clear_local_trade_final_confirmation(void);
void clear_local_trade_offer_confirmation(void);
s32 is_local_trade_offer_confirmation_requested(void);
void set_local_trade_final_confirmation(void);
void set_local_trade_offer_confirmation(void);
}

#endif
