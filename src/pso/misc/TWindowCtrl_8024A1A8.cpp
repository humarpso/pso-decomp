#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TWindowCtrl__sub_8024A314(void);
s32 TWindowCtrl__sub_8024701C(u32);
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
s32 TWindowCtrl__sub_8024A314(void);
void TLobby__sub_8024AAA0(s32 arg0, s32 arg1);
int fn_80308244(void);
u32 get_window__11TWindowCtrlFi(void);
s32 update_field28__15TWindowCtrlMainFPv(u32 a0 = 0, s32 a1 = 0);
int fn_80308244(void);
void TLobby__sub_8024AAA0(s32 arg0, s32 arg1);
s32 TWindowCtrl__sub_8024A314(void);
extern void *TWindowCtrl__data_805D63F8;
void TLobby__sub_8024AAA0(s32 arg0, s32 arg1);
M2C_UNK TWindow__close(void *);
void TWindowCtrl__sub_8024A4EC(void);
s32 TWindowTimer__sub_80287D20(int, void *);
extern void *TWindowCtrl__data_805D63F8;
void TWindowCtrl__sub_8024A4B0(s32 arg0);
}

extern "C" {

void close_active_window__11TWindowCtrlFv(void);
void create_alt_timer__11TWindowCtrlFv(void);
void create_timer__11TWindowCtrlFv(void);
void ensure_initialized__11TWindowCtrlFv(void);
s32 get_active_sub__11TWindowCtrlFv(void);
void open_status_111__11TWindowCtrlFv(void);
void open_status_112__11TWindowCtrlFv(void);
void set_field22__11TWindowCtrlFv(void);
void update_focused__11TWindowCtrlFv(void);
s32 TWindowCtrl__sub_8024C5C4(u32);
M2C_UNK TWindow__close(void *);
u32 create__12TWindowTimerFv();
u32 create_alt__12TWindowTimerFv();
u32 fn_80244554();
u32 fn_802445EC();
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK update__11TWindowChatFPv(u32);

extern void *TWindowCtrl__data_805D63F8;

void set_field22__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 != NULL) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, s16 *, 0x22) = 0x2D;
    }
}

extern void *TWindowCtrl__data_805D63F8;

void update_focused__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x38) != 0U)) {
        update__11TWindowChatFPv(M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x38));
    }
}

extern void *TWindowCtrl__data_805D63F8;

s32 get_active_sub__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__data_805D63F8 == NULL) {
        return 0;
    }
    if ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x38) == 0U) {
        return 0;
    }
    return TWindowCtrl__sub_8024C5C4(M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x38));
}

extern void *TWindowCtrl__data_805D63F8;

s32 TWindowCtrl__sub_8024A314(void) {
    if ((void *) TWindowCtrl__data_805D63F8 == NULL) {
        return 0;
    }
    if ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x38) == 0U) {
        return 0;
    }
    return TWindowCtrl__sub_8024701C(M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x38));
}

void open_status_111__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) == 0U)) {
        get_message_10__20TWindowSubStatusDispFPv(0x111);
        M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) = fn_80244554();
    }
}

extern void *TWindowCtrl__data_805D63F8;

void open_status_112__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) == 0U)) {
        get_message_10__20TWindowSubStatusDispFPv(0x112);
        M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) = fn_80244554();
    }
}

extern void *TWindowCtrl__data_805D63F8;

void close_active_window__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) != 0U)) {
        TWindow__close(M2C_FIELD(TWindowCtrl__data_805D63F8, void **, 0x34));
        M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) = 0U;
    }
}

extern void *TWindowCtrl__data_805D63F8;

void ensure_initialized__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) == 0U)) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x34) = fn_802445EC();
    }
}

extern void *TWindowCtrl__data_805D63F8;

void create_timer__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x30) == 0U)) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x30) = create__12TWindowTimerFv();
    }
}

extern void *TWindowCtrl__data_805D63F8;

void TWindowCtrl__sub_8024A4B0(s32 arg0) {
    u32 temp_r3;
    if ((void *) (*(u8 * *)&TWindowCtrl__data_805D63F8) != NULL) {
        temp_r3 = M2C_FIELD((*(u8 * *)&TWindowCtrl__data_805D63F8), u32 *, 0x30);
        if (temp_r3 != 0U) {
            TWindowTimer__sub_80287D20((int) (temp_r3), (void *) (arg0));
        }
    }
}

void TWindowCtrl__sub_8024A4EC(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x30) != 0U)) {
        TWindow__close(M2C_FIELD(TWindowCtrl__data_805D63F8, void **, 0x30));
        M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x30) = 0U;
    }
}

void create_alt_timer__11TWindowCtrlFv(void) {
    if (((void *) TWindowCtrl__data_805D63F8 != NULL) && ((u32) M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x30) == 0U)) {
        M2C_FIELD(TWindowCtrl__data_805D63F8, u32 *, 0x30) = create_alt__12TWindowTimerFv();
    }
}

void TLobby__sub_8024AAA0(s32 arg0, s32 arg1) {
    u32 temp_r3 = get_window__11TWindowCtrlFi();
    if (temp_r3 != 0U) {
        update_field28__15TWindowCtrlMainFPv(temp_r3, arg1);
    }
}

}
