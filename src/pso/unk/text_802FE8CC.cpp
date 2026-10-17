#include "types.h"
extern "C" {
extern char bm_obj_boss1_common_j_resource_descriptor[];
extern char lbl_80474C64[];
extern s32 boss8_eff_tail_bml_resource;
extern s32 dragon_tail_gvm_texture_handle;
s32 load_enemy_bml_resource(u8 *arg0);
s32 load_gvm_texture_file(void *p);
void fn_802FE8CC(void);
void fn_802FE8CC(void) {
    boss8_eff_tail_bml_resource = load_enemy_bml_resource((u8 *)bm_obj_boss1_common_j_resource_descriptor);
    dragon_tail_gvm_texture_handle = load_gvm_texture_file(lbl_80474C64);
}

}
