#include "types.h"

extern "C" {

s32 adxf_get_fsize_byte__6TLobbyFPv();
s32 close_adxf_handle__6TLobbyFPv(s32);
s32 adxf_open__6TLobbyFUii(s32, s32);
int update_lobby_scene__6TSceneFPv(void* p);
int get_resource_file_size__6TLobbyFPv(void*);

int update_lobby_scene__6TSceneFPv(void* p) { return get_resource_file_size__6TLobbyFPv(p); }

}
