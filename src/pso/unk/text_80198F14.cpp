#include "types.h"
struct Cfg_80198F14 { f32 f0; f32 f4; f32 f8; s32 fC; u8 pad10[2]; s16 f12; u8 pad14[4]; s8 f18; };

struct Pair_80198F14 { s32 a; s32 b; };

extern "C" {
void *load_resource_from_descriptor(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 load_gvm_texture_file(char *);
extern char lbl_80446088[];
extern char lbl_80446098[];
extern char lbl_804460A8[];
extern char lbl_804460B8[];
extern char lbl_804460C8[];
extern char lbl_804460E0[];
extern char lbl_804460FC[];
extern char lbl_8044610C[];
extern char lbl_80446124[];
extern u8 lbl_804B8D70[];
extern s32 lbl_804B8DAC[];
extern Pair_80198F14 lbl_8050DD50[];
extern Cfg_80198F14 lbl_8050DDAC;
extern void *lbl_805D5C60;
extern const f32 lbl_805DBF54;
extern const f32 lbl_805DBF58;
void TLanguage__sub_80198F14(void);
}

extern "C" {

void TLanguage__sub_80198F14(void) {
    Pair_80198F14 *p = lbl_8050DD50;
    Cfg_80198F14 *c = &lbl_8050DDAC;
    void *obj;
    c->f12 = 1;
    c->f0 = lbl_805DBF54;
    c->f4 = lbl_805DBF58;
    c->f8 = lbl_805DBF54;
    c->fC = 0;
    c->f18 = 0;
    p->a = 0;
    p->b = 0;
    obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (obj != 0) {
        obj = load_resource_from_descriptor(obj, 5, lbl_804B8D70, 0, 0, 0);
    }
    lbl_805D5C60 = obj;
    lbl_804B8DAC[0] = load_gvm_texture_file(lbl_80446088);
    lbl_804B8DAC[1] = load_gvm_texture_file(lbl_80446098);
    lbl_804B8DAC[2] = load_gvm_texture_file(lbl_804460A8);
    lbl_804B8DAC[3] = load_gvm_texture_file(lbl_804460B8);
    lbl_804B8DAC[4] = load_gvm_texture_file(lbl_804460C8);
    lbl_804B8DAC[5] = load_gvm_texture_file(lbl_804460E0);
    lbl_804B8DAC[6] = load_gvm_texture_file(lbl_804460FC);
    lbl_804B8DAC[7] = load_gvm_texture_file(lbl_8044610C);
    lbl_804B8DAC[8] = load_gvm_texture_file(lbl_80446124);
}

}
