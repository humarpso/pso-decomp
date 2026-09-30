#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct S_8003C108 {
    u8 pad0[0x20];
    f32 f20;
    u8 pad24[0xC8 - 0x24];
    u32 ptr[4];
};

struct Rec_8003C108 { s32 a, b, c; };

extern "C" {
void TObjBoss2Tunnel__sub_8003B250(u32, f32);
s32 TAdLoadQuestPrtTxtGC__sub_80086E28(void *, s32, s32);
void enable__13TParticleCtrlFPv(void *);
extern Rec_8003C108 lbl_80483590[];
extern const f32 lbl_805D85B0;
extern const f32 lbl_805D8650;
void TObjBoss2Tunnel__sub_8003C108(S_8003C108 *o);
}

extern "C" {

void TObjBoss2Tunnel__sub_8003B2B0(void);
void *__ct__7TObjectFP7TObject(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_07;
extern void *lbl_805D4BF8;

void TObjBoss2Tunnel__sub_8003B2B0(void) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__7TObjectFP7TObject(o, tl_07);
    }
    lbl_805D4BF8 = o;
}
void TObjBoss2Tunnel__sub_8003C108(S_8003C108 *o) {
    f32 t;
    s32 i;
    u32 r;
    u32 p;
    if (o->f20 < lbl_805D85B0) {
        t = lbl_805D8650 * (o->f20 / lbl_805D85B0);
    } else {
        t = lbl_805D8650;
    }
    for (i = 0; i < 4; i++) {
        p = o->ptr[i];
        if (p == 0) {
            r = TAdLoadQuestPrtTxtGC__sub_80086E28(&lbl_80483590[i], 0x171, 1);
            if (r != 0) {
                enable__13TParticleCtrlFPv((void *)r);
                o->ptr[i] = r;
            }
        } else {
            TObjBoss2Tunnel__sub_8003B250(p, t);
        }
    }
}

}
