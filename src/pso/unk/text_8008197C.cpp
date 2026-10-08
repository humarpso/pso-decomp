#include "types.h"
struct Ent_8008197C { s32 a; s32 b; s32 c; };

struct Q_8008197C { Ent_8008197C *arr; };

struct R_8008197C { u8 pad[0x14]; Q_8008197C *q; };

struct O_8008197C { u8 pad0[0x18]; void *f18; s32 f1c; s32 f20; u8 pad24[8]; s32 f2c; s32 f30; s32 f34; };

extern "C" {
void __dt__7TObjectFv(void *, int);
void __dl__7TObjectFPv(void *);
R_8008197C *TScene__sub_80081B24(void);
void destroy_and_free__23TAdSinglePlyChrSelectGCFPvs(s32, s16);
extern u8 lbl_8048E168[];
O_8008197C *texture_wave_destroy(O_8008197C *arg0, s16 arg1);
}

extern "C" {

O_8008197C *texture_wave_destroy(O_8008197C *arg0, s16 arg1) {
    Q_8008197C *q;
    if (arg0 != NULL) {
        arg0->f18 = lbl_8048E168;
        q = TScene__sub_80081B24()->q;
        q->arr[arg0->f20].c = arg0->f34;
        q->arr[arg0->f20].b = arg0->f30;
        q->arr[arg0->f20].a = arg0->f2c;
        destroy_and_free__23TAdSinglePlyChrSelectGCFPvs(arg0->f1c, 1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
