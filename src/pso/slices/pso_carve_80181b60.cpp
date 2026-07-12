#include "types.h"

extern "C" {

s32 fn_80181AE8(s32);
s32 TObjPlayer__sub_80181BAC(s32);
s32 fn_80181E10();
void fn_80181B60(void);

void fn_80181B60(void) {  }
void fn_80181B64(s32 arg0) {
    if (fn_80181E10() != 0) {
        TObjPlayer__sub_80181BAC(arg0);
        return;
    }
    fn_80181AE8(arg0);
}

}
