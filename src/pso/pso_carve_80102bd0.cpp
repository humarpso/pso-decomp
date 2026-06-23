#include "types.h"

extern "C" {

int fn_80102BD0(void);
int fn_80102BD8(void);
u16 fn_80102C3C(void* p);
u8 fn_80102C44(void* p);
void fn_80102C78(void* p, s16 v);
s16 fn_80102C80(void* p);
s16 fn_80102C88(void* p);
int fn_80102C90(void* p);
f32 fn_80102CD8(void* p);
int fn_801C675C(void*);

int fn_80102BD0(void) { return 0; }
int fn_80102BD8(void) { return 0; }
int fn_80102BE0(void) { return 0; }
int fn_80102BEC(void) { return 0; }
int fn_80102BFC(void) { return 0; }
int fn_80102C0C(void) { return 0; }
int fn_80102C30(void) { return 0; }
u16 fn_80102C3C(void* p) { return *(u16*)((char*)p + 0xe4); }
u8 fn_80102C44(void* p) { return *(u8*)((char*)p + 0xec); }
int fn_80102C4C(void) { return 0; }
int fn_80102C58(void) { return 0; }
int fn_80102C68(void) { return 0; }
void fn_80102C78(void* p, s16 v) { *(s16*)((char*)p + 0x32e) = v; }
s16 fn_80102C80(void* p) { return *(s16*)((char*)p + 0x2be); }
s16 fn_80102C88(void* p) { return *(s16*)((char*)p + 0x2bc); }
int fn_80102C90(void* p) { return fn_801C675C((char*)p + 0xd04); }
int fn_80102CB4(void) { return 0; }
f32 fn_80102CD8(void* p) { return *(f32*)((char*)p + 0x1c); }
int fn_80102CE0(void) { return 0; }
int fn_80102D14(void) { return 0; }
int fn_80102D48(void) { return 0; }
int fn_80102D84(void) { return 0; }
int fn_80102DA8(void) { return 0; }

}
