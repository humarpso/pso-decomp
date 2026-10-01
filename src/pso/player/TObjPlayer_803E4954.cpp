#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;

extern "C" {
M2C_UNK TObjPlayer__sub_803E4354();
M2C_UNK TObjPlayer__sub_803E4468();
void TObjPlayer__sub_803E44D4();
struct A_803E4BDC { u8 pad[0xC]; s32 fc; };
struct B_803E4BDC { u8 pad[0x28]; s32 f28; };
void TObjPlayer__sub_803E4BDC(void *arg0, void *arg1, s32 arg2);
void TObjPlayer__sub_803D7B68(void *);
void TObjPlayer__sub_803E4C48(void *);
extern s32 lbl_804FA50C[];
extern A_803E4BDC *lbl_805D4698;
extern B_803E4BDC *lbl_805D76BC;
void TObjEneSlimeOne__sub_803E4AF4(void *arg0, void *arg1, f32 farg0);
M2C_UNK TObjPlayer__sub_803E4354();
M2C_UNK TObjPlayer__sub_803E4468();
void TObjPlayer__sub_803E44D4();
void TObjPlayer__sub_803E496C(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TObjPlayer__sub_803D749C(void *);
M2C_UNK TBoss8Dragon__sub_803D78A8(int);
M2C_UNK TObjPlayer__sub_803E49FC(void *);
void TObjPlayer__sub_803E4A94(void *arg0, void *arg1, f32 farg0);
M2C_UNK TObjPlayer__sub_803E4354();
M2C_UNK TObjPlayer__sub_803E4468();
void TObjPlayer__sub_803E44D4();
void TObjPlayer__sub_803E4D8C(void *, void *, void *, f32, void (*)(void));
void TObjEneSlimeOne__sub_803E4B54(void *arg0, void *arg1, void *arg2, f32 farg0);
}

extern "C" {

void clear_global_state__10TObjPlayerFv(void);
void clear_move_state_bits__10TObjPlayerFv(void);
void set_global_flag__10TObjPlayerFv(void);
void set_global_state__10TObjPlayerFi(s32 arg0);

extern s32 lbl_805D77F8;

void clear_move_state_bits__10TObjPlayerFv(void) {
    lbl_805D77F8 &= 0xFFFFF9FF;
}

extern s32 lbl_805D77DC;

void set_global_state__10TObjPlayerFi(s32 arg0) {
    lbl_805D77DC = arg0;
}

extern s32 lbl_805D7808;

void TObjPlayer__sub_803E496C(s32 arg0, s32 arg1, s32 arg2) {
    TObjPlayer__sub_803D749C((void *) (arg1));
    if ((s32) lbl_805D7808 != 0) {
        TBoss8Dragon__sub_803D78A8((int) (1));
        M2C_FIELD(lbl_805D76BC, s32 *, 0x28) = (s32) M2C_FIELD(lbl_804FA50C, s32 *, 0xC);
        TBoss8Dragon__sub_803D78A8((int) (0));
        M2C_FIELD(lbl_805D76BC, s32 *, 0x28) = (s32) M2C_FIELD(lbl_804FA50C, s32 *, 0xC);
    }
    M2C_FIELD(lbl_805D4698, s32 *, 0xC) = arg2;
    TObjPlayer__sub_803E49FC((void *) (arg0));
}

void TObjPlayer__sub_803E4A94(void *arg0, void *arg1, f32 farg0) {
    TObjPlayer__sub_803E4354();
    ((M2C_UNK (*)(void *, void *, f32, void (*)()))TObjPlayer__sub_803E496C)(arg0, arg1, farg0, TObjPlayer__sub_803E44D4);
    TObjPlayer__sub_803E4468();
}

void TObjEneSlimeOne__sub_803E4AF4(void *arg0, void *arg1, f32 farg0) {
    TObjPlayer__sub_803E4354();
    ((M2C_UNK (*)(void *, void *, f32, void (*)()))TObjPlayer__sub_803E4BDC)(arg0, arg1, farg0, TObjPlayer__sub_803E44D4);
    TObjPlayer__sub_803E4468();
}

void TObjEneSlimeOne__sub_803E4B54(void *arg0, void *arg1, void *arg2, f32 farg0) {
    TObjPlayer__sub_803E4354();
    TObjPlayer__sub_803E4D8C(arg0, arg1, arg2, farg0, TObjPlayer__sub_803E44D4);
    TObjPlayer__sub_803E4468();
}

void set_global_flag__10TObjPlayerFv(void) {
    lbl_805D7808 = 1;
}

void TObjPlayer__sub_803E4BDC(void *arg0, void *arg1, s32 arg2) {
    TObjPlayer__sub_803D7B68(arg1);
    lbl_805D4698->fc = arg2;
    if (lbl_805D7808 != 0) {
        lbl_805D76BC->f28 = lbl_804FA50C[3];
    }
    TObjPlayer__sub_803E4C48(arg0);
}

extern s32 lbl_805D7808;

void clear_global_state__10TObjPlayerFv(void) {
    lbl_805D7808 = 0;
}

}
