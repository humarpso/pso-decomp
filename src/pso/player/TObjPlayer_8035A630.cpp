#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void process_callback_list__10TObjPlayerFi(s32 arg0);
void draw_node_tree__10TObjPlayerFPvPv(void *arg0, void *arg1);
extern M2C_UNK (*lbl_805D6F3C)(s32);
M2C_UNK TObjPlayer__sub_803D898C(s32);
M2C_UNK TObjPlayer__sub_803D9730(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803E4684(s32);

extern s32 lbl_805D6F30;
extern s32 lbl_805D6F34;
extern s32 lbl_805D6F38;

void process_callback_list__10TObjPlayerFi(s32 arg0) {
    if ((s32) lbl_805D6F30 < (s32) lbl_805D6F34) {
        TObjPlayer__sub_803D898C(lbl_805D6F38 + (lbl_805D6F30 * 0x30));
    }
    if (((M2C_UNK (*)(s32)) lbl_805D6F3C) != NULL) {
        lbl_805D6F3C(arg0);
    }
    lbl_805D6F30 += 1;
}

extern s32 lbl_805D6F38;

void draw_node_tree__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    M2C_UNK (*temp_r12)(void *);
    s32 temp_r31;
    void *var_r30;

    var_r30 = arg1;
    do {
        temp_r31 = M2C_FIELD(var_r30, s32 *, 0);
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D9730(0, lbl_805D6F38 + (M2C_FIELD(arg0, s32 *, 0x30) * 0x30));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 1);
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x34);
        if (temp_r12 != NULL) {
            temp_r12(var_r30);
        }
        if (!(temp_r31 & 8)) {
            TObjPlayer__sub_803E4684(M2C_FIELD(var_r30, s32 *, 4));
        }
        TObjPlayer__sub_803D9B78();
        if (!(temp_r31 & 0x10)) {
            draw_node_tree__10TObjPlayerFPvPv(arg0, M2C_FIELD(var_r30, void **, 0x2C));
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0x30);
    } while (var_r30 != NULL);
}

}
