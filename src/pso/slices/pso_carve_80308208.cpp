#include "types.h"

extern "C" {

s32 fn_80308294(u32 a0 = 0, s32 a1 = 0);
u32 TLobby__sub_80101AB0(void);
void TAdYesNoBaseGC__vt4(void);
void TAdYesNoBaseGC__vt5(void);
void TAdVIConfigGC__sub_80308200(void* p, s32 v);

void fn_80308208(s32 arg0, s32 arg1) {
    u32 temp_r3 = TLobby__sub_80101AB0();
    if (temp_r3 != 0U) {
        fn_80308294(temp_r3, arg1);
    }
}
int fn_80308244(void) { return 0; }

}
