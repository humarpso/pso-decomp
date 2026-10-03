#include "types.h"

extern "C" {

void increment_model_node_counter(void);
int get_player_list__10TObjPlayerFv(void);
void TObjPlayer__sub_80121208(void* p, s32 v);
void reset_model_node_counter(void);

    extern int lbl_805D53E8;
void increment_model_node_counter(void) {
    int temp_r3 = lbl_805D53E8;
    lbl_805D53E8 = temp_r3 + 1;
}

    extern int lbl_805D53E8;
int get_player_list__10TObjPlayerFv(void) {  return lbl_805D53E8; }

void TObjPlayer__sub_80121208(void* p, s32 v) { *(s32*)((char*)p + 0xe0) = v; }

    extern int lbl_805D53E8;
void reset_model_node_counter(void) { lbl_805D53E8 = 0; }

}
