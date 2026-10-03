#include "types.h"
extern "C" {
s32 is_split_screen(void);
s32 create_named_object(void *);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
extern u8 lbl_8044BC40[];
extern s32 lbl_80513D78[];
extern s32 lbl_805D6158;
extern s32 lbl_805D615C;
void load_armor_random_table(void);
}

extern "C" {

void load_armor_random_table(void) {
    s32 i;
    lbl_805D6158 = create_named_object(lbl_8044BC40);
    for (i = 0; i < 4; i++) {
        lbl_80513D78[i] = 0;
    }
    if (is_split_screen() == 1) {
        for (i = 0; i < 4; i++) {
            lbl_80513D78[i] = alloc_buffer__11TOBoss4RockFPv(0x1A4);
        }
    } else {
        lbl_80513D78[0] = alloc_buffer__11TOBoss4RockFPv(0x1A4);
    }
    lbl_805D615C = 0;
}

}
