#include "types.h"
#include "pso/TAdRayGC.h"

extern "C" {

void release_texture_list(void*);

extern u32 TAdRayGC__ray_texture_list;

void TAdRayGC::destroy_instance() {
    if ((u32) TAdRayGC__ray_texture_list != 0U) {
        release_texture_list((void*)TAdRayGC__ray_texture_list);
        TAdRayGC__ray_texture_list = 0U;
    }
}

}
