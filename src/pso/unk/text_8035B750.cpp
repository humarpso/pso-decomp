#include "types.h"
#include "pso/unk/text_8035B750.h"

extern "C" {
void TLobby__sub_8001FE7C(void*, int);
extern u32 lbl_805D6F50;

void fn_8035B750(void) {
    if ((u32) lbl_805D6F50 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6F50, 1);
        lbl_805D6F50 = 0U;
    }
}

}
