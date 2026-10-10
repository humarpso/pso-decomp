#include "types.h"

extern "C" {
extern u32 secondary_card_character_save_buffer;
u8 check_slot_flags__23TAdSinglePlyChrSelectGCFiUi(s32 arg0, u32 arg1);
}

extern "C" {

int get_chr_select_state__22TAdMultiPlyChrSelectGCFv(void);
s32 get_ready_state__22TAdMultiPlyChrSelectGCFPv(void* p);

    extern int lbl_805D69E8;
int get_chr_select_state__22TAdMultiPlyChrSelectGCFv(void) {  return lbl_805D69E8; }

s32 get_ready_state__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0xa0); }
u8 check_slot_flags__23TAdSinglePlyChrSelectGCFiUi(s32 arg0, u32 arg1) {
    u32 flags;
    if (secondary_card_character_save_buffer != 0) {
        if (arg0 >= 7) {
            return 0;
        }
        flags = *(u32 *)((u8 *)secondary_card_character_save_buffer + arg0 * 0x2798 + 0x420);
        return (flags & arg1) != 0;
    }
    return 0;
}

}
