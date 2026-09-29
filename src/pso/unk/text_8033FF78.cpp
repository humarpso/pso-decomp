#include "types.h"
struct O_80340040 { u8 pad[0x60]; void *o[10]; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
void fn_80340040(O_80340040 *arg0);
}

extern "C" {

void fn_80340040(O_80340040 *arg0) {
    s32 i;
    for (i = 0; i < 10; i++) {
        if (arg0->o[i] != 0) {
            queue_destruction__7TObjectFv(arg0->o[i]);
            arg0->o[i] = 0;
        }
    }
}

}
