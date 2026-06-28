#include "types.h"

extern "C" {

void TWindowSubQuestBoard__vt2(void);
void fn_8027CED8(s32 arg0, s32 arg1);
void fn_8027CF00(s32 arg0, s32 arg1);
void fn_8027CF28(s32 arg0, s32 arg1);
void fn_8027CF50(s32 arg0, s32 arg1);
void fn_8027CF78(s32 arg0, s32 arg1);
int fn_8027CFA0(void* p, int a1);
int fn_801A52E8(void*, int, int);

void fn_8027CED8(s32 arg0, s32 arg1) {
    fn_801A52E8((void*)(arg0), arg1 << 0xA, -0x1C01);
}
void fn_8027CF00(s32 arg0, s32 arg1) {
    fn_801A52E8((void*)(arg0), arg1 << 8, -0x301);
}
void fn_8027CF28(s32 arg0, s32 arg1) {
    fn_801A52E8((void*)(arg0), arg1 * 8, -9);
}
void fn_8027CF50(s32 arg0, s32 arg1) {
    fn_801A52E8((void*)(arg0), arg1 * 4, -5);
}
void fn_8027CF78(s32 arg0, s32 arg1) {
    fn_801A52E8((void*)(arg0), arg1 * 2, -3);
}
int fn_8027CFA0(void* p, int a1) { return fn_801A52E8(p, a1, -2); }
void TWindowSubQuestBoard__vt2(void) {  }

}
