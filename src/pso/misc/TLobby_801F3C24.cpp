#include "types.h"

extern "C" {

void TLobby__sub_801F3C24(int a0);
int TLobby__sub_801F3B30(void);
int TLobby__sub_801F3BC4(void);
int TLobby__sub_801F4340(void);
int fn_8020A26C(void);
int fn_8020A2AC(void);
int fn_8020AB30(void);
int fn_8020AD20(void);

    extern int lbl_805D5EE0;
    extern short lbl_805D6134;
void TLobby__sub_801F3C24(int a0) { lbl_805D5EE0 = a0; TLobby__sub_801F3BC4(); fn_8020AD20(); fn_8020A2AC(); TLobby__sub_801F3B30(); fn_8020A26C(); fn_8020AB30(); TLobby__sub_801F4340(); lbl_805D6134 = 1; lbl_805D5EE0 = 0; }

}
