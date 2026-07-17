#include "types.h"

extern "C" {

void TWindowChat__sub_80247D2C(void* p);
u8 TWindowChat__sub_80247D3C(void* p);
int TWindowChat__sub_80247D44(void* p);
int forward_card_at_1c__11TWindowChatFPv(void* p);
int get_subcard_field1c__11TWindowChatFPv(void* p);
int TWindowChat__sub_80247DAC(void* p);
void set_active_flag__11TWindowChatFPv(void* p);
void set_input_active__11TWindowChatFPv(void* p);
int is_mode_bit6__11TWindowChatFPv(void* p);
int is_visible__11TWindowChatFPv(void* p);
int is_mode_bit4__11TWindowChatFPv(void* p);
int is_open__11TWindowChatFPv(void* p);
void fn_80247ED8(void* p);
int is_visible__17TWindowSubComCardFPv(void*);
int get_status_flag__17TWindowSubComCardFPv(void*);
int TWindowSubComCard__sub_80265BF8(void*);

int forward_card_at_1c__11TWindowChatFPv(void* p) { return TWindowSubComCard__sub_80265BF8(*(void**)((char*)p + 0x1c)); }
int get_subcard_field1c__11TWindowChatFPv(void* p) { return is_visible__17TWindowSubComCardFPv(*(void**)((char*)p + 0x1c)); }
int TWindowChat__sub_80247DAC(void* p) { return get_status_flag__17TWindowSubComCardFPv(*(void**)((char*)p + 0x1c)); }
void set_active_flag__11TWindowChatFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x10; }
void set_input_active__11TWindowChatFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x20; }
int is_mode_bit6__11TWindowChatFPv(void* p) { return (*(u16*)((char*)p + 0x1e) >> 6) & 0x1; }

}
