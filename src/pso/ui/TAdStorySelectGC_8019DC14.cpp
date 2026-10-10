#include "types.h"

extern "C" {

int TAdStorySelectGC__sub_8019DC14(void);
void TObjMapForceWarp__vt13(void);
int get_story_select__16TAdStorySelectGCFv(void);
void register_area_warp_object__16TAdStorySelectGCFPv(void* a0);
void register_warp__16TObjMapForceWarpFPv(void* a0);
int get_bml_motion(void*, void*);
int get_bml_model(void*, void*);

    extern int lbl_805D67C0;
int TAdStorySelectGC__sub_8019DC14(void) {  return lbl_805D67C0; }

    extern int forest_warp_texture_list;
int get_story_select__16TAdStorySelectGCFv(void) {  return forest_warp_texture_list; }

    extern int forest_warp_bml_resource;
void register_area_warp_object__16TAdStorySelectGCFPv(void* a0) { get_bml_motion((void*)(forest_warp_bml_resource), a0); }

    extern int forest_warp_bml_resource;
void register_warp__16TObjMapForceWarpFPv(void* a0) { get_bml_model((void*)(forest_warp_bml_resource), a0); }

void TObjMapForceWarp__vt13(void) {  }

}
