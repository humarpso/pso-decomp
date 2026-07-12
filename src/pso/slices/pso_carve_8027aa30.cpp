#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
void get_selected_entry__14TWindowSubItemFPv(void *arg0);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK TWindowSubItem__sub_80249058();
int TShopArmorListWindow__sub_80266CF8(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int TWindowSubStatusDisp__sub_80266EB8(void*);
int fn_8027ABFC(void* a0 = 0);
void refresh__14TWindowSubItemFPv(void* p);
void set_flag60_bit10__14TWindowSubItemFPv(void* p);
void TWindowSubItem__sub_8027AA3C(void* p);
void TWindowSubItem__sub_8027AA48(void* p, s16 v);

int TWindowSubItem__sub_8027AA30(void) { return 0; }

}
