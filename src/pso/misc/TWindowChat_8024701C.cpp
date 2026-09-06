#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
}

extern "C" {

s32 close_all_children__11TWindowChatFPv();
s32 TWindowChat__sub_8024792C(void *);
void free_icon__18TWindowSubShortCutFPv(void* p);
int TWindowChat__sub_80247D2C(void*);

int TWindowCtrl__sub_8024701C(void) { return 0; }
int TWindowChat__sub_80247080(void) { return 0; }
int TWindowChat__sub_80247128(void) { return 0; }
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
