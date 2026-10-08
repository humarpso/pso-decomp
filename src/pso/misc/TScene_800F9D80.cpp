#include "types.h"

extern "C" {

s32 TLobby__sub_803CC500();
s32 TLobby__sub_803CCE9C(s32);
s32 adxf_open__6TLobbyFUii(s32, s32);
int update_lobby_scene__6TSceneFPv(void* p);
int get_resource_file_size__6TLobbyFPv(void*);

int update_lobby_scene__6TSceneFPv(void* p) { return get_resource_file_size__6TLobbyFPv(p); }

}
