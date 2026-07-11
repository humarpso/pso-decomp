#include "types.h"

extern "C" {

s16 TObjPlayer__sub_8001925C(void* p);
s16 TObjPlayer__sub_80019264(void* p);
s16 TObjPlayer__sub_8001927C(void* p);
s16 TObjPlayer__sub_80019294(void* p);
s16 TObjPlayer__sub_800192AC(void* p);
s16 TObjPlayer__sub_800192D4(void* p);

s16 TObjPlayer__sub_8001925C(void* p) { return *(s16*)((char*)p + 0x2f6); }
s16 TObjPlayer__sub_80019264(void* p) { return *(s16*)((char*)p + 0x2f4); }
void TObjPlayer__sub_8001926C(void* a0, int a1) { *(short*)((char*)a0 + 0x2ce) = (*(short*)((char*)a0 + 0x2ce) + a1); }
s16 TObjPlayer__sub_8001927C(void* p) { return *(s16*)((char*)p + 0x2c6); }
void TObjPlayer__sub_80019284(void* a0, int a1) { *(short*)((char*)a0 + 0x2ca) = (*(short*)((char*)a0 + 0x2ca) + a1); }
s16 TObjPlayer__sub_80019294(void* p) { return *(s16*)((char*)p + 0x2c2); }
void TObjPlayer__sub_8001929C(void* a0, int a1) { *(short*)((char*)a0 + 0x2c8) = (*(short*)((char*)a0 + 0x2c8) + a1); }
s16 TObjPlayer__sub_800192AC(void* p) { return *(s16*)((char*)p + 0x2c0); }
void TObjPlayer__sub_800192B4(void* a0, int a1) { *(short*)((char*)a0 + 0x2cc) = (*(short*)((char*)a0 + 0x2cc) + a1); }

}
