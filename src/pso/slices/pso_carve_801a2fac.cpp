#include "types.h"

extern "C" {

int TCameraCtrl__sub_801A3C30(void* a0 = 0);
int TLobby__sub_801A3B90(void* a0 = 0);
void TAdSelectGameModeGC__sub_801A2FAC(void* p);
void enable_camera__19TAdSelectGameModeGCFv(void);
int TCameraCtrl__sub_801A3C24(void);

void TAdSelectGameModeGC__sub_801A2FAC(void* p) { TLobby__sub_801A3B90(p); TCameraCtrl__sub_801A3C30(p); }

}
