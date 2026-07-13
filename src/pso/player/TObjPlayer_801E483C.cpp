#include "types.h"

extern "C" {

void free_if_valid__10TObjPlayerFi(s32 arg0);
int safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
int TLobby__sub_803DA16C();

void free_if_valid__10TObjPlayerFi(s32 arg0) {
    if (arg0 != 0) {
        TLobby__sub_803DA16C();
        safe_free__23TAdSinglePlyChrSelectGCFUi(arg0);
    }
}

}
