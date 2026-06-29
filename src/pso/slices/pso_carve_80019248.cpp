#include "types.h"

extern "C" {

s16 fn_8001925C(void* p);
s16 fn_80019264(void* p);
s16 fn_8001927C(void* p);
s16 fn_80019294(void* p);
s16 fn_800192AC(void* p);
s16 fn_800192D4(void* p);

int fn_80019248(void) { return 0; }
s16 fn_8001925C(void* p) { return *(s16*)((char*)p + 0x2f6); }
s16 fn_80019264(void* p) { return *(s16*)((char*)p + 0x2f4); }
void fn_8001926C(void* a0, int a1) { *(short*)((char*)a0 + 0x2ce) = (*(short*)((char*)a0 + 0x2ce) + a1); }
s16 fn_8001927C(void* p) { return *(s16*)((char*)p + 0x2c6); }
void fn_80019284(void* a0, int a1) { *(short*)((char*)a0 + 0x2ca) = (*(short*)((char*)a0 + 0x2ca) + a1); }
s16 fn_80019294(void* p) { return *(s16*)((char*)p + 0x2c2); }
void fn_8001929C(void* a0, int a1) { *(short*)((char*)a0 + 0x2c8) = (*(short*)((char*)a0 + 0x2c8) + a1); }
s16 fn_800192AC(void* p) { return *(s16*)((char*)p + 0x2c0); }
void fn_800192B4(void* a0, int a1) { *(short*)((char*)a0 + 0x2cc) = (*(short*)((char*)a0 + 0x2cc) + a1); }
int fn_800192C4(void) { return 0; }
s16 fn_800192D4(void* p) { return *(s16*)((char*)p + 0x2c4); }

}
