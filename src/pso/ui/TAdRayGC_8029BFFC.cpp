#include "pso/ui/TAdRayGC_8029BFFC.h"

extern "C" {
    int TLobby__sub_8023E4B4(void*, void*);
    extern unsigned char lbl_8046577C[];
    extern unsigned char lbl_804DC2D8[];
    extern int TAdRayGC__ray_texture_list;
void register_texture_f128_ray(void) { TAdRayGC__ray_texture_list = (int)lbl_804DC2D8; TLobby__sub_8023E4B4(lbl_8046577C, lbl_804DC2D8); }
}
