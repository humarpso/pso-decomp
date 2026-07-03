#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdYesNoBaseGC__ct(void *arg0);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void *__ct__9TAdBackGCFv(void *, void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK lbl_804EDB10[];
extern const f32 lbl_805DF790;
extern const f32 lbl_805DF794;
extern void *lbl_805D41F8;
extern const f32 lbl_805DF798;
extern const f32 lbl_805DF79C;

void *TAdYesNoBaseGC__ct(void *arg0) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDB10;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D41F8;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DF790;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DF794;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DF798;
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805DF79C;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 1;
    M2C_FIELD(arg0, u32 *, 0x40) = 0;
    M2C_FIELD(arg0, u32 *, 0x44) = 0;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        __ct__9TAdBackGCFv(o, arg0);
    }
    o2 = __nw__7TObjectFUl(0x28);
    if (o2 != NULL) {
        __ct__12TAdBackTxtGCFv(o2, arg0);
    }
    return arg0;
}

}
