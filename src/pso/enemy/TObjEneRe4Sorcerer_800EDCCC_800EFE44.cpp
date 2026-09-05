#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TBoss8Dragon__sub_800BB780();
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneRe4Sorcerer__vt60(u8 *arg0);
}

extern "C" {

void TObjEneRe4Sorcerer__vt59(void);
void update_collision_center__18TObjEneRe4SorcererFPv(u8 *arg0);
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneRe4Sorcerer__vt26(void);
void TObjEneRe4Sorcerer__vt61(void* p);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *, f32);

extern const f32 TObjEneRe4Sorcerer__data_805DA794;

void update_collision_center__18TObjEneRe4SorcererFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (TObjEneRe4Sorcerer__data_805DA794 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (TObjEneRe4Sorcerer__data_805DA794));
}

void TObjEneRe4Sorcerer__vt59(void) {  }
void TObjEneRe4Sorcerer__vt60(u8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 8) {
        if (!(M2C_FIELD(arg0, s32 *, 0x3C8) & 8)) {
            TObjEneDD__sub_800BBA18((void*)((void *)(arg0)), (void*)((int) (8)));
            return;
        }
        TBoss8Dragon__sub_800BB780();
    }
}

}
