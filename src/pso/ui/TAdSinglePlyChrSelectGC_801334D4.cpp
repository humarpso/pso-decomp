#include "types.h"

extern "C" {

s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(void* p);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(void* p);
void TAdSinglePlyChrSelectGC__sub_801334E4(void);
void set_position__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* q);
void noop_laser__23TAdSinglePlyChrSelectGCFv(void);
void TAdSinglePlyChrSelectGC__sub_80133508(void);
void forward_to_field_0x14__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1);
void TAdSinglePlyChrSelectGC__sub_80133530(void* p, void* q);
void TAdSinglePlyChrSelectGC__sub_80133544(void);
void TAdSinglePlyChrSelectGC__sub_80133548(void);
void set_vec3__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* q);

s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0xac); }
s32 TAdSinglePlyChrSelectGC__sub_801334DC(void* p) { return *(s32*)((char*)p + 0xa4); }
void TAdSinglePlyChrSelectGC__sub_801334E4(void) {  }
void set_position__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x20) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0x28) = *(f32*)((char*)q + 0xc); }
void noop_laser__23TAdSinglePlyChrSelectGCFv(void) {  }
void TAdSinglePlyChrSelectGC__sub_80133508(void) {  }
void forward_to_field_0x14__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1) { TAdSinglePlyChrSelectGC__sub_80133530((void*)((char*)p + 0x14), (void*)(a1)); }
void TAdSinglePlyChrSelectGC__sub_80133530(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }
void TAdSinglePlyChrSelectGC__sub_80133544(void) {  }
void TAdSinglePlyChrSelectGC__sub_80133548(void) {  }
void set_vec3__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x8); }

}
