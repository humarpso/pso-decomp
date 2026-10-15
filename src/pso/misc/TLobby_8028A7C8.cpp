#include "types.h"

extern "C" {

void free_shared_objects__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 green_door_bml_resource;
extern u32 green_door_texture_handle;

void free_shared_objects__6TLobbyFv(void) {
    if ((u32) green_door_texture_handle != 0U) {
        TLobby__sub_803DA16C((void*)green_door_texture_handle);
        safe_free__23TAdSinglePlyChrSelectGCFUi(green_door_texture_handle);
        green_door_texture_handle = 0U;
    }
    if ((u32) green_door_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)green_door_bml_resource, 1);
        green_door_bml_resource = 0U;
    }
}

}
