#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TObjFogCollisionPoison__sub_801531EC(void *, int, int);
void TObjFogCollisionPoison__sub_801534E8(u8 *arg0, u16 arg1);
s32 TFogCtrl__sub_800FAB94(s32, s32, s32);
s32 TFogCtrl__sub_800FAC10(s32, s32);
s32 is_any_teammate_in_state__10TObjPlayerFv(void);
void TObjFogCollisionPoison__sub_801530DC(u8 *arg0);
}

extern "C" {

void *TObjFogCollisionPoison__sub_8015302C(void *arg0, s16 arg1);
void TObjFogCollisionPoison__sub_801533BC(void);
u8 check_switch__22TObjFogCollisionPoisonFPv(void *arg0);
void create__22TObjFogCollisionPoisonFv(void);
void record_hit__22TObjFogCollisionPoisonFPvii(void *arg0, s32 arg1, s32 arg2);
u8 TODoorAncient08__sub_80229220(u16);
M2C_UNK TObjFogCollisionPoison__sub_801532C8(void *, s32, s32);
s32 TObjFogCollisionSwitch__sub_80153A0C();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(M2C_UNK);
s32 is_split_screen();

extern M2C_UNK lbl_804AF7B0[];

void *TObjFogCollisionPoison__sub_8015302C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804AF7B0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjFogCollisionPoison__sub_801530DC(u8 *arg0) {
    s32 temp_r0;
    s32 var_r4;
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
        switch (temp_r0) {
        case 0:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0) {
                var_r4 = M2C_FIELD(arg0, s32 *, 0x20);
                if (var_r4 >= 0x1000) {
                    var_r4 -= 0x1000;
                }
                if (var_r4 < 0) {
                    var_r4 = 0;
                } else if (var_r4 >= 0x80) {
                    var_r4 = 0x7F;
                }
                if ((s32) M2C_FIELD(arg0, s32 *, 0x24) != 0) {
                    TFogCtrl__sub_800FAB94(M2C_FIELD(arg0, s32 *, 0x28), var_r4, 0);
                } else {
                    TFogCtrl__sub_800FAB94(M2C_FIELD(arg0, s32 *, 0x28), var_r4, 1);
                }
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            } else {
                M2C_FIELD(arg0, s32 *, 0x2C) = 1;
                if ((s32) M2C_FIELD(arg0, s32 *, 0x24) != 0) {
                    TFogCtrl__sub_800FAC10(M2C_FIELD(arg0, s32 *, 0x28), 0);
                } else {
                    TFogCtrl__sub_800FAC10(M2C_FIELD(arg0, s32 *, 0x28), 1);
                }
            }
            break;
        case 1:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            }
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
}

void record_hit__22TObjFogCollisionPoisonFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) <= arg1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
        M2C_FIELD(arg0, s32 *, 0x20) = arg1;
        M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    }
}

extern s32 tl_05;
extern s32 lbl_805D53A0;

void create__22TObjFogCollisionPoisonFv(void) {
    s32 var_r31;
    void *obj;

    if (is_split_screen() == 0) {
        obj = __nw__7TObjectFUl(0x30);
        if (obj != NULL) {
            TObjFogCollisionPoison__sub_801532C8(obj, tl_05, lbl_805D53A0);
        }
    } else {
        var_r31 = 0;
        do {
            obj = __nw__7TObjectFUl(0x30);
            if (obj != NULL) {
                TObjFogCollisionPoison__sub_801532C8(obj, tl_05, var_r31);
            }
            var_r31 += 1;
        } while (var_r31 != 4);
    }
}

void TObjFogCollisionPoison__sub_801533BC(void) {  }

u8 check_switch__22TObjFogCollisionPoisonFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = TObjFogCollisionSwitch__sub_80153A0C();
    return (u8) (temp_r31 == TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s32 *, 0x8C)));
}

void TObjFogCollisionPoison__sub_801534E8(u8 *arg0, u16 arg1) {
    TObjFogCollisionPoison__sub_801531EC((void *) (arg1), (int) (M2C_FIELD(arg0, s32 *, 0x84)), (int) ((u8) (M2C_FIELD(arg0, s32 *, 0x88) == 0)));
}

}
