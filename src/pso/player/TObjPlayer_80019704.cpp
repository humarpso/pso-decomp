#include "types.h"

extern "C" {

f64 start__10TAdEndTextFv(void);
f64 TObjPlayer__sub_80019784(void);
int get_item_field_6__10TObjPlayerFPv(void* p);
u8 get_field_ed__10TObjPlayerFPv(void* p);
s32 get_type__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);

int get_item_field_6__10TObjPlayerFPv(void* p) { return get_slot_value__10TObjPlayerFPvi((char*)p + 0xd04, 6); }
u8 get_field_ed__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0xed); }
s32 get_type__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x0); }

}
