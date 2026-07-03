#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdDrawLineCtrl__ct(void *arg0, void *arg1, void *arg2, f32 farg0);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void fn_80019AB0(void *, f32);
void fn_80019B08(void *, int);

extern M2C_UNK __vt__15TAdDrawLineCtrl[];
extern void *lbl_805D260C;

void *TAdDrawLineCtrl__ct(void *arg0, void *arg1, void *arg2, f32 farg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TAdDrawLineCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D260C;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = ((void * (*)(void *, int))__ct__7TObjectFP7TObject)(o, 0);
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
    M2C_FIELD(arg0, u32 *, 0x28) = 1;
    fn_80019AB0(arg0, farg0);
    fn_80019B08(arg0, -1);
    return arg0;
}

}
