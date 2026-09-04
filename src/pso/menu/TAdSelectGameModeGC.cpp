#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdSelectGameModeGC.h"

TAdSelectGameModeGC::~TAdSelectGameModeGC() {}
#else
#if PSO_CLASS_PACKAGE == 0x801A2F7C
#include "types.h"

extern "C" {

void enable_camera__19TAdSelectGameModeGCFv(void);
int TLobby__sub_801A3B90(int);
int TCameraCtrl__sub_801A3C24(void);
int TCameraCtrl__sub_801A3C30(int);

void enable_camera__19TAdSelectGameModeGCFv(void) { TLobby__sub_801A3B90(1); TCameraCtrl__sub_801A3C30(1); TCameraCtrl__sub_801A3C24(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2FAC
#include "types.h"

extern "C" {

void TAdSelectGameModeGC__sub_801A2FAC(void* p);
int TCameraCtrl__sub_801A3C24(void);
int TCameraCtrl__sub_801A3C30(void* a0 = 0);
int TLobby__sub_801A3B90(void* a0 = 0);
void enable_camera__19TAdSelectGameModeGCFv(void);

void TAdSelectGameModeGC__sub_801A2FAC(void* p) { TLobby__sub_801A3B90(p); TCameraCtrl__sub_801A3C30(p); }

}
#endif
#endif
