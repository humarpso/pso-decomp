#include "types.h"
#include "pso/misc/TScene.h"

extern "C" {

s32 adxf_get_fsize_byte__6TLobbyFv();
s32 close_adxf_handle__6TLobbyFPv(s32);
s32 adxf_open__6TLobbyFUii(s32, s32);
int get_resource_file_size__6TLobbyFv(void*);

int TScene::update_lobby_scene() { return get_resource_file_size__6TLobbyFv(this); }

}
