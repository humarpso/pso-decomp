#include "types.h"

extern "C" {

void TBoss6Type1__vt42(void);
void TBoss6Type1__vt43(void);
void TBoss6Type1__vt44(void);
void TBoss6Type1__vt45(void);
void TBoss6Type1__vt46(void);
void TBoss6Type1__vt47(void);
void TBoss6Type1__vt48(void);
void* fn_802B9760(void* p);
int fn_802B9768(void* p);
int fn_802B9778(void* p);
void fn_802B9798(void* p);
void build_6xA4_olga_flow_boss_actions(void* p);

int fn_8001960C(void*);
int TLobby__sub_801E4570(void*);

void TBoss6Type1__vt42(void) {  }
void TBoss6Type1__vt43(void) {  }
void TBoss6Type1__vt44(void) {  }
void TBoss6Type1__vt45(void) {  }
void TBoss6Type1__vt46(void) {  }
void TBoss6Type1__vt47(void) {  }
void TBoss6Type1__vt48(void) {  }
void* fn_802B9760(void* p) { return (char*)p + 0x388; }
int fn_802B9768(void* p) { return *(u32*)((char*)p + 0x374) == 0; }
int fn_802B9778(void* p) { return fn_8001960C(p); }
void fn_802B9798(void* p) { fn_802B9778(p); TLobby__sub_801E4570(p); }
void build_6xA4_olga_flow_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 164; *(u8*)((char*)p + 0x1) = 5; }

}
