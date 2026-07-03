#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowChat__ct(void *arg0, void *arg1, void *arg2);
void *TWindowKeyBoardBase__ct(void *);
void *TWindowKeyBoardHard__ct(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void fn_8024792C(void *);
void fn_8025CD44(void *, int, int);

extern M2C_UNK __vt__11TWindowChat[];
extern void *lbl_805D38A0;

void *TWindowChat__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TWindowChat;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D38A0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    M2C_FIELD(arg0, u16 *, 0x1E) = 2;
    o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TWindowKeyBoardBase__ct(o);
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
    fn_8025CD44(M2C_FIELD(arg0, void **, 0x20), 200, 2);
    o2 = __nw__7TObjectFUl(0x74);
    if (o2 != NULL) {
        o2 = TWindowKeyBoardHard__ct(o2, M2C_FIELD(arg0, void **, 0x20));
    }
    M2C_FIELD(arg0, void **, 0x28) = o2;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, void **, 0x38) = arg2;
    fn_8024792C(arg0);
    return arg0;
}

}
