#include "types.h"

extern "C" {

void* TWindowSubComCard__sub_80275234(void* p);
void* TWindowSubComCard__sub_8027523C(void* p);
void* TWindowSubComCard__sub_80275244(void* p);
void* TWindowSubComCard__sub_8027524C(void* p);
void destroy_keyboard__17TWindowSubComCardFPv(void* p);
s16 TWindowSubComCard__sub_80275280(void* p);
void TWindowSubComCard__sub_80275288(void* p, s16 v);
void TWindowSubComCard__sub_80275290(void* p);
int fn_80247ED8(void*);

void* TWindowSubComCard__sub_80275234(void* p) { return (char*)p + 0x3b; }
void* TWindowSubComCard__sub_8027523C(void* p) { return (char*)p + 0x2a; }
void* TWindowSubComCard__sub_80275244(void* p) { return (char*)p + 0x19; }
void* TWindowSubComCard__sub_8027524C(void* p) { return (char*)p + 0x8; }
void destroy_keyboard__17TWindowSubComCardFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80247ED8(m); }
s16 TWindowSubComCard__sub_80275280(void* p) { return *(s16*)((char*)p + 0x72); }
void TWindowSubComCard__sub_80275288(void* p, s16 v) { *(s16*)((char*)p + 0x7a) = v; }
void TWindowSubComCard__sub_80275290(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

}
