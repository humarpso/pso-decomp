#include "types.h"

extern "C" {

void run_task__11TWindowCtrlFv(void* p);
void render__11TWindowCtrlFv(void);
int update__11TWindowCtrlFPv(void*);
int TWindowCtrl__sub_8024C024(void*);
int TLobby__sub_802D3970(void);

void render__11TWindowCtrlFv(void) {  }
void run_task__11TWindowCtrlFv(void* p) { TWindowCtrl__sub_8024C024(p); update__11TWindowCtrlFPv(p); TLobby__sub_802D3970(); }

}
