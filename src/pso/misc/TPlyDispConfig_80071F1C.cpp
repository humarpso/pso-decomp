#include "types.h"

extern "C" {

void *__ct__14TPlyDispConfigFv(void *arg0);
s32 free_if_valid__14TPlyDispConfigFis(s32 arg0, s16 arg1);
void __dl__FPv(void);
void fn_80071F90(void *);

s32 free_if_valid__14TPlyDispConfigFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

void *__ct__14TPlyDispConfigFv(void *arg0) {
    fn_80071F90(arg0);
    fn_80071F90((void *)((char *)arg0 + 36));
    return arg0;
}

}
