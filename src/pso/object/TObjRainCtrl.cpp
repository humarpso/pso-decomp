#include "pso/TObjRainCtrl.h"

#include "types.h"

extern "C" {
s32 __ct__8TObjRainFv(void *, void *, int);
s32 get_global_state__14TOKeyMachine01Fv();
u32 __nw__7TObjectFUl(int);
extern s32 tl_particle;
void run_task__12TObjRainCtrlFv(u8 *arg0);
}

extern "C" {

void *TObjRainCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__12TObjRainCtrl[];
extern void *lbl_805D3428;

#pragma push
#pragma fp_contract on
void run_task__12TObjRainCtrlFv(u8 *arg0) {
    s32 temp_r0;
    void *p;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1C) - 1;
    *(s32 *)((s8 *)arg0 + 0x1C) = temp_r0;
    if (temp_r0 < 0) {
        if (get_global_state__14TOKeyMachine01Fv() == 0x1E) {
            p = (void *) __nw__7TObjectFUl((int) (0x220));
            if (p != NULL) {
                __ct__8TObjRainFv(p, (void *) (tl_particle), (int) (0x24));
            }
        } else {
            p = (void *) __nw__7TObjectFUl((int) (0x220));
            if (p != NULL) {
                __ct__8TObjRainFv(p, (void *) (tl_particle), (int) (9));
            }
        }
        *(s32 *)((s8 *)arg0 + 0x1C) = 2;
    }
}
#pragma pop

TObjRainCtrl::~TObjRainCtrl() {}
void *TObjRainCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjRainCtrl;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D3428;
    *(u32 *)((s8 *)arg0 + 0x1C) = 2;
    return arg0;
}

}
