#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

class Sel_8033B640 {
public:
    void s0(); void s1(); void s2(); void s3(); void s4();
    void s5(); void s6(); void s7(); void s8(); void s9();
    void s10(); void s11(); void s12(); void s13(); void s14();
    u8 pad[0x2C];
    s32 state;
};

typedef void (Sel_8033B640::*SelFn_8033B640)();

struct RecoveredGlobal_8033B9C4_lbl_80513910 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
extern void *lbl_804EF8C0[];
extern s32 tl_01;
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_8033B9EC(void* p);
extern void *lbl_804EF8C0[];
extern s32 tl_01;
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_8033B9EC(void* p);
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_8033B9E0(void* p);
extern void *lbl_804EF8C0[];
extern s32 tl_01;
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_8033B9E0(void* p);
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
s32 get_field_44__23TAdSinglePlyChrSelectGCFPv(void* p);
extern void *lbl_804EF8C0[];
extern s32 tl_01;
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
s32 get_field_44__23TAdSinglePlyChrSelectGCFPv(void* p);
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
void *construct__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK __ct__12TAdBackTxtGCFv(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, s32);
M2C_UNK __ct__9TAdBackGCFv(void *, void *);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK alloc_download_buffer__23TAdSinglePlyChrSelectGCFPv(void *);
M2C_UNK clear_buffer(void *);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv(void *);
s32 get_flag_count__23TAdSinglePlyChrSelectGCFv();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
extern void *lbl_804EF8C0[];
extern s32 tl_01;
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
void *construct__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void *destroy__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void free_buffer__23TAdSinglePlyChrSelectGCFPv(void *);
extern void* lbl_804EF8C0[];
void *destroy__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1);
void TAdSinglePlyChrSelectGC__sub_8033B5F0(void *arg0);
M2C_UNK TWindow__close(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern void* lbl_804EF8C0[];
void TAdSinglePlyChrSelectGC__sub_8033B5F0(void *arg0);
extern RecoveredGlobal_8033B9C4_lbl_80513910 lbl_80513910;
void TAdSinglePlyChrSelectGC__sub_8033B9C4(s32 arg0);
s32 find_card_file__15TAdPlayerLoadGCFiPv(void *, void *);
extern char lbl_804C8914[];
bool TAdSinglePlyChrSelectGC__sub_8033BA84(void *self);
s32 find_card_file__15TAdPlayerLoadGCFiPv(void *, void *);
extern u8 lbl_804C88C0[];
extern char lbl_804C8914[];
extern u8 lbl_804C89BC[];
s32 TAdSinglePlyChrSelectGC__sub_8033BA0C(void *arg0);
}

extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

extern "C" void reset_default_view__11TCameraCtrlFv();
extern "C" void TCameraCtrl__sub_800693F4();
extern "C" void TCameraCtrl__sub_8006A35C();
extern "C" void TWindowCtrlMain__sub_8024D690();
extern "C" void TWindowCtrlMain__sub_8024D838();
extern "C" void free_global__23TAdSinglePlyChrSelectGCFv();
extern "C" void free_keyboard_soft_resources__6TLobbyFv();
extern "C" void free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv();
extern "C" void register_texture_f256_ad_pic_2();
extern "C" void register_texture_f256_backtext();
extern "C" void reset__11TCameraCtrlFv();
extern "C" void update_keyboard_menu__6TLobbyFv();
void *lbl_804EF728[12] = {
    (void *)&TCameraCtrl__sub_8006A35C, (void *)&reset__11TCameraCtrlFv, (void *)&TCameraCtrl__sub_800693F4, (void *)&reset_default_view__11TCameraCtrlFv,
    (void *)&register_texture_f256_ad_pic_2, (void *)&free_global__23TAdSinglePlyChrSelectGCFv, (void *)&register_texture_f256_backtext, (void *)&free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv,
    (void *)&TWindowCtrlMain__sub_8024D838, (void *)&TWindowCtrlMain__sub_8024D690, (void *)&update_keyboard_menu__6TLobbyFv, (void *)&free_keyboard_soft_resources__6TLobbyFv,
};

void TAdSinglePlyChrSelectGC__sub_8033B5F0(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x38);
    if ((u32) temp_r3 != 0U) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
    }
}

void TAdSinglePlyChrSelectGC__sub_8033B640(Sel_8033B640 *arg0) {
    static SelFn_8033B640 table[15] = {
        &Sel_8033B640::s0, &Sel_8033B640::s1, &Sel_8033B640::s2,
        &Sel_8033B640::s3, &Sel_8033B640::s4, &Sel_8033B640::s5,
        &Sel_8033B640::s6, &Sel_8033B640::s7, &Sel_8033B640::s8,
        &Sel_8033B640::s9, &Sel_8033B640::s10, &Sel_8033B640::s11,
        &Sel_8033B640::s12, &Sel_8033B640::s13, &Sel_8033B640::s14,
    };
    (arg0->*table[arg0->state])();
}

void *destroy__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK*)lbl_804EF8C0;
        free_buffer__23TAdSinglePlyChrSelectGCFPv(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *construct__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    void *p;
    __ct__7TObjectFP7TObject(arg0, tl_01);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804EF8C0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) get_chr_select_state__23TAdSinglePlyChrSelectGCFv(lbl_804EF8C0);
    M2C_FIELD(arg0, s32 *, 0x28) = get_flag_count__23TAdSinglePlyChrSelectGCFv();
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    p = __nw__7TObjectFUl(0x24);
    if (p != NULL) {
        __ct__9TAdBackGCFv(p, arg0);
    }
    p = __nw__7TObjectFUl(0x28);
    if (p != NULL) {
        __ct__12TAdBackTxtGCFv(p, arg0);
    }
    alloc_download_buffer__23TAdSinglePlyChrSelectGCFPv(arg0);
    clear_buffer(arg0);
    init_slots__23TAdSinglePlyChrSelectGCFv();
    return arg0;
}

typedef char RecoveredGlobal_8033B9C4_lbl_80513910_size[sizeof(RecoveredGlobal_8033B9C4_lbl_80513910) == 0x10 ? 1 : -1];
void TAdSinglePlyChrSelectGC__sub_8033B9C4(s32 arg0) {
    M2C_FIELD(&lbl_80513910.value, s32 *, 4) = arg0;
    M2C_FIELD(&lbl_80513910.value, s32 *, 0) = arg0;
}

s32 get_field_44__23TAdSinglePlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x44); }

void TAdSinglePlyChrSelectGC__sub_8033B9E0(void* p) { *(s32*)((char*)p + 0x40) = 1; }

void TAdSinglePlyChrSelectGC__sub_8033B9EC(void* p) { *(s32*)((char*)p + 0x4c) = 1; }

u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x3C) == 1);
}

s32 TAdSinglePlyChrSelectGC__sub_8033BA0C(void *arg0) {
    if (find_card_file__15TAdPlayerLoadGCFiPv(arg0, ((u8 *)&lbl_804C8914)) != 0 || find_card_file__15TAdPlayerLoadGCFiPv(arg0, lbl_804C88C0) != 0 || find_card_file__15TAdPlayerLoadGCFiPv(arg0, lbl_804C89BC) != 0) {
        return 0;
    }
    return 1;
}

bool TAdSinglePlyChrSelectGC__sub_8033BA84(void *self) {
    return !find_card_file__15TAdPlayerLoadGCFiPv(self, lbl_804C8914);
}

}
