#include "types.h"
#include "pso/misc/TWindowOptionCtrl_8026C52C.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {

void *__ct__15TAdPlayerLoadGCFv(void *, void *, int);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern s32 __vt__17TWindowOptionCtrl[];
extern void *lbl_805D39A8;

void *TWindowOptionCtrl__ct(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowOptionCtrl;
    *(void * *)&((TWindowOptionCtrl *)arg0)->m_name = lbl_805D39A8;
    ((TWindowOptionCtrl *)arg0)->m_28 = 0;
    ((TWindowOptionCtrl *)arg0)->m_2c = 0;
    ((TWindowOptionCtrl *)arg0)->m_30 = 0;
    ((TWindowOptionCtrl *)arg0)->m_34 = 0;
    ((TWindowOptionCtrl *)arg0)->m_38 = 0;
    ((TWindowOptionCtrl *)arg0)->m_3c = 0;
    ((TWindowOptionCtrl *)arg0)->m_40 = 0;
    ((TWindowOptionCtrl *)arg0)->m_44 = 0;
    ((TWindowOptionCtrl *)arg0)->m_48 = 0;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = __ct__15TAdPlayerLoadGCFv(o, arg0, 2);
    }
    *(void **)((s8 *)arg0 + 0x4C) = o;
    ((TWindowOptionCtrl *)arg0)->init_selection_indices();
    ((TWindowOptionCtrl *)arg0)->m_24 = 4;
    ((TWindowOptionCtrl *)arg0)->m_1d = 0;
    *(u8 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}
