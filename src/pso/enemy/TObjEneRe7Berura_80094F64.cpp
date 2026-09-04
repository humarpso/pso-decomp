#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_attack_params__16TObjEneRe7BeruraFiPv(s32 arg0, u8 *arg1);
void draw_node_tree__16TObjEneRe7BeruraFPv(void *arg0);
M2C_UNK TObjEneRe7Berura__sub_8009503C(void *, int);
M2C_UNK TObjPlayer__sub_803D9730(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D97F0(void *, int, int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803E4684(s32);

extern s32 TObjEneRe7Berura__data_805D4F98;

void draw_node_tree__16TObjEneRe7BeruraFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;
    void *var_r30;

    var_r30 = arg0;
    do {
        TObjPlayer__sub_803D9B2C();
        temp_r4 = TObjEneRe7Berura__data_805D4F98;
        TObjEneRe7Berura__data_805D4F98 = temp_r4 + 0x30;
        TObjPlayer__sub_803D9730(0, temp_r4);
        temp_r31 = M2C_FIELD(var_r30, s32 *, 0);
        if (!(temp_r31 & 8)) {
            TObjPlayer__sub_803E4684(M2C_FIELD(var_r30, s32 *, 4));
        }
        TObjPlayer__sub_803D9B78();
        if (!(temp_r31 & 0x10)) {
            draw_node_tree__16TObjEneRe7BeruraFPv((void *)(M2C_FIELD(var_r30, void **, 0x2C)));
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0x30);
    } while (var_r30 != NULL);
}

extern M2C_UNK lbl_8058D490[];
extern s32 lbl_805D4F90;
extern s32 lbl_805D4F94;
extern s32 TObjEneRe7Berura__data_805D4F98;
extern s32 lbl_805D4F9C;

void apply_attack_params__16TObjEneRe7BeruraFiPv(s32 arg0, u8 *arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg1, s32 *, 0);
    TObjEneRe7Berura__data_805D4F98 = temp_r6;
    temp_r5 = M2C_FIELD(arg1, s32 *, 4);
    lbl_805D4F90 = temp_r5;
    temp_r4 = M2C_FIELD(arg1, s32 *, 8);
    lbl_805D4F94 = temp_r4;
    lbl_805D4F9C = (long) (arg1 + 0x58);
    TObjPlayer__sub_803D97F0((void *) (lbl_8058D490), (int) (temp_r4), (int) (temp_r5), (int) (temp_r6));
    TObjEneRe7Berura__sub_8009503C((void *) (arg0), (int) (0));
    TObjPlayer__sub_803D9B78();
}

}
