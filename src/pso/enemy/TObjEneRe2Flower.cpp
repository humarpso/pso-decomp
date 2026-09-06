#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805D9FF8;
void TObjEneRe2Flower__sub_800C3DC4(u8 *arg0);
}

extern "C" {

void begin_state_242__16TObjEneRe2FlowerFPv(void* p);
s32 check_hit_flag__16TObjEneRe2FlowerFPv(void *arg0);
void clear_child_flags__16TObjEneRe2FlowerFPv(void *arg0);
void set_child_flags__16TObjEneRe2FlowerFPv(void *arg0);
M2C_UNK TObjEneDD__sub_800BBA18(void *, s32);
s32 get_flag_11__16TObjEneRe2FlowerFPv();
int TBoss8Dragon__sub_800BB7D4(void*, void*);

void begin_state_242__16TObjEneRe2FlowerFPv(void* p) { if (*(int*)((char*)p + 0x3d4) == 0) { TBoss8Dragon__sub_800BB7D4(p, (void*)242); *(int*)((char*)p + 0x3d4) = 20; } }

s32 check_hit_flag__16TObjEneRe2FlowerFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x3C4) & 2) {
        TObjEneDD__sub_800BBA18(arg0, 7);
        return 1;
    }
    return 0;
}

void clear_child_flags__16TObjEneRe2FlowerFPv(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    if (get_flag_11__16TObjEneRe2FlowerFPv() != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
        return;
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r3_2, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x44) & 0xFFFFFFFE);
}

void set_child_flags__16TObjEneRe2FlowerFPv(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    if (get_flag_11__16TObjEneRe2FlowerFPv() != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
        return;
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r3_2, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x44) | 1);
}
void TObjEneRe2Flower__sub_800C3DC4(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D9FF8);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

}
