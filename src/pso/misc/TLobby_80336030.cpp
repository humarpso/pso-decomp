#include "types.h"

extern "C" {

int TLobby__sub_80336030(void* p);
int TAdTrialAgreementGC__sub_8033596C(void*);

int TLobby__sub_80336030(void* p) { return TAdTrialAgreementGC__sub_8033596C(*(void**)((char*)p + 0x24)); }

}
