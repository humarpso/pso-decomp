#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void belra_cannon_return_timer(void *arg0);
void notify_tentacle_if_mode1__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80122064(void* a0);
int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

void belra_cannon_return_timer(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = 1;
    }
}

void notify_tentacle_if_mode1__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { scale_current_matrix((char*)p + 0x1f8); } }

    extern const float lbl_805DACD8;
void TObjPlayer__sub_80122064(void* a0) { *(float*)((char*)a0 + 0x1fc) = lbl_805DACD8; }

}
