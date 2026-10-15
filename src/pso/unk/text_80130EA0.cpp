#include "types.h"

extern "C" {

s32 get_player_list__10TObjPlayerFv();
s32 scale_current_matrix(s32);
s32 post_translate_matrix(s32);

void yasminkov_2000h_node_callback(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        post_translate_matrix(arg0 + 0x20C);
        return;
    case 2:
        scale_current_matrix(arg0 + 0x1FC);
        return;
    }
}

}
