#include "types.h"

extern "C" {

void TWindowChat__sub_80247D2C(void* p);
u8 TWindowChat__sub_80247D3C(void* p);
int TWindowChat__sub_80247D44(void* p);
int forward_card_at_1c__11TWindowChatFPv(void* p);
int get_subcard_field1c__11TWindowChatFPv(void* p);
int TWindowChat__sub_80247DAC(void* p);
void TWindowChat__sub_80247DD0(void* p);
void TWindowChat__sub_80247DE0(void* p);
int TWindowChat__sub_80247DF0(void* p);
int TWindowChat__sub_80247E44(void* p);
int TWindowChat__sub_80247EA8(void* p);
int TWindowChat__sub_80247EB4(void* p);
void fn_80247ED8(void* p);
int TWindowSubComCard__sub_8007341C(void*);
int TWindowSubComCard__sub_80073DB8(void*);
int TWindowSubComCard__sub_80265BF8(void*);

int TWindowChat__sub_80247EA8(void* p) { return (*(u16*)((char*)p + 0x1e) >> 4) & 0x1; }
int TWindowChat__sub_80247EB4(void* p) { return *(u16*)((char*)p + 0x1e) & 0x1; }

}
