#include "types.h"

extern "C" {

s32 fn_801FBA20();
s32 TOKeyMachine01__sub_802034A8();
int fn_80207E24(void* p);
void fn_80207E44(void);
int fn_80207E48(void* p);
int fn_80207E68(void* p);
int fn_802077CC(void*);
int fn_8020780C(void*);
int fn_802078A4(void*);

s32 fn_80207DD4(void) {
    s32 temp_r3;

    if (TOKeyMachine01__sub_802034A8() != 0xF) {
        return 0;
    }
    temp_r3 = fn_801FBA20();
    if ((temp_r3 >= 0xD) && (temp_r3 < 0xF)) {
        return 1;
    }
    return 0;
}
int fn_80207E24(void* p) { return fn_8020780C(p); }
void fn_80207E44(void) {  }
int fn_80207E48(void* p) { return fn_802078A4(p); }
int fn_80207E68(void* p) { return fn_802077CC(p); }

}
