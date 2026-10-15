#include "types.h"

extern "C" {

s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p);
s16 get_item_type__20TWindowSubStatusDispFPv(void* p);
s16 get_stat__20TWindowSubStatusDispFPv(void* p);
s16 get_value__20TWindowSubStatusDispFPv(void* p);
s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowHelpItem__sub_80255DDC(void* p);
s32 is_confirmed__18TWindowInputNumberFPv();
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
void set_flag0_bit20__15TWindowHelpItemFPv(void* p);
void set_flag60_bit4__13TWindowSubMagFPv(void* p);

s16 get_item_type__20TWindowSubStatusDispFPv(void* p) { return *(s16*)((char*)p + 0x2fa); }
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p) { return *(s16*)((char*)p + 0x2f8); }
s16 get_stat__20TWindowSubStatusDispFPv(void* p) { return *(s16*)((char*)p + 0x2f2); }

s16 get_value__20TWindowSubStatusDispFPv(void* p) { return *(s16*)((char*)p + 0x2ce); }

}
