#include "types.h"
extern "C" {
s32 TBoss8Dragon__sub_8005D700(void);
void *load_enemy_bml_resource(void *);
void *load_gvm_texture_file(void *);
extern char lbl_80488768[];
extern char lbl_8043810C[];
extern void *lbl_805D4DD8;
extern void *boss5_common_texture_list;
void load_boss5_common_assets(void);
}

extern "C" {

void load_boss5_common_assets(void) {
    switch (TBoss8Dragon__sub_8005D700()) {
    case 0:
        lbl_805D4DD8 = load_enemy_bml_resource(lbl_80488768);
        boss5_common_texture_list = load_gvm_texture_file(lbl_8043810C);
        break;
    }
}

}
