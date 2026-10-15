#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void increment_model_node_counter(void);
void TObjPlayer__sub_80121208(void* p, s32 v);
void reset_model_node_counter(void);

    extern int model_node_counter;
void increment_model_node_counter(void) {
    int temp_r3 = model_node_counter;
    model_node_counter = temp_r3 + 1;
}

    extern int model_node_counter;
int TObjPlayer::get_player_list() {  return model_node_counter; }

void TObjPlayer__sub_80121208(void* p, s32 v) { *(s32*)((char*)p + 0xe0) = v; }

    extern int model_node_counter;
void reset_model_node_counter(void) { model_node_counter = 0; }

}
