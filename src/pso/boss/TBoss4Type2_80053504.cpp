#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Boss_800535A8 {
    u8 pad0[0x32C];
    s16 hp;
    u8 pad32e[0x3A8 - 0x32E];
    s32 x3a8;
    u8 pad3ac[0x3D8 - 0x3AC];
    s32 x3d8;
};

extern "C" {
void TBoss4Type2__sub_80053B48(void *, void *, void *);
void TBoss4Type2__sub_80053C8C(void *, s32, s32, s32);
void TBoss4Type2__sub_80053504(u8 *arg0);
s32 TBoss4Type2__sub_800522CC(s32, void *, void *);
void check_state_transition__11TBoss4Type2FPv(void *arg0);
void TRaderMapCore__sub_80053914(void *, void *);
void set_map_position__13TRaderMapCoreFPvPv(void *, void *);
M2C_UNK TBoss4Type2__sub_80053CEC(void *, M2C_UNK);
extern u8 lbl_80485AE0[];
void TBoss4Type2__sub_800535A8(Boss_800535A8 *arg0);
}

extern "C" {

void check_state_transition__11TBoss4Type2FPv(void *arg0);
M2C_UNK TBoss4Type2__sub_80053CEC(void *, M2C_UNK);
s32 TBoss4DarkFalz__sub_8004D990(s32);

void TBoss4Type2__sub_80053504(u8 *arg0) {
    s32 spC;
    s32 sp8;
    TBoss4Type2__sub_80053B48(arg0, &spC, &sp8);
    TBoss4Type2__sub_80053C8C(arg0, 2, spC, sp8);
}

void check_state_transition__11TBoss4Type2FPv(void *arg0) {
    if (TBoss4DarkFalz__sub_8004D990(M2C_FIELD(arg0, s32 *, 0x38C)) <= (s32) (0xC - M2C_FIELD(arg0, s32 *, 0x3C4))) {
        TBoss4Type2__sub_80053CEC(arg0, 5);
        return;
    }
    TBoss4Type2__sub_80053CEC(arg0, 6);
}
void TBoss4Type2__sub_800535A8(Boss_800535A8 *arg0) {
    u8 pos[0xC];
    s32 r;
    u8 *tbl = lbl_80485AE0;
    if (arg0->x3a8 == 1) {
        if (arg0->hp <= arg0->x3d8) {
            r = TBoss4Type2__sub_800522CC(3, tbl + 0x68C, tbl + 0x698);
        } else {
            r = TBoss4Type2__sub_800522CC(2, tbl + 0x6A4, tbl + 0x6AC);
        }
        switch (r) {
        case 8:
        case 9:
            TRaderMapCore__sub_80053914(arg0, pos);
            set_map_position__13TRaderMapCoreFPvPv(arg0, pos);
            TBoss4Type2__sub_80053CEC(arg0, r);
            break;
        default:
            TBoss4Type2__sub_80053CEC(arg0, 0xA);
            break;
        }
    } else {
        check_state_transition__11TBoss4Type2FPv(arg0);
    }
}

}
