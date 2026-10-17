#include "types.h"
#include "pso/object/TObjQuestColA_80196FE4.h"
#include "pso/object/TObjQuestColBase_80196BFC.h"

extern "C" {

void __dl__7TObjectFPv(void *);

extern s32 __vt__13TObjQuestColA[];

void *__dt__13TObjQuestColAFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjQuestColA;
        __dt__16TObjQuestColBaseFv((u8 *)arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
