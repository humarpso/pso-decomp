#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdDialingMessageWindow__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *, void *);
void *__nw__7TObjectFUl(int);
void *TAdDialingMessageWindow__sub_8036A128(void *, void *, void *, void *);

extern void *tl_fadeafter;
extern M2C_UNK __vt__23TAdDialingMessageWindow[];
extern void *lbl_805D44C8;
extern void *tl_camera;

void *TAdDialingMessageWindow__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    void *o2;
    __ct__7TObjectFP7TObject(arg0, tl_fadeafter);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TAdDialingMessageWindow;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D44C8;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg1;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = TAdDialingMessageWindow__sub_8036A128(o, tl_camera, arg0, arg2);
    }
    M2C_FIELD(arg0, void **, 0x24) = o;
    o2 = __nw__7TObjectFUl(0x1C);
    if (o2 != NULL) {
        o2 = ((void * (*)(void *, int))__ct__7TObjectFP7TObject)(o2, 0);
    }
    M2C_FIELD(arg0, void **, 0x28) = o2;
    return arg0;
}

}
