#include "pso/TMapCsnCtrl.h"
#include "pso/misc/TMapCsnCtrl.h"

#include "types.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);

void TMapCsnCtrl::sub_80140F44() {
    *(s32 *)((s8 *)this + 0x1C) = 0;
}

extern s32 __vt__11TMapCsnCtrl[];
extern void *TMapCsnCtrl__class_name;

TMapCsnCtrl::~TMapCsnCtrl() {}
void *TMapCsnCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TMapCsnCtrl;
    *(void * *)&((TMapCsnCtrl *)arg0)->m_name = TMapCsnCtrl__class_name;
    ((TMapCsnCtrl *)arg0)->sub_80140F44();
    return arg0;
}

}
