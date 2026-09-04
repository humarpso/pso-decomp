#include "types.h"

extern "C" {

s32 is_value_out_of_range__6TLobbyFi(s32 arg0);
s32 TLobby__sub_80292F34(s32 arg0);
int TLobby__sub_80292F5C(void* p);
int get_instance__11TCameraCtrlFv(void*);
s32 get_clamped_time_limit__6TLobbyFv();

s32 is_value_out_of_range__6TLobbyFi(s32 arg0) {
    if ((arg0 < get_clamped_time_limit__6TLobbyFv()) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}
s32 TLobby__sub_80292F34(s32 arg0) {
    if ((arg0 < 0x3C) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}
int TLobby__sub_80292F5C(void* p) { return get_instance__11TCameraCtrlFv(p); }

}
