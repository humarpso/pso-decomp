#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TBoss4Type3__vt2(void *arg0);
M2C_UNK TBoss4Type3__sub_8005A398(void *, M2C_UNK);
extern f32 lbl_805D8BB0;
extern f32 TBoss4Type2__data_805D8BAC;
extern f32 TBoss4Type2__data_805D8BAC;
extern f32 TBoss4Type2__data_805D8BAC;
extern f32 TBoss4Type2__data_805D8BAC;
void TBoss4Type3__vt2(void *arg0);
M2C_UNK TBoss4Type3__sub_8005A678(void *, int);
M2C_UNK reset_timer__11TBoss4Type3FPv(int);
void TBoss4Type3__vt7(u8 *arg0);
M2C_UNK TBoss4Type3__sub_8005A398(void *, M2C_UNK);
void TBoss4Type3__vt6(u8 *arg0);
}

extern "C" {

void TBoss4Type3__vt22(u8 *arg0);
void TBoss4Type3__vt25(u8 *arg0);
void TBoss4Type3__vt28(void *arg0);
int TBoss4Type3__vt3(void);
void TBoss4Type3__vt31(void *arg0);
void TBoss4Type3__vt32(void* p);
void TBoss4Type3__vt34(void *arg0);
void TBoss4Type3__vt35(void* p);
void TBoss4Type3__vt37(void *arg0);
void TBoss4Type3__vt38(void *arg0);
void TBoss4Type3__vt4(void *arg0);
void TBoss4Type3__vt5(void);
int TBoss4Type3__vt8(void);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 TBoss4Type3__sub_8005254C(u16);
int TBoss4Type3__sub_800599F4(void*, void*, void*);
int TBoss4Type3__sub_80059F64(void*, void*);
void TBoss4Type3__vt0(void* p);
void TBoss4Type3__vt1(void* p);
M2C_UNK spawn_random_effect__11TBoss4Type3Fi(void *);

void TBoss4Type3__vt38(void *arg0) {
    if (TBoss4Type3__sub_8005254C(M2C_FIELD(arg0, u16 *, 0x3B8)) == 0) {
        M2C_FIELD(arg0, u16 *, 0x3B8) = 0xFFFFU;
        M2C_FIELD(arg0, u16 *, 0x3BA) = 0xFFFFU;
        TBoss4Type3__sub_800599F4((void*)(arg0), (void*)(0), (void*)(2));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        M2C_FIELD(arg0, u16 *, 0x3BA) = (u16) M2C_FIELD(arg0, u16 *, 0x3B8);
        M2C_FIELD(arg0, u16 *, 0x3B8) = 0xFFFFU;
        TBoss3Volopt__sub_8022675C((int)(0x4003C12C), (void *)(0), (int)(0), (int)(0));
        M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
        spawn_random_effect__11TBoss4Type3Fi(arg0);
    }
}

void TBoss4Type3__vt37(void *arg0) {
    TBoss3Volopt__sub_8022675C((int)(0x4003C12B), (void *)(0), (int)(0), (int)(0));
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x62;
}

void TBoss4Type3__vt35(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type3__sub_80059F64(p, (void*)12); } }

void TBoss4Type3__vt34(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    TBoss3Volopt__sub_8022675C((int)(0x4003B238), (void *)(0), (int)(0), (int)(0));
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x62;
}

void TBoss4Type3__vt32(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type3__sub_80059F64(p, (void*)10); } }

void TBoss4Type3__vt31(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x93;
}

void TBoss4Type3__vt28(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0xC4;
}

void TBoss4Type3__vt25(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x10;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    TBoss3Volopt__sub_8022675C((int)(0x4003B032), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3BA) == (u16)-1) {
        TBoss3Volopt__sub_8022675C((int)(0x4003C62D), (void *)(0), (int)(0), (int)(0));
    }
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

void TBoss4Type3__vt22(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A4) = (s32) M2C_FIELD(arg0, s32 *, 0x3A0);
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    TBoss3Volopt__sub_8022675C((int)(0x4003B031), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

int TBoss4Type3__vt8(void) { return 0; }

void TBoss4Type3__vt7(u8 *arg0) {
    reset_timer__11TBoss4Type3FPv((int) (M2C_FIELD(arg0, s32 *, 0x524)));
    reset_timer__11TBoss4Type3FPv((int) (M2C_FIELD(arg0, s32 *, 0x528)));
    TBoss4Type3__sub_8005A678((void *) (arg0), (int) (((M2C_FIELD(arg0, s32 *, 0x374) - 4) & 1) + 3));
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

void TBoss4Type3__vt6(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type3__sub_8005A398((void *)((void *)(arg0)), (M2C_UNK)((int) (2)));
    }
}

void TBoss4Type3__vt5(void) {  }

extern f32 lbl_805D8C60;

void TBoss4Type3__vt4(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) lbl_805D8C60;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

int TBoss4Type3__vt3(void) { return 0; }

void TBoss4Type3__vt2(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type3__sub_8005A398(arg0, 1);
    }
}

}
