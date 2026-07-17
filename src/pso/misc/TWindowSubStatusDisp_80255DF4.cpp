#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 get_item_type__20TWindowSubStatusDispFPv(void* p);
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p);
s16 get_stat__20TWindowSubStatusDispFPv(void* p);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowHelpItem__sub_80255DDC(void* p);
s32 is_confirmed__18TWindowInputNumberFPv();
s16 get_value__20TWindowSubStatusDispFPv(void* p);
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
void set_flag0_bit20__15TWindowHelpItemFPv(void* p);
void set_flag60_bit4__13TWindowSubMagFPv(void* p);

s16 get_item_type__20TWindowSubStatusDispFPv(void* p) { return *(s16*)((char*)p + 0x2fa); }
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p) { return *(s16*)((char*)p + 0x2f8); }
s16 get_stat__20TWindowSubStatusDispFPv(void* p) { return *(s16*)((char*)p + 0x2f2); }

}
