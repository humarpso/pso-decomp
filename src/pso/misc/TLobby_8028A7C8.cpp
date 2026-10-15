#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
s32 safe_free__23TAdSinglePlyChrSelectGCFUl(u32);

extern u32 green_door_bml_resource;
extern u32 green_door_texture_handle;

void TLobby::free_shared_objects() {
    if ((u32) green_door_texture_handle != 0U) {
        TLobby__sub_803DA16C((void*)green_door_texture_handle);
        safe_free__23TAdSinglePlyChrSelectGCFUl(green_door_texture_handle);
        green_door_texture_handle = 0U;
    }
    if ((u32) green_door_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)green_door_bml_resource, 1);
        green_door_bml_resource = 0U;
    }
}

}
