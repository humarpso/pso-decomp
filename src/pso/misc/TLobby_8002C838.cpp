#include "types.h"

extern "C" {

s32 TObjBoss1Crater__sub_8002C7E4(void* p);
void TLobby__sub_8002C838(void);
int TLobby__sub_8002C868(void* p);
void TLobby__sub_8002C888(void);
int TLobby__sub_8002C140(void);
int fn_8002C190(void);
int TObjBoss1Crater__sub_8002C7B4(void);
int TObjBoss1Crater__sub_8002C7B8(void);
int TObjBoss1Floor__sub_8002CB40(void);
int TObjBoss1Floor__sub_8002CB44(void*);
int fn_8002CB78(void);
int TBoss8Dragon__sub_8002D580(void);
int TBoss8Dragon__sub_8002D5F8(void);
int TObjBoss1Rock__sub_8002E3CC(void);
int TObjBoss1Rock__sub_8002E3D0(void);

void TLobby__sub_8002C838(void) { TBoss8Dragon__sub_8002D580(); TObjBoss1Rock__sub_8002E3CC(); TObjBoss1Crater__sub_8002C7B4(); TObjBoss1Floor__sub_8002CB40(); TLobby__sub_8002C140(); }
int TLobby__sub_8002C868(void* p) { return TObjBoss1Floor__sub_8002CB44(p); }
void TLobby__sub_8002C888(void) { fn_8002C190(); fn_8002CB78(); TObjBoss1Crater__sub_8002C7B8(); TObjBoss1Rock__sub_8002E3D0(); TBoss8Dragon__sub_8002D5F8(); }

}
