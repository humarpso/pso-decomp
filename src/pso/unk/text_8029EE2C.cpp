#include "types.h"
#include "pso/unk/text_8029EE2C.h"
#include "pso/object/TObjFish.h"

extern "C" {

int load_list_texture(void*, void*, void*, void*);

    extern int lbl_805D65F0;
void TObjPlayer__sub_8029EE2C(void) { TObjFish::set_global_param((s32)((void*)(lbl_805D65F0))); load_list_texture((void*)0, (void*)0, (void*)0, (void*)2); }

}
