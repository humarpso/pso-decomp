#include "types.h"

extern "C" {

void update__11TWindowCtrlFPv(void* p);
int update_pulse_color__11TWindowCtrlFPv(void*);
int TWindowCtrl__sub_8024B9C0(void*);
int update_trade_window__11TWindowCtrlFPv(void*);
int handle_controller__11TWindowCtrlFi(void*);
int TWindowCtrl__sub_8024BB30(void*);
int update_trade_request_window__11TWindowCtrlFPv(void*);
int update_com_card_window__11TWindowCtrlFPv(void*);
int update_window_visibility__11TWindowCtrlFPv(void*);
int update_party_status_rows__11TWindowCtrlFPv(void*);

void update__11TWindowCtrlFPv(void* p) { update_party_status_rows__11TWindowCtrlFPv(p); update_window_visibility__11TWindowCtrlFPv(p); update_com_card_window__11TWindowCtrlFPv(p); update_trade_request_window__11TWindowCtrlFPv(p); TWindowCtrl__sub_8024BB30(p); handle_controller__11TWindowCtrlFi(p); update_trade_window__11TWindowCtrlFPv(p); TWindowCtrl__sub_8024B9C0(p); update_pulse_color__11TWindowCtrlFPv(p); }

}
