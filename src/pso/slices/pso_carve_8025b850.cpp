#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowKeyBoardSoft__sub_8025D994();
s32 TWindowKeyBoardSoft__sub_8025DA18();
s32 TWindowKeyBoardSoft__sub_8025DA98();
int fn_8025B850(void* p);
s32 fn_8025B8C8(void* p);
void TWindowKeyBoardSoft__sub_8025B928(void);

int fn_8025B850(void* p) { return *(u16*)((char*)p + 0x0) & 0x4; }
int fn_8025B85C(void) { return 0; }
s32 fn_8025B8C8(void* p) { return *(s32*)((char*)p + 0x70); }
int TWindowKeyBoardSoft__vt2(void) { return 0; }
void TWindowKeyBoardSoft__sub_8025B928(void) {  }
int TWindowKeyBoardSoft__sub_8025B92C(void) { return 0; }
void TWindowKeyBoardSoft__sub_8025B9D8(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r4 & 4) {
        if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) {
            TWindowKeyBoardSoft__sub_8025DA18();
            return;
        }
        TWindowKeyBoardSoft__sub_8025D994();
        return;
    }
    if (temp_r4 & 2) {
        TWindowKeyBoardSoft__sub_8025DA98();
    }
}
int TWindowKeyBoardSoft__sub_8025BA28(void) { return 0; }
int TWindowKeyBoardSoft__sub_8025BA44(void) { return 0; }
int TWindowKeyBoardSoft__vt14(void) { return 0; }
int TWindowKeyBoardSoft__vt13(void) { return 0; }
int TWindowKeyBoardSoft__vt12(void) { return 0; }
int TWindowKeyBoardSoft__vt11(void) { return 0; }
int TWindowKeyBoardSoft__vt10(void) { return 0; }
int TWindowKeyBoardSoft__vt9(void) { return 0; }
int TWindowKeyBoardSoft__vt8(void) { return 0; }
int TWindowKeyBoardSoft__vt7(void) { return 0; }
int TWindowKeyBoardSoft__vt6(void) { return 0; }
int TWindowKeyBoardSoft__vt5(void) { return 0; }
int TWindowKeyBoardSoft__vt4(void) { return 0; }
int TWindowKeyBoardSoft__vt3(void) { return 0; }
int TWindowKeyBoardSoft__vt17(void) { return 0; }
int TWindowKeyBoardSoft__vt18(void) { return 0; }
int TWindowKeyBoardSoft__vt16(void) { return 0; }
int TWindowKeyBoardSoft__vt15(void) { return 0; }
int TWindowKeyBoardSoft__vt20(void) { return 0; }
int TWindowKeyBoardSoft__sub_8025C24C(void) { return 0; }
int TWindowKeyBoardSoft__vt1(void) { return 0; }
int TWindowKeyBoardSoft__vt21(void) { return 0; }
void TWindowKeyBoardSoft__sub_8025C3EC(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x60);
    if (temp_r4 & 4) {
        if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20) {
            TWindowKeyBoardSoft__sub_8025DA18();
            return;
        }
        TWindowKeyBoardSoft__sub_8025D994();
        return;
    }
    if (temp_r4 & 2) {
        TWindowKeyBoardSoft__sub_8025DA98();
    }
}
int TWindowKeyBoardSoft__vt19(void) { return 0; }
int TWindowKeyBoardSoft__vt0(void) { return 0; }

}
