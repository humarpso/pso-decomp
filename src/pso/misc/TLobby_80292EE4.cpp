#include "types.h"

extern "C" {

s32 is_value_out_of_range__6TLobbyFi(s32 arg0);
s32 TLobby__sub_80292F34(s32 arg0);
int TLobby__sub_80292F5C(void* p);
int TCameraCtrl__sub_8006B330(void*);
s32 TLobby__sub_80292E90();

s32 is_value_out_of_range__6TLobbyFi(s32 arg0) {
    if ((arg0 < TLobby__sub_80292E90()) || (arg0 > 0x8C9F)) {
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
int TLobby__sub_80292F5C(void* p) { return TCameraCtrl__sub_8006B330(p); }

}
