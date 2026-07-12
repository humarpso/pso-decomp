#include "types.h"

extern "C" {

int TObjPlayer__sub_80154E3C(void*);
int TCameraCtrl__sub_803D8934(void*, void*, void*);
int TObjPlayer__sub_803D8CD4(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
int TOHangerMachine01__sub_803D9C00(void*);
int TBoss5GryphonDemo__sub_80066304(void* a0 = 0);
int TBoss5GryphonDemo__sub_8006633C(void* a0 = 0);
void TBoss5GryphonDemo__sub_8006626C(void* p);
void draw_model__17TBoss5GryphonDemoFPvPvPv(void* p, void* a1, void* a2);
void TBoss5GryphonDemo__sub_80066268(void);

void TBoss5GryphonDemo__sub_80066268(void) {  }
void TBoss5GryphonDemo__sub_8006626C(void* p) { TBoss5GryphonDemo__sub_80066304(p); }
void draw_model__17TBoss5GryphonDemoFPvPvPv(void* p, void* a1, void* a2) { TObjPlayer__sub_803D9B2C(p); TObjPlayer__sub_803D8CD4((void*)0); TOHangerMachine01__sub_803D9C00(a1); TObjPlayer__sub_803D9214((void*)0, a2); TCameraCtrl__sub_803D8934((void*)0, (char*)p + 0xac, (char*)p + 0x38); TObjPlayer__sub_803D9B78(); *(void**)((char*)p + 0x60) = a2; TObjPlayer__sub_80154E3C(p); TBoss5GryphonDemo__sub_8006633C(p); }

}
