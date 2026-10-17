#include "types.h"
#include "pso/misc/TCameraCtrl_80067FC0.h"
#include "pso/misc/TCameraCtrl_8006C580.h"

extern "C" {

void __dl__7TObjectFPv(void *);

extern s32 lbl_80488B68[];

void *__dt__13TUnk_80488B68Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_80488B68;
        __dt__13TUnk_80488A28Fv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
