#include "types.h"

extern "C" {

void enable_camera__19TAdSelectGameModeGCFv(void);
int TLobby__sub_801A3B90(int);
int TCameraCtrl__sub_801A3C24(void);
int TCameraCtrl__sub_801A3C30(int);

void enable_camera__19TAdSelectGameModeGCFv(void) { TLobby__sub_801A3B90(1); TCameraCtrl__sub_801A3C30(1); TCameraCtrl__sub_801A3C24(); }

}
