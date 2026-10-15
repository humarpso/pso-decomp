#include "types.h"

extern "C" {

void ramp_up_field200__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80128188(void* p);
int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

extern const f32 lbl_805DADE4;
extern const f32 lbl_805DADE8;

void ramp_up_field200__10TObjPlayerFPv(void *arg0) {
    f32 temp_f2;

    temp_f2 = *(f32 *)((s8 *)arg0 + 0x200);
    if (temp_f2 < lbl_805DADE8) {
        *(f32 *)((s8 *)arg0 + 0x200) = (f32) (temp_f2 + lbl_805DADE4);
        if (lbl_805DADE8 < *(f32 *)((s8 *)arg0 + 0x200)) {
            *(f32 *)((s8 *)arg0 + 0x200) = (f32) lbl_805DADE8;
        }
    }
}

void TObjPlayer__sub_80128188(void* p) { if (get_player_list__10TObjPlayerFv(p) == 0) { scale_current_matrix((char*)p + 0x1f8); } }

}
