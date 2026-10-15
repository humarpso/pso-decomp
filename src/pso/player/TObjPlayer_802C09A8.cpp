#include "types.h"

extern "C" {

void free_static_instance__10TObjPlayerFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lobby_pigeon_bml_archive;

void free_static_instance__10TObjPlayerFv(void) {
    if ((u32) lobby_pigeon_bml_archive != 0U) {
        TLobby__sub_8001FE7C((void*)lobby_pigeon_bml_archive, 1);
        lobby_pigeon_bml_archive = 0U;
    }
}

}
