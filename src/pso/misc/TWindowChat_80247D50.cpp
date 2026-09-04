#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TWindowChat__sub_80247D50(u8 *arg0);
u8 TWindowChat__sub_80247EC0(u8 *arg0);
}

extern "C" {

int TWindowChat__sub_80247DAC(void* p);
int TWindowChat__sub_80247DFC(void);
int TWindowChat__sub_80247E50(void);
int TWindowSubSymbolChatHelp__sub_80247EE8(int a0);
void fn_80247ED8(void* p);
int forward_card_at_1c__11TWindowChatFPv(void* p);
int get_subcard_field1c__11TWindowChatFPv(void* p);
int is_mode_bit4__11TWindowChatFPv(void* p);
int is_mode_bit6__11TWindowChatFPv(void* p);
int is_open__11TWindowChatFPv(void* p);
int is_visible__11TWindowChatFPv(void* p);
void set_active_flag__11TWindowChatFPv(void* p);
void set_input_active__11TWindowChatFPv(void* p);
void TWindowChat__sub_80247D2C(void* p);
int TWindowSubComCard__sub_80265BF8(void*);
int get_flag__11TWindowChatFPv(void* p);
u8 get_input_mode__11TWindowChatFPv(void* p);
int get_status_flag__17TWindowSubComCardFPv(void*);
int is_visible__17TWindowSubComCardFPv(void*);

s32 TWindowChat__sub_80247D50(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68) > 0;
}

int forward_card_at_1c__11TWindowChatFPv(void* p) { return TWindowSubComCard__sub_80265BF8(*(void**)((char*)p + 0x1c)); }
int get_subcard_field1c__11TWindowChatFPv(void* p) { return is_visible__17TWindowSubComCardFPv(*(void**)((char*)p + 0x1c)); }
int TWindowChat__sub_80247DAC(void* p) { return get_status_flag__17TWindowSubComCardFPv(*(void**)((char*)p + 0x1c)); }
void set_active_flag__11TWindowChatFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x10; }
void set_input_active__11TWindowChatFPv(void* p) { *(u16*)((char*)p + 0x1e) |= 0x20; }
int is_mode_bit6__11TWindowChatFPv(void* p) { return (*(u16*)((char*)p + 0x1e) >> 6) & 0x1; }

int TWindowChat__sub_80247DFC(void) { return 0; }

int is_visible__11TWindowChatFPv(void* p) { return (*(u16*)((char*)p + 0x1e) >> 5) & 0x1; }

int TWindowChat__sub_80247E50(void) { return 0; }

int is_mode_bit4__11TWindowChatFPv(void* p) { return (*(u16*)((char*)p + 0x1e) >> 4) & 0x1; }
int is_open__11TWindowChatFPv(void* p) { return *(u16*)((char*)p + 0x1e) & 0x1; }

u8 TWindowChat__sub_80247EC0(u8 *arg0) {
    return (u8) ((M2C_FIELD(arg0, u16 *, 0x1E) & 0x240) != 0);
}

void fn_80247ED8(void* p) { *(u32*)((char*)p + 0x60) |= 0x2; }

    extern int lbl_8044EA94[];
int TWindowSubSymbolChatHelp__sub_80247EE8(int a0) {  return lbl_8044EA94[a0]; }

}
