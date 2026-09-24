#include "types.h"
extern "C" {
s32 fn_803DB0AC(void *p);
void fn_803DB1B4(void *p);
void fn_803DA12C(void *p);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
void fn_803DA12C(void *p) {
    switch (fn_803DB0AC(p)) {
    case 0:
        fn_803DB1B4(p);
        break;
    }
}
#pragma pop

}
