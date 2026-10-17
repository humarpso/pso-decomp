#include "types.h"
#include "pso/unk/TUnk_804A5D10.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 post_translate_matrix(void *);
s32 rotate_matrix_z(s32, s32);
void draw_ginja_object(void *child);
s32 rotate_matrix_x(s32, s32);
u8 *query_game_join_id__10TObjPlayerFv(s32);
s32 get_entity_id__10TObjPlayerFv();
s32 notify_fish_if_valid__10TObjPlayerFUl();
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();

void TUnk_804A5D10::render() {
    u8 *arg0 = (u8 *)this;
    u32 temp_r31;
    u8 *temp_r3;

    temp_r3 = query_game_join_id__10TObjPlayerFv(*(s32 *)((s8 *)arg0 + 0x1C));
    if (temp_r3 != NULL) {
        temp_r31 = *(u32 *)((s8 *)temp_r3 + 0x188);
        if (temp_r31 != 0U) {
            get_entity_id__10TObjPlayerFv();
            notify_fish_if_valid__10TObjPlayerFUl();
            push_matrix();
            post_translate_matrix(arg0 + 0x2C);
            rotate_matrix_y(0, *(s32 *)&this->unk_3C);
            rotate_matrix_x(0, this->m_38);
            rotate_matrix_z(0, this->m_40);
            draw_ginja_object((void *)temp_r31);
            pop_matrix();
        }
    }
}

}
