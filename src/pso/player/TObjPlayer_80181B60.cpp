#include "types.h"

extern "C" {

void TObjPlayer__sub_80181B60(void);
void TObjPlayer__sub_80181B64(s32 arg0);
s32 TLobby__sub_80181AE8(s32);
s32 TObjPlayer__sub_80181BAC(s32);
s32 fn_80181E10();

void TObjPlayer__sub_80181B60(void) {  }
void TObjPlayer__sub_80181B64(s32 arg0) {
    if (fn_80181E10() != 0) {
        TObjPlayer__sub_80181BAC(arg0);
        return;
    }
    TLobby__sub_80181AE8(arg0);
}

}
