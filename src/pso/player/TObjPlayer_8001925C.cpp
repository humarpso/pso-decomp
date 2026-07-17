#include "types.h"

extern "C" {

s16 get_class_id__10TObjPlayerFPv(void* p);
s16 get_item_index__10TObjPlayerFPv(void* p);
s16 get_atp__10TObjPlayerFPv(void* p);
s16 get_field_2c2__10TObjPlayerFPv(void* p);
s16 get_field_2c0__10TObjPlayerFPv(void* p);
s16 get_s16_2c4__10TObjPlayerFPv(void* p);

s16 get_class_id__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2f6); }
s16 get_item_index__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2f4); }
void add_to_field_2ce__10TObjPlayerFPvi(void* a0, int a1) { *(short*)((char*)a0 + 0x2ce) = (*(short*)((char*)a0 + 0x2ce) + a1); }
s16 get_atp__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2c6); }
void add_to_field_2ca__10TObjPlayerFPvi(void* a0, int a1) { *(short*)((char*)a0 + 0x2ca) = (*(short*)((char*)a0 + 0x2ca) + a1); }
s16 get_field_2c2__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2c2); }
void add_to_field_2c8__10TObjPlayerFPvi(void* a0, int a1) { *(short*)((char*)a0 + 0x2c8) = (*(short*)((char*)a0 + 0x2c8) + a1); }
s16 get_field_2c0__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2c0); }
void TObjPlayer__sub_800192B4(void* a0, int a1) { *(short*)((char*)a0 + 0x2cc) = (*(short*)((char*)a0 + 0x2cc) + a1); }

}
