#include "types.h"

extern "C" {

s32 obj_isState2_324();
s32 fn_801A1DDC(s32);
s32 fn_801AEE10();
s32 fn_801BAA00(s32);
s32 fn_801BE3B4(s32);
int queue_destruction__7TObjectFv(void*);
void TObjPlayer__sub_801BC8B0(void* p);
int fn_801058F8(void*);
int fn_801AFF50(void*);
int fn_801AFF80(void*);
void fn_801BCB2C(void* p);
void TObjPlayer__sub_801BCA0C(void);
void TObjPlayer__sub_801BCA10(void);
void fn_801BCAB0(void);
void TObjPlayer__sub_801BCB28(void);
int TObjPlayer__sub_801BCC30(void* p);
void TObjPlayer__sub_801BCC50(void);
int fn_801AFDD8(void*);

int fn_801BC81C(void) { return 0; }
int fn_801BC858(void) { return 0; }
void TObjPlayer__sub_801BC8B0(void* p) { if (*(unsigned int*)((char*)p + 0x548) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x548)); *(int*)((char*)p + 0x548) = 0; } }
int fn_801BC8F0(void) { return 0; }
int fn_801BC948(void) { return 0; }
void TObjPlayer__sub_801BCA0C(void) {  }
void TObjPlayer__sub_801BCA10(void) {  }
int fn_801BCA14(void) { return 0; }
void fn_801BCAB0(void) {  }
void fn_801BCAB4(s32 arg0) {
    if (obj_isState2_324() != 0) {
        fn_801BE3B4(arg0);
    } else {
        fn_801AFF80((void*)(arg0));
        fn_801AFF50((void*)(arg0));
    }
    if ((fn_801AEE10() != 0) && (fn_801A1DDC(arg0) != 0)) {
        fn_801BAA00(arg0);
    }
}
void TObjPlayer__sub_801BCB28(void) {  }
void fn_801BCB2C(void* p) { if (fn_801058F8(p) != 0) { fn_801AFF80(p); fn_801AFF50(p); } }
int fn_801BCB70(void) { return 0; }
int TObjPlayer__sub_801BCC30(void* p) { return fn_801AFDD8(p); }
void TObjPlayer__sub_801BCC50(void) {  }

}
