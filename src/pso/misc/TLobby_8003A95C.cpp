#include "types.h"
#include "pso/TObjBoss2Dust.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TLobby__sub_8003A9AC(void);
int clear_target_flags__15TObjBoss2TunnelFv(void);
int TLobby__sub_8003A874(void);
int TLobby__sub_8003A8D0(void);
int boss2_dust_draw_at(void*, void*);
int create__17TObjBoss2DustCtrlFv(void);
int TObjBoss2DustCtrl__sub_8003AD50(void);
int fn_8003AD54(void);
int TObjBoss2Tunnel__sub_8003B2B0(void);
int TObjBoss2Tunnel__sub_8003C648(void);
int create__15TObjBoss2TunnelFv(void);

void TLobby::init_boss2_stage() { TObjBoss2DustCtrl__sub_8003AD50(); TObjBoss2Tunnel__sub_8003C648(); TLobby__sub_8003A874(); }
void TLobby::create_boss2_tunnel() { create__15TObjBoss2TunnelFv(); TObjBoss2Tunnel__sub_8003B2B0(); create__17TObjBoss2DustCtrlFv(); }
void TLobby__sub_8003A9AC(void) { TLobby__sub_8003A8D0(); clear_target_flags__15TObjBoss2TunnelFv(); fn_8003AD54(); }
void TObjBoss2Dust::render() { boss2_dust_draw_at((char*)this + 0x24, *(void**)((char*)this + 0x20)); }

}
