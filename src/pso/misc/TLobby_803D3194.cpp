#include "types.h"

extern "C" {

void TLobby__sub_803D3194(void);

extern s32 lobby_callback_tables_refcount;

void TLobby__sub_803D3194(void) {
    lobby_callback_tables_refcount -= 1;
}

}
