#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803DEB74_lbl_8058D8E0 {
    M2C_UNK value;
    u8 remaining[0xCC];
};

struct Ent_803DEBC8 { u32 mask; u32 val; };

struct V4_803DECFC { f32 a, b, c, d; };

extern "C" {
extern RecoveredGlobal_803DEB74_lbl_8058D8E0 lbl_8058D8E0;
u8 *TKeyBoardControl__sub_803DEB74(u32 arg0);
s16 TKeyBoardControl__sub_803DEC10(s16 x);
M2C_UNK Dolphin_PADRead(void *, void *);
extern M2C_UNK lbl_8058D880[];
extern RecoveredGlobal_803DEB74_lbl_8058D8E0 lbl_8058D8E0;
extern M2C_UNK lbl_8058D9B0[];
void TKeyBoardControl__sub_803DE9C4(void);
extern Ent_803DEBC8 lbl_804FC6E4[];
extern u32 lbl_805D46E0;
s32 TKeyBoardControl__sub_803DEBC8(u16 arg0);
extern V4_803DECFC lbl_8058D4C0;
extern u8 TObjLight__data_8058D528[];
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern f32 lbl_805D7790;
extern s32 lbl_805D7794;
extern const f32 lbl_805E0FB0;
extern const f32 lbl_805E0FB4;
extern const f32 lbl_805E0FB8;
extern const f32 lbl_805E0FBC;
void GXInitLightAttnK(void *, f32, f32, f32);
void fn_803E2070(void);
void TObjLight__sub_803DECFC(void);
extern u8 lbl_8058D490[];
extern u32 lbl_805D776C;
extern u32 lbl_805D7770;
extern u32 lbl_805D7774;
void PSMTXIdentity(void *);
void move_data__6TLobbyFv(u32, void *, s32);
void TObjPlayer__sub_803DEC98(s32 arg0, s32 arg1);
}

extern "C" {

void clamp_axes__16TKeyBoardControlFPv(u8 *arg0);
void set_some_id__FUl(s32 arg0);

#pragma push
#pragma scheduling off
typedef char RecoveredGlobal_803DEB74_lbl_8058D8E0_size[sizeof(RecoveredGlobal_803DEB74_lbl_8058D8E0) == 0xD0 ? 1 : -1];

void TKeyBoardControl__sub_803DE9C4(void) {
    M2C_FIELD(((M2C_UNK *)&lbl_8058D8E0), M2C_UNK **, 0x30) = lbl_8058D9B0;
    M2C_FIELD(((M2C_UNK *)&lbl_8058D8E0), u8 **, 0x64) = (unsigned char *) ((void *) ((u8 *)lbl_8058D9B0 + 0x78));
    M2C_FIELD(((M2C_UNK *)&lbl_8058D8E0), u8 **, 0x98) = (unsigned char *) ((void *) ((u8 *)lbl_8058D9B0 + 0xF0));
    M2C_FIELD(((M2C_UNK *)&lbl_8058D8E0), u8 **, 0xCC) = (unsigned char *) ((void *) ((u8 *)lbl_8058D9B0 + 0x168));
    Dolphin_PADRead((void *) (lbl_8058D880), (void *) (lbl_8058D9B0));
}

u8 *TKeyBoardControl__sub_803DEB74(u32 arg0) {
    s32 var_r5;
    var_r5 = 0;
    switch (arg0) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        break;
    case 0:
        var_r5 = 0;
        break;
    case 6:
        var_r5 = 1;
        break;
    case 12:
        var_r5 = 2;
        break;
    case 18:
        var_r5 = 3;
        break;
    }
    return (u8 *)(&lbl_8058D8E0.value) + (var_r5 * 0x34);
}
#pragma pop

s32 TKeyBoardControl__sub_803DEBC8(u16 arg0) {
    s32 r = 0;
    u32 i;
    for (i = 0; i < lbl_805D46E0; i++) {
        if (arg0 & lbl_804FC6E4[i].mask) r |= lbl_804FC6E4[i].val;
    }
    return r;
}

#pragma push
#pragma scheduling off
#pragma optimize_for_size off
s16 TKeyBoardControl__sub_803DEC10(s16 x) {
    return (x * 128) / 89;
}
#pragma pop

void clamp_axes__16TKeyBoardControlFPv(u8 *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 2);
    if ((s8) temp_r0 > 0x59) {
        M2C_FIELD(arg0, s8 *, 2) = 0x59;
    } else if ((s8) temp_r0 < -0x59) {
        M2C_FIELD(arg0, s8 *, 2) = -0x59;
    }
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 3);
    if ((s8) temp_r0_2 > 0x59) {
        M2C_FIELD(arg0, s8 *, 3) = 0x59;
        return;
    }
    if ((s8) temp_r0_2 < -0x59) {
        M2C_FIELD(arg0, s8 *, 3) = -0x59;
    }
}

extern s32 some_id_805c6f74;

void TObjPlayer__sub_803DEC98(s32 arg0, s32 arg1) {
    lbl_805D7770 = 0xE0000000;
    lbl_805D7774 = 0xE0000000;
    lbl_805D776C = (arg1 - 1) * 0x30 + 0xE0000000;
    PSMTXIdentity(lbl_8058D490 == 0 ? (u8 *)0xE0000000 : lbl_8058D490);
    move_data__6TLobbyFv(lbl_805D7770, lbl_8058D490, 0x30);
}

void TObjLight__sub_803DECFC(void) {
    some_id_805c6f74 = 0;
    lbl_805D7784 = -1;
    lbl_805D7780 = 0;
    lbl_8058D4C0.a = lbl_805E0FB0;
    lbl_8058D4C0.b = lbl_805E0FB4;
    lbl_8058D4C0.c = lbl_805E0FB4;
    lbl_8058D4C0.d = lbl_805E0FB4;
    lbl_805D7794 = 0;
    lbl_805D7790 = lbl_805E0FB8;
    GXInitLightAttnK(TObjLight__data_8058D528, lbl_805E0FBC, lbl_805E0FB4, lbl_805E0FB4);
    fn_803E2070();
}

void set_some_id__FUl(s32 arg0) {
    some_id_805c6f74 = arg0;
}

}
