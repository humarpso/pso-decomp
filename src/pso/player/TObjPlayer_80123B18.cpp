#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void approach_field200_cap__10TObjPlayerFPv(void *arg0);
void update_1f8_if_ready__10TObjPlayerFPv(void* p);
int scale_current_matrix(void*);
int get_player_list__10TObjPlayerFv(void*);

extern const f32 lbl_805DAD14;
extern const f32 lbl_805DAD18;

void approach_field200_cap__10TObjPlayerFPv(void *arg0) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x200);
    if (temp_f2 < lbl_805DAD18) {
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) (temp_f2 + lbl_805DAD14);
        if (lbl_805DAD18 < M2C_FIELD(arg0, f32 *, 0x200)) {
            M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DAD18;
        }
    }
}

void update_1f8_if_ready__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 0) { scale_current_matrix((char*)p + 0x1f8); } }

}
