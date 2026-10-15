#include "types.h"
#include "pso/TAdRayGC.h"

extern "C" {

void TLobby__sub_803DA16C(void*);

extern u32 TAdRayGC__ray_texture_list;

void TAdRayGC::destroy_instance() {
    if ((u32) TAdRayGC__ray_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)TAdRayGC__ray_texture_list);
        TAdRayGC__ray_texture_list = 0U;
    }
}

}
