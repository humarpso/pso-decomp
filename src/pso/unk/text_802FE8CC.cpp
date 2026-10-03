#include "types.h"
extern "C" {
extern char lbl_804E6208[];
extern char lbl_80474C64[];
extern s32 lbl_805D69C8;
extern s32 lbl_805D69CC;
s32 load_enemy_bml_resource(void *p);
s32 load_gvm_texture_file(void *p);
void fn_802FE8CC(void);
}

extern "C" {

void fn_802FE8CC(void) {
    lbl_805D69C8 = load_enemy_bml_resource(lbl_804E6208);
    lbl_805D69CC = load_gvm_texture_file(lbl_80474C64);
}

}
