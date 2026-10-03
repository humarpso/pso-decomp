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

    extern int lbl_805D5C7C;
int get_story_select__16TAdStorySelectGCFv(void) {  return lbl_805D5C7C; }

    extern int lbl_805D5C78;
void register_area_warp_object__16TAdStorySelectGCFPv(void* a0) { get_bml_motion((void*)(lbl_805D5C78), a0); }

    extern int lbl_805D5C78;
void register_warp__16TObjMapForceWarpFPv(void* a0) { get_bml_model((void*)(lbl_805D5C78), a0); }

void TObjMapForceWarp__vt13(void) {  }

}
