#include "types.h"

extern "C" {

void* get_card_data_ptr__17TWindowSubComCardFPv(void* p);
void* TWindowSubComCard__sub_8027523C(void* p);
void* get_name__17TWindowSubComCardFPv(void* p);
void* get_sub_obj__17TWindowSubComCardFPv(void* p);
void destroy_keyboard__17TWindowSubComCardFPv(void* p);
s16 get_field_72__17TWindowSubComCardFPv(void* p);
void set_page__17TWindowSubComCardFPvs(void* p, s16 v);
void set_flag_10__17TWindowSubComCardFPv(void* p);
int fn_80247ED8(void*);

void* get_card_data_ptr__17TWindowSubComCardFPv(void* p) { return (char*)p + 0x3b; }
void* TWindowSubComCard__sub_8027523C(void* p) { return (char*)p + 0x2a; }
void* get_name__17TWindowSubComCardFPv(void* p) { return (char*)p + 0x19; }
void* get_sub_obj__17TWindowSubComCardFPv(void* p) { return (char*)p + 0x8; }
void destroy_keyboard__17TWindowSubComCardFPv(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80247ED8(m); }
s16 get_field_72__17TWindowSubComCardFPv(void* p) { return *(s16*)((char*)p + 0x72); }
void set_page__17TWindowSubComCardFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x7a) = v; }
void set_flag_10__17TWindowSubComCardFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

}
