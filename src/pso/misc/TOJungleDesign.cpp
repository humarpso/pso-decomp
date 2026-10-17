#include "types.h"

extern "C" {

void *TOJungleDesign__create(void *arg0);
u8 *TOJungleDesign__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TOJungleDesign__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TOJungleDesign__ct((u8 *)o, (s32)tl_05, (s32)arg0);
    }
    return o;
}

}
