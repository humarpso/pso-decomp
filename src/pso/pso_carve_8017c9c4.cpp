#include "types.h"

extern "C" {

int TOVS2Wall01__vt24(void);
int TOVS2Wall01__vt25(void);
int TOVS2Wall01__vt18(void);
int TOVS2Wall01__vt19(void);
int TOVS2Wall01__vt20(void* p);
int TOVS2Wall01__vt21(void* p);
int TOVS2Wall01__vt22(void* p);
void fn_8017CA48(void* p, s32 v);
s32 fn_8017CA50(void* p);
int fn_8017BD48(void*);

int TOVS2Wall01__vt24(void) { return 1; }
int TOVS2Wall01__vt25(void) { return 1; }
int TOVS2Wall01__vt18(void) { return 1; }
int TOVS2Wall01__vt19(void) { return 1; }
int TOVS2Wall01__vt20(void* p) { return fn_8017BD48(p); }
int TOVS2Wall01__vt21(void* p) { return fn_8017BD48(p); }
int TOVS2Wall01__vt22(void* p) { return fn_8017BD48(p); }
int fn_8017CA44(void) { return 0; }
void fn_8017CA48(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 fn_8017CA50(void* p) { return *(s32*)((char*)p + 0x33c); }
int fn_8017CA58(void) { return 0; }
int fn_8017CA94(void) { return 0; }
int fn_8017CAC8(void) { return 0; }

}
