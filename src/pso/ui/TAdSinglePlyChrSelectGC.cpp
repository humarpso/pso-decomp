#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct P_802D4F2C { f32 x, y; };

struct T_802D4F2C { P_802D4F2C p[3]; };

extern "C" {
void *__nw__7TObjectFUl(u32);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK __ct__9TAdBackGCFv(void *, void *);
M2C_UNK __ct__12TAdBackTxtGCFv(void *, void *);
M2C_UNK __ct__10TAdTitleGCFv(void *, void *, int);
void *__ct__13TAdTitleTexGCFv(void *, void *);
void *__ct__14TAdSelectCurGCFv(void *, void *, void *, void *);
void *__ct__13TAdGuideTxtGCFv(void *, void *);
void reset__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK fn_802D50B8(void *, P_802D4F2C *, P_802D4F2C *, P_802D4F2C *);
s32 TAdMultiPlyChrSelectGC__sub_802E1024(void *, int, int, int);
s32 TAdMultiPlyChrSelectGC__sub_8030E2E4(void *, int);
extern u8 lbl_80472510[];
extern u8 lbl_80472530[];
extern T_802D4F2C lbl_80472570;
extern M2C_UNK __vt__23TAdSinglePlyChrSelectGC[];
extern s32 lbl_805D3F40;
u8 *TAdSinglePlyChrSelectGC__ct(u8 *arg0, void *parent);
}

extern "C" {

void *__dt__23TAdSinglePlyChrSelectGCFv(void *arg0, s16 arg1);
void cleanup__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void reset__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdEnterSerialAccessGC__sub_802AEBA8(s32);
M2C_UNK *get_localized_text_entry(M2C_UNK, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK close__17TWindowSubComCardFPv(void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, M2C_UNK, M2C_UNK *);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, M2C_UNK);

extern char lbl_8050E208[];
extern M2C_UNK lbl_805DE784;

void cleanup__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    TAdEnterSerialAccessGC__sub_802AEBA8(M2C_FIELD(arg0, s32 *, 0x2C));
    set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x30), 1);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x34), 0, &lbl_805DE784);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x34), 1, &lbl_805DE784);
    M2C_FIELD(arg0, s32 *, 0x58) = -1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x48));
        M2C_FIELD(arg0, u32 *, 0x48) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x4C));
        M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x50));
        M2C_FIELD(arg0, u32 *, 0x50) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x40));
        M2C_FIELD(arg0, u32 *, 0x40) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
        queue_destruction__7TObjectFv((void *)(M2C_FIELD(arg0, void **, 0x54)));
        M2C_FIELD(arg0, u32 *, 0x54) = 0U;
    }
    if ((TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 2) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208 + 0x160, 2) != 0)) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 0xE) {
        set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x34), 0, get_localized_text_entry(0x1E, 0));
        set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x34), 1, &lbl_805DE784);
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    }
}

void reset__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    M2C_FIELD(arg0, s32 *, 0x58) = -1;
    M2C_FIELD(arg0, s32 *, 0x5C) = -1;
}

extern M2C_UNK __vt__23TAdSinglePlyChrSelectGC[];

void *__dt__23TAdSinglePlyChrSelectGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TAdSinglePlyChrSelectGC;
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { queue_destruction__7TObjectFv((void *)(M2C_FIELD(arg0, void **, 0x38))); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { queue_destruction__7TObjectFv((void *)(M2C_FIELD(arg0, void **, 0x3C))); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { queue_destruction__7TObjectFv((void *)(M2C_FIELD(arg0, void **, 0x40))); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        if (M2C_FIELD(arg0, void **, 0x44) != NULL) { queue_destruction__7TObjectFv((void *)(M2C_FIELD(arg0, void **, 0x44))); M2C_FIELD(arg0, M2C_UNK *, 0x44) = 0; }
        if (M2C_FIELD(arg0, void **, 0x48) != NULL) { queue_destruction__7TObjectFv((void *)(M2C_FIELD(arg0, void **, 0x48))); M2C_FIELD(arg0, M2C_UNK *, 0x48) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TAdSinglePlyChrSelectGC__ct(u8 *arg0, void *parent) {
    void *p;
    __ct__7TObjectFP7TObject(arg0, parent);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TAdSinglePlyChrSelectGC;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3F40;
    reset__23TAdSinglePlyChrSelectGCFPv(arg0);
    p = __nw__7TObjectFUl(0x24);
    if (p != NULL) {
        __ct__9TAdBackGCFv(p, arg0);
    }
    p = __nw__7TObjectFUl(0x28);
    if (p != NULL) {
        __ct__12TAdBackTxtGCFv(p, arg0);
    }
    p = __nw__7TObjectFUl(0x138);
    if (p != NULL) {
        __ct__10TAdTitleGCFv(p, arg0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = TAdMultiPlyChrSelectGC__sub_8030E2E4(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x30) = TAdMultiPlyChrSelectGC__sub_802E1024(arg0, 0, -1, 0);
    p = __nw__7TObjectFUl(0x44);
    if (p != NULL) {
        p = __ct__13TAdGuideTxtGCFv(p, arg0);
    }
    M2C_FIELD(arg0, void **, 0x34) = p;
    p = __nw__7TObjectFUl(0x708);
    if (p != NULL) {
        p = __ct__14TAdSelectCurGCFv(p, arg0, lbl_80472510, lbl_80472530);
    }
    M2C_FIELD(arg0, void **, 0x2C) = p;
    p = __nw__7TObjectFUl(0x9C);
    if (p != NULL) {
        p = __ct__13TAdTitleTexGCFv(p, arg0);
    }
    T_802D4F2C t = lbl_80472570;
    fn_802D50B8(p, &t.p[0], &t.p[1], &t.p[2]);
    return arg0;
}

}
