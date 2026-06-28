#include "types.h"

extern "C" {

s32 VecCopy__FP3VecPC3Vec(s32, s32);
int fn_802FBBFC(void*, void*);
void fn_802FCCD0(void* p);
void fn_802FCD00(void);
void fn_802FCD04(void);
void fn_802FCD08(void);
void fn_802FCD0C(void);

void fn_802FCC7C(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x434);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
int fn_802FCCBC(void) { return 0; }
void fn_802FCCD0(void* p) { if (*(short*)((char*)p + 0x326) != 22) { fn_802FBBFC(p, (void*)22); } }
void fn_802FCD00(void) {  }
void fn_802FCD04(void) {  }
void fn_802FCD08(void) {  }
void fn_802FCD0C(void) {  }

}
