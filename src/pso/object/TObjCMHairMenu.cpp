#include "pso/TObjCMHairMenu.h"

TObjCMHairMenu::~TObjCMHairMenu() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Ent_802964B0 {
    u8 pad0[8];
    s16 f8;
    u8 pad[0x2C - 0xA];
};

struct Hair_802964B0 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s32 f1c;
    s32 f20;
    s32 f24;
    s32 f28;
    u8 pad2c[4];
    s32 f30;
    f32 f34;
    s32 a38[3];
};

extern "C" {
void *__ct__7TObjectFP7TObject(void *, void *);
s32 get_display_index__12TCharaMakingFPv(s32);
void set_eff_tag__11TChCrEffTagFi(s32);
extern Ent_802964B0 lbl_804D8E20[];
extern u8 __vt__14TObjCMHairMenu[];
extern s32 lbl_805D3CE0;
extern s32 lbl_805D6520;
extern const f32 lbl_805DDA90;
Hair_802964B0 *__ct__14TObjCMHairMenuFv(Hair_802964B0 *arg0, void *arg1);
}

extern "C" {

void *create__14TObjCMHairMenuFPv(void *arg0);
void *__nw__7TObjectFUl(int);

void *create__14TObjCMHairMenuFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = __ct__14TObjCMHairMenuFv((Hair_802964B0 *)(o), (void *)(arg0));
    }
    return o;
}
Hair_802964B0 *__ct__14TObjCMHairMenuFv(Hair_802964B0 *arg0, void *arg1) {
    s32 i;
    __ct__7TObjectFP7TObject(arg0, arg1);
    arg0->vt = __vt__14TObjCMHairMenu;
    arg0->f0 = lbl_805D3CE0;
    arg0->f1c = lbl_805D6520;
    arg0->f20 = 0;
    arg0->f24 = 0;
    arg0->f28 = lbl_804D8E20[get_display_index__12TCharaMakingFPv(arg0->f1c)].f8;
    arg0->f30 = 1;
    arg0->f34 = lbl_805DDA90;
    for (i = 0; i < 3; i++) {
        arg0->a38[i] = 0;
    }
    set_eff_tag__11TChCrEffTagFi(5);
    return arg0;
}

}
