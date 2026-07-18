#include "types.h"

extern "C" {

void* get_kbd_ptr__14TWindowComCardFPv(void* p);
u8 TWindowComCard__sub_80249C18(void* p);
u8 TWindowComCard__sub_80249C20(void* p);

void* get_kbd_ptr__14TWindowComCardFPv(void* p) { return (char*)p + 0x20; }
u8 TWindowComCard__sub_80249C18(void* p) { return *(u8*)((char*)p + 0x8e); }
u8 TWindowComCard__sub_80249C20(void* p) { return *(u8*)((char*)p + 0x8d); }

}
