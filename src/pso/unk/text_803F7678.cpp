#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803F76F4_lbl_805A9008 {
    M2C_UNK value;
    u8 remaining[0x108C];
};

struct RecoveredGlobal_803F7790_lbl_805A9008 {
    M2C_UNK value;
    u8 remaining[0x108C];
};

struct RecoveredGlobal_803F7984_lbl_805AA098 {
    M2C_UNK value;
    u8 remaining[0x4C14];
};

struct RecoveredGlobal_803F79C0_lbl_805A9008 {
    M2C_UNK value;
    u8 remaining[0x108C];
};

struct RecoveredGlobal_803F7A30_lbl_805C18A0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
extern RecoveredGlobal_803F76F4_lbl_805A9008 lbl_805A9008;
void TLobby__sub_803F76F4(u8 *arg0);
extern RecoveredGlobal_803F76F4_lbl_805A9008 lbl_805A9008;
void TLobby__sub_803F7790(u8 *arg0);
extern RecoveredGlobal_803F7984_lbl_805AA098 lbl_805AA098;
extern M2C_UNK lbl_805D7A00;
void TLobby__sub_803F7984(u8 *arg0);
extern RecoveredGlobal_803F76F4_lbl_805A9008 lbl_805A9008;
void TLobby__sub_803F79C0(u8 *arg0);
s32 TAdSinglePlyChrSelectGC__sub_8042E7B8(s32);
s32 TLobby__sub_803F8044(s32 arg0);
void TLobby__sub_803F95E4(u32);
void TLobby__sub_803F97E8(s32);
void TLobby__sub_803F9AEC(s32);
void TLobby__sub_803F9B48(u32);
s16 TLobby__sub_80427D0C(s16);
s16 TLobby__sub_80427D40(void *, u16, void *);
s32 TLobby__sub_80428094(s16);
void TAdSinglePlyChrSelectGC__sub_8042D604(void);
s32 TAdSinglePlyChrSelectGC__sub_8042E768(u32);
extern s16 lbl_805D47F0;
extern s32 lbl_805D7A08;
extern u32 lbl_805D7A0C;
extern s16 lbl_805D7A34;
void TLobby__sub_803F8238(void);
M2C_UNK TUdpSocket__sub_803F95A4(int);
M2C_UNK TLobby__sub_803F95C4(int);
void TLobby__sub_803F95E4(u32);
void TLobby__sub_803F9AEC(s32);
void TLobby__sub_803F9B48(u32);
extern RecoveredGlobal_803F7A30_lbl_805C18A0 lbl_805C18A0;
void TLobby__sub_803F7A30(void);
extern s32 lbl_805D7A10;
extern s32 lbl_805D7A14;
u32 TLobby__sub_803F8440(u8 *arg0, s32 arg1, u32 arg2);
s32 TLobby__sub_803F861C(int);
extern s16 lbl_805D47F8;
extern u16 lbl_805D47FA;
extern u16 lbl_805D47FC;
extern s32 lbl_805D4800;
extern s16 lbl_805D4804;
extern s32 lbl_805D4808;
extern s32 lbl_805D480C;
extern s32 lbl_805D7A48;
extern s32 lbl_805D7A4C;
s32 TLobby__sub_803F8564(u8 *arg0);
}

extern "C" {

void TLobby__sub_803F7678(void);
s32 TLobby__sub_803F767C(void);
void TLobby__sub_803F76F0(void);
void TLobby__sub_803F778C(void);
void TLobby__sub_803F77E0(void);
void TLobby__sub_803F7980(void);
void TLobby__sub_803F79AC(void);
void TLobby__sub_803F79B0(u8 *arg0);
void TLobby__sub_803F79BC(void);
void TLobby__sub_803F7D54(s32 arg0);
void TLobby__sub_803F7D5C(s32 arg0);
void TLobby__sub_803F808C(void);
s32 TLobby__sub_803F811C(s16 *arg0);
void TLobby__sub_803F86BC(void);

void TLobby__sub_803F7678(void) {

}

s32 TLobby__sub_803F767C(void) {
    return 0;
}

void TLobby__sub_803F76F0(void) {

}

typedef char RecoveredGlobal_803F76F4_lbl_805A9008_size[sizeof(RecoveredGlobal_803F76F4_lbl_805A9008) == 0x1090 ? 1 : -1];
void TLobby__sub_803F76F4(u8 *arg0) {
    struct Fields_arg0 { u8 * field_0; u8 * field_4; u8 * field_8; u8 * field_C; u8 * field_10; u8 * field_14; u8 * field_18; u8 * field_1C; M2C_UNK * field_20; s16 field_24; s16 field_26; s16 field_28; s16 field_2A; s16 field_2C; s16 field_2E; s16 field_30; s16 field_32; s16 field_34; s8 field_36; s8 field_37; s16 field_38; };
    ((Fields_arg0*)arg0)->field_0 = (u8 *)(&lbl_805A9008.value) + 0x808;
    ((Fields_arg0*)arg0)->field_4 = (u8 *)(&lbl_805A9008.value) + 0x788;
    ((Fields_arg0*)arg0)->field_8 = (u8 *)(&lbl_805A9008.value) + 0x708;
    ((Fields_arg0*)arg0)->field_C = (u8 *)(&lbl_805A9008.value) + 0x608;
    ((Fields_arg0*)arg0)->field_10 = (u8 *)(&lbl_805A9008.value) + 0x508;
    ((Fields_arg0*)arg0)->field_14 = (u8 *)(&lbl_805A9008.value) + 0x384;
    ((Fields_arg0*)arg0)->field_18 = (u8 *)(&lbl_805A9008.value) + 0x200;
    ((Fields_arg0*)arg0)->field_1C = (u8 *)(&lbl_805A9008.value) + 0x100;
    ((Fields_arg0*)arg0)->field_20 = &lbl_805A9008.value;
    ((Fields_arg0*)arg0)->field_24 = 0x80;
    ((Fields_arg0*)arg0)->field_26 = 0x80;
    ((Fields_arg0*)arg0)->field_28 = 0x80;
    ((Fields_arg0*)arg0)->field_2A = 0x100;
    ((Fields_arg0*)arg0)->field_2C = 0x100;
    ((Fields_arg0*)arg0)->field_2E = 0x181;
    ((Fields_arg0*)arg0)->field_30 = 0x181;
    ((Fields_arg0*)arg0)->field_32 = 0x100;
    ((Fields_arg0*)arg0)->field_34 = 0x100;
    ((Fields_arg0*)arg0)->field_36 = 0xA;
    ((Fields_arg0*)arg0)->field_37 = 5;
    ((Fields_arg0*)arg0)->field_38 = 3;
}

void TLobby__sub_803F778C(void) {

}

typedef char RecoveredGlobal_803F7790_lbl_805A9008_size[sizeof(RecoveredGlobal_803F7790_lbl_805A9008) == 0x1090 ? 1 : -1];
void TLobby__sub_803F7790(u8 *arg0) {
    struct Fields_arg0 { u8 * field_0; u8 * field_4; u8 * field_8; s16 field_C; s16 field_E; s16 field_10; s8 field_12; s8 field_13; s16 field_14; };
    ((Fields_arg0*)arg0)->field_0 = (unsigned char *) ((void *) ((u8 *)&(*(RecoveredGlobal_803F7790_lbl_805A9008 *)&lbl_805A9008).value + 0xA08));
    ((Fields_arg0*)arg0)->field_4 = (unsigned char *) ((void *) ((u8 *)&(*(RecoveredGlobal_803F7790_lbl_805A9008 *)&lbl_805A9008).value + 0x988));
    ((Fields_arg0*)arg0)->field_8 = (unsigned char *) ((void *) ((u8 *)&(*(RecoveredGlobal_803F7790_lbl_805A9008 *)&lbl_805A9008).value + 0x888));
    ((Fields_arg0*)arg0)->field_C = 0x80;
    ((Fields_arg0*)arg0)->field_E = 0x80;
    ((Fields_arg0*)arg0)->field_10 = 0x100;
    ((Fields_arg0*)arg0)->field_12 = 0xA;
    ((Fields_arg0*)arg0)->field_13 = 5;
    ((Fields_arg0*)arg0)->field_14 = 3;
}

void TLobby__sub_803F77E0(void) {

}

void TLobby__sub_803F7980(void) {

}

typedef char RecoveredGlobal_803F7984_lbl_805AA098_size[sizeof(RecoveredGlobal_803F7984_lbl_805AA098) == 0x4C18 ? 1 : -1];
void TLobby__sub_803F7984(u8 *arg0) {
    struct Fields_arg0 { u8 pad_0[12]; M2C_UNK * field_C; M2C_UNK * field_10; s16 field_14; s16 field_16; };
    ((Fields_arg0*)arg0)->field_C = &lbl_805D7A00;
    ((Fields_arg0*)arg0)->field_10 = &lbl_805AA098.value;
    ((Fields_arg0*)arg0)->field_16 = 4;
    ((Fields_arg0*)arg0)->field_14 = 0x5DC;
}

void TLobby__sub_803F79AC(void) {

}

void TLobby__sub_803F79B0(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 8) = 0x28;
}

void TLobby__sub_803F79BC(void) {

}

extern s32 lbl_805D7A2C;

typedef char RecoveredGlobal_803F79C0_lbl_805A9008_size[sizeof(RecoveredGlobal_803F79C0_lbl_805A9008) == 0x1090 ? 1 : -1];
void TLobby__sub_803F79C0(u8 *arg0) {
    struct Fields_arg0 { s32 field_0; u8 * field_4; s16 field_8; s16 field_A; u8 * field_C; u8 * field_10; u8 * field_14; u8 * field_18; u8 * field_1C; s16 field_20; s16 field_22; s16 field_24; s16 field_26; s16 field_28; };
    ((Fields_arg0*)arg0)->field_4 = (u8 *)(&(*(RecoveredGlobal_803F79C0_lbl_805A9008 *)&lbl_805A9008).value) + 0x4B78;
    ((Fields_arg0*)arg0)->field_8 = 2;
    ((Fields_arg0*)arg0)->field_A = 0x226;
    ((Fields_arg0*)arg0)->field_C = (u8 *)(&(*(RecoveredGlobal_803F79C0_lbl_805A9008 *)&lbl_805A9008).value) + 0x4A60;
    ((Fields_arg0*)arg0)->field_10 = (u8 *)(&(*(RecoveredGlobal_803F79C0_lbl_805A9008 *)&lbl_805A9008).value) + 0x3A48;
    ((Fields_arg0*)arg0)->field_14 = (u8 *)(&(*(RecoveredGlobal_803F79C0_lbl_805A9008 *)&lbl_805A9008).value) + 0x31B0;
    ((Fields_arg0*)arg0)->field_18 = (u8 *)(&(*(RecoveredGlobal_803F79C0_lbl_805A9008 *)&lbl_805A9008).value) + 0x2918;
    ((Fields_arg0*)arg0)->field_1C = (u8 *)(&(*(RecoveredGlobal_803F79C0_lbl_805A9008 *)&lbl_805A9008).value) + 0x2800;
    ((Fields_arg0*)arg0)->field_0 = 0x18;
    ((Fields_arg0*)arg0)->field_20 = 0x46;
    ((Fields_arg0*)arg0)->field_22 = 0x406;
    ((Fields_arg0*)arg0)->field_24 = 0x226;
    ((Fields_arg0*)arg0)->field_26 = 0x226;
    ((Fields_arg0*)arg0)->field_28 = 0x46;
}

typedef char RecoveredGlobal_803F7A30_lbl_805C18A0_size[sizeof(RecoveredGlobal_803F7A30_lbl_805C18A0) == 0x10 ? 1 : -1];
void TLobby__sub_803F7A30(void) {
    TLobby__sub_803F95C4((int) (M2C_FIELD(&lbl_805C18A0.value, s32 *, 0)));
    TLobby__sub_803F9AEC((s32)((int) (M2C_FIELD(&lbl_805C18A0.value, s32 *, 4))));
    TLobby__sub_803F9B48((u32)((int) (M2C_FIELD(&lbl_805C18A0.value, s32 *, 4))));
    TUdpSocket__sub_803F95A4((int) (M2C_FIELD(&lbl_805C18A0.value, s32 *, 0)));
    TLobby__sub_803F95E4((u32)((int) (M2C_FIELD(&lbl_805C18A0.value, s32 *, 0))));
}

void TLobby__sub_803F7D54(s32 arg0) {
    lbl_805D7A2C = arg0;
}

extern s32 lbl_805D7A30;

void TLobby__sub_803F7D5C(s32 arg0) {
    lbl_805D7A30 -= arg0;
}

s32 TLobby__sub_803F8044(s32 arg0) {
    s32 var_r3;
    if (arg0 == 0) {
        var_r3 = 1;
    } else {
        var_r3 = 2;
    }
    if (TAdSinglePlyChrSelectGC__sub_8042E7B8(var_r3) == 1) {
        return 0;
    }
    return -1;
}

void TLobby__sub_803F808C(void) {

}

s32 TLobby__sub_803F811C(s16 *arg0) {
    *arg0 = 0;
    return 0;
}

void TLobby__sub_803F8238(void) {
    s32 var_r31;
    if ((s16) lbl_805D7A34 != 0) {
        if ((s16) lbl_805D47F0 >= 0) {
            TLobby__sub_80428094(lbl_805D47F0);
            var_r31 = 0;
loop_3:
            TLobby__sub_803F97E8(0xA);
            if ((TLobby__sub_80427D40(NULL, 0U, NULL) >= 0) && (TLobby__sub_80427D0C(lbl_805D47F0) != -1)) {
                var_r31 += 1;
                if (var_r31 < 0x12C) {
                    goto loop_3;
                }
            }
            if (TLobby__sub_80427D0C(lbl_805D47F0) != -1) {
                TLobby__sub_80428094(lbl_805D47F0);
            }
            lbl_805D47F0 = -1;
            goto block_10;
        }
    } else {
        TLobby__sub_803F9AEC(lbl_805D7A08);
        TLobby__sub_803F9B48((u32) lbl_805D7A08);
        TLobby__sub_803F95E4(lbl_805D7A0C);
block_10:
        if ((u32) (TAdSinglePlyChrSelectGC__sub_8042E768(0U) - 2) <= 1U) {
            TAdSinglePlyChrSelectGC__sub_8042D604();
        }
    }
}

#pragma push
#pragma opt_common_subs off
u32 TLobby__sub_803F8440(u8 *arg0, s32 arg1, u32 arg2) {
    u32 temp_r3;
    lbl_805D7A10 = arg1;
    lbl_805D7A14 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_r3 = arg1 + lbl_805D7A14;
    if (temp_r3 > arg2) {
        lbl_805D7A10 = 0;
        lbl_805D7A14 = 0;
        return 0U;
    }
    return temp_r3;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
s32 TLobby__sub_803F8564(u8 *arg0) {
    s32 temp_r5;
    if ((u16) M2C_FIELD(arg0, u16 *, 4) > 0x200U) {
        return -1;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 6) > 0x400U) {
        return -1;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_r5 < 0x400) || (temp_r5 > 0xFFFF)) {
        return -1;
    }
    lbl_805D47F8 = M2C_FIELD(arg0, s16 *, 0);
    lbl_805D4804 = M2C_FIELD(arg0, s16 *, 2);
    lbl_805D47FA = M2C_FIELD(arg0, u16 *, 4);
    lbl_805D47FC = M2C_FIELD(arg0, u16 *, 6);
    lbl_805D4800 = M2C_FIELD(arg0, s32 *, 8);
    lbl_805D4808 = M2C_FIELD(arg0, s32 *, 0xC);
    lbl_805D480C = M2C_FIELD(arg0, s32 *, 0x10);
    lbl_805D7A48 = M2C_FIELD(arg0, s32 *, 0x14);
    lbl_805D7A4C = M2C_FIELD(arg0, s32 *, 0x18);
    return TLobby__sub_803F861C((int) (0));
}
#pragma pop

void TLobby__sub_803F86BC(void) {

}

}
