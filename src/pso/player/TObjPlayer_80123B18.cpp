#include "types.h"

extern "C" {

void approach_field200_cap__10TObjPlayerFPv(void *arg0);
void update_1f8_if_ready__10TObjPlayerFPv(void* p);
int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

extern const f32 lbl_805DAD14;
extern const f32 lbl_805DAD18;

void approach_field200_cap__10TObjPlayerFPv(void *arg0) {
    f32 temp_f2;

    temp_f2 = *(f32 *)((s8 *)arg0 + 0x200);
    if (temp_f2 < lbl_805DAD18) {
        *(f32 *)((s8 *)arg0 + 0x200) = (f32) (temp_f2 + lbl_805DAD14);
        if (lbl_805DAD18 < *(f32 *)((s8 *)arg0 + 0x200)) {
            *(f32 *)((s8 *)arg0 + 0x200) = (f32) lbl_805DAD18;
        }
    }
}

void update_1f8_if_ready__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 0) { scale_current_matrix((char*)p + 0x1f8); } }

}
