#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubAreaMap__ct(void *arg0, void *arg1, void *arg2);
void *__dt__17TWindowSubAreaMapFv(void *arg0, s16 arg1);
void render__17TWindowSubAreaMapFv(void);
void *TWindowSubAreaMapDisp__ct(void *);
void TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);

void render__17TWindowSubAreaMapFv(void) {  }

extern M2C_UNK __vt__17TWindowSubAreaMap[];

void *__dt__17TWindowSubAreaMapFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowSubAreaMap;
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__17TWindowSubAreaMap[];
extern void *lbl_805D3A00;

void *TWindowSubAreaMap__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowSubAreaMap;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3A00;
    M2C_FIELD(arg0, void **, 0x20) = arg1;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    o = __nw__7TObjectFUl(0x78);
    if (o != NULL) {
        o = TWindowSubAreaMapDisp__ct(o);
    }
    M2C_FIELD(arg0, void **, 0x24) = o;
    return arg0;
}

}
