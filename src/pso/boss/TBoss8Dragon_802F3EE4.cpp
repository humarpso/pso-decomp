#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_nodes_flagged__12TBoss8DragonFi(s32 arg0);
M2C_UNK render_nodes__7TObjectFv(s32, s32);

extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;

void render_nodes_flagged__12TBoss8DragonFi(s32 arg0) {
    s32 temp_r4;

    temp_r4 = some_id_805c6f74;
    lbl_805D5660 = temp_r4;
    some_id_805c6f74 = temp_r4 | 0x400;
    render_nodes__7TObjectFv(arg0 + 0x3C4, temp_r4);
    some_id_805c6f74 = lbl_805D5660;
}

}
