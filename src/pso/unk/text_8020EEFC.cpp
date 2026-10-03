#include "types.h"
extern "C" {
void shuffle_shop_pool(void *);
void TLobby__sub_8020EEFC(void *arg0, s32 arg1);
}

extern "C" {

void TLobby__sub_8020EEFC(void *arg0, s32 arg1) {
    while (arg1-- > 0) {
        shuffle_shop_pool(arg0);
    }
}

}
