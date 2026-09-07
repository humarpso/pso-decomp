#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801A51C0_lbl_80446980 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 fn_801A51F0(void);
extern RecoveredGlobal_801A51C0_lbl_80446980 lbl_80446980;
s32 TLobby__sub_801A51C0(void);
}

extern "C" {

void *construct_option_scene(void *arg0);
s32 TWindowShortListCtrl__sub_801A513C(void* p);
int TWindowShortListCtrl__sub_801A5144(void* p);
void *destroy__20TWindowShortListCtrlFPvs(void *arg0, s16 arg1);
s32 fn_801A51F0(void);
s32 get_card_status_bits__20TWindowShortListCtrlFv(void);
s32 get_card_window_flags__20TWindowShortListCtrlFv(void);
void TKeyBoardControl__sub_8000F90C(int);
void TLobby__sub_8022743C();
void *TWindowOptionCtrl__ct(void *, void *);
void *__ct__10TAdTitleGCFv(void *, void *, int);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
void *__ct__9TAdBackGCFv(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void *get_card_window__17TWindowSubComCardFUi();
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804C2298[];

void *destroy__20TWindowShortListCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C2298;
        TLobby__sub_8022743C();
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_00;
extern M2C_UNK lbl_804C2298[];

void *construct_option_scene(void *arg0) {
    void *o;
    void *o2;
    void *o3;
    void *o4;
    __ct__7TObjectFP7TObject(arg0, tl_00);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C2298;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        __ct__9TAdBackGCFv(o, arg0);
    }
    o2 = __nw__7TObjectFUl(0x28);
    if (o2 != NULL) {
        __ct__12TAdBackTxtGCFv(o2, arg0);
    }
    o3 = __nw__7TObjectFUl(0x138);
    if (o3 != NULL) {
        __ct__10TAdTitleGCFv(o3, arg0, 3);
    }
    TKeyBoardControl__sub_8000F90C(9);
    M2C_FIELD(arg0, u32 *, 0x20) = 4;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    M2C_FIELD(arg0, u16 *, 0x1E) = 0;
    o4 = __nw__7TObjectFUl(0x50);
    if (o4 != NULL) {
        o4 = TWindowOptionCtrl__ct(o4, arg0);
    }
    M2C_FIELD(arg0, void **, 0x24) = o4;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    return arg0;
}

s32 TWindowShortListCtrl__sub_801A513C(void* p) { return *(s32*)((char*)p + 0x24); }
int TWindowShortListCtrl__sub_801A5144(void* p) { return *(u8*)((char*)p + 0x1d) & 0x1; }
s32 get_card_window_flags__20TWindowShortListCtrlFv(void) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi();
    if (temp_r3 == NULL) {
        return 0;
    }
    return ((u32) M2C_FIELD(temp_r3, u32 *, 0x10) >> 0x10U) & 3;
}
s32 get_card_status_bits__20TWindowShortListCtrlFv(void) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi();
    if (temp_r3 == NULL) {
        return 0;
    }
    return ((u32) M2C_FIELD(temp_r3, u32 *, 0x10) >> 0xDU) & 7;
}

typedef char RecoveredGlobal_801A51C0_lbl_80446980_size[sizeof(RecoveredGlobal_801A51C0_lbl_80446980) == 0x18 ? 1 : -1];
s32 TLobby__sub_801A51C0(void) {
    return M2C_FIELD(&lbl_80446980.value, M2C_UNK *, (fn_801A51F0() * 4));
}

s32 fn_801A51F0(void) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi();
    if (temp_r3 == NULL) {
        return 0;
    }
    return ((u32) M2C_FIELD(temp_r3, u32 *, 0x10) >> 0xAU) & 7;
}

}
