#include "types.h"

extern "C" {

void clear_all_shop_stock(void);
int TLobby__sub_8020ECA8(void);
int TLobby__sub_8022559C(void);
int TLobby__sub_802243D4(void);

    extern int lbl_805D6244;
void clear_all_shop_stock(void) { TLobby__sub_8022559C(); TLobby__sub_8020ECA8(); TLobby__sub_802243D4(); lbl_805D6244 = 0; }

}
