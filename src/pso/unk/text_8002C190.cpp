#include "types.h"
extern "C" {
s32 isV2Mode__12TBoss1DragonFv(void);
s32 load_enemy_bml_resource_named(void *, void *);
s32 load_enemy_bml_resource(void *);
s32 load_gvm_texture_file(void *);
extern u8 dragon_common_texture_filename[];
extern u8 lbl_8043552C[];
extern u8 dragon_common_alternate_texture_filename[];
extern u8 dragon_ground_resource_descriptor[];
extern s32 lbl_805D4B50;
extern s32 dragon_common_texture_list;
void load_dragon_ground_assets(void);
}

extern "C" {

void load_dragon_ground_assets(void) {
    switch (isV2Mode__12TBoss1DragonFv()) {
    case 0:
        lbl_805D4B50 = load_enemy_bml_resource(dragon_ground_resource_descriptor);
        dragon_common_texture_list = load_gvm_texture_file(dragon_common_texture_filename);
        break;
    case 1:
        lbl_805D4B50 = load_enemy_bml_resource_named(dragon_ground_resource_descriptor, lbl_8043552C);
        dragon_common_texture_list = load_gvm_texture_file(dragon_common_alternate_texture_filename);
        break;
    }
}

}
