#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_node_tree__16TObjEneRe7BeruraFPv(void *arg0);
M2C_UNK fn_803D9730(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK fn_803E4684(s32);

extern s32 lbl_805D4F98;

void draw_node_tree__16TObjEneRe7BeruraFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;
    void *var_r30;

    var_r30 = arg0;
    do {
        fn_803D9B2C();
        temp_r4 = lbl_805D4F98;
        lbl_805D4F98 = temp_r4 + 0x30;
        fn_803D9730(0, temp_r4);
        temp_r31 = M2C_FIELD(var_r30, s32 *, 0);
        if (!(temp_r31 & 8)) {
            fn_803E4684(M2C_FIELD(var_r30, s32 *, 4));
        }
        fn_803D9B78();
        if (!(temp_r31 & 0x10)) {
            draw_node_tree__16TObjEneRe7BeruraFPv(M2C_FIELD(var_r30, void **, 0x2C));
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0x30);
    } while (var_r30 != NULL);
}

}
