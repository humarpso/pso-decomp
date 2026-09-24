#include "pso/TBoss2Fin.h"

TBoss2Fin::~TBoss2Fin() {}

#include "types.h"

struct E_800367C4 { s8 type; f32 a; f32 b; f32 c; s32 d; s32 e; };

struct In_800367C4 { u8 pad[0x8]; s32 f8; u8 pad2[0xC]; s32 f18; };

struct G_800367C4 { u8 pad[0x42c]; In_800367C4 *in; };

extern "C" {
extern E_800367C4 lbl_804FE590[];
extern G_800367C4 *lbl_805D4BA4;
extern const f32 TBoss2Fin__data_805D8450;
extern const f32 lbl_805D8460;
void TBoss2Fin__sub_800367C4(void);
}

extern "C" {

void TBoss2Fin__sub_800367C0(void);

void TBoss2Fin__sub_800367C0(void) {  }
void TBoss2Fin__sub_800367C4(void) {
    E_800367C4 *p = lbl_804FE590;
    s32 i;
    for (i = 0; i < 2; i++) {
        p->type = 6;
        p->a = TBoss2Fin__data_805D8450;
        p->b = TBoss2Fin__data_805D8450;
        p->c = lbl_805D8460;
        p->d = lbl_805D4BA4->in->f18;
        p->e = lbl_805D4BA4->in->f8;
        p++;
    }
    p->type = -1;
}

}
