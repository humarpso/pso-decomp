#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Win_8024701C { u8 p0[0x1E]; u16 flags; s32 f20; u8 p24[4]; s32 f28; };

extern "C" {
M2C_UNK TAdSinglePlyChrSelectGC__sub_80076D9C(void *, int);
s32 TWindowKeyBoardSoft__sub_80076E2C(int);
M2C_UNK update_selected_symbol__20TWindowSubSymbolChatFPv();
M2C_UNK open_symbol_chat__11TWindowChatFPv(void *);
s32 is_active__16TKeyBoardControlFPv(int);
s32 is_key_active__16TKeyBoardControlFPv(int);
s8 get_input_mode__11TWindowChatFPv(int);
s32 get_flag__11TWindowChatFPv(int);
M2C_UNK set_active_flag__11TWindowChatFPv(void *);
M2C_UNK set_input_active__11TWindowChatFPv(void *);
s32 is_mode_bit6__11TWindowChatFPv(void *);
M2C_UNK TWindowKeyBoardSoft__sub_8025C974(int, void *);
M2C_UNK TWindowChat__sub_8025CB70(int);
s32 TWindowChat__sub_802471AC(u8 *arg0);
int forward_card_at_1c__11TWindowChatFPv(void *);
int get_subcard_field1c__11TWindowChatFPv(void *);
int TWindowChat__sub_80247DAC(void *);
M2C_UNK update_selected_symbol__20TWindowSubSymbolChatFPv();
M2C_UNK open_symbol_chat__11TWindowChatFPv(void *);
M2C_UNK set_active_flag__11TWindowChatFPv(void *);
M2C_UNK set_input_active__11TWindowChatFPv(void *);
s32 TWindowChat__sub_80247080(u8 *arg0);
M2C_UNK set_active_flag__11TWindowChatFPv(void *);
M2C_UNK set_input_active__11TWindowChatFPv(void *);
s32 TWindowDD__sub_80348470(int);
s32 TWindowChat__sub_80247128(u8 *arg0);
s32 TWindowChat__sub_80247D50(s32);
s32 TWindowChat__sub_8025CB10(s32);
bool TWindowCtrl__sub_8024701C(Win_8024701C *w);
}

extern "C" {

s32 close_all_children__11TWindowChatFPv();
s32 TWindowChat__sub_8024792C(void *);
void free_icon__18TWindowSubShortCutFPv(void* p);
int TWindowChat__sub_80247D2C(void*);

bool TWindowCtrl__sub_8024701C(Win_8024701C *w) {
    bool r;
    if (TWindowChat__sub_8025CB10(w->f20) != 0) {
        r = true;
    } else if (!(w->flags & 2)) {
        r = true;
    } else {
        r = TWindowChat__sub_80247D50(w->f28) != 0;
    }
    return r;
}

s32 TWindowChat__sub_80247080(u8 *arg0) {
    s32 *temp_r31;
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
    if (temp_r3 == NULL) {
        return 0;
    }
    if (TWindowChat__sub_80247DAC(temp_r3) != 0) {
        set_input_active__11TWindowChatFPv((void *) (arg0));
        return 1;
    }
    if (get_subcard_field1c__11TWindowChatFPv(M2C_FIELD(arg0, u8 **, 0x30)) == 0) {
        return 0;
    }
    set_active_flag__11TWindowChatFPv((void *) (arg0));
    temp_r31 = (s32 *)(M2C_FIELD(arg0, s32 *, 0x38) + 4);
    *temp_r31 = forward_card_at_1c__11TWindowChatFPv(M2C_FIELD(arg0, u8 **, 0x30));
    if (M2C_FIELD(arg0, u16 *, 0x1E) & 0x80) {
        open_symbol_chat__11TWindowChatFPv((void *)((int) (temp_r31)));
        update_selected_symbol__20TWindowSubSymbolChatFPv();
    }
    return 1;
}

s32 TWindowChat__sub_80247128(u8 *arg0) {
    s32 temp_r3_2;
    u32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x34);
    if (temp_r3 == 0U) {
        return 0;
    }
    temp_r3_2 = TWindowDD__sub_80348470((int) (temp_r3));
    if (temp_r3_2 == 0) {
        return 0;
    }
    if (temp_r3_2 == 2) {
        set_input_active__11TWindowChatFPv((void *) (arg0));
        return 1;
    }
    if (temp_r3_2 != 1) {
        return 0;
    }
    set_active_flag__11TWindowChatFPv((void *) (arg0));
    return 1;
}

s32 TWindowChat__sub_802471AC(u8 *arg0) {
    u32 kb = M2C_FIELD(arg0, u32 *, 0x20);
    if (kb == 0U) {
        return 0;
    }
    if (is_active__16TKeyBoardControlFPv((int) kb) != 0) {
        TWindowChat__sub_8025CB70((int) (M2C_FIELD(arg0, u32 *, 0x20)));
        set_input_active__11TWindowChatFPv((void *) (arg0));
        return 1;
    }
    if (is_key_active__16TKeyBoardControlFPv((int) (M2C_FIELD(arg0, u32 *, 0x20))) == 0) {
        return 0;
    }
    set_active_flag__11TWindowChatFPv((void *) (arg0));
    if (get_flag__11TWindowChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x20))) != 0) {
        TAdSinglePlyChrSelectGC__sub_80076D9C((void *) (M2C_FIELD(arg0, u32 **, 0x38)), (int) (TWindowKeyBoardSoft__sub_80076E2C((int) (get_input_mode__11TWindowChatFPv((int) (M2C_FIELD(arg0, u32 *, 0x20)))))));
        if (((u32) *M2C_FIELD(arg0, u32 **, 0x38) == 3U) && (is_mode_bit6__11TWindowChatFPv((void *) (arg0)) == 0)) {
            open_symbol_chat__11TWindowChatFPv((void *) ((u8 *) M2C_FIELD(arg0, u32 **, 0x38) + 4));
            update_selected_symbol__20TWindowSubSymbolChatFPv();
        }
    } else {
        TWindowKeyBoardSoft__sub_8025C974((int) (M2C_FIELD(arg0, u32 *, 0x20)), (void *) ((u8 *) M2C_FIELD(arg0, u32 **, 0x38) + 4));
    }
    TWindowChat__sub_8025CB70((int) (M2C_FIELD(arg0, u32 *, 0x20)));
    return 1;
}

}
