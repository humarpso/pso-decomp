#include "types.h"
extern "C" {
s32 isV2Mode__12TBoss1DragonFv(void);
s32 load_enemy_bml_resource_named(void *, void *);
s32 load_enemy_bml_resource(void *);
s32 load_gvm_texture_file(void *);
extern u8 lbl_80435514[];
extern u8 lbl_8043552C[];
extern u8 lbl_80435548[];
extern u8 lbl_80481FBC[];
extern s32 lbl_805D4B50;
extern s32 lbl_805D4B54;
void load_dragon_ground_assets(void);
}

extern "C" {

void load_dragon_ground_assets(void) {
    switch (isV2Mode__12TBoss1DragonFv()) {
    case 0:
        lbl_805D4B50 = load_enemy_bml_resource(lbl_80481FBC);
        lbl_805D4B54 = load_gvm_texture_file(lbl_80435514);
        break;
    case 1:
        lbl_805D4B50 = load_enemy_bml_resource_named(lbl_80481FBC, lbl_8043552C);
        lbl_805D4B54 = load_gvm_texture_file(lbl_80435548);
        break;
    }
}

}
