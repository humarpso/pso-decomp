#include "types.h"

extern "C" {

void belra_cannon_return_timer(void *arg0);
void notify_tentacle_if_mode1__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80122064(void* a0);
int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void belra_cannon_return_timer(void *arg0) {
    if (arg0 != NULL) {
        *(s32 *)((s8 *)arg0 + 0x1F8) = 1;
    }
}

void notify_tentacle_if_mode1__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { scale_current_matrix((char*)p + 0x1f8); } }

    extern const float lbl_805DACD8;
void TObjPlayer__sub_80122064(void* a0) { *(float*)((char*)a0 + 0x1fc) = lbl_805DACD8; }

}
