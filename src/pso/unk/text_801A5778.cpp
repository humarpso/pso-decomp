#include "types.h"

extern "C" {
s32 fn_803DAFA8(void *, void *);
s32 safe_free__23TAdSinglePlyChrSelectGCFUl(int);
u8 *set_stream_and_load_file__6TLobbyFi();
s32 DCStoreRange(void *, int);
void fn_801A5778(s32 arg0, s32 *arg1);
}

extern "C" {

void fn_801A5778(s32 arg0, s32 *arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(set_stream_and_load_file__6TLobbyFi());
    fn_803DAFA8(temp_r3, arg1);
    DCStoreRange((void *) (*arg1), (int) (0x40000));
    safe_free__23TAdSinglePlyChrSelectGCFUl((int) (temp_r3));
}

}
