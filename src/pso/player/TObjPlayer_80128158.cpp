#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void ramp_up_field200__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80128188(void* p);
int TBoss7Tentacle__sub_803D9BA0(void*);
int get_player_list__10TObjPlayerFv(void*);

extern const f32 lbl_805DADE4;
extern const f32 lbl_805DADE8;

void ramp_up_field200__10TObjPlayerFPv(void *arg0) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x200);
    if (temp_f2 < lbl_805DADE8) {
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) (temp_f2 + lbl_805DADE4);
        if (lbl_805DADE8 < M2C_FIELD(arg0, f32 *, 0x200)) {
            M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DADE8;
        }
    }
}

void TObjPlayer__sub_80128188(void* p) { if (get_player_list__10TObjPlayerFv(p) == 0) { TBoss7Tentacle__sub_803D9BA0((char*)p + 0x1f8); } }

}
