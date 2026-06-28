#include "types.h"

extern "C" {

s32 fn_8007FA24(s32);
s32 fn_80145A94();
s32 fn_8014797C();
void fn_803354A4(void);
int fn_803354E8(void* p);
int fn_8022743C(void*);

void fn_803354A4(void) {  }
void fn_803354A8(void) {
    if (fn_80145A94() != 0) {
        fn_8014797C();
        fn_8007FA24(0);
        return;
    }
    fn_8007FA24(1);
}
int fn_803354E8(void* p) { return fn_8022743C(p); }

}
