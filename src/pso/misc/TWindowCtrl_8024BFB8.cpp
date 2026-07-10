#include "types.h"

extern "C" {

void update__11TWindowCtrlFPv(void* p);
int TWindowCtrl__sub_8024B8A0(void*);
int TWindowCtrl__sub_8024B9C0(void*);
int update_trade_window__11TWindowCtrlFPv(void*);
int handle_controller__11TWindowCtrlFi(void*);
int TWindowCtrl__sub_8024BB30(void*);
int update_trade_request_window__11TWindowCtrlFPv(void*);
int TWindowCtrl__sub_8024BC7C(void*);
int update_window_visibility__11TWindowCtrlFPv(void*);
int TWindowCtrl__sub_8024BE80(void*);

void update__11TWindowCtrlFPv(void* p) { TWindowCtrl__sub_8024BE80(p); update_window_visibility__11TWindowCtrlFPv(p); TWindowCtrl__sub_8024BC7C(p); update_trade_request_window__11TWindowCtrlFPv(p); TWindowCtrl__sub_8024BB30(p); handle_controller__11TWindowCtrlFi(p); update_trade_window__11TWindowCtrlFPv(p); TWindowCtrl__sub_8024B9C0(p); TWindowCtrl__sub_8024B8A0(p); }

}
