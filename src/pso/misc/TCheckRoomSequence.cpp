#include "types.h"

extern "C" {

void TCheckRoomSequence__vt10(void* p);

int TQuestListVM__sub_80073DC4(void*, void*);
int TCheckRoomSequence__sub_80211210(void);
int restore_player_state__13TShopSequenceFPv(void*);
int TShopWindowBase__sub_8022397C(void*);

void TCheckRoomSequence__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); TShopWindowBase__sub_8022397C(p); TCheckRoomSequence__sub_80211210(); TQuestListVM__sub_80073DC4(p, (void*)1); }

}
