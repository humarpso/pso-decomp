#include "types.h"

extern "C" {

int fn_8026647C(void* p);
int fn_80266388(void*, int, int, int);

int fn_8026647C(void* p) { return fn_80266388(p, 4, 0, 0); }
int fn_802664A8(void* a0 = 0, void* a1 = 0, void* a2 = 0) { return 0; }
void fn_80266508(s32 arg0, s32 arg1) {
    fn_802664A8((void*)(arg0), (void*)(arg1), (void*)(4));
}
int fn_8026652C(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0) { return 0; }
void fn_8026659C(s32 arg0, s32 arg1, s32 arg2) {
    fn_8026652C((void*)(arg0), (void*)(arg1), (void*)(arg2), (void*)(4));
}

}
