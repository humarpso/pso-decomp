#include "types.h"

extern "C" {

void render__13TObjBoss2DustFv(void* p);
void TLobby__sub_8003A95C(void);
void create_boss2_tunnel__6TLobbyFv(void);
void TLobby__sub_8003A9AC(void);
int clear_target_flags__15TObjBoss2TunnelFv(void);
int TLobby__sub_8003A874(void);
int TLobby__sub_8003A8D0(void);
int fn_8003AB00(void*, void*);
int create__17TObjBoss2DustCtrlFv(void);
int fn_8003AD50(void);
int fn_8003AD54(void);
int TObjBoss2Tunnel__sub_8003B2B0(void);
int TObjBoss2Tunnel__sub_8003C648(void);
int create__15TObjBoss2TunnelFv(void);

void TLobby__sub_8003A95C(void) { fn_8003AD50(); TObjBoss2Tunnel__sub_8003C648(); TLobby__sub_8003A874(); }
void create_boss2_tunnel__6TLobbyFv(void) { create__15TObjBoss2TunnelFv(); TObjBoss2Tunnel__sub_8003B2B0(); create__17TObjBoss2DustCtrlFv(); }
void TLobby__sub_8003A9AC(void) { TLobby__sub_8003A8D0(); clear_target_flags__15TObjBoss2TunnelFv(); fn_8003AD54(); }
void render__13TObjBoss2DustFv(void* p) { fn_8003AB00((char*)p + 0x24, *(void**)((char*)p + 0x20)); }

}
