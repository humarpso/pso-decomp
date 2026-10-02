#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct V2_802DF9B4 { f32 x, y; };

struct I2_802DF9B4 { s32 a, b; };

struct Blk_802DF9B4 { V2_802DF9B4 a, b, c; };

extern "C" {
u32 __nw__7TObjectFUl(int);
M2C_UNK __ct__9TAdBackGCFv(void *, void *);
M2C_UNK __ct__12TAdBackTxtGCFv(void *, void *);
M2C_UNK __ct__10TAdTitleGCFv(void *, void *, int);
u32 __ct__13TAdTitleTexGCFv(void *, void *);
u32 __ct__14TAdSelectCurGCFv(void *, void *, void *, void *);
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(u32, int, void *);
u32 __ct__13TAdGuideTxtGCFv(void *, void *);
s32 fn_802C6F20(s32, void *);
M2C_UNK fn_802D50B8(u32, void *, void *, void *);
s32 TAdMultiPlyChrSelectGC__sub_802E1024(void *, int, int, int);
u32 __ct__14TAdGameStartGCFv(void *, s32);
s32 TAdMultiPlyChrSelectGC__sub_8030E2E4(void *, int);
s32 create__16TAdChrSelBSlotGCFPv(void *);
M2C_UNK get_move_effect__22TAdMultiPlyChrSelectGCFi(s32);
extern V2_802DF9B4 lbl_804727A0[];
extern u8 lbl_80472808[];
extern I2_802DF9B4 lbl_80472828[];
extern Blk_802DF9B4 lbl_80472830[];
extern V2_802DF9B4 lbl_80472848[];
extern s32 tl_02;
extern s32 tl_clipout;
extern s32 TAdMultiPlyChrSelectGC__data_805DE898;
void TAdMultiPlyChrSelectGC__sub_802DF9B4(u8 *arg0);
}

extern "C" {

void update_state_serial__22TAdMultiPlyChrSelectGCFPv(void *arg0);
u32 get_field_118__22TAdEnterSerialAccessGCFv();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5594(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_chr_select_state__22TAdMultiPlyChrSelectGCFv();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s8 lbl_8050E3B8[];
extern u32 lbl_805D68CC;

void update_state_serial__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r5;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x90));
        M2C_FIELD(arg0, u32 *, 0x90) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x80));
        M2C_FIELD(arg0, u32 *, 0x80) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x8C));
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x98));
        M2C_FIELD(arg0, u32 *, 0x98) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
    TAdMultiPlyChrSelectGC__sub_802C5594(M2C_FIELD(arg0, s32 *, 0x5C));
    set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r5 + 1);
    if ((TWindowShortListCtrl__check_controller_button((void *)(lbl_8050E3B8 + 0x20), 2, temp_r5) != 0) && (get_chr_select_state__22TAdMultiPlyChrSelectGCFv() == 0)) {
        if ((get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) != 0xE) && ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA)) {
            TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1B;
            return;
        }
        if (TAdMultiPlyChrSelectGC__sub_802C6558() < 1) {
            TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1B;
            return;
        }
        goto block_19;
    }
block_19:
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) == 0xE) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
            M2C_FIELD(arg0, s32 *, 0x9C) = 0;
            if ((u32) lbl_805D68CC != get_field_118__22TAdEnterSerialAccessGCFv()) {
                TAdMultiPlyChrSelectGC__sub_802C6A10();
            }
        }
    }
}
void TAdMultiPlyChrSelectGC__sub_802DF9B4(u8 *arg0) {
    u32 p;
    p = __nw__7TObjectFUl(0x24);
    if (p != 0) {
        __ct__9TAdBackGCFv((void *) p, arg0);
    }
    p = __nw__7TObjectFUl(0x28);
    if (p != 0) {
        __ct__12TAdBackTxtGCFv((void *) p, arg0);
    }
    switch (M2C_FIELD(arg0, s32 *, 0x48)) {
    case 0:
    case 2:
        p = __nw__7TObjectFUl(0x138);
        if (p != 0) {
            __ct__10TAdTitleGCFv((void *) p, arg0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x68) = TAdMultiPlyChrSelectGC__sub_8030E2E4(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x60) = TAdMultiPlyChrSelectGC__sub_802E1024(arg0, 1, -1, 0);
        break;
    case 1: {
        p = __nw__7TObjectFUl(0x138);
        if (p != 0) {
            __ct__10TAdTitleGCFv((void *) p, arg0, 8);
        }
        M2C_FIELD(arg0, s32 *, 0x68) = TAdMultiPlyChrSelectGC__sub_8030E2E4(arg0, 2);
        M2C_FIELD(arg0, s32 *, 0x6C) = create__16TAdChrSelBSlotGCFPv(arg0);
        I2_802DF9B4 pos = lbl_80472828[0];
        p = __nw__7TObjectFUl(0x708);
        if (p != 0) {
            p = __ct__14TAdSelectCurGCFv((void *) p, arg0, &pos, lbl_80472808);
        }
        M2C_FIELD(arg0, u32 *, 0x70) = p;
        M2C_FIELD(arg0, s32 *, 0x60) = TAdMultiPlyChrSelectGC__sub_802E1024(arg0, 2, -1, 0);
        break;
    }
    }
    p = __nw__7TObjectFUl(0x44);
    if (p != 0) {
        p = __ct__13TAdGuideTxtGCFv((void *) p, arg0);
    }
    M2C_FIELD(arg0, u32 *, 0x64) = p;
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, u32 *, 0x64), 0, &TAdMultiPlyChrSelectGC__data_805DE898);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, u32 *, 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
    p = __nw__7TObjectFUl(0x9C);
    if (p != 0) {
        p = __ct__13TAdTitleTexGCFv((void *) p, arg0);
    }
    Blk_802DF9B4 blk = lbl_80472830[0];
    fn_802D50B8(p, &blk.a, &blk.b, &blk.c);
    p = __nw__7TObjectFUl(0xD4);
    if (p != 0) {
        p = __ct__14TAdGameStartGCFv((void *) p, tl_clipout);
    }
    M2C_FIELD(arg0, u32 *, 0x78) = p;
    V2_802DF9B4 v = lbl_80472848[0];
    v.x = lbl_804727A0[0].x;
    v.y = lbl_804727A0[0].y;
    M2C_FIELD(arg0, s32 *, 0x5C) = fn_802C6F20(tl_02, &v);
    get_move_effect__22TAdMultiPlyChrSelectGCFi(tl_clipout);
}

}
