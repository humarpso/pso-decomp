#include "types.h"
struct O_801BC050 { u16 a; u16 pad; s32 b; };

extern "C" {
void TObjPlayer__sub_801BC050(O_801BC050 *p);
}

extern "C" {

void TObjPlayer__sub_801BC050(O_801BC050 *p) {
    p->a = 0xFFFF;
    p->b = 0;
}

}
