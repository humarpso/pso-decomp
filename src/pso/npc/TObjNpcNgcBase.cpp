#include "types.h"

extern "C" {

void *__dt__14TObjNpcNgcBaseFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_npc_lappy_base__12TObjNpcLappyFs(void *, int);

extern s32 __vt__14TObjNpcNgcBase[];

void *__dt__14TObjNpcNgcBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TObjNpcNgcBase;
        destroy_npc_lappy_base__12TObjNpcLappyFs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
