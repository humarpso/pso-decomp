#include "types.h"

extern "C" {

s32 get_field_498__14TAdPlyStatusGCFPv(void* p);
void* get_chara_making_data__14TAdPlyStatusGCFPv(void* p);
s32 get_field_49c__14TAdPlyStatusGCFPv(void* p);
s32 get_field_4a0__14TAdPlyStatusGCFPv(void* p);
void* get_status_data__14TAdPlyStatusGCFPv(void* p);
s32 get_field_4a4__14TAdPlyStatusGCFPv(void* p);
void* get_status_sub__14TAdPlyStatusGCFPv(void* p);

s32 get_field_498__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x498); }
void* get_chara_making_data__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x1b8; }
s32 get_field_49c__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x49c); }
s32 get_field_4a0__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x4a0); }
void* get_status_data__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x324; }
s32 get_field_4a4__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x4a4); }
void* get_status_sub__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x490; }

}
