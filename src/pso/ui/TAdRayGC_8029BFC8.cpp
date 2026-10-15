#include "types.h"

extern "C" {

void destroy_instance__8TAdRayGCFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 TAdRayGC__ray_texture_list;

void destroy_instance__8TAdRayGCFv(void) {
    if ((u32) TAdRayGC__ray_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)TAdRayGC__ray_texture_list);
        TAdRayGC__ray_texture_list = 0U;
    }
}

}
