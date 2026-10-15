#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

int update_pulse_color__11TWindowCtrlFv(void*);
int TWindowCtrl__sub_8024B9C0(void*);
int update_trade_window__11TWindowCtrlFv(void*);
int handle_controller__11TWindowCtrlFv(void*);
int TWindowCtrl__sub_8024BB30(void*);
int update_trade_request_window__11TWindowCtrlFv(void*);
int update_com_card_window__11TWindowCtrlFv(void*);
int update_window_visibility__11TWindowCtrlFv(void*);
int update_party_status_rows__11TWindowCtrlFPv(void*);

void TWindowCtrl::update() { update_party_status_rows__11TWindowCtrlFPv(this); update_window_visibility__11TWindowCtrlFv(this); update_com_card_window__11TWindowCtrlFv(this); update_trade_request_window__11TWindowCtrlFv(this); TWindowCtrl__sub_8024BB30(this); handle_controller__11TWindowCtrlFv(this); update_trade_window__11TWindowCtrlFv(this); TWindowCtrl__sub_8024B9C0(this); update_pulse_color__11TWindowCtrlFv(this); }

}
