#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_tasks__16TKeyBoardControlFv(void);
int TKeyBoardControl__sub_8000F7DC(void* p);
int TFogCtrl__sub_800FAD08(void*);
M2C_UNK fn_80083FB0();
M2C_UNK fn_80226FA0();
M2C_UNK fn_80228074();
M2C_UNK run_tasks__7TObjectFv(M2C_UNK *);

extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;

void run_tasks__16TKeyBoardControlFv(void) {
    fn_80083FB0();
    fn_80228074();
    if ((s32) lbl_805D62B0 != 0) {
        fn_80226FA0();
    }
    run_tasks__7TObjectFv(lbl_80515F70);
}

int TKeyBoardControl__sub_8000F7DC(void* p) { return TFogCtrl__sub_800FAD08(p); }

}
