#include "types.h"

extern "C" {

int TAdScrollWinGC__sub_80327504(void*);
void TAdEp3Exist__sub_8036F0CC(void* p);
int TAdEp3Exist__sub_8036F06C(void* p);
int TAdEp3Exist__sub_8036F08C(void* p);
int TAdEp3Exist__sub_8036F0AC(void* p);
int fn_8023E974(void*);
int fn_8023EA64(void*);
int fn_8023EC14(void*);

int TAdEp3Exist__vt2(void) { return 0; }
int TAdEp3Exist__sub_8036F06C(void* p) { return fn_8023EA64(p); }
int TAdEp3Exist__sub_8036F08C(void* p) { return fn_8023EC14(p); }
int TAdEp3Exist__sub_8036F0AC(void* p) { return fn_8023E974(p); }
void TAdEp3Exist__sub_8036F0CC(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { TAdScrollWinGC__sub_80327504(*(void**)((char*)p + 0x1c)); *(int*)((char*)p + 0x1c) = 0; } }

}
