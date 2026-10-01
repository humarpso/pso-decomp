#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8026B014___vt__18TWindowMessagePage { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8026B014___vt__18TWindowMessagePage_size[sizeof(RecoveredGlobal_8026B014___vt__18TWindowMessagePage) == 0x18 ? 1 : -1];

struct RecoveredGlobal_8026AF24_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct Page_8026AE20 { u8 pad[0x90]; s32 flags; void *msg; };

extern "C" {
u8 *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TLobby__sub_80269DA4(void *, void *);
u8 *TWindowMessagePage__sub_8026AE7C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TWindowMessage__ct(void *, void *, void *, void *);
extern M2C_UNK __vt__18TWindowMessagePage[];
extern s32 lbl_805D3998;
u8 *TWindowMessagePage__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int, int);
s32 is_player_input_active(int);
s32 TMCFormatSequence__sub_802693B4(void *);
M2C_UNK TLobby__sub_80269454(void *);
M2C_UNK draw__14TWindowMessageFPv();
void update_message__18TWindowMessagePageFPv(void *arg0);
extern RecoveredGlobal_8026AF24_lbl_8050E208 lbl_8050E208;
void run_task__18TWindowMessagePageFv(u8 *arg0);
void update_message__18TWindowMessagePageFPv(void *arg0);
void TWindowMessagePage__sub_8026AE20(Page_8026AE20 *self, void *msg, s32 flags);
}

extern "C" {

void *__dt__18TWindowMessagePageFv(void *arg0, s16 arg1);
s32 is_ready__18TWindowMessagePageFPv(void *arg0);
int render__18TWindowMessagePageFv(void* p);
void set_text__18TWindowMessagePageFiii(s32 a, s32 b, s32 c);
void update_message__18TWindowMessagePageFPv(void *arg0);
s32 TLobby__sub_8001DC24();
u32 TWindowSubStatusDisp__sub_80228F84(u32);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
void __dl__7TObjectFPv(void *);
void __dt__14TWindowMessageFv(void *, int);
int render__14TWindowMessageFv(void*);
M2C_UNK send_and_handle__6TLobbyFPvii(void *, s32, s32);

s32 is_ready__18TWindowMessagePageFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        return 0;
    }
    return TMCFormatSequence__sub_802693B4((void *)(arg0)) != 0 ? 1 : 0;
}

void update_message__18TWindowMessagePageFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        TWindowSubStatusDisp__sub_802290E0();
        M2C_FIELD(arg0, u32 *, 0x94) = TWindowSubStatusDisp__sub_80228F84(M2C_FIELD(arg0, u32 *, 0x94));
        send_and_handle__6TLobbyFPvii(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x90));
    }
}

extern s32 lbl_805D53A0;

void TWindowMessagePage__sub_8026AE20(Page_8026AE20 *self, void *msg, s32 flags) {
    while (self->msg != NULL) {
        update_message__18TWindowMessagePageFPv(self);
    }
    self->flags = flags | 2;
    self->msg = msg;
    update_message__18TWindowMessagePageFPv(self);
}

u8 *TWindowMessagePage__sub_8026AE7C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_r3;
    u8 *var_r0;
    TLobby__sub_80269DA4((void *) (arg1), (void *) (arg2));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x98));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TWindowMessagePage__ct((u8 *)(temp_r3), (s32)(arg0), (s32)(arg2), (s32)(arg3)));
    }
    return var_r0;
}

void set_text__18TWindowMessagePageFiii(s32 a, s32 b, s32 c) {
    TWindowMessagePage__sub_8026AE7C((s32)(a), (s32)(b), (s32)(c), lbl_805D53A0);
}

int render__18TWindowMessagePageFv(void* p) { return render__14TWindowMessageFv(p); }

extern M2C_UNK __vt__18TWindowMessagePage[];

typedef char RecoveredGlobal_8026AF24_lbl_8050E208_size[sizeof(RecoveredGlobal_8026AF24_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__18TWindowMessagePageFv(u8 *arg0) {
    s32 temp_r5;
    draw__14TWindowMessageFPv();
    temp_r5 = is_player_input_active((int) (M2C_FIELD(arg0, s16 *, 0x20))) * 0x50;
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&lbl_8050E208.value + temp_r5 + 0x20), (int) (4), (int) (temp_r5)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (4)) != 0)) {
        if (TMCFormatSequence__sub_802693B4((void *)((void *) (arg0))) != 0) {
            update_message__18TWindowMessagePageFPv((void *) (arg0));
            return;
        }
        TLobby__sub_80269454((void *) (arg0));
    }
}

void *__dt__18TWindowMessagePageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowMessagePage;
        __dt__14TWindowMessageFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TWindowMessagePage__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    TWindowMessage__ct((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg3));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8026B014___vt__18TWindowMessagePage *)&__vt__18TWindowMessagePage).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3998;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = (s16) arg3;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    return arg0;
}

}
