#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdPlyStatusGC__sub_802E11BC(void* p);
void TAdPlyStatusGC__sub_802E11C8(void* p);
void close_window__14TAdPlyStatusGCFPvi(void *arg0, s32 arg1);
void* get_chara_making_data__14TAdPlyStatusGCFPv(void* p);
s32 get_field_498__14TAdPlyStatusGCFPv(void* p);
s32 get_field_49c__14TAdPlyStatusGCFPv(void* p);
s32 get_field_4a0__14TAdPlyStatusGCFPv(void* p);
s32 get_field_4a4__14TAdPlyStatusGCFPv(void* p);
int get_index__14TAdPlyStatusGCFv(void);
void* get_status_data__14TAdPlyStatusGCFPv(void* p);
void* get_status_sub__14TAdPlyStatusGCFPv(void* p);
void set_status_index__14TAdPlyStatusGCFii(int a0, int a1);
void set_status_param__14TAdPlyStatusGCFii(int a0, int a1);
M2C_UNK TWindow__close(void *);

s32 get_field_498__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x498); }
void* get_chara_making_data__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x1b8; }
s32 get_field_49c__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x49c); }
s32 get_field_4a0__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x4a0); }
void* get_status_data__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x324; }
s32 get_field_4a4__14TAdPlyStatusGCFPv(void* p) { return *(s32*)((char*)p + 0x4a4); }
void* get_status_sub__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x490; }

    extern int lbl_805D6DAC;
void set_status_param__14TAdPlyStatusGCFii(int a0, int a1) { lbl_805D6DAC = a1; }

    extern int lbl_805D6DA8;
int get_index__14TAdPlyStatusGCFv(void) {  return lbl_805D6DA8; }

    extern int lbl_805D6DB4;
void set_status_index__14TAdPlyStatusGCFii(int a0, int a1) { lbl_805D6DB4 = a1; }

extern s32 TAdPlyStatusGC__data_805D6DB0;

void close_window__14TAdPlyStatusGCFPvi(void *arg0, s32 arg1) {
    TAdPlyStatusGC__data_805D6DB0 = arg1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
}

void TAdPlyStatusGC__sub_802E11BC(void* p) { *(s32*)((char*)p + 0x1c) = 0; }
void TAdPlyStatusGC__sub_802E11C8(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

}
