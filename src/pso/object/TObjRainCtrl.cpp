#include "pso/TObjRainCtrl.h"

void TObjRainCtrl::run_task() {}

TObjRainCtrl::~TObjRainCtrl() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK __ct__8TObjRainFv(void *, void *, int);
s32 get_global_state__14TOKeyMachine01Fv();
u32 __nw__7TObjectFUl(int);
extern s32 tl_particle;
void run_task__12TObjRainCtrlFv(u8 *arg0);
}

extern "C" {

void *TObjRainCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__12TObjRainCtrl[];
extern void *lbl_805D3428;

#pragma push
#pragma fp_contract on
void run_task__12TObjRainCtrlFv(u8 *arg0) {
    s32 temp_r0;
    void *p;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) - 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
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
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}
#pragma pop

void *TObjRainCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjRainCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3428;
    M2C_FIELD(arg0, u32 *, 0x1C) = 2;
    return arg0;
}

}
