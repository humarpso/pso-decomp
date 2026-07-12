#include "types.h"

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_801334D4(void* p);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(void* p);
void TAdSinglePlyChrSelectGC__sub_801334E4(void);
void TAdSinglePlyChrSelectGC__sub_801334E8(void* p, void* q);
void TAdSinglePlyChrSelectGC__sub_80133504(void);
void TAdSinglePlyChrSelectGC__sub_80133508(void);
void TAdSinglePlyChrSelectGC__sub_8013350C(void* p, void* a1);
void TAdSinglePlyChrSelectGC__sub_80133530(void* p, void* q);
void TAdSinglePlyChrSelectGC__sub_80133544(void);
void TAdSinglePlyChrSelectGC__sub_80133548(void);
void TAdSinglePlyChrSelectGC__sub_8013354C(void* p, void* q);

s32 TAdSinglePlyChrSelectGC__sub_801334D4(void* p) { return *(s32*)((char*)p + 0xac); }
s32 TAdSinglePlyChrSelectGC__sub_801334DC(void* p) { return *(s32*)((char*)p + 0xa4); }
void TAdSinglePlyChrSelectGC__sub_801334E4(void) {  }
void TAdSinglePlyChrSelectGC__sub_801334E8(void* p, void* q) { *(f32*)((char*)p + 0x20) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0x28) = *(f32*)((char*)q + 0xc); }
void TAdSinglePlyChrSelectGC__sub_80133504(void) {  }
void TAdSinglePlyChrSelectGC__sub_80133508(void) {  }
void TAdSinglePlyChrSelectGC__sub_8013350C(void* p, void* a1) { TAdSinglePlyChrSelectGC__sub_80133530((void*)((char*)p + 0x14), (void*)(a1)); }
void TAdSinglePlyChrSelectGC__sub_80133530(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }
void TAdSinglePlyChrSelectGC__sub_80133544(void) {  }
void TAdSinglePlyChrSelectGC__sub_80133548(void) {  }
void TAdSinglePlyChrSelectGC__sub_8013354C(void* p, void* q) { *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x8); }

}
