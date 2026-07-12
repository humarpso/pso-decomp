#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_8010A050(void* p);
s32 TObjPlayer__sub_8010A058(void* p);
void TObjPlayer__sub_8010A060(void *arg0);
void *TObjPlayer__sub_8010A178(void *arg0, s16 arg1);
M2C_UNK TBoss3Volopt__sub_8003F108();
M2C_UNK TLobby__sub_800869A4(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDellBiter__sub_80087350(s32, s32);
u32 TObjPlayer__sub_80102AA8();
s32 TObjPlayer__sub_802034B0();
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s16 fn_80117F14(u16, s8 *);
M2C_UNK init__9TItemDataFv(s8 *);
M2C_UNK queue_destruction__7TObjectFv(void *);

s32 TObjPlayer__sub_8010A050(void* p) { return *(s32*)((char*)p + 0x24); }
s32 TObjPlayer__sub_8010A058(void* p) { return *(s32*)((char*)p + 0xf4); }

extern const f64 lbl_8043E2C0;
extern const f32 lbl_805DAB58;

struct TItemData8_8010a060 { s8 a; s8 b; u8 c; s8 pad[21]; };

void TObjPlayer__sub_8010A060(void *arg0) {
    struct TItemData8_8010a060 sp8;
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != TObjPlayer__sub_80102AA8()) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (lbl_805DAB58 == (f32) M2C_FIELD(arg0, s32 *, 0x1C)) {
        init__9TItemDataFv(&sp8.a);
        sp8.a = 1;
        sp8.b = 2;
        sp8.c = M2C_FIELD(arg0, u8 *, 0x2A);
        if ((fn_80117F14(M2C_FIELD(arg0, u16 *, 0x28), &sp8.a) > 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x20) != -1)) {
            temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x28));
            if (temp_r3 != 0) {
                TBoss3Volopt__sub_8003F108();
                if (TObjPlayer__sub_802034B0() == 1) {
                    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
                        TLobby__sub_800869A4(temp_r3 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x20), 0, 0xA);
                    } else {
                        TObjEneDellBiter__sub_80087350(temp_r3 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x20));
                    }
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
}

extern M2C_UNK lbl_8049F130[];

void *TObjPlayer__sub_8010A178(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F130;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
