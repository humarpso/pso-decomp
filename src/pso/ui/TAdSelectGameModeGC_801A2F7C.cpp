#include "types.h"
#include "pso/TAdSelectGameModeGC.h"

extern "C" {

void TCameraCtrl__sub_801A3C24(void);
void TCameraCtrl__sub_801A3C30(int a0);
void TLobby__sub_801A3B90(int a0);

void TAdSelectGameModeGC::enable_camera() { TLobby__sub_801A3B90((1)); TCameraCtrl__sub_801A3C30((1)); TCameraCtrl__sub_801A3C24(); }

void TAdSelectGameModeGC::free_sub_ctrls() { TLobby__sub_801A3B90((int)(this)); TCameraCtrl__sub_801A3C30((int)(this)); }

}
