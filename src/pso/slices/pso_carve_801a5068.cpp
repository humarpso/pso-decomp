#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *tl_00;
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804C2298[];
void *__nw__7TObjectFUl(int);
void *__ct__9TAdBackGCFv(void *, void *);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void *__ct__10TAdTitleGCFv(void *, void *, int);
void TKeyBoardControl__sub_8000F90C(int);
void *TWindowOptionCtrl__ct(void *, void *);

void *fn_801A5068(void *arg0) {
    void *o;
    void *o2;
    void *o3;
    void *o4;
    __ct__7TObjectFP7TObject(arg0, tl_00);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C2298;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        __ct__9TAdBackGCFv(o, arg0);
    }
    o2 = __nw__7TObjectFUl(0x28);
    if (o2 != NULL) {
        __ct__12TAdBackTxtGCFv(o2, arg0);
    }
    o3 = __nw__7TObjectFUl(0x138);
    if (o3 != NULL) {
        __ct__10TAdTitleGCFv(o3, arg0, 3);
    }
    TKeyBoardControl__sub_8000F90C(9);
    M2C_FIELD(arg0, u32 *, 0x20) = 4;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    M2C_FIELD(arg0, u16 *, 0x1E) = 0;
    o4 = __nw__7TObjectFUl(0x50);
    if (o4 != NULL) {
        o4 = TWindowOptionCtrl__ct(o4, arg0);
    }
    M2C_FIELD(arg0, void **, 0x24) = o4;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    return arg0;
}

}
