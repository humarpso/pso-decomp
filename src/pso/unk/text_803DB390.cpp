#include "types.h"
struct S_803DB390 { void *a; void *b; s32 c; };

extern "C" {
extern S_803DB390 lbl_8058CD70;
void fn_803DB3C4(void *p);
void fn_803DB390(void);
typedef f32 Mtx_803DB3C4[3][4];
void GXSetCurrentMtx(u32);
void GXLoadTexMtxImm(Mtx_803DB3C4 *, u32, s32);
extern Mtx_803DB3C4 lbl_8058CB68[];
extern u32 some_id_805c6f74;
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

#pragma push
#pragma use_lmw_stmw off
void fn_803DB3C4(void *p) {
    u32 i;

    for (i = 0; i < (u32)p; i++) {
        GXSetCurrentMtx(i * 3);
        if (some_id_805c6f74 & 0x100000) {
            GXLoadTexMtxImm(&lbl_8058CB68[i], 0x2A, 0);
        }
        ((void (*)(s32))lbl_8058CD70.c)(((s32 *)lbl_8058CD70.a)[i]);
    }
    GXSetCurrentMtx(0);
}
typedef int dummy_803DB3C4_pop;
#pragma pop

}
