#include "types.h"
#include "pso/TAdSelectGameModeGC.h"

extern "C" {

int TCameraCtrl__sub_801A3C24(void);
int TCameraCtrl__sub_801A3C30(void* a0 = 0);
int TLobby__sub_801A3B90(void* a0 = 0);

void TAdSelectGameModeGC::enable_camera() { TLobby__sub_801A3B90((void*)(1)); TCameraCtrl__sub_801A3C30((void*)(1)); TCameraCtrl__sub_801A3C24(); }

void TAdSelectGameModeGC::free_sub_ctrls() { TLobby__sub_801A3B90((void*)(this)); TCameraCtrl__sub_801A3C30((void*)(this)); }

}
