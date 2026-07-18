#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_trap_by_stat__10TObjPlayerFPv(u8 *arg0);
int TObjPlayer__sub_8033051C(void* p);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
int TObjPlayer__sub_8033040C(void*);

extern const f32 lbl_805DF7FC;

void spawn_trap_by_stat__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK var_r3;

    var_r3 = 0x4006C919;
    if (M2C_FIELD(arg0, f32 *, 0x3B8) > lbl_805DF7FC) {
        var_r3 = 0x6B015;
        if (M2C_FIELD(arg0, f32 *, 0x3BC) > lbl_805DF7FC) {
            var_r3 = 0x6B518;
        }
    }
    TOTrapAncient01__sub_80226578(var_r3, arg0, arg0 + 0x38, 0, 0);
}

int TObjPlayer__sub_8033051C(void* p) { return TObjPlayer__sub_8033040C(p); }

}
