#include "types.h"

extern "C" {

int fn_8010B788(void* p);
int fn_8010B7B0(void* p);
s32 fn_8010B808(void* p);
s32 fn_8010B810(void* p);
int fn_8001BED8(void*, int);
int fn_8001BEE8(void*, int);

int fn_8010B788(void* p) { return fn_8001BED8((char*)p + 0xc, 32); }
int fn_8010B7B0(void* p) { return fn_8001BEE8((char*)p + 0xc, 32); }
int fn_8010B7D8(void) { return 0; }
int fn_8010B7E8(void) { return 0; }
int fn_8010B7F8(void) { return 0; }
s32 fn_8010B808(void* p) { return *(s32*)((char*)p + 0x31c); }
s32 fn_8010B810(void* p) { return *(s32*)((char*)p + 0x318); }
int fn_8010B818(void) { return 0; }
int fn_8010B828(void) { return 0; }
int fn_8010B838(void) { return 0; }
int fn_8010B848(void) { return 0; }
int fn_8010B8B0(void) { return 0; }

}
