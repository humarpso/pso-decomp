#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_802BF034(void* p);
void TBoss6Type2__sub_802BF064(void *arg0);
void TBoss6Type2__sub_802BF0B8(u8 *arg0);
void TBoss6Type2__sub_802BF234(void* p);
void TBoss6Type2__sub_802BF264(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TBoss6Type2__sub_802B9BBC(void *, M2C_UNK);
M2C_UNK TBoss6Type2__sub_802B9C00(void *, M2C_UNK);
M2C_UNK TBoss6Type2__sub_802BAD04(void *);
int TBoss6Type2__sub_802BAFEC(void*, void*);
M2C_UNK TBoss6Type2__sub_802BB768(void *);
M2C_UNK TBoss6Type2__sub_802BB7C0(void *);
M2C_UNK TBoss6Type2__sub_802BC6DC(void *);
M2C_UNK TBoss6Type2__sub_802BD014(void *, M2C_UNK);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);

void TBoss6Type2__sub_802BF034(void* p) { if (*(int*)((char*)p + 0x460) == 4) { TBoss6Type2__sub_802BAFEC(p, (void*)0); } }

extern s32 lbl_805D6760;
extern u8 lbl_805D6764;
extern f32 lbl_805DE3FC;
extern f32 lbl_805DE4DC;

void TBoss6Type2__sub_802BF064(void *arg0) {
    s32 temp_r0;
    if ((s8) lbl_805D6764 == 0) {
        lbl_805D6764 = 1;
        lbl_805D6760 = (s32) (lbl_805DE4DC / lbl_805DE3FC);
    }
    temp_r0 = lbl_805D6760;
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x470) = (s32) (M2C_FIELD(arg0, s32 *, 0x470) + 1);
}

void TBoss6Type2__sub_802BF0B8(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == (s32) (M2C_FIELD(arg0, s32 *, 0x45C) - 0x3C)) {
        TBoss3Volopt__sub_8022675C((int)(0x69C0F), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == (s32) (M2C_FIELD(arg0, s32 *, 0x45C) - 0x78)) {
        TBoss6Type2__sub_802BAD04(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460);
    switch (temp_r0) {
    case 0xA0:
        TBoss6Type2__sub_802B9C00(arg0, 8);
        TBoss6Type2__sub_802B9C00(arg0, 9);
        TBoss6Type2__sub_802B9C00(arg0, 0xA);
        break;
    case 0x50:
        TBoss6Type2__sub_802B9BBC(arg0, 8);
        TBoss6Type2__sub_802B9BBC(arg0, 9);
        TBoss6Type2__sub_802B9BBC(arg0, 0xA);
        break;
    case 0x82:
        TBoss6Type2__sub_802B9C00(arg0, 0xB);
        TBoss6Type2__sub_802B9C00(arg0, 0xC);
        break;
    case 0x49:
        TBoss6Type2__sub_802B9BBC(arg0, 0xB);
        TBoss6Type2__sub_802B9BBC(arg0, 0xC);
        break;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0x36) {
        set_shake_preset__11TCameraCtrlFi(1);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0_2;
    if (temp_r0_2 < 0) {
        TBoss6Type2__sub_802BC6DC(arg0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
            TBoss6Type2__sub_802BD014(arg0, 0x1B);
            return;
        }
        TBoss6Type2__sub_802BD014(arg0, 0);
    }
}

void TBoss6Type2__sub_802BF234(void* p) { if (*(int*)((char*)p + 0x460) == 34) { TBoss6Type2__sub_802BAFEC(p, (void*)0); } }

void TBoss6Type2__sub_802BF264(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x45C) = 0xB4;
    M2C_FIELD(arg0, s32 *, 0x460) = 0xB4;
    TBoss3Volopt__sub_8022675C((int)(0x4006970E), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        TBoss6Type2__sub_802BB7C0(arg0);
        return;
    }
    TBoss6Type2__sub_802BB768(arg0);
}

}
