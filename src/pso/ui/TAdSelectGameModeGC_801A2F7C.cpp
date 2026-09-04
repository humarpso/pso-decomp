#include "types.h"

extern "C" {

void TAdSelectGameModeGC__sub_801A2FAC(void* p);
void enable_camera__19TAdSelectGameModeGCFv(void);
int TCameraCtrl__sub_801A3C24(void);
int TCameraCtrl__sub_801A3C30(void* a0 = 0);
int TLobby__sub_801A3B90(void* a0 = 0);

void enable_camera__19TAdSelectGameModeGCFv(void) { TLobby__sub_801A3B90((void*)(1)); TCameraCtrl__sub_801A3C30((void*)(1)); TCameraCtrl__sub_801A3C24(); }

void TAdSelectGameModeGC__sub_801A2FAC(void* p) { TLobby__sub_801A3B90((void*)(p)); TCameraCtrl__sub_801A3C30((void*)(p)); }

}
