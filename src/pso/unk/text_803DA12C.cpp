#include "types.h"
extern "C" {
s32 init_ginja_texture_header(void *p);
void fn_803DB1B4(void *p);
void fn_803DA12C(void *p);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
void fn_803DA12C(void *p) {
    switch (init_ginja_texture_header(p)) {
    case 0:
        fn_803DB1B4(p);
        break;
    }
}
#pragma pop

}
