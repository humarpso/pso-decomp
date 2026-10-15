#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 play_sound_effect(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowHelpItem__sub_80255DDC(void* p);
s32 is_confirmed__18TWindowInputNumberFv();
s32 set_entry_state__20TWindowSubStatusDispFSc(s32 a0 = 0, s32 a1 = 0);
void set_flag0_bit20__15TWindowHelpItemFv(void* p);
void set_flag60_bit4__13TWindowSubMagFv(void* p);

s16 TWindowSubStatusDisp::get_item_type() { return *(s16*)((char*)this + 0x2fa); }
s16 TWindowSubStatusDisp::get_field_2F8() { return *(s16*)((char*)this + 0x2f8); }
s16 TWindowSubStatusDisp::get_stat() { return *(s16*)((char*)this + 0x2f2); }

s16 TWindowSubStatusDisp::get_value() { return *(s16*)((char*)this + 0x2ce); }

}
