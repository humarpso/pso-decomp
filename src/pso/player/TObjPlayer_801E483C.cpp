#include "types.h"

extern "C" {

void TObjPlayer__sub_801E483C(s32 arg0);
int TAdSinglePlyChrSelectGC__sub_8007EBB4(s32);
int TLobby__sub_803DA16C();

void TObjPlayer__sub_801E483C(s32 arg0) {
    if (arg0 != 0) {
        TLobby__sub_803DA16C();
        TAdSinglePlyChrSelectGC__sub_8007EBB4(arg0);
    }
}

}
