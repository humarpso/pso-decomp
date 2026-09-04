#include "types.h"

extern "C" {

void* TObjEneMorfosArm__sub_803326B4(void* p);
s32 TObjEneMorfosArm__sub_803326BC(void* p);
int TObjEneMorfos__sub_8033263C(void);
void TObjEneMorfos__vt103(void* p);
void TWindowSubTradeMain__sub_803323A8(void* p);
void TWindowSubTradeMain__sub_803323B8(void* p);
void TWindowSubTradeMain__sub_803323C8(void* p);
int TObjEneMorfos__sub_8033471C(void*);
int get_target_info__9TObjEneDDFPv(void*);

void TWindowSubTradeMain__sub_803323A8(void* p) { *(u16*)((char*)p + 0x60) |= 0x40; }
void TWindowSubTradeMain__sub_803323B8(void* p) { *(u16*)((char*)p + 0x60) &= 0xffffffbf; }
void TWindowSubTradeMain__sub_803323C8(void* p) { *(u16*)((char*)p + 0x70) &= 0xfffffffb; }

void TObjEneMorfos__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneMorfos__sub_8033471C(p); } }

int TObjEneMorfos__sub_8033263C(void) { return 0; }

void* TObjEneMorfosArm__sub_803326B4(void* p) { return (char*)p + 0x4a4; }
s32 TObjEneMorfosArm__sub_803326BC(void* p) { return *(s32*)((char*)p + 0x60); }

}
