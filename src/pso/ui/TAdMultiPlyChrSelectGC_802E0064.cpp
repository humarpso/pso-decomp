#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TAdMultiPlyChrSelectGC__sub_802E006C(void);
int TAdMultiPlyChrSelectGC__sub_802E00CC(void);
s32 get_field_0x530__22TAdMultiPlyChrSelectGCFPv(void* p);
int get_global_state__22TAdMultiPlyChrSelectGCFv(void);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(void* p);
int get_select_flag__22TAdMultiPlyChrSelectGCFv(void);
void restore_selection__22TAdMultiPlyChrSelectGCFv(void);
void set_field_1c__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);
void set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);
void update_field_4E8__22TAdMultiPlyChrSelectGCFPv(void *arg0);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8();

void set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4ec) = v; }

int TAdMultiPlyChrSelectGC__sub_802E006C(void) { return 0; }

    extern int TAdMultiPlyChrSelectGC__data_805D67D8;
    extern int TAdMultiPlyChrSelectGC__data_805D67E0;
void restore_selection__22TAdMultiPlyChrSelectGCFv(void) { TAdMultiPlyChrSelectGC__data_805D67E0 = TAdMultiPlyChrSelectGC__data_805D67D8; }

void update_field_4E8__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4E8) = TAdMultiPlyChrSelectGC__sub_802DFFE8();
}
s32 get_field_0x530__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x530); }
void set_field_1c__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x1c); }

int TAdMultiPlyChrSelectGC__sub_802E00CC(void) { return 0; }

    extern int lbl_805D6E78;
int get_global_state__22TAdMultiPlyChrSelectGCFv(void) {  return lbl_805D6E78; }

    extern int lbl_805D384C;
int get_select_flag__22TAdMultiPlyChrSelectGCFv(void) {  return lbl_805D384C; }

}
