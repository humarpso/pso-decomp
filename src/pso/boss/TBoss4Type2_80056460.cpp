#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK create_jisin__11TBoss4Type2FPvPv(void *, int);
M2C_UNK TBoss4Type2__sub_80057048(void *, int);
M2C_UNK set_shake_preset__11TCameraCtrlFi(int);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
void TBoss4Type2__vt12(u8 *arg0);
M2C_UNK TBoss4Type2__sub_80057048(void *, int);
void TBoss4Type2__vt6(u8 *arg0);
}

extern "C" {

void TBoss4Type2__vt10(void *arg0);
void TBoss4Type2__vt11(void);
void TBoss4Type2__vt4(void* p);
void TBoss4Type2__vt5(void);
void TBoss4Type2__vt7(void *arg0);
void TBoss4Type2__vt8(void* p);
int TBoss4Type2__sub_80056998(void*);

void TBoss4Type2__vt12(u8 *arg0) {
    s32 temp_r0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0x1E) {
        set_shake_preset__11TCameraCtrlFi((int) (1));
        create_jisin__11TBoss4Type2FPvPv((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x3A0)));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) <= 0x1E) {
        TOTrapAncient01__sub_80226578((int) (0x4003AD16), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_80057048((void *) (arg0), (int) (8));
    }
}

void TBoss4Type2__vt11(void) {  }

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt10(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x4B;
}

void TBoss4Type2__vt8(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type2__sub_80056998(p); } }

extern f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt7(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x3E0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3E0) + 1);
    M2C_FIELD(arg0, s32 *, 0x398) = (s32) M2C_FIELD(arg0, s32 *, 0x41C);
}

void TBoss4Type2__vt6(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_80057048((void *)(arg0), (int) (2));
    }
}

void TBoss4Type2__vt5(void) {  }
void TBoss4Type2__vt4(void* p) { *(s32*)((char*)p + 0x398) = 75; }

}
