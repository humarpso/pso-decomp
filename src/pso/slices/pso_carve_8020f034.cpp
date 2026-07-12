#include "types.h"

extern "C" {

s32 TLobby__sub_8030A7B0();
s32 is_not_split_screen__13TRaderMapCoreFv();
void TLobby__sub_8020F028(void* p);

s32 fn_8020F034(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 0) {
        return 1;
    }
    return (u32)__cntlzw(TLobby__sub_8030A7B0()) >> 5;
}
int fn_8020F070(void) { return 0; }

}
