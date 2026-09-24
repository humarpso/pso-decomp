#include "types.h"
struct S_803DB390 { void *a; void *b; s32 c; };

extern "C" {
extern S_803DB390 lbl_8058CD70;
void fn_803DB3C4(void *p);
void fn_803DB390(void);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
void fn_803DB390(void) {
    if (lbl_8058CD70.b) {
        fn_803DB3C4(lbl_8058CD70.b);
    }
}
#pragma pop

}
