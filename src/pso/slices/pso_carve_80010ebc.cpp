#include "types.h"

extern "C" {

void fn_80010EBC(void);
void fn_80010EC0(void);
void fn_80010EC4(void);
void fn_80010EC8(void);
u16 fn_80010F4C(void* p);
void fn_80011010(void);

void fn_80010EBC(void) {  }
void fn_80010EC0(void) {  }
void fn_80010EC4(void) {  }
void fn_80010EC8(void) {  }
int fn_80010ECC(void) { return 0; }
u16 fn_80010F4C(void* p) { return *(u16*)((char*)p + 0x2d6); }
int TOMineTrap__sub_80010F54(void) { return 0; }
int fn_80010FCC(void) { return 0; }
void fn_80011010(void) {  }

}
