#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern "C" {
void set_present_interval(void *, void *);
void init_locked_cache_heap(void *);
extern void *lbl_805D7734;
void VIConfigure(void *);
void fn_803DD0D8(void);
void fn_803DD294(void);
void fn_803DCDB0(void *arg0);
}

extern "C" {

void fn_803DCDB0(void *arg0) {
    set_present_interval(M2C_FIELD(arg0, void **, 0x0), M2C_FIELD(arg0, void **, 0x4));
    init_locked_cache_heap(arg0);
    VIConfigure(lbl_805D7734);
    fn_803DD0D8();
    fn_803DD294();
}

}
