#include "types.h"
#include "pso/TObjBoss2Dust.h"
#include "pso/misc/TLobby.h"
#include "pso/TObjBoss2DustCtrl.h"
#include "pso/boss/TObjBoss2Tunnel.h"

extern "C" {

void TLobby__sub_8003A9AC(void);
int TLobby__sub_8003A874(void);
int TLobby__sub_8003A8D0(void);
int boss2_dust_draw_at(void*, void*);
int TObjBoss2DustCtrl__sub_8003AD50(void);
int fn_8003AD54(void);
int TObjBoss2Tunnel__sub_8003B2B0(void);
int TObjBoss2Tunnel__sub_8003C648(void);

void TLobby::init_boss2_stage() { TObjBoss2DustCtrl__sub_8003AD50(); TObjBoss2Tunnel__sub_8003C648(); TLobby__sub_8003A874(); }
void TLobby::create_boss2_tunnel() { TObjBoss2Tunnel::create(); TObjBoss2Tunnel__sub_8003B2B0(); TObjBoss2DustCtrl::create(); }
void TLobby__sub_8003A9AC(void) { TLobby__sub_8003A8D0(); TObjBoss2Tunnel::clear_target_flags(); fn_8003AD54(); }
void TObjBoss2Dust::render() { boss2_dust_draw_at((char*)this + 0x24, *(void**)((char*)this + 0x20)); }

}
