#include "types.h"

extern "C" {

void TBoss6Type1__vt42(void);
void TBoss6Type1__vt43(void);
void TBoss6Type1__vt44(void);
void TBoss6Type1__vt45(void);
void TBoss6Type1__vt46(void);
void TBoss6Type1__vt47(void);
void TBoss6Type1__vt48(void);
void* TBoss6Type1__sub_802B9760(void* p);
int TBoss6Type1__sub_802B9768(void* p);
int TBoss6Type1__sub_802B9778(void* p);
void TBoss6Type1__sub_802B9798(void* p);
void build_6xA4_olga_flow_boss_actions(void* p);

int TObjPlayer__sub_8001960C(void*);
int TLobby__send_and_handle_60(void*);

void TBoss6Type1__vt42(void) {  }
void TBoss6Type1__vt43(void) {  }
void TBoss6Type1__vt44(void) {  }
void TBoss6Type1__vt45(void) {  }
void TBoss6Type1__vt46(void) {  }
void TBoss6Type1__vt47(void) {  }
void TBoss6Type1__vt48(void) {  }
void* TBoss6Type1__sub_802B9760(void* p) { return (char*)p + 0x388; }
int TBoss6Type1__sub_802B9768(void* p) { return *(u32*)((char*)p + 0x374) == 0; }
int TBoss6Type1__sub_802B9778(void* p) { return TObjPlayer__sub_8001960C(p); }
void TBoss6Type1__sub_802B9798(void* p) { TBoss6Type1__sub_802B9778(p); TLobby__send_and_handle_60(p); }
void build_6xA4_olga_flow_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 164; *(u8*)((char*)p + 0x1) = 5; }

}
