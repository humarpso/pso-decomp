#include "types.h"

extern "C" {

void TCheckRoomSequence__vt10(void* p);

int TQuestListVM__sub_80073DC4(void*, void*);
int TCheckRoomSequence__sub_80211210(void);
int TShopSequence__sub_802237D8(void*);
int TShopWindowBase__sub_8022397C(void*);

void TCheckRoomSequence__vt10(void* p) { TShopSequence__sub_802237D8(p); TShopWindowBase__sub_8022397C(p); TCheckRoomSequence__sub_80211210(); TQuestListVM__sub_80073DC4(p, (void*)1); }

}
