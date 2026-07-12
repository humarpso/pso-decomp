#include "types.h"

extern "C" {

void TObjPlayer__sub_801E483C(s32 arg0);
int safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
int TLobby__sub_803DA16C();

void TObjPlayer__sub_801E483C(s32 arg0) {
    if (arg0 != 0) {
        TLobby__sub_803DA16C();
        safe_free__23TAdSinglePlyChrSelectGCFUi(arg0);
    }
}

}
