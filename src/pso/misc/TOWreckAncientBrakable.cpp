#include "types.h"
#include "pso/misc/TOWreckAncientBrakable.h"

extern "C" {

void *TOWreckAncientBrakable__ct(void *arg0);
void *__dt__22TOWreckAncientBrakableFv(void *arg0, s16 arg1);
void TOWreckAncient__ct(void *);
void __dl__7TObjectFPv(void *);
void __dt__14TOWreckAncientFv(void *, int);

extern s32 __vt__22TOWreckAncientBrakable[];

void *__dt__22TOWreckAncientBrakableFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TOWreckAncientBrakable;
        __dt__14TOWreckAncientFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *TOWreckAncientBrakable__name;

void *TOWreckAncientBrakable__ct(void *arg0) {
    TOWreckAncient__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TOWreckAncientBrakable;
    *(void * *)&((TOWreckAncientBrakable *)arg0)->m_name = TOWreckAncientBrakable__name;
    ((TOWreckAncientBrakable *)arg0)->m_b4 = 0;
    ((TOWreckAncientBrakable *)arg0)->m_b8 = -1;
    return arg0;
}

extern char lbl_80443528[];
void *TOWreckAncientBrakable__name = lbl_80443528;
}
