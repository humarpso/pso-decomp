#include "types.h"
#include "pso/unk/text_801A2514.h"

extern "C" {
extern u16 lbl_805D5CD2;
extern u16 lbl_805D5CD8;
extern u16 lbl_805D5CD4;
extern u16 lbl_805D5CD6;
void advance_enemy_id_counter(s32 arg0) {
    u16 temp_r0;
    temp_r0 = lbl_805D5CD2 + arg0;
    lbl_805D5CD2 = temp_r0;
    lbl_805D5CD8 = temp_r0;
}

void advance_object_id_counter(s32 arg0) {
    u16 temp_r0;
    temp_r0 = lbl_805D5CD4 + arg0;
    lbl_805D5CD4 = temp_r0;
    lbl_805D5CD6 = temp_r0;
}

}
