#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80153084_lbl_804AF7B0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801532C8_lbl_804AF7C8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_801531EC_TObjFogCollisionPoison__data_8050D430 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80153258_lbl_804AF7C8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80153258_TObjFogCollisionPoison__data_8050D430 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

extern "C" {
void TObjFogCollisionPoison__sub_801534E8(u8 *arg0, u16 arg1);
s32 TFogCtrl__sub_800FAB94(s32, s32, s32);
s32 TFogCtrl__sub_800FAC10(s32, s32);
s32 is_any_teammate_in_state__10TObjPlayerFv(void);
void TObjFogCollisionPoison__sub_801530DC(u8 *arg0);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804AF7B0[];
u8 *TObjFogCollisionPoison__sub_80153084(u8 *arg0, u8 *arg1, s16 arg2);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_801532C8_lbl_804AF7C8 lbl_804AF7C8;
extern RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 TObjFogCollisionPoison__data_8050D430;
extern s32 lbl_805D2E84;
u8 *TObjFogCollisionPoison__sub_801532C8(u8 *arg0, u8 *arg1, s32 arg2);
void record_hit__22TObjFogCollisionPoisonFPvii(void *arg0, s32 arg1, s32 arg2);
extern RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 TObjFogCollisionPoison__data_8050D430;
void TObjFogCollisionPoison__sub_801531EC(s32 arg0, s32 arg1, s32 arg2);
void __dt__7TObjectFv(void *, int);
void __dl__7TObjectFPv(void *);
extern RecoveredGlobal_801532C8_lbl_804AF7C8 lbl_804AF7C8;
extern RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 TObjFogCollisionPoison__data_8050D430;
u8 *TObjFogCollisionPoison__sub_80153258(u8 *arg0, s16 arg1);
}

extern "C" {

void *TObjFogCollisionPoison__sub_8015302C(void *arg0, s16 arg1);
void TObjFogCollisionPoison__sub_801533BC(void);
u8 check_switch__22TObjFogCollisionPoisonFPv(void *arg0);
void create__22TObjFogCollisionPoisonFv(void);
void record_hit__22TObjFogCollisionPoisonFPvii(void *arg0, s32 arg1, s32 arg2);
u8 TODoorAncient08__sub_80229220(u16);
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

typedef char RecoveredGlobal_80153084_lbl_804AF7B0_size[sizeof(RecoveredGlobal_80153084_lbl_804AF7B0) == 0x18 ? 1 : -1];
u8 *TObjFogCollisionPoison__sub_80153084(u8 *arg0, u8 *arg1, s16 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80153084_lbl_804AF7B0 *)&lbl_804AF7B0).value;
    M2C_FIELD(arg0, s16 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x96;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
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

typedef char RecoveredGlobal_801531EC_TObjFogCollisionPoison__data_8050D430_size[sizeof(RecoveredGlobal_801531EC_TObjFogCollisionPoison__data_8050D430) == 0x30 ? 1 : -1];
void TObjFogCollisionPoison__sub_801531EC(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;
    if ((arg0 >= 0) && (arg0 < 0xC)) {
        temp_r3 = M2C_FIELD(&(*(RecoveredGlobal_801531EC_TObjFogCollisionPoison__data_8050D430 *)&TObjFogCollisionPoison__data_8050D430).value, M2C_UNK *, (arg0 * 4));
        if (temp_r3 != 0U) {
            record_hit__22TObjFogCollisionPoisonFPvii((void *)((int) (temp_r3)), (s32)((void *) (arg1)), (s32)((void *) (arg2)));
        }
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

typedef char RecoveredGlobal_801532C8_lbl_804AF7C8_size[sizeof(RecoveredGlobal_801532C8_lbl_804AF7C8) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430_size[sizeof(RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430) == 0x30 ? 1 : -1];

typedef char RecoveredGlobal_80153258_lbl_804AF7C8_size[sizeof(RecoveredGlobal_80153258_lbl_804AF7C8) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_80153258_TObjFogCollisionPoison__data_8050D430_size[sizeof(RecoveredGlobal_80153258_TObjFogCollisionPoison__data_8050D430) == 0x30 ? 1 : -1];
u8 *TObjFogCollisionPoison__sub_80153258(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80153258_lbl_804AF7C8 *)&lbl_804AF7C8).value;
        M2C_FIELD(&(*(RecoveredGlobal_80153258_TObjFogCollisionPoison__data_8050D430 *)&TObjFogCollisionPoison__data_8050D430).value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x28) * 4)) = 0;
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)((s32) arg0));
        }
    }
    return arg0;
}

u8 *TObjFogCollisionPoison__sub_801532C8(u8 *arg0, u8 *arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804AF7C8.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2E84;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(&TObjFogCollisionPoison__data_8050D430.value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x28) * 4)) = (long) (arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    return arg0;
}

void create__22TObjFogCollisionPoisonFv(void) {
    s32 var_r31;
    void *obj;

    if (is_split_screen() == 0) {
        obj = __nw__7TObjectFUl(0x30);
        if (obj != NULL) {
            TObjFogCollisionPoison__sub_801532C8((u8 *)(obj), (u8 *)(tl_05), (s32)(lbl_805D53A0));
        }
    } else {
        var_r31 = 0;
        do {
            obj = __nw__7TObjectFUl(0x30);
            if (obj != NULL) {
                TObjFogCollisionPoison__sub_801532C8((u8 *)(obj), (u8 *)(tl_05), (s32)(var_r31));
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
    TObjFogCollisionPoison__sub_801531EC((s32)((void *) (arg1)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x84))), (s32)((int) ((u8) (M2C_FIELD(arg0, s32 *, 0x88) == 0))));
}

}
