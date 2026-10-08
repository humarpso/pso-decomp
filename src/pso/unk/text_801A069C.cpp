#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK debug_print_area_num__12TObjAreaWarpFPv();
M2C_UNK set_global_count__12TObjNpcEnemyFi(M2C_UNK);
M2C_UNK debug_printf_at(M2C_UNK, M2C_UNK *, ...);
extern M2C_UNK lbl_80446854[];
void TObjWarpLobby__vt18(void *arg0);
}

extern "C" {

void TObjWarpJungMain__vt18(void);

void TObjWarpJungMain__vt18(void) {  }
void TObjWarpLobby__vt18(void *arg0) {
    s32 temp_r0;
    s32 base;
    debug_print_area_num__12TObjAreaWarpFPv();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x88) < 0) {
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x88) > 1) {
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x88);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
        break;
    }
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130021, lbl_80446854);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

}
