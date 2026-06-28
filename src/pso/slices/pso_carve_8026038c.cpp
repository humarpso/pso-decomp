#include "types.h"

extern "C" {

s32 fn_801A52E8(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
int fn_8026042C(void* p);
int fn_80260438(void* p);
int TWindowKeyBoardHard__sub_80260444(void* p);

void fn_8026038C(s32 arg0, s32 arg1) {
    fn_801A52E8(arg0, arg1 << 7, -0x81);
}
void fn_802603B4(s32 arg0, s32 arg1) {
    fn_801A52E8(arg0, arg1 << 6, -0x41);
}
void fn_802603DC(s32 arg0, s32 arg1) {
    fn_801A52E8(arg0, arg1 << 4, -0x11);
}
void fn_80260404(s32 arg0, s32 arg1) {
    fn_801A52E8(arg0, arg1 << 5, -0x21);
}
int fn_8026042C(void* p) { return (*(u32*)((char*)p + 0x60) >> 6) & 0x1; }
int fn_80260438(void* p) { return (*(u32*)((char*)p + 0x60) >> 10) & 0x1; }
int TWindowKeyBoardHard__sub_80260444(void* p) { return *(u32*)((char*)p + 0x60) & 0x200; }

}
