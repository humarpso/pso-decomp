#include "types.h"

extern "C" {

int fn_801B3FD8(void* p);
int fn_801B3FFC(void* p);
int fn_801B4020(void* p);
int fn_801B4044(void* p);
int fn_801BF500(void*);
int fn_801BF524(void*);
int fn_801C5BC8(void*);
int fn_801C5C0C(void*);

int fn_801B3FD8(void* p) { return fn_801C5BC8((char*)p + 0x63c); }
int fn_801B3FFC(void* p) { return fn_801C5C0C((char*)p + 0x63c); }
int fn_801B4020(void* p) { return fn_801BF500((char*)p + 0x63c); }
int fn_801B4044(void* p) { return fn_801BF524((char*)p + 0x63c); }
int fn_801B4068(void) { return 0; }
int fn_801B40D0(void) { return 0; }
int fn_801B4118(void) { return 0; }
int fn_801B417C(void) { return 0; }
int fn_801B4264(void) { return 0; }
int fn_801B42AC(void) { return 0; }

}
