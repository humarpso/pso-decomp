#include "types.h"

extern "C" {

void TAdTrialModemChkGC__sub_803354A4(void);
void check_modem_result__18TAdTrialModemChkGCFv(void);
int TAdTrialModemChkGC__sub_803354E8(void* p);
s32 TAdTrialModemChkGC__sub_8007FA24(s32);
s32 TLobby__sub_80145A94();
s32 TLobby__sub_8014797C();
int TLobby__sub_8022743C(void*);

void TAdTrialModemChkGC__sub_803354A4(void) {  }
void check_modem_result__18TAdTrialModemChkGCFv(void) {
    if (TLobby__sub_80145A94() != 0) {
        TLobby__sub_8014797C();
        TAdTrialModemChkGC__sub_8007FA24(0);
        return;
    }
    TAdTrialModemChkGC__sub_8007FA24(1);
}
int TAdTrialModemChkGC__sub_803354E8(void* p) { return TLobby__sub_8022743C(p); }

}
