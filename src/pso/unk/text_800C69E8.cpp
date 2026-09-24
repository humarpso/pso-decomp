#include "types.h"

struct P_800C6A18 { u8 pad[0x30]; u32 flags; };

struct O_800C6A18 { u8 pad[0x2a8]; P_800C6A18 *p; u8 pad2[0x8c]; u16 f338; };

extern "C" {
void TObjPlayer__sub_800C6A18(O_800C6A18 *self);
}

extern "C" {

void TObjPlayer__sub_800C69E8(void* p);
void TObjPlayer__sub_800C69F4(void);
void TObjPlayer__sub_800C69F8(void);
void TObjPlayer__sub_800C69FC(void);
void TObjPlayer__sub_800C6A00(void);
void TObjPlayer__sub_800C6A04(void);
void TObjPlayer__sub_800C6A08(void);
void TObjPlayer__sub_800C6A0C(void);
u16 TObjPlayer__sub_800C6A10(void* p);

void TObjPlayer__sub_800C69E8(void* p) { *(s16*)((char*)p + 0x326) = 1; }
void TObjPlayer__sub_800C69F4(void) {  }
void TObjPlayer__sub_800C69F8(void) {  }
void TObjPlayer__sub_800C69FC(void) {  }
void TObjPlayer__sub_800C6A00(void) {  }
void TObjPlayer__sub_800C6A04(void) {  }
void TObjPlayer__sub_800C6A08(void) {  }
void TObjPlayer__sub_800C6A0C(void) {  }
u16 TObjPlayer__sub_800C6A10(void* p) { return *(u16*)((char*)p + 0x338); }
void TObjPlayer__sub_800C6A18(O_800C6A18 *self) {
    if (self->p != 0 && (self->p->flags & 0x800)) {
        self->p = 0;
        self->f338 = 0xFFFF;
    }
}

}
