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
int fn_8001926C(void) { return 0; }
s16 fn_8001927C(void* p) { return *(s16*)((char*)p + 0x2c6); }
int fn_80019284(void) { return 0; }
s16 fn_80019294(void* p) { return *(s16*)((char*)p + 0x2c2); }
int fn_8001929C(void) { return 0; }
s16 fn_800192AC(void* p) { return *(s16*)((char*)p + 0x2c0); }
int fn_800192B4(void) { return 0; }
int fn_800192C4(void) { return 0; }
s16 fn_800192D4(void* p) { return *(s16*)((char*)p + 0x2c4); }

}
