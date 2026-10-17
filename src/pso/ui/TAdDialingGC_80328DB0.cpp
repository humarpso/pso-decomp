#include "types.h"
#include "pso/ui/TAdDialingGC_80328DB0.h"
#include "pso/ui/TAdDialingGC.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 __ct__7TObjectFP7TObject();
s32 TLobby__sub_8014618C();

extern s32 __vt__12TAdDialingGC[];
extern s32 lbl_805D41B0;
extern void *TAdDialingGC__instance;

void *TAdDialingGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TAdDialingGC;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D41B0;
    TAdDialingGC__instance = arg0;
    if (TLobby::is_state_active() != 0) {
        ((TAdDialingGC *)arg0)->m_1c = 1;
    } else if (TLobby__sub_8014618C() == 1) {
        ((TAdDialingGC *)arg0)->m_1c = 2;
    } else {
        ((TAdDialingGC *)arg0)->m_1c = 0;
    }
    ((TAdDialingGC *)arg0)->m_20 = 0;
    ((TAdDialingGC *)arg0)->m_24 = 0;
    ((TAdDialingGC *)arg0)->m_28 = 0;
    ((TAdDialingGC *)arg0)->m_30 = 0;
    ((TAdDialingGC *)arg0)->m_68 = 0;
    ((TAdDialingGC *)arg0)->m_a0 = 0;
    ((TAdDialingGC *)arg0)->m_a4 = 0;
    return arg0;
}

}
