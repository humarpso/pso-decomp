#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern u8 *lbl_805D553C;
extern s32 lbl_805D5550;
s32 enemy_name_for_rt_index(s32 arg0);
}

extern "C" {

int get_stat_table_entry__9TObjLukerFi(int a0);

    extern int lbl_804A6EE0[];
int get_stat_table_entry__9TObjLukerFi(int a0) {  return lbl_804A6EE0[a0]; }
s32 enemy_name_for_rt_index(s32 arg0) {
    s32 var_r3;
    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    if (var_r3 >= 0x58) {
        var_r3 = 0;
    }
    if ((s32) lbl_805D5550 >= 3) {
        return M2C_FIELD(M2C_FIELD(lbl_805D553C, s32 *, 0xC), M2C_UNK *, (var_r3 * 4));
    }
    return M2C_FIELD(M2C_FIELD(lbl_805D553C, s32 *, 8), M2C_UNK *, (var_r3 * 4));
}

}
