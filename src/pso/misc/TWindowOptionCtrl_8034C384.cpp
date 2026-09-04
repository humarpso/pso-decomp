#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_8034C384(void* p);
int TLobby__sub_8034C3A4(void* p);
void TWindowOptionCtrl__sub_8034C4C4(void* p);
void *ct__17TWindowOptionCtrlFPv(void *arg0);
void *destroy__17TWindowOptionCtrlFPvs(void *arg0, s16 arg1);
s32 get_field_24__17TWindowOptionCtrlFPv(void* p);
void open_confirm_dialog__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
void set_option_and_confirm__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK);
int TLobby__sub_80338534(void);
int TLobby__sub_80338608(void*);
u32 TWindowMessageYesNo__sub_802A59D8(s32, s32, M2C_UNK, M2C_UNK);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void close__17TWindowSubComCardFPv(void *);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(u32, s32, s32, f32);
s32 get_option_entry__17TWindowOptionCtrlFi(M2C_UNK);
M2C_UNK initialize_option_dialog(u32, s32, s32, f32);
int reset_info_board__6TLobbyFv(void*);

int TLobby__sub_8034C384(void* p) { return reset_info_board__6TLobbyFv(p); }
int TLobby__sub_8034C3A4(void* p) { return reset_info_board__6TLobbyFv(p); }
s32 get_field_24__17TWindowOptionCtrlFPv(void* p) { return *(s32*)((char*)p + 0x24); }

extern s32 lbl_805D53A0;
extern s32 tl_01;
extern const f32 lbl_805DFDD0;

void open_confirm_dialog__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        close__17TWindowSubComCardFPv((void *)(M2C_FIELD(arg0, void **, 0x2C)));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x2C) = TWindowMessageYesNo__sub_802A59D8(tl_01, lbl_805D53A0, 0, 0);
    if (arg2 != 0) {
        forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(M2C_FIELD(arg0, u32 *, 0x2C), arg1, get_option_entry__17TWindowOptionCtrlFi(0xCF), lbl_805DFDD0);
        return;
    }
    initialize_option_dialog(M2C_FIELD(arg0, u32 *, 0x2C), arg1, get_option_entry__17TWindowOptionCtrlFi(0xCF), lbl_805DFDD0);
}

void set_option_and_confirm__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x28)) {
        M2C_FIELD(arg0, s32 *, 0x28) = arg1;
        open_confirm_dialog__17TWindowOptionCtrlFPvii((void *)(arg0), (s32)(TAdSinglePlyChrSelectGC__sub_80132F2C(0x24)), (s32)(arg2));
    }
}

void TWindowOptionCtrl__sub_8034C4C4(void* p) { if (*(int*)((char*)p + 0x1c) == 6) { TLobby__sub_80338608((void*)1); TLobby__sub_80338534(); } }

extern M2C_UNK lbl_804F01A8[];

void *destroy__17TWindowOptionCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F01A8;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { close__17TWindowSubComCardFPv((void *)(M2C_FIELD(arg0, void **, 0x2C))); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804F01A8[];

void *ct__17TWindowOptionCtrlFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F01A8;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 14;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    return arg0;
}

}
