#include "types.h"

extern "C" {

s32 fn_801334D4(void* p);
s32 fn_801334DC(void* p);
void fn_801334E4(void);
void fn_801334E8(void* p, void* q);
void fn_80133504(void);
void fn_80133508(void);
void fn_8013350C(void* p, void* a1);
void fn_80133530(void* p, void* q);
void fn_80133544(void);
void fn_80133548(void);
void fn_8013354C(void* p, void* q);

s32 fn_801334D4(void* p) { return *(s32*)((char*)p + 0xac); }
s32 fn_801334DC(void* p) { return *(s32*)((char*)p + 0xa4); }
void fn_801334E4(void) {  }
void fn_801334E8(void* p, void* q) { *(f32*)((char*)p + 0x20) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0x28) = *(f32*)((char*)q + 0xc); }
void fn_80133504(void) {  }
void fn_80133508(void) {  }
void fn_8013350C(void* p, void* a1) { fn_80133530((char*)p + 0x14, a1); }
void fn_80133530(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }
void fn_80133544(void) {  }
void fn_80133548(void) {  }
void fn_8013354C(void* p, void* q) { *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x8); }

}
