#include "types.h"

extern "C" {

void render__13TObjBoss7DustFv(void* p);
void fn_802F105C(void);
void fn_802F1084(void);
void fn_802F10AC(void);
int fn_802F0E24(void);
int fn_802F0E94(void);
int fn_802F1200(void*, void*);
int TObjBoss7DustCtrl__sub_802F141C(void);
int fn_802F1450(void);
int fn_802F1454(void);
int fn_802F19C0(void);
int TObjBoss2Tunnel__sub_802F2C4C(void);
int TObjBoss2Tunnel__sub_802F2C50(void);
int TObjBoss2Tunnel__sub_802F2C84(void);

void fn_802F105C(void) { fn_802F1450(); TObjBoss2Tunnel__sub_802F2C4C(); fn_802F0E24(); }
void fn_802F1084(void) { TObjBoss2Tunnel__sub_802F2C50(); fn_802F19C0(); TObjBoss7DustCtrl__sub_802F141C(); }
void fn_802F10AC(void) { fn_802F0E94(); TObjBoss2Tunnel__sub_802F2C84(); fn_802F1454(); }
void render__13TObjBoss7DustFv(void* p) { fn_802F1200((char*)p + 0x24, *(void**)((char*)p + 0x20)); }

}
