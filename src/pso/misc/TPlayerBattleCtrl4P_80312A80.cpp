#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TPlayerBattleCtrl4PFPvs(void *arg0, s16 arg1);
M2C_UNK TPlayerBattleCtrl4P__sub_803101D4(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);

extern s32 TPlayerBattleCtrl4P__data_805D6AA8;

extern "C" void TPlayerBattleCtrl4P__sub_80312994();
extern "C" void TPlayerBattleCtrl4P__vt0();
extern "C" void TPlayerBattleCtrl4P__vt1();
extern "C" void TPlayerBattleCtrl4P__vt10();
extern "C" void TPlayerBattleCtrl4P__vt11();
extern "C" void TPlayerBattleCtrl4P__vt12();
extern "C" void TPlayerBattleCtrl4P__vt13();
extern "C" void TPlayerBattleCtrl4P__vt14();
extern "C" void TPlayerBattleCtrl4P__vt15();
extern "C" void TPlayerBattleCtrl4P__vt16();
extern "C" void TPlayerBattleCtrl4P__vt17();
extern "C" void TPlayerBattleCtrl4P__vt18();
extern "C" void TPlayerBattleCtrl4P__vt19();
extern "C" void TPlayerBattleCtrl4P__vt2();
extern "C" void TPlayerBattleCtrl4P__vt20();
extern "C" void TPlayerBattleCtrl4P__vt21();
extern "C" void TPlayerBattleCtrl4P__vt22();
extern "C" void TPlayerBattleCtrl4P__vt23();
extern "C" void TPlayerBattleCtrl4P__vt24();
extern "C" void TPlayerBattleCtrl4P__vt25();
extern "C" void TPlayerBattleCtrl4P__vt26();
extern "C" void TPlayerBattleCtrl4P__vt27();
extern "C" void TPlayerBattleCtrl4P__vt28();
extern "C" void TPlayerBattleCtrl4P__vt29();
extern "C" void TPlayerBattleCtrl4P__vt3();
extern "C" void TPlayerBattleCtrl4P__vt30();
extern "C" void TPlayerBattleCtrl4P__vt31();
extern "C" void TPlayerBattleCtrl4P__vt32();
extern "C" void TPlayerBattleCtrl4P__vt33();
extern "C" void TPlayerBattleCtrl4P__vt4();
extern "C" void TPlayerBattleCtrl4P__vt5();
extern "C" void TPlayerBattleCtrl4P__vt6();
extern "C" void TPlayerBattleCtrl4P__vt7();
extern "C" void TPlayerBattleCtrl4P__vt8();
extern "C" void TPlayerBattleCtrl4P__vt9();
extern "C" u8 lbl_80475930[];
extern "C" u8 lbl_8047595C[];
extern "C" u8 lbl_80475964[];
extern "C" u8 lbl_8047596C[];
extern "C" u8 lbl_80475978[];
extern "C" u8 lbl_804759E0[];
extern "C" u8 lbl_80475A34[];
extern "C" u8 lbl_80475A70[];
extern "C" u8 lbl_80475A98[];
extern "C" u8 lbl_80475AA0[];
extern "C" u8 lbl_80475B18[];
extern "C" u8 lbl_805DF228[];
extern "C" u8 lbl_805DF22C[];
extern "C" u8 lbl_805DF230[];
extern "C" u8 lbl_805DF234[];
extern "C" u8 lbl_805DF238[];
extern "C" u8 lbl_805DF23C[];
extern "C" void render__7TObjectFv();
extern "C" void render_shadows__7TObjectFv();
void *__vt__19TPlayerBattleCtrl4P[7] = {
    (void *)&lbl_80475930, (void *)&lbl_8047595C, (void *)&lbl_80475964, (void *)&lbl_8047596C,
    (void *)&lbl_80475978, (void *)&lbl_804759E0, (void *)&lbl_80475A34,
};
void *lbl_804E7D4C[211] = {
    (void *)&lbl_80475A70, (void *)&lbl_805DF228, (void *)&lbl_805DF22C, (void *)&lbl_80475A98,
    (void *)&lbl_80475AA0, (void *)&lbl_80475AA0, (void *)&lbl_80475B18, (void *)0x0,
    (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt0, (void *)0x0, (void *)0xffffffff,
    (void *)&TPlayerBattleCtrl4P__vt1, (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt2,
    (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt3, (void *)0x0,
    (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt4, (void *)0x0, (void *)0xffffffff,
    (void *)&TPlayerBattleCtrl4P__vt5, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt6, (void *)0x0, (void *)0xffffffff,
    (void *)&TPlayerBattleCtrl4P__vt7, (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt8,
    (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt9, (void *)0x0,
    (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt10, (void *)0x0, (void *)0xffffffff,
    (void *)&TPlayerBattleCtrl4P__vt11, (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt12,
    (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt13, (void *)0x0,
    (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt14, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt15,
    (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt16, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt17,
    (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt18, (void *)0x0,
    (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt19, (void *)0x0, (void *)0xffffffff,
    (void *)&TPlayerBattleCtrl4P__vt20, (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt21,
    (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt22, (void *)0x0,
    (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt23, (void *)0x0, (void *)0xffffffff,
    (void *)&TPlayerBattleCtrl4P__vt24, (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt25,
    (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt26, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt27,
    (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt28, (void *)0x0,
    (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt29, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt30, (void *)0x0, (void *)0xffffffff,
    (void *)&TPlayerBattleCtrl4P__vt31, (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt32,
    (void *)0x0, (void *)0xffffffff, (void *)&TPlayerBattleCtrl4P__vt33, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804E8098[4] = {
    (void *)&lbl_805DF230, (void *)&lbl_805DF234, (void *)&lbl_805DF238, (void *)&lbl_805DF23C,
};
void *lbl_804E80A8[6] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__19TPlayerBattleCtrl4PFPvs, (void *)&TPlayerBattleCtrl4P__sub_80312994,
    (void *)&render__7TObjectFv, (void *)&render_shadows__7TObjectFv,
};
#define lbl_804E80A8 ((M2C_UNK *)lbl_804E80A8)

void *__dt__19TPlayerBattleCtrl4PFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E80A8;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x24));
            M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        }
        TPlayerBattleCtrl4P__sub_803101D4(arg0);
        TPlayerBattleCtrl4P__data_805D6AA8 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 get_player_by_client_id(s32);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK TObjPlayer__sub_802C3D38(s32, s32);
M2C_UNK TPlayerBattleCtrl4P__sub_803102A4(void *);
M2C_UNK TPlayerBattleCtrl4P__sub_803112AC(void *, M2C_UNK);
extern s32 lbl_805D4110;
extern s32 lbl_805D5544;

void *TPlayerBattleCtrl4P__ct(void *arg0, void *parent) {
    s32 i;
    void **p;

    __ct__7TObjectFP7TObject(arg0, parent);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804E80A8;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D4110;
    TPlayerBattleCtrl4P__sub_803112AC(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    TPlayerBattleCtrl4P__sub_803102A4(arg0);
    p = lbl_804E7D4C;
    if (lbl_805D5544 == 0) {
        p = __vt__19TPlayerBattleCtrl4P;
    }
    M2C_FIELD(arg0, void ***, 0x294) = p;
    for (i = 0; i < 4; i++) {
        s32 pl = get_player_by_client_id(i);
        if (pl != 0) {
            TObjPlayer__sub_802C3D38(pl, get_char_index__23TAdSinglePlyChrSelectGCFUi(i));
        }
    }
    TPlayerBattleCtrl4P__data_805D6AA8 = (s32)arg0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

}
