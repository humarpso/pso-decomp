#include "types.h"

extern "C" {

void fn_800C69E8(void* p);
void fn_800C69F4(void);
void fn_800C69F8(void);
void fn_800C69FC(void);
void fn_800C6A00(void);
void fn_800C6A04(void);
void fn_800C6A08(void);
void fn_800C6A0C(void);
u16 fn_800C6A10(void* p);

void fn_800C69E8(void* p) { *(s16*)((char*)p + 0x326) = 1; }
void fn_800C69F4(void) {  }
void fn_800C69F8(void) {  }
void fn_800C69FC(void) {  }
void fn_800C6A00(void) {  }
void fn_800C6A04(void) {  }
void fn_800C6A08(void) {  }
void fn_800C6A0C(void) {  }
u16 fn_800C6A10(void* p) { return *(u16*)((char*)p + 0x338); }
int fn_800C6A18(void) { return 0; }

}
